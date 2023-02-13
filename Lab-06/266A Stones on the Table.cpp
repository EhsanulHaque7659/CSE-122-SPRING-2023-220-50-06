#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x,y=0;
    cin>>x;
    string s;
    cin>>s;
    for(int i=0; i<x; i++)
    {
        if (s[i]==s[i+1])
        {
            y++;
        }
    }
    cout<<y;
}
