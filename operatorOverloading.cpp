#include<iostream>
using namespace std;
class complex{
	private:
	int real;
	int imaginary;
	public:
		complex(){
			real=0;
			imaginary=0;
		}
		complex(int r,int i){
			real=r;
			imaginary=i;
		}
		void display(){
			cout<<real<<"+"<<imaginary<<"i";
		}
		
		complex operator +(complex c){
			complex temp;
			temp.real=real+c.real;
			temp.imaginary=imaginary+c.imaginary;
			return temp;
		}	
};
int main(){
	complex c1(1,2);
	complex c2(2,6);
	complex c3;
	c3=c1 + c2;
	c3.display();
	
	
}
