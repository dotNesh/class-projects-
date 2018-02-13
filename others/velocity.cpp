#include<stdio.h>

//this is the declaration of data (global variables)...

//the value of x0 should be greater than x....
class velocitie
{
private:
	int v0,a,x,x0,v1,v2,v3,z1,z2,z3,z4,z5,z6;
   
	
public:
	double f_velocity();
	double f_velocity1();
	double f_velocity2();
	void f_display(); 
};

double velocitie :: f_velocity()
	// function to find velocities...
	


{
	double v,k,l,s;


	printf("Enter v0:\n");
	scanf_s("%d",&v0);
	printf("Enter a:\n");
	scanf_s("%d",&a);
	printf("Enter x:\n");
	scanf_s("%d",&x);
	printf("Enter x0:\n");
	scanf_s("%d",&x0);
	k=v0*v0;
	l=2*a;
	s=(x-x0);
	v=k+(l*s);
	z1=(v+(v/v ))/2;
	while(z2!=z1)
	{
		z2=(z1+(v/z1))/2;
		z1=(z2+(v/z2))/2;
	}
	
	
	return z1;
}


	double velocitie :: f_velocity1()

	{
		printf ("Enter the next set\n\n");
	
	double v,k,l,s;


	printf("Enter v0:\n");
	scanf_s("%d",&v0);
	printf("Enter a:\n");
	scanf_s("%d",&a);
	printf("Enter x:\n");
	scanf_s("%d",&x);
	printf("Enter x0:\n");
	scanf_s("%d",&x0);
	k=v0*v0;
	l=2*a;
	s=(x-x0);
	v=k+(l*s);
	z3=(v+(v/v ))/2;
	while(z4!=z3)
	{
		z4=(z3+(v/z3))/2;
		z3=(z4+(v/z4))/2;
	}
	
	
	return z3;
	
	}

	

	double velocitie :: f_velocity2()
	{

		printf("Enter the next set of values\n\n");
	double v,k,l,s;


	printf("Enter v0:\n");
	scanf_s("%d",&v0);
	printf("Enter a:\n");
	scanf_s("%d",&a);
	printf("Enter x:\n");
	scanf_s("%d",&x);
	printf("Enter x0:\n");
	scanf_s("%d",&x0);
	k=v0*v0;
	l=2*a;
	s=(x-x0);
	v=k+(l*s);
	z5=(v+(v/v ))/2;
	while(z6!=z5)
	{
		z6=(z5+(v/z5))/2;
		z5=(z6+(v/z6))/2;
	}
	
	
	return z5;

	}
	


/*
int velocitie  :: f_pow() // function to find the power
{
	int f=1;
	

	for(int i=0;i<v2;i++)
	{
		f=f*z1;
	}
	return f;
}


int velocitie  :: f_sqrt() //  function to the square root...
{
	y1=z1+z3;
	
	y1=(z1+(v/z1))/2;

	
		while(y2!=y1)
	{
		y2=(y1+(v/y1))/2;
		y1=(y2+(v/y2))/2;
	}
	

	return y1;
} 
*/
// Now you compare according to the instructions given......

/*
int velocitie  :: f_compare()

{

	if(f==z5)
	{
		printf("True");
	}

	else
	{
	printf("\n\nFalse\n\n");
	}
}

int velocitie  ::  f_compare2()
{
	
	if( y1==z5)
	{
		printf("True");
	}

	else
	{
	printf("False\n\n");
	}
}
*/
void velocitie :: f_display()
{

	
	printf("velocity 1 is = %d\n",z1);// this is the first velocity..

	
	printf("velocity 2 is = %d\n",z4);//this is the second velocity...

	
	printf("velocity 3 is = %d\n",z6);// and this is the third velocity....

	//printf("/// \t In comparing the data obtained as instructed////\n\n"); now here we compare the sets of data obtained...

}
int main(void)
{
	velocitie r;

	r.f_velocity();
	r.f_velocity1();
	r.f_velocity2();
	r.f_display();

	
	
}

