#include<iostream>
#include<cstring>
using namespace std;
void StrCpy(char dest[], char src[]);

int Strlen(char s[])
{
    int count=0;
    for(int i=0;s[i]!='\0';i++)
    {
        count++;
    }
    return count;

}

void StrCpy(char dest[], char src[])
{
    int l=Strlen(src);
    for(int i=0;src[i]!='\0';i++)
    {
        dest[i]=src[i];
    }
    cout<<"Dest:";
    for(int i=0;i<l;i++)
    {
        cout<<dest[i];
    }
    cout<<endl;
    
}

int main(){
    
    char src[20],dest[20];
    cout<<"Enter a string"<<endl;
    cin.getline(src,20);
    StrCpy(dest,src);
     cout<<"Source:"<<src<<endl;
    
}
