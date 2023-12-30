#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    do{
        cout<<"Enter a positive no."<<endl;
    cin>>n;
    }while(n<0);
    
    for(i=1;i<=(n/2);i++)
    {
        if(n%i==0)
        sum=sum+i;
        
    }
    if(n==sum)
    cout<<"Perfect:"<<sum;
    else
    cout<<"Not Perfect";
    return 0;
}