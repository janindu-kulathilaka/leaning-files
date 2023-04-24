#include <iostream>
using namespace std;

class A
{
public:
    A()
    {
        cout << "Constructor of class A is called" << endl;
    }

    void anyError()
    {
        cout << "Error occurred" << endl;
    }
};

int main()
{

    A a;

    try
    {
        throw a;
    }

    catch (A excp)
    {
        excp.anyError();
    }

    cout << "Error Handled" << endl;

    return 0;
}