#include<iostream>
#include<cmath>

using namespace std;



float func(float t)
{
	float x,p;
	x = t;

	p = (x*exp(x))-cos(x); //mathematical function

	return p; 
}

int main()
{
	float a,b,x1,ae;

	int i = 1;

	cout<<"Enter the value of a :"; //value where function is gives a positive value

	cin>>a;

	cout<<"Enter the value of b :"; //value where function gives negative value

	cin>>b;

	cout<<"Enter the allowed error :"; // allowed error in root

	cin>>ae;

	while(fabs(a-b)>ae)
	{

		x1 = (a+b)/2;

		cout<<"ITERATION NO.-"<<i<<":"<<x1<<endl;

		i++;

		if(func(a)*func(x1)<0)
		{
			b = x1;
		}
		else
		{
			a = x1;
		}
	}

	cout<<"The final root of the equation is:"<<a; //result

	return 0;
}