/******************************************************************************

                              Online C++ Compiler.
               special number

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[5],n,sum=0,mul=1,r;
    cout<<"Enter a number for finding special number-->";
    cin>>n;
    int m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
        mul*=r;
    }
    if((sum+mul)==m)
    {
        cout<<"Number is special number"<<endl;
    }
    else
    {
        cout<<"Number is not speial number"<<endl;
    }

    return 0;
}

