#include<iostream>
using namespace std;

class BigInt{
    int num;

    public:
    BigInt(){
        num=10;
    }

    BigInt(int n):num(n){

    }

    bool operator==(BigInt i)
    {
        if(num==i.num)
        return true;
        return false;
    }

    bool operator>(BigInt j)
    {
        if(num>j.num)
        return true;
        return false;
    }

    bool operator<(BigInt j)
    {
        if(num<j.num)
        return true;
        return false;
    }


};

int main()
{
    BigInt i;
    BigInt j(40);

    if(i==j)
    cout<<"Equal";
    else if(i>j)
    cout<<"I is greater than j";
    else
    cout<<"J is greater than i";   
    return 0;
}

