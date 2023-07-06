/******************************************************************************
days       
1--5  fine  ₹0.40
6--10  fine  ₹0.65 exceeding of 5 days
11--15  fine  ₹0.8 exceeding of 10 days
16--25  fine  ₹1.2 exceeding of 15 days
if 1 book misplaced fine ₹500
if 1 book hampered fine ₹200

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
    double fine;
    int days,mis,hamp,n;
    cout<<"Enter the due days-->";
    cin>>days;
    cout<<"Enter numbers of book-->";
    cin>>n;
    cout<<"Enter no. of misplaced book-->";
    cin>>mis;
    cout<<"Enter no. of hampered book -->";
    cin>>hamp;
    if(days<=5)
    {
        fine=n*(days*0.4)+mis*500+hamp*200;
    }
    else if(days>5 && days<=10)
    {
        fine=n*((days-5)*0.65+2)+mis*500+hamp*200;
    }
    else if(days>10 && days<=15)
    {
        fine=n*((days-10)*0.8+5.25)+mis*500+hamp*200;
    }
    else if(days>15 && days<=25)
    {
        fine=n*((days-15)*1.2+9.25)+mis*500+hamp*200;
    }
    cout<<"You need to pay ₹ "<<fine;
    return 0;
}

