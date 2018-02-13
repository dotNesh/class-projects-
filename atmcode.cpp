
/*This an atm code project*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "mysql_connection.h"

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>



using namespace std;
string username;
class ATM
{
private:
    string passcode;
    string pin;
    char choice;
    string accountnumber;
    string account_number;
    double withdraw;
    double deposit;
    double balance;
public:
    void f_deposit(double);
    void f_withdraw(double);
    void check_balance(double);
    void main_menu(double);
    void service_operation(int,double);
    void operate();
    void password_check(string);
    void obtain_data();
};

void ATM::f_deposit(double balance)
{
    ATM rudi;
 for(;;)
 {
     cout<<"\nHOW MUCH DO YOU WANT TO DEPOSIT?"<<endl;
     cin>>deposit;

        balance=balance+deposit;
        int newBalance=(int)balance;
      try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::PreparedStatement *prep_stmt;

  driver = get_driver_instance();
  con = driver->connect("localhost/bank", "root", "@phynexianbattle6");
  con->setSchema("bank");

  prep_stmt = con->prepareStatement("UPDATE  banklist SET balance=? WHERE accountnumber=?");
  prep_stmt->setInt(1, newBalance);
  prep_stmt->setString(2,accountnumber);
  bool status=prep_stmt->execute();
  if (status==false) {
        cout<<"Successfully deposited "<<deposit<<endl;
        cout<<"New balance is Ksh."<<newBalance<<endl;
  }else{
        cout<<"An error occurred.Try again later"<<endl;

  }
  delete prep_stmt;
  delete con;

} catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();

}
break;
    }

 cout<<"ANOTHER TRANSACTION?(Y/N)"<<endl;
 cin>>choice;
 switch(choice)
 {

 case 'Y':case 'y':
    rudi.main_menu(balance);
    break;
 case 'N': case 'n':
    cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
    exit(0);
 }
}
void ATM::f_withdraw(double balance)
{
ATM rudi;
 for(;;)
 {
     cout<<"\nHOW MUCH DO YOU WANT TO WITHDRAW?"<<endl;
     cin>>withdraw;
     if(withdraw>balance)
     {
         cout<<"INSUFFICIENT BALANCE!"<<endl;
         cout<<"YOU CURRENTLY HAVE "<<balance<<" IN YOUR ACCOUNT"<<endl;
         cout<<"\nDO YOU WANT TO TRY AGAIN?(Y/N)"<<endl;
         cin>>choice;
         switch(choice)
         {
         case 'Y': case'y':
            continue;
         case 'N': case 'n':
            break;
         default:
            break;
         }
     }
     else
    {
        balance=balance-withdraw;
        int newBalance=(int)balance;
      try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::PreparedStatement *prep_stmt;

  driver = get_driver_instance();
  con = driver->connect("localhost/bank", "root", "@phynexianbattle6");
  con->setSchema("bank");

  prep_stmt = con->prepareStatement("UPDATE  banklist SET balance=? WHERE accountnumber=?");
  prep_stmt->setInt(1, newBalance);
  prep_stmt->setString(2,accountnumber);
  bool status=prep_stmt->execute();
  if (status==false) {
        cout<<"Successfully withdrawn "<<withdraw<<endl;
        cout<<"New balance is Ksh."<<newBalance<<endl;
  }else{
        cout<<"An error occurred.Try again later"<<endl;

  }
  delete prep_stmt;
  delete con;

} catch (sql::SQLException &e) {
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();

}
break;
    }
 }
 cout<<"ANOTHER TRANSACTION?(Y/N)"<<endl;
 cin>>choice;
 switch(choice)
 {
 case 'Y':case'y':
    rudi.main_menu(balance);
    break;
 case 'N': case 'n':
    cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
    exit(0);
 }
}
void ATM::check_balance(double balance)
{
ATM rudi;
    cout<<"\n\nYOUR CURRENT ACCOUNT BALANCE IS : "<<balance<<"\n"<<endl;
    cout<<"ANOTHER TRANSACTION?(Y/N)"<<endl;
 cin>>choice;
 switch(choice)
 {
 case 'Y': case 'y':
    rudi.main_menu(balance);
    break;
 case 'N': case'n':
    cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
    exit(0);
 }
}
void ATM::password_check(string pin)
{
      for(int i=0;;i++)
        {
            cout<<"ENTER YOUR PIN CODE PLEASE"<<endl;
          cin>>passcode;

          if(pin==passcode)
          {
             cout<<"ACCESS GRANTED!"<<endl;
             break;
          }
          else
          {
                  if(i>3)
                  {
                    cout<<"YOUR ACCOUT IS TEMPORARILY BLOCKED!"<<endl;
                    cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
                    exit(0);
                  }

                cout<<"WRONG PIN! TRY AGAIN!"<<endl;
                cout<<"\nDO YOU WANT TO TRY AGAIN?(Y/N)"<<endl;
                cin>>choice;
                switch(choice)
                {
               case 'Y': case 'y':
                      continue;
                      break;
               case 'N':case 'n':
          cout<<"WRONG PIN! ACCESS DENIED!\nEXITING..."<<endl;
          cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
            exit(0);
               default:
                cout<<"WRONG ACCOUNT NUMBER OR PIN! ACCESS DENIED!\nEXITING..."<<endl;
                cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
                exit(0);
              }

           }
        }
}
void ATM::main_menu(double balance)
{
    ATM call;
    int select;
    char choice;
    cout<<"[ WELCOME :: "<<username<<"! ]"<<endl;
    cout<<endl;
    cout<<"THE AVAILABLE SERVICES ARE::"<<endl;
    cout<<"[1]: DEPOSIT SERVICE"<<endl;
    cout<<"[2]: WITHDRAW SERVICE"<<endl;
    cout<<"[3]: CHECK BALANCE"<<endl;
    cout<<"[4]: EXIT"<<endl;
    for(;;)
    {
        cout<<"SELECT A SERVICE FROM THE ABOVE TO PROCEED"<<endl;
        cin>>select;
        if((select>=1) && (select<=4))
        {
            call.service_operation(select,balance);
            break;
        }
        else
        {
            cout<<"INVALID SERVICE! TRY A VALID SERVICE PLEASE!"<<endl;
             cout<<"\nDO YOU WANT TO TRY AGAIN?(Y/N)"<<endl;
                cin>>choice;
                switch(choice)
                {
               case 'Y':case'y':
                      continue;
                      break;
               case 'N':case 'n':
          cout<<"SORRY THE SERVICE YOU REQUESTED ISN'T AVAILABLE!\nEXITING..."<<endl;
          cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
            exit(0);
               default:
                cout<<"SORRY THE SERVICE YOU REQUESTED ISN'T AVAILABLE!\nEXITING..."<<endl;
                cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
                exit(0);
        }

    }
    }
}
void ATM:: obtain_data()
{

    for(int i=1;;i++)
    {
     cout<<"ENTR YOUR ACCOUNT NUMBER"<<endl;
     cin>>account_number;
     if(i>10)
                  {
                    cout<<"YOU ONLY HAD 10 CHANCES TO TRY TO INPUT YOUR ACCOUNT NUMBER!"<<endl;
                    cout<<"YOUR ACCOUT IS TEMPORARILY BLOCKED!"<<endl;
                    cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
                    exit(0);
                  }
      else
    {

     try {
  sql::Driver *driver;
  sql::Connection *con;
  sql::ResultSet *res;
  sql::PreparedStatement *prep_stmt;

  driver = get_driver_instance();
  con = driver->connect("localhost/bank", "root", "@phynexianbattle6");
  con->setSchema("bank");

  prep_stmt = con->prepareStatement("SELECT * FROM banklist WHERE accountnumber=?");
  prep_stmt->setString(1, account_number);
  prep_stmt->execute();
  res = prep_stmt->getResultSet();
  if (res->next())
 {

        username=res->getString("username");
        pin=res->getString("pin");
        balance=res->getInt("balance");
        accountnumber=res->getString("accountnumber");
        return;
    break;
  }
  else
  {
         cout<<"YOUR ACCOUNT NUMBER IS NOT VALID!"<<endl;
         cout<<"YOU HAVE "<<(10-i)<<" TRIALS LEFT"<<endl;
         cout<<"\nDO YOU WANT TO TRY AGAIN?(Y/N)"<<endl;
         cin>>choice;
 switch(choice)
 {
 case 'Y': case 'y':
    continue;
    break;
 case 'N': case 'n':
     cout<<"INVALID ACCOUNT NUMBER ! ACCESS DENIED!\nEXITING..."<<endl;
    cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
    exit(0);
 default:
          cout<<"WRONG ACCOUNT NUMBER OR PIN! ACCESS DENIED!\nEXITING..."<<endl;
          cout<<"THANK YOU FOR USING OUR SERVICES\nBYE :)"<<endl;
          exit(0);
 }

  }
  delete prep_stmt;
  delete res;
  delete con;

}
catch (sql::SQLException &e)
{
  cout << "# ERR: SQLException in " << __FILE__;
  cout << "(" << __FUNCTION__ << ") on line " << __LINE__ << endl;
  cout << "# ERR: " << e.what();
  cout << " (MySQL error code: " << e.getErrorCode();
  exit(0);
}
}
}
}
void ATM::service_operation(int selective,double balance)
{
    ATM call;
    int num=selective;
    switch(num)
    {
        case 1:
           call.f_deposit(balance);
        break;
        case 2:
            call.f_withdraw(balance);
        break;
        case 3:
             call.check_balance(balance);
        break;
        case 4:
            cout<<"THANK YOU FOR USING OUR SERVICES\nFOR COMPLAINS AND ADVICE CONTACT US:\nEMAIL::info_customers@services.com\nPHONE:: 254-0733658888\nBYE :)"<<endl;
            exit(0);
        break;

    }
}
void ATM::operate()
{
    ATM execute;
    execute.obtain_data();
    execute.password_check(pin);
    execute.main_menu(balance);

}
int main() 
{
ATM open;
open.operate();
return 0;
}
