/**********************************************************************
  count Numbers which contains only given numbers

*******************************************************************************/

#include <iostream>

using namespace std;
int CountSpecificNum(int m,int n,int a,int b,int c)
{
    int count=0,temp;
    if(m>n)
    {
        return -1;
    }
    else
    {
        for(int i=m;i<=n;i++)
        {
            int num=i;
            
            while (num>0)
            {
                int r=num%10;
                if(r==a || r==b || r==c)
                {
                    temp=1;
                    
                }
                else
                {
                    temp=0;
                    break;
                }
                num=num/10;
            }
            if (temp==1)
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int m,n,a,b,c;
    cout<<"Enter the value of num1-->";
    cin>>m;
    cout<<"Enter the value of num2-->";
    cin>>n;
    cout<<"Enter specific numers a,b and c-->";
    cin>>a>>b>>c;
    int count=CountSpecificNum(m,n,a,b,c);
    cout<<endl<<endl<<count;

    return 0;
}

