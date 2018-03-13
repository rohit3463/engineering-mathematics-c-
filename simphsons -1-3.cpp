#include<iostream>
#include<cmath>

using namespace std;

float func(float x)
{
	float y;

	y = 1/(1+(x*x)); //mathematical function

	return y;
}

int main()
{
	float x0,xn,h,sum=0,sum1=0,sum2=0;

	int n;

	cout<<"ENTER THE UPPER LIMIT :"; //upper limit of integration

	cin>>xn;

	cout<<"ENTER THE LOWER LIMIT :"; //lower limit of integration

	cin>>x0;

	cout<<"ENTER THE NUMBER OF INTERVALS :"; // number of intervals to divide into

	cin>>n;

	h=(xn-x0)/n;

	sum = func(x0)+func(xn);

	for(int i = 1; i<n ; i++)
	{
		if( i%2 == 0)
		{
			sum1 += 2*func(x0 + i*h);
		}
		else
		{
			sum2 += 4*func(x0 + i*h);
		}
	}

	cout<<"THE RESULT IS :"<<((h/3)*(sum + sum1 + sum2)); //result

	return 0;
}