#include<iostream>
#include<cstring>
using namespace std;
void ToUpper(char s[]);
int main(){
    char s1[20];
    cout<<"Enter a string"<<endl;
    cin.getline(s1,20);
    ToUpper(s1);

}

void ToUpper(char s[])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        char s1=toupper(s[i]);
        cout<<s1;
    }
}