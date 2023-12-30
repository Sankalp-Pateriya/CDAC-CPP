#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
    Date()
    {
    }

    Date(int day, int month, int year)
    {

        this->day = day;
        this->month = month;
        this->year = year;
    }

    void read()
    {
        cout << "Enter day" << endl;
        cin >> this->day;
        cout << "Enter month" << endl;
        cin >> this->month;
        cout << "Enter year" << endl;
        cin >> this->year;
    }

    void write()
    {
        cout << this->day << "-" << this->month << "-" << this->year << endl;
    }

    bool operator==(Date d2)
    {
        if (day == d2.day && month == d2.month && year == d2.year)
            return true;
        return false;
    }

    bool operator>(Date d2)
    {
        if (year > d2.year)
            {
                return true;
            }
        else if (year == d2.year)
        {
            if (month > d2.month)
            {
                return true;
            }
            else if (month == d2.month)
            {
                if (day > d2.day)

                   return true;
            }
        }
        return false;
    }
};

int main()
{
    Date d1;
    Date d2;
    d1.read();
    cout<<"Enter next date"<<endl;
    d2.read();
    cout<<"Date1->";
    d1.write();
    
    cout<<"Date2->";
    d2.write();

    if (d1 == d2)
        cout << "Same Dates";
    else if (d1 > d2)
    {

        cout << "Date d1 is greater than d2" << endl;
    }
    else
    cout << "Date d2 is greater than d1" << endl;

    return 0;
}