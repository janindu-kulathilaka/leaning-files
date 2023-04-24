#include <iostream>
using namespace std;

int main()
{

    int x = -1;

    cout << "Before try Block" << endl;

    try
    {

        cout << "Inside try block" << endl;

        if (x < 0)
        {
            throw x;
            cout << "After throwing" << endl;
        }
    }

    catch (int x)
    {
        cout << "Exception: " << x << endl;
    }

    return 0;
}