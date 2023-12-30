#include<iostream>
double pow(double *x, double *y);
using namespace std;
double pow(double *x, double *y)
{
    int i;
    double res=1;
    for(i=1;i<=(*y);i++)
    {
        res=res*(*x);
    }
    
return res;
}

int main()
{
    double p,r,t,temp,ci;
    cout<<"Enter p,r,t"<<endl;
    cin>>p>>r>>t;
    temp=1+(r/100.0);
    sc=pow(&temp,&t);
    ci=p*sc-p;
    
    cout<<"C.I.="<<ci;
    return 0;

}
