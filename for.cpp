#include<iostream>
using namespace std;
int main()
{
    int i, sum=0;
    cout<<"The 10 digits are";
    for(i=0; i<10; i++)
    {
        cout<<i;
        sum = sum+i;
    }
    cout<<" the sum of 10 digit is:"<<sum;
    return 0;
}
