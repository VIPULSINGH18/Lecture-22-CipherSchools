

// Using pointers to perform arithmetic operations...



#include<iostream>
using namespace std;
int main(){
	int a =10;
	int b = 30;
	int sum;
	int division; 
	int *p; 
	int *q;
	p= &a;
	q= &b; 
	sum= *p + *q;
	division= *q / *p;
	cout<<"Address of a: "<< p <<" Value of a: "<<* p<<endl;
	cout<<"Address of b: "<< &b <<" Value of b: "<<* q<<endl;
	cout<<"Sum of a and b : "<<sum<<endl;
	cout<<"Division a and b : "<<division<<endl;
	return 0;
	
	
	
}



