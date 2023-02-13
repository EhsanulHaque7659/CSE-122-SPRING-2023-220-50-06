#include<iostream>
using namespace std;
int main()
{

    int x=0;
    int t;
    cin>>t;
    string s;
    while(t)
    {
        cin>>s;
        if(s=="++x" || s=="x++")
        {
            x++;
        }
        else
        {
            x--;
        }
        t--;
    }
    cout<<x;
    return 0;
}
