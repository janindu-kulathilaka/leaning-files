#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "X ";
    }
};

class B : public A
{
public:
    B()
    {
        cout << "K ";
    }
};

int main()
{
    B b;

    try
    {
        throw b;
    }

    catch (A a)
    {
        cout << "Y ";
    }

    catch (B b)
    {
        cout << "Z ";
    }

    return 0;
}