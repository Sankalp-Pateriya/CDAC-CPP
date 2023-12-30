#include<iostream>
using namespace std;

int main()
{
    int n,rem,pro=1;
    do{
        cout<<"Enter a positive no."<<endl;
    cin>>n;
    }while(n<0);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        pro=pro*rem;

    }
    cout<<pro;
    return 0;
}