#include<iostream>
using namespace std;
int main()
{
    int matrix[5][5];
    int sum=0,m=0,n=0,count=0,k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>matrix[i][j];
            sum=sum+matrix[i][j];
            if (sum==1)
            {
                k++;
                if(k==1)
                {
                    m=i;n=j;
                }
            }
        }
    }
    while(n!=2)
    {
        count++;
        if(n>=3)
        {
            n--;
        }
    }
    cout<<count<<endl;
}
