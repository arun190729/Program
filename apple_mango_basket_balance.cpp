/**********************************************************************
  Apple Mangoes Basket Balance 

*******************************************************************************/

#include <iostream>

using namespace std;
int BalanceFruits(int a,int m,int Rs)
{
    
    if(a>m)
    {
        Rs=Rs-(a-m);
    }
    else if(a<m)
    {
        Rs=Rs+(m-a);
    }
    return Rs;
}
int main()
{
    int m,rs,a;
    cout<<"Enter number of Apple-->";
    cin>>a;
    cout<<"Enter number of Mangoes-->";
    cin>>m;
    cout<<"Enter the Money you have-->";
    cin>>rs;
    int count=BalanceFruits(a,m,rs);
    cout<<endl<<endl<<"Total amount after balancing basket Rs. "<<count;

    return 0;
}

