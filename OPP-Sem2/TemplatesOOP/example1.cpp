#include <iostream>
using namespace std;

template <typename T, int x>
T func(T value)
{
    return value + x;
}

int main()
{

    cout << func<int, 10>(20) << endl;
    cout << func<double, 1>(7.25) << endl;
    cout << func<char, 3>('A') << endl;
}

// Output:

// 30
// 8.25