#include <stdio.h>

class std_dev
{
private:
	int V1,V2,V3,V4,V5;


public:
	   float f_input();
	   float f_pow(float,float);
	   float f_sqrt(float);
	   float f_sum(float,float,float,float,float);
	   float f_average(float);
	   float f_manipulation(float,float,float,float,float);
	   
};

float std_dev :: f_manipulation(float V1,float V2,float V3,float V4, float V5)
{
	float sum_val,mean_val,d1,d2,d3,d4,d5,sd1,sd2,sd3,sd4,sd5,add_sd,variance,standard_dev;
	 
	sum_val = f_sum(V1,V2,V3,V4,V5);
	printf("\nSum: %1.f\n",sum_val);

	mean_val =f_average(sum_val);
	printf("\nMean: %1.f\n",mean_val);

	d1=(mean_val-V1);
	d2=(mean_val-V2);
	d3=(mean_val-V3);
	d4=(mean_val-V4);
	d5=(mean_val-V5);
	

	sd1=f_pow(d1,2);
	sd2=f_pow(d2,2);
	sd3=f_pow(d3,2);
	sd4=f_pow(d4,2);
	sd5=f_pow(d5,2);

	add_sd=f_sum(sd1,sd2,sd3,sd4,sd5);
	
	variance=f_average(add_sd);
	printf("\nVariance: %1.f\n",variance);

	standard_dev=f_sqrt(variance);
	printf("\nStandard deviation: %1.f\n",standard_dev);
	
	return sum_val,mean_val,variance,standard_dev,add_sd;
}

float std_dev :: f_input()
{
printf("Enter five(5) values\n");

		scanf("%d %d %d %d %d",&V1,&V2,&V3,&V4,&V5);

printf("\nYou Entered the following Values\n");

 printf("V1: %d\n",V1);

 printf("V2: %d\n",V2);

 printf("V3: %d\n",V3);

 printf("V4: %d\n",V4);

 printf("V5: %d\n",V5);

return f_manipulation(V1,V2,V3,V4,V5);
}

float std_dev :: f_sum(float a,float b,float c,float d, float e)
{
	float sum;
	sum=a+b+c+d+e;
	return sum;
}

float std_dev:: f_average(float num)
{
float average;
average= num/5;
return average;
}

float std_dev ::f_pow(float base, float power) 
{
	float pawer=1;
	for (int k=0;k<power;k++)
	{
	 pawer=pawer*base;
	
	}

	return pawer;
}

float std_dev :: f_sqrt(float num)
{
  float init;
  int sqrt=1;
  for (int i=0 ;i<10000;i++)
    {
      init=sqrt;
	  sqrt=(sqrt+(num/sqrt))/2;

	  if (init==sqrt)
		 break;  
    }

  return sqrt;
}

int main()
{
	std_dev s;

	s.f_input();
	
	
}
