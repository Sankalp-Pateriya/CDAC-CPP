#include <iostream>
#include <vector>
using namespace std;
enum type
{
    SAVING,
    CURRENT
};

class Account
{
private:
    int accNum;
    string name;
    type e1;
    double balance;

public:
    static int num;
    Account(string &n, type &e, double &bal) : name(n), e1(e), balance(bal)
    {
        accNum = ++num;
    }

    int getAccNum() const
    {
        return accNum;
    }

    void display() const
    {
        cout << "AccNumber:" << accNum << " Name:" << name << " Balance:" << balance << endl;
    }
};
int Account::num = 0;

int main()
{
    int t, ch;
    vector<Account> v;

    bool exit = false;
    while (!exit)
    {
        cout << "1. Add Saving Acc\n2. Display Acc\n";
        cin >> ch;
        switch (ch)
        {
        case 0:
            exit = true;
            break;

        case 1:
        {

            cout << "Enter Name:" << endl;
            string name1;
            cin >> name1;
            type e = SAVING;
            double d = 0.0;
            Account acc(name1, e, d);
            v.push_back(acc);
        }
        break;

        case 2:
        {
            for (Account a : v)
            {
                a.display();
            }
        }

        break;
        }
    }

    return 0;
}
