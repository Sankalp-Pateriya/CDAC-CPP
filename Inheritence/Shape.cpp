#include <iostream>
#include <vector>
using namespace std;

class Shape
{
public:
    virtual void acceptData() = 0;
    virtual void printArea() = 0;
};

class Rectangle : public Shape
{
    double l, b;

public:
    void acceptData()
    {
        cout << "Enter Length Breadth" << endl;
        cin >> l >> b;
    }
    void printArea()
    {
        cout << l * b;
    }
};

class Circle : public Shape
{
    double r;

public:
    void acceptData()
    {
        cout << "Enter Radius" << endl;
        cin >> r;
    }
    void printArea()
    {
        cout << 3.14 * r * r;
    }
};

int main()
{
    vector<Shape *> v;
    int ch;
    bool exit = false;
    while (!exit)
    {
        cout << "1.Add Rectangle" << endl;
        cout << "2.Add Circle" << endl;
        cout << "Enter Choice:" << endl;
        cin >> ch;
        switch (ch)
        {
        case 0:
            exit = true;
            break;

        case 1:
        {
            Rectangle *r = new Rectangle;
            r->acceptData();
            v.push_back(r);

        }
            
            break;

        case 2:
        {
                Circle *c = new Circle;
            c->acceptData();
            v.push_back(c);
        
        }
            break;

        case 3:

            for (Shape *shape : v)
            {
                cout<<"Area of shape"<<endl;
                shape->printArea();
                cout<<endl;
            }
            break;
        }

       
    }
     for (Shape *shape : v)
        {
            delete shape;
        }
        v.clear(); // Clear the vector
    return 0;
}