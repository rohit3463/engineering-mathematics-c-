#include<iostream>
#include<cmath>

using namespace std;

float func(float t)
{
	float x,p;
	x=t;

	p=(x*exp(x))-cos(x); // mathematical function to evaluate

	return p;
}

float dfunc(float t)
{
	float x,p;
	x=t;

	p=(exp(x)*(1+x)+sin(x)); //derivative of the fuction

	return p;
}

int main()
{
	float h,x1,x0,ae,temp;

	int i = 1;

	cout<<"Enter the initial value of x :"; // any intial guess

	cin>>x0;

	cout<<"Enter the allowed error:"; // allowed error

	cin>>ae;


	do
	{
		h = func(x0)/dfunc(x0);

		x1 = x0 - h;

		cout<<"ITERATION NO.-"<<i<<":"<<x1<<endl;

		i++;

		temp = x0;

		x0 = x1;
	}while(fabs(temp-x0)>ae);

	cout<<"THE FINAL ROOT OF THE EQUATION IS :"<<x0; //result

	return 0;
}