#include <iostream>
using namespace std;

void printArrayInReverse(int* arr, int size) {
    for(int i = size -1;i>= 0;i--)
    {
        cout<<"ELEMENT : "<<*(arr +i)<<" , ADDRESS : "<<(arr + i)<<endl;
    }
}
int main()
{
    int size;
    cout<<"ENTRE THE SIZE OF ARRAY  : ";
    cin>>size;

    //dyanamically alocation of meemory 
    int* arr = new int[size];

    cout<<"entre "<<size<<" element : \n";
    for(int i=0;i<size;i++)
    {
        cout<<"Element : "<<i+1<<" : ";
        cin>>arr[i];
    }
     printArrayInReverse(arr,size);

     delete[] arr;
     // free dynamically alocated memory
}