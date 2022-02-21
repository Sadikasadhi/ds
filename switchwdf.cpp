#include <iostream>

using namespace std;

int main() {
    int i, sum=0,ch,n, a[100];
    cout<<"\n Enter your choice \n 1.While \n 2.Do while \n 3. for \n";
    cin>>ch;
    switch (ch) {
    case 1:  cout<<"The 10 digits are\n";
       while(i<10)
    	{
       		 cout<<i;
        	sum = sum+i;
        	i++;
    	}
   		cout<<"\n the sum of 10 digits are:"<<sum;
        break;
    case 2: cout<<"The 10 digits are";
    	do
    	{
        	cout<<i;
        	sum = sum+i;
        	i++;
    	}while(i<10);
    	cout<<"\n The sum of 10  digits are:"<<sum;
        break;
    case 3:   cout<<"Enter the no digits:\n";
    cin>>n;
    cout<<"Enter the digits:\n";
    	for(i=0; i<n; i++)
    	{
        	cin>>a[i];
        	sum = sum+a[i];
    	}
    	cout<<" the sum of digit are:"<<sum;
        break;
    default:
       cout<<"Invalid choice";
        break;
    }
     return 0;
}
