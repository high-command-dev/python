#include <iostream>
#include<string>
using namespace std;

bool is_palindrome( string &s,int start , int end)
{
    while(start <= end)
    {
        if(s[start] != s[end])
        {
            return false;
        }
        start ++;
        end --;
    }
    return true;
}

void replace_palindrome(string &str)
{
    int n = str.size();
    bool mark[n] = {false};
    
    for(int i=0;i<n;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if(is_palindrome(str,i,j))
            {
                for(int k = i;k<=j;k++)
                {
                    mark[k] = true;
                }
            }
        }
    }

    for(int i = 0;i<n;i++)
    {
        if(mark[i])
        {
            str[i] = '*';
        }
    }
}
int main()
{
    string s;
    cout << "Entre The String : ";
    getline(cin,s);

    replace_palindrome(s);
    cout<<"Modified String : "<<s<<endl;
}