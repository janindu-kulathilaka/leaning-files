#include <iostream>
using namespace std;

class Base
{
};

class Derived : public Base
{
};

int main()
{
    Derived d;

    try
    {
        throw d;
    }
    // before base class catch derived class should be added
    catch (Derived d)
    {
        cout << "Caught Derived exception" << endl;
    }

    catch (Base b)
    {
        cout << "Caught Base exception" << endl;
    }

    return 0;
}