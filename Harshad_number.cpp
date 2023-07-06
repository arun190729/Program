/******************************************************************************

                            Harshad
*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int arr[5],n,sum=0,r;
    cout<<"Enter a number for checking harshad number-->";
    cin>>n;

    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r;
    }
    if(n%sum==0)
    {
        cout<<"Number is Harsahd number"<<endl;
    }
    else
    {
        cout<<"Number is not a Harshad number"<<endl;
    }

    return 0;
}

