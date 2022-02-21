#include<iostream>
using namespace std;
int main()
{
    int i, sum=0;
    cout<<"The 10 digits are";
    while(i<10)
    {
        cout<<i;
        sum = sum+i;
        i++;
    }
    cout<<"\n the sum of 10 digit is:"<<sum;
    return 0;
}
