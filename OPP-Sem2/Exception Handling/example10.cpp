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
        catch (int n)
        {
            cout << "Handle Partially" << endl;
            throw;
        }
    }
    catch (char n)
    {
        cout << "Handle remaining" << endl;
    }
    catch (...)
    {
        cout << "Default" << endl;
    }
}