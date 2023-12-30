#include<iostream>
using namespace std;

int main()
{

    int n,m,i,sum=0;
    do{
        cout<<"Enter 2 positive values N & M"<<endl;
    cin>>n>>m;
    }while(n<0 || m<0);
    for(i=m;i<=n;i++)
    {
        sum=i+sum;
    }
    cout<<sum;
    return 0;
}