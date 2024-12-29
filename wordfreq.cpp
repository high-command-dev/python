#include<iostream>
using namespace std;

int main(){
	string s="Developed a Minecraft server plugin to entertain kids during free time for a previous job";
	int count=0;
	for(int i=0;i<s.size();i++){
		if(s[i]==' '||s[i]=='\n'){
			count++;
		}else{
			continue;
		}
		
	}
	cout<<count+1<<endl;
}
