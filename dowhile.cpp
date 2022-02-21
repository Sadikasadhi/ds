#include<iostream>
using namespace std;
int main()
{
    int i, sum=0;
    cout<<"The 10 digits are \n";
    do
    {
        cout<<i;
        sum = sum+i;
        i++;
    }while(i<10);
    cout<<"\n The sum of 10 digit is:"<<sum;
    return 0;
}
