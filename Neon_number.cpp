/*
     NEON number
*/

#include <iostream>

using namespace std;

int main()
{
    int n,sq,sum=0;
    cout<<"Enter a number to check Neon number-->";
    cin>>n;
    sq=n*n;
    while (sq>0)
    {
        int r=sq%10;
        sum+=r;
        sq=sq/10;
    }
    if(sum==n)
    {
        cout<<"Number is Neon number"<<endl;
    }
    else
    {
        cout<<"Number is not Neon number"<<endl;
    }

    return 0;
}

