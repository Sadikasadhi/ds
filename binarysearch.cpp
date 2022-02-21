#include<iostream>
using namespace std;
int main()
{
    int i, a[100], n, beg, end, mid,item;
    cout<<"Enter no of Elements :\n ";
    cin>>n;
     cout<<"Enter elements in sorted order:\n ";
    for(i=1; i<=n; i++)
	{
        cin>>a[i];
    }
    cout<<"\nEnter Element to be Search: ";
    cin>>item;
    beg = 1;
    end = n;
    mid = (beg+end)/2;
    while(beg<=end && a[mid]!=item)
    {
        if(a[mid]<item)
            beg = mid+1;
        else
        
            end = mid-1;
        mid = (beg+end)/2;
    }
    if(a[mid]==item){
	
        cout<<"\nThe number, "<<a[mid]<<" is  found ";
    }
    else
    {
    	cout<<"number is not found";
	}
    cout<<endl;
    return 0;
}
