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

    int getBal() const
    {
        return balance;
    }

    void setBal(double amt)
    {
        balance = amt;
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

class Bank
{
private:
public:
    void addAccount(vector<Account> &v, type &e, double &d)
    {
        cout << "Enter Name:" << endl;
        string name1;
        cin >> name1;

        Account acc(name1, e, d);
        v.push_back(acc);
    }

    void deposit(vector<Account> &v)
    {
        cout << "Enter acc number:" << endl;
        int acc;
        cin >> acc;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].getAccNum() == acc)
            {
                int amt;
                cout << "Enter Amt to deposit:" << endl;
                cin >> amt;
                amt = v[i].getBal() + amt;
                v[i].setBal(amt);
                cout << "Balance Updated!!!" << endl;
            }
            else
            {
                cout << "No Acc Found!!" << endl;
            }
        }
    }

    void withdraw(vector<Account> &v)
    {
        cout << "Enter acc number:" << endl;
        int acc;
        cin >> acc;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i].getAccNum() == acc)
            {
                int amt;
                cout << "Enter Amt to deposit:" << endl;
                cin >> amt;
                if (amt < v[i].getBal())
                {
                    amt = v[i].getBal() - amt;
                    v[i].setBal(amt);
                    cout << "Balance Updated!!!" << endl;
                }
                else 
                    cout<<"Insufficient Balance!!"<<endl;
            }
            else
            {
                cout << "No Acc Found!!" << endl;
            }
        }
    }

    void display(vector<Account> &v)
    {
        for (Account a : v)
        {
            a.display();
        }
    }
};

int main()
{
    vector<Account> v;
    int t, ch;
    Bank b;

    bool exit = false;
    while (!exit)
    {
        cout << "1. Add Saving Acc\n2. Add Current Acc\n3. Deposit\n4. Withdraw\n5. Display Acc\n";
        cin >> ch;
        switch (ch)
        {
        case 0:
            exit = true;
            break;

        case 1:
        {
            type e = SAVING;
            double d = 0.0;
            b.addAccount(v, e, d);
        }
        break;

        case 2:
        {
            type e = CURRENT;
            double d = 1000.0;
            b.addAccount(v, e, d);
        }
        break;

        case 3:
            b.deposit(v);

            break;

        case 4:
            b.withdraw(v);
            break;

        case 5:
        {
            b.display(v);
        }

        break;
        }
    }

    return 0;
}
