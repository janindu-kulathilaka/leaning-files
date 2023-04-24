// if the exception did not match code will terminated
// after throw

#include <iostream>
using namespace std;

int main()
{

    int x = -1;

    try
    {
        throw x;
    }

    catch (char *excp)
    {
        cout << "Error: " << excp << endl;
    }

    cout << "After the exception" << endl;

    return 0;
}