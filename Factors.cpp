#include<iostream>
using namespace std;

int main()
{
    int n,i;
    do{
        cout<<"Enter a positive number"<<endl;
    cin>>n;
    }while(n<0);
    
    cout<<"Factors: ";
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    return 0;
}