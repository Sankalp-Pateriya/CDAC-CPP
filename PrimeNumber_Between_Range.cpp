#include <iostream>
using namespace std;

int main()
{
    int n, m;
    do{
        cout << "Enter positive values N and M"<<endl;
    cin >> n;
    cin >> m;
    }while(n<0 || m<0);
    
    int count;
    for (int i = n; i <= m; i++)
    {
        count = 0;
        if (i == 1)
            continue;
        for (int j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                count++;
                break;
            }
        }
        if (count == 0)
        {
            cout << i << " ";
        }
    }
    
    return 0;
}