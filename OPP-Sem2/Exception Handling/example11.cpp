#include <iostream>
using namespace std;

class Test
{
public:
    Test() { cout << "Constructor of Test" << endl; }
    ~Test() { cout << "Destructor of Test" << endl; }
};

int main()
{

    try
    {
        Test t1; // if object is inside try block before throw occur object will called distructor
        throw 10;
    }

    catch (int i)
    {
        cout << "Caught " << i << endl;
    }

    return 0;
}