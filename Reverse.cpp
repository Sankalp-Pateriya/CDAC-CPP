#include<iostream>
using namespace std;

int main(){

    int n,rev=0,rem;
    do{
        cout<<"Enter a positive number"<<endl;
    cin>>n;
    }while(n<0);
    while(n!=0)
    {
        rem=n%10;
        
        
        rev=rev*10+rem;
        
        n=n/10;
        
    }
    cout<<rev;
    return 0;
}