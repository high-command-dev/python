#include<iostream>
using namespace std;
void rototate(int arr[],int i,int j){
    while(i<j){
      swap(arr[i],arr[j]);
      i++;
      j--;
    }
      
}
int main(){
  int k;
  int arr[10]={1,2,3,4,5,6,7,8,9,10};
  cin>>k;
  int n=10;
  rototate(arr,0,k-1);
  rototate(arr,k,n-1);
  rototate(arr,0,n-1);

  for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
      }
//1 2 3 4 5 
//2 1 3 4 5
//2 1 5 4 3
//3 4 5 1 2
  
}