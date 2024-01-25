/*
1. WAP to perform all basic arithmetic operations such
like +, -, *, and / operations by implementing method
overloading using total 2 classes.
- use only one method named calculate() in child
class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition
Output:
The Answer of 3 - 1 - 1 is : 1
*/
#include<iostream>
using namespace std;
class Calculation{
	public:
		void Calculate(int a,int b){
			cout<<"The Answer of "<<a<<" / "<<b<<" is : "<<a/b<<endl;
		}
		void Calculate(int a,int b,int c){
			cout<<"The Answer of "<<a<<" - "<<b<<" - "<<c<<" is : "<<a-b-c<<endl;
		}
		void Calculate(int a,int b,int c,int d){
			cout<<"The Answer of "<<a<<" * "<<b<<" * "<<c<<" * "<<d<<" is : "<<a*b*c*d<<endl;
		}
		void Calculate(int a,int b,int c,int d,int e){
			cout<<"The Answer of "<<a<<" + "<<b<<" + "<<c<<" + "<<d<<" + "<<e<<" is : "<<a+b+c+d+e<<endl;
		}
};
int main(){
	Calculation c;
	c.Calculate(3,1,1);
	return 0;
}
