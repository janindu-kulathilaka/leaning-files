#include <iostream>
using namespace std;

class Example
{
public:
    // static memeber function
    static void printMsg()
    {
        cout << "Welcome! ";
    }
};

int main()
{

    // invoking a static member function
    Example::printMsg();

    return 0;
}