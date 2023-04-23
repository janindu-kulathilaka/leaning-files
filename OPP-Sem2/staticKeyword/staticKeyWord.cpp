#include <iostream>
using namespace std;

void demo()
{

    static int count = 0;
    int c = 0;
    cout << count << " | " << c << endl;
    count++;
    c++;
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        demo();
    }
}