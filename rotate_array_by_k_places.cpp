#include<iostream>
using namespace std;

void rotate_array(int arr[],int start,int end)
{
    while(start <= end)
    {
        // int temp = arr[start];
        // arr[start] = arr[end];
        // arr[end] = temp;
        // start++;
        // end--;
        swap(arr[start],arr[end]);
        start ++;
        end--;
    }
}

int main()
{
    int n;
    cout<<"Entre the size of Array : ";
    cin>>n;
    int arr[n];
    cout<<"Entre The Elements Of Array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    cout<<"Entre the Value Of K :";
    cin>>k;

    rotate_array(arr,0,k-1);
    rotate_array(arr,k,n-1);
    rotate_array(arr,0,n-1);

    cout<<"The Array Is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}