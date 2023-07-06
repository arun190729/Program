/*
            Q 9.   sample input - 8       3      5      2       4     7     9     1 
                   Sample output- 198     75     112    20      16    9     0     0

*/
#include <iostream>

using namespace std;

int main()
{
    int arr[10]={8,3,5,2,4,7,9,1};
    for(int i=0;i<8;i++)
    {
        int sum1=0,sum2=0;
        int n=arr[i];
        for(int j=i+1;j<8;j++)
        {
            if(arr[j]>=n)
            {
                sum1+=arr[j];
            }
            else
            {
                sum2+=arr[j];
            }
        }
        cout<<sum1*sum2<<" ";
    }
    return 0;
}

