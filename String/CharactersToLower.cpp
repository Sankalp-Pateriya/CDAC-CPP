#include<iostream>
#include<cstring>
using namespace std;
void ToLower(char s[]);
int main(){
    char s1[20];
    cout<<"Enter a string"<<endl;
    cin.getline(s1,20);
    ToLower(s1);

}

void ToLower(char s[])
{
    int i;
    for(i=0;i<strlen(s);i++)
    {
        char s1=tolower(s[i]);
        cout<<s1;
    }
}