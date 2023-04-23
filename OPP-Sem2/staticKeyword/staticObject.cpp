#include <iostream>
using namespace std;

class Example
{
    int i;

public:
    Example()
    {
        i = 0;
        cout << "Inside Constructor\n";
    }
    ~Example()
    {
        cout << "Inside Destructor\n";
    }
};

int main()
{

    int x = 0;
    if (x == 0)
    {
        static Example obj;
    }

    cout << "End of main\n";

    return 0;
}