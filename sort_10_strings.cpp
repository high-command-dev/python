#include<iostream>
using namespace std;
int main()
{
    string arr[10];
    string temp;

    cout<<"Entre 10 strings : "<<endl;
    for(int i=0;i<10;i++)
    {
        
        cin>>arr[i];
    }

    for(int i=0;i<10;i++)
    {
        for(int j = i+1 ;j<10;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"Strings In Dictionary Order : "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<endl;
    }
}