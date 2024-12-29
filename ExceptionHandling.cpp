#include<iostream>
#include<exception>
using namespace std;
int main(){
	int num,den,result;
	cin>>num>>den;
	try{
		if(den==0){
			throw "Exception: division by zero is not allowed!!";
		}
		result=num/den;
		cout<<"The division is:"<<result;
	}
	catch(const char *ex){
		cout<<ex<<endl;
		
	}
	
	
	return 0;
	
} 
