#include <iostream>

int EEE200,EEE201,EEE202,EEE203,EEE204,avrg;

class grades
{

private:
	     char grade200,grade201,grade202,grade203,grade204;

public:
		 double f_input();
		 char f_grade();
		 double f_sum();
		 double f_average();
		 void f_display();
		 void f_remarks();

};

double grades::f_input()
{

	printf("Enter marks for EEE200\n:");
	scanf("%d",&EEE200);

	printf("Enter marks for EEE201\n:");
	scanf("%d",&EEE201);

	printf("Enter marks for EEE202\n:");
	scanf("%d",&EEE202);

	printf("Enter marks for EEE203\n:");
	scanf("%d",&EEE203);

	printf("Enter marks for EEE204\n:");
	scanf("%d",&EEE204);

	return EEE200,EEE201,EEE202,EEE203,EEE204;
}

char grades::f_grade()
{
	
// Grading for EEE200

  if ((EEE200<=100) && (EEE200>=70))
  {
      grade200='A';
  }

else if((EEE200<70) && (EEE200>=60))
  {
      grade200='B';
  }

else if((EEE200<60) && (EEE200>=50))
  {
      grade200='C';
  }

else if((EEE200<50) && (EEE200>=40))
  {
      grade200='D';
 }

else if((EEE200<40) && (EEE200>=0))
  {
      grade200='E';
 }


// Grading for EEE201

if ((EEE201<=100) && (EEE201>=70))
  {
      grade201='A';
  }

else if((EEE201<70) && (EEE201>=60))
  {
      grade201='B';
  }

else if((EEE201<60) && (EEE201>=50))
  {
      grade201='C';
  }

else if((EEE201<50) && (EEE201>=40))
  {
      grade201='D';
 }

else if((EEE201<40) && (EEE201>=0))
  {
      grade201='E';

// Grading for EEE202

 }if ((EEE202<=100) && (EEE202>=70))
  {
      grade202='A';
  }

else if((EEE202<70) && (EEE202>=60))
  {
      grade202='B';
  }

else if((EEE202<60) && (EEE202>=50))
  {
      grade202='C';
  }

else if((EEE202<50) && (EEE202>=40))
  {
      grade202='D';
 }

else if((EEE202<40) && (EEE202>=0))
  {
      grade202='E';
 }

// Grading for EEE203

if ((EEE203<=100) && (EEE203>=70))
  {
      grade203='A';
  }

else if((EEE203<70) && (EEE203>=60))
  {
      grade203='B';
  }

else if((EEE203<60) && (EEE203>=50))
  {
      grade203='C';
  }

else if((EEE203<50) && (EEE203>=40))
  {
      grade203='D';
 }

else if((EEE203<40) && (EEE203>=0))
  {
      grade203='E';
 }

// Grading for EEE204

if ((EEE204<=100) && (EEE204>=70))
  {
      grade204='A';
  }

else if((EEE204<70) && (EEE204>=60))
  {
      grade204='B';
  }

else if((EEE204<60) && (EEE204>=50))
  {
      grade204='C';
  }

else if((EEE204<50) && (EEE204>=40))
  {
      grade204='D';
 }

else if((EEE204<40) && (EEE204>=0))
  {
      grade204='E';
 }

return grade200,grade201,grade202,grade203,grade204;

 }

double grades ::f_sum()
{
	return
EEE200+EEE201+EEE202+EEE203+EEE204;

}

double grades ::f_average()
{
	grades x;
avrg=(x.f_sum()/5);

return avrg;

}

void grades::f_display()
{
printf("\nEEE200: \t %d \t %c\n",EEE200,grade200);

printf("\nEEE201: \t %d \t %c\n",EEE201,grade201);

printf("\nEEE200: \t %d \t %c\n",EEE202,grade202);

printf("\nEEE200: \t %d \t %c\n",EEE203,grade203);

printf("\nEEE200: \t %d \t %c\n",EEE204,grade204);

printf("\n\nAverage: %d \n",avrg);

}

void grades::f_remarks()
{

 // Remarks for the individual unit Perfomance

	printf("\n\t\t INDIDUAL UNIT PERFORMANCE REMARKS ");

//Remarks for EEE200
	if(grade200=='A')
       printf("\n\nEEE200:  Excellent");

	else if(grade200=='B')
		printf("\n\nEEE200:  Good");

	else if(grade200=='C')
		printf("\n\nEEE200:  Fair");

	else if(grade200=='D')
		printf("\n\nEEE200:  Poor");

	else if(grade200=='E')
		printf("\n\nEEE200:  Retake");

//Remarks for EEE201
	if(grade201=='A')
       printf("\n\nEEE201:  Excellent");

	else if(grade201=='B')
		printf("\n\nEEE201:  Good");

	else if(grade201=='C')
		printf("\n\nEEE201:  Fair");

	else if(grade201=='D')
		printf("\n\nEEE201:  Poor");

	else if(grade201=='E')
		printf("\n\nEEE201:  Retake");

//Remarks for EEE202
	if(grade202=='A')
       printf("\n\nEEE202:  Excellent");

	else if(grade202=='B')
		printf("\n\nEEE202:  Good");

	else if(grade202=='C')
		printf("\n\nEEE202:  Fair");

	else if(grade202=='D')
		printf("\n\nEEE202:  Poor");

	else if(grade202=='E')
		printf("\n\nEEE202:  Retake");


//Remarks for EEE203
	if(grade203=='A')
       printf("\n\nEEE203:  Excellent");

	else if(grade203=='B')
		printf("\n\nEEE203:  Good");

	else if(grade203=='C')
		printf("\n\nEEE203:  Fair");

	else if(grade200=='D')
		printf("\n\nEEE200:  Poor");

	else if(grade203=='E')
		printf("\n\nEEE203:  Retake");


//Remarks for EEE204
	if(grade204=='A')
       printf("\n\nEEE204:  Excellent");

	else if(grade204=='B')
		printf("\n\nEEE204:  Good");

	else if(grade204=='C')
		printf("\n\nEEE204:  Fair");

	else if(grade204=='D')
		printf("\n\nEEE204:  Poor");

	else if(grade204=='E')
		printf("\n\nEEE204:  Retake");


  // Remarks for the Overall Perfomance

    printf("\n\n\t\tOVERALL PERFORMANCE REMARKS");

	if((avrg>=70)&&(avrg<100))
		printf("\n\nPerfomance:Excellent\n");

	else if((avrg>=60)&&(avrg<70))
		printf("\n\nPerfomance:Good\n",f_average());

	else if((avrg>=50)&&(avrg<60))
		printf("\n\nPerfomance:Fair\n");

	else if((avrg>=40)&&(avrg<50))
		printf("\n\nPerfomance:Poor\n");

	else if(avrg<40)
		printf("\n\nPerfomance:Retake\n");

}


int main (void)
{
	grades c;

	c.f_input();
	c.f_grade();
	c.f_sum();
	c.f_average();
	c.f_display();
	c.f_remarks();

}
