#include<iostream>
using namespace std;

int main()
{
    int n,rem,sum=0;
    cout<<"Enter a no."<<endl;
    cin>>n;
    while(n!=0)
    {
        sum=0;
        while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum+rem;
        
    }
    if(sum/10!=0)
    n=sum;
    
    }
    cout<<sum;
    return 0;
}