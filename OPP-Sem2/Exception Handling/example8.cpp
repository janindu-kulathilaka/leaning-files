#include <iostream>
using namespace std;

int main()
{

    try
    {
        try
        {
            throw 20;
        }
        catch (int a)
        {
            cout << "Handle Partially" << endl;
        }
        throw 'a';
    }
    catch (char n)
    {
        cout << "Handle remaining" << endl;
    }

    return 0;
}