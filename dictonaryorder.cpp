#include<iostream>
using namespace std;
int main(){
string s[5]={
  "ankit","ashutosh","anvesha","anmol","aashutosh"};
int n =5;

for(int i=0;i<n;i++){
  for(int j=i+1;j<n;j++){
    if(s[i]>s[j]){
      string temp=s[i];
      s[i]=s[j];
      s[j]=temp;
    }
  }
}
for(int i=0;i<n;i++){
  cout<<s[i]<<" ";
}
}