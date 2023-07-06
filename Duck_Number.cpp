/******************************************************************************

Duck Number
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num,temp=0;
    cout<<"Enter a number to check duck number->";
    cin>>num;
    
    while(num>0)
    {
        int r=num%10;
        num=num/10;
        if(r==0)
        {
            temp=1;
            break;
        }
    }
    if(temp==1)
    {
        cout<<"Number is a Duck Number ";
    }
    else
    {
        cout<<"Number is not a Duck Number ";
    }

    return 0;
}