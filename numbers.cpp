#include <iostream>

class NumberOps
{
		private:
			    int val[100];
			    int *num[100];
				int na;
				float avg;

		public:
			   void f_input(); 
			   void f_largest();
			   void f_smallest();
			   void f_ascending();
			   void f_descending();
			   int f_sum();
	           float f_average(float);
			   void f_disp_smallest();
			   void f_disp_largest();
               void f_disp_ascending();
			   void f_disp_descending();
			   void f_disp_input();
			   void f_disp_sum();
			   void f_disp_average();
};

void NumberOps::f_input()
{
	
	printf("How many Values do you want to input?\n");
	  scanf("%d",&na);


	printf("\nEnter the %d inputs:\n",na);
	for(int i=0; i<na; i++)
	{
		 num[i]=&val[i];
		 scanf_s("%d",&*num[i]);
	}

}

void NumberOps::f_disp_input()
{
	printf("\n\nYou Entered the following:\n");

	for(int j=0;j<na;j++)
	{
		 num[j]=&val[j];
	}

	for(int j=0;j<na;j++)
	{
		printf("%d\n",*num[j]);
	}
}

void NumberOps:: f_smallest()
{
int a,b,x;

    for(int j=0;j<na;j++)
	{
		 num[j]=&val[j];
	}

	for(a=0;a<na;a++)
		for(b=a+1;b<na;b++)
		{
			if(*num[a]>*num[b])
			{
				x=*num[b];
			*num[b]=*num[a];
			*num[a]=x;
			}
		}

		for(int a=0;a<1;a++)
    {
      printf("%d\n",*num[a]);
	}

}

void NumberOps:: f_disp_smallest()
{
  printf("\nSmallest:");
  f_smallest();
	 
}

void NumberOps:: f_largest()
{
int a,b,x;

    for(int j=0;j<na;j++)
	{
		 num[j]=&val[j];
	}

	for(a=0;a<na;a++)
		for(b=a+1;b<na;b++)
		{
			if(*num[a]<*num[b])
			{
				x=*num[b];
			*num[b]=*num[a];
			*num[a]=x;
			}
		}

		for(int a=0;a<1;a++)
    {
      printf("\n%d\n",*num[a]);
	}


}

void NumberOps:: f_disp_largest()
{
  printf("\nLargest:");
  f_largest();
	 
}

void NumberOps:: f_ascending()
{
int a,b,x;

   for(int j=0;j<na;j++)
	{
		 num[j]=&val[j];
	}

	for(a=0;a<na;a++)
		for(b=a+1;b<na;b++)
		{
			if(*num[a]>*num[b])
			{
				x=*num[b];
			*num[b]=*num[a];
			*num[a]=x;
			}
		}
	
		for(int a=0;a<na;a++)
    {
      printf("\n%d\t",*num[a]);
	
	}


}

void NumberOps:: f_disp_ascending()
{
  printf("\nAscending Order:");
  f_ascending();
	 
}

void NumberOps:: f_descending()
{
  int a,b,x;

    for(int j=0;j<na;j++)
	{
		 num[j]=&val[j];
	}

	for(a=0;a<na;a++)
		for(b=a+1;b<na;b++)
		{
			if(*num[a]<*num[b])
			{
				x=*num[b];
			*num[b]=*num[a];
			*num[a]=x;
			}
		}

			for(int a=0;a<na;a++)
				{
				  printf("\n%d\t",*num[a]);
				}

		
}

void NumberOps:: f_disp_descending()
{
  printf("\nDescending Order:");
  f_descending();
	 
}

int NumberOps::f_sum()
{
  	int sum=0;
	for(int j=0;j<na;j++)
	{
		 num[j]=&val[j];
	}

	for(int k=0; k<na; k++)
		sum = sum + *num[k];

	
	return sum;

}

void NumberOps::f_disp_sum()
{

  printf("\nSum:%d\n",f_sum());

}

float NumberOps::f_average(float tot)
{
	avg = f_sum()/na;
	
	return avg;
}

void NumberOps::f_disp_average()
{
	printf("\nAverage: %.2f\n", f_average(avg));
}

int main ()
{
	NumberOps p;
	p.f_input();
	p.f_disp_input();
	p.f_disp_smallest();
	p.f_disp_largest();
	p.f_disp_ascending();
	p.f_disp_descending();
	p.f_disp_sum();
	p.f_disp_average();

}
