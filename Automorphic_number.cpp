/******************************************************************************

AutoMorphic No.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int num=0,temp=0;
    cout<<"Enter a no to check Autumorphic or not-->";
    cin>>num;
    int sq=num*num;
    while(num>0)
    {
        int r1=num%10;
        int r2=sq%10;
        if(r1==r2)
        {
            temp=1;
        }
        else
        {
            temp=0;
            break;
        }
        num=num/10;
        sq=sq/10;
    }
    if(temp==1)
    {
        cout<<"Number is AutoMorphic";
    }
    else
    {
        cout<<"Number is not AutoMorphic";
    }
    return 0;
}
