// No Implicit Conversion in Try-Catch

#include <iostream>
using namespace std;

int main()
{
    try
    {
        throw 'a';
    }

    catch (int excp)
    {
        cout << "Error: " << excp << endl;
    }

    catch (...)
    {
        cout << "Default Exception" << endl;
    }

    return 0;
}