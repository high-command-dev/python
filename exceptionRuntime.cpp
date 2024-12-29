#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
	int a=5,b=0,c;
	try{
		if(b==0){
			throw runtime_error("Division by zero ERROR");
		}
		c=a/b;
	cout<<c<<endl;
	}
	catch(runtime_error &e){
		cout<<"Exception Occured"<<endl;
		cout<<e.what()<<endl;
	}
	return 0;
}
