#include<iostream>
#include<cstring>
using namespace std;
bool compare(char s1[], char s2[]);

bool compare(char s1[], char s2[])
{
    if(strcmp(s1,s2)==0)
    return true;
    else 
    return false;
}

int main()
{
    char s1[20],s2[20];    
    cout<<"Enter string\n";
    cin.getline(s1,20);
    cout<<"Enter string\n";
    cin.getline(s2,20);
    bool b=compare(s1,s2);
    if(b==true)
    cout<<"Strings are equal\n";
    else
     cout<<"Strings are not equal\n";
    
    
    return 0;
}