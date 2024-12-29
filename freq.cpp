#include<iostream>
using namespace std;
int main(){
	int arr[122]={0};
	char s[]="hello";
	
	for(int i=65;s[i]='\0';i++){
		arr[s[i]]++;
	}
	
	for(int i=65;i<=122;i++){
		cout<<char(i)<<" ";
	}
}
