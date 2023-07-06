/**************************************************************************
 * 
Q1. Mr. Kapil singh is a software eng. And he pays annual income tax as per the conditions.
Income                             	    tax
4lc-7lc                               	no tax
7lc – 10 lc                             5% on first exceeding 7 lcs
10lc-14lc                           	10% on exceeding 10 lcs
14lc – 18lc                         	15% on exceeding 14 lcs
>18lcs                               	25% on exceeding 18 lcs


*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    //cout<<"Hello World";
    int sal;
    double tax;
    cout<<"Enter your salary-->";
    cin>>sal;
    if(sal>400000 && sal<=700000)
    {
        cout<<"Your tax ammount is 0"<<endl;
    }
    else if(sal>700000 && sal<=1000000)
    {
        tax=sal*5/100;
        cout<<"Your tax ammount is "<<tax<<endl;
    }
    else if(sal>1000000 && sal<=1400000)
    {
        tax=sal*10/100;
        cout<<"Your tax ammount is "<<tax<<endl;
    }
    else if(sal>1000000 && sal<=1400000)
    {
        tax=sal*10/100;
        cout<<"Your tax ammount is "<<tax<<endl;
    }
    else if(sal>1400000 && sal<=1800000)
    {
        tax=sal*15/100;
        cout<<"Your tax ammount is "<<tax<<endl;
    }
    else if(sal>1800000)
    {
        tax=sal*25/100;
        cout<<"Your tax ammount is "<<tax<<endl;
    }
    else
    {
        cout<<"Your salary out of data";
    }

    return 0;
}

