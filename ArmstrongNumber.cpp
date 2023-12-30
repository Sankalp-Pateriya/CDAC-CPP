#include<iostream>
using namespace std;

int count(int n)
{
    int count=0;
  while(n!=0)
    {
        count++;
        n=n/10;
    }
    return count;  
}

int pow(int x,int y)
{
    int ans=1;
    for(int i=1;i<=y;i++)
    {
        ans=ans*x;
    }
    return ans;
}

int main(){

    int n,sum=0,rem;
    do{
        cout<<"Enter a positive no."<<endl;
    cin>>n;
    }while(n<0);
    int t=n;
    int c=count(n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+pow(rem,c);
        n=n/10;
    }
    if(t==sum)
    cout<<"Armstrong Number:"<<sum;
    else
    cout<<"Not Armstrong";
    return 0;
}