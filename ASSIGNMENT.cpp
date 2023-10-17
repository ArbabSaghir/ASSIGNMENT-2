#include<iostream>
using namespace std;
int main ()
{
    //Puting value of variable
	int x1;
	cout<<"value of x1 is:";
	cin>>x1;
	int x2;
	cout<<"value of x2 is:";
	cin>>x2;
	int y1;
	cout<<"value of y1 is:";
	cin>>y1;
	int y2;
	cout<<"value of y2 is:";
	cin>>y2;
	// Formula of distance is
	int distance=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	//finding distance by putting values of variables
	cout<<"distance between points is:"<<distance;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	//Defining variables and putting values in centimeters
	float a;
	cout<<"value in centimeters is :";
	cin>>a;
	//defining formula for conversion into meters
	float b=a/100;
	cout<<"value in meters is:"<<b<<endl;
	//Defining formula for conversion into kilometers
	float c=a/100000;
	cout<<"value in kilometers is :"<<c<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	//Defining values of variables
	int d;
	cout<<"Value of variable d is:";
	cin>>d;
	int e;
	cout<<"Value of variable e is:";
	cin>>e;
	//Puting formula for finding square
	int square=(d+e)*(d+e);
	cout<<"Value of square is :"<<square<<endl;
	cout<<" "<<endl;cout<<" "<<endl;cout<<" "<<endl;
	//Puting value of temperature in fahrenheit 
	float fahrenheit;
	cout<<"Temperature in fahrenheit is :";
	cin>>fahrenheit;
	//Defining formula for conversion of temperature from fahrenheit into celsius
	float x=fahrenheit-32;
	float celsius=x*5/9;
	cout<<"Temperature in celsius is :"<<celsius<<endl;
	return 0;
	
}

