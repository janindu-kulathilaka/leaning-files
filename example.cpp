#include <iostream>
using namespace std;

char ABC(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c;
    }
    throw int(c);
}

int main()
{

    try
    {
        char ch = 'a';
        cout << ABC(ch);
    }

    catch (int x)
    {
        cout << x << endl;
    }
}