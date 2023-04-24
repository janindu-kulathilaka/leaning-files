#include <iostream>
#include <exception>
using namespace std;

int main()
{

    try
    {
        int arr[5];
        cout << arr[10];
    }
    catch (const std::exception &e)
    {
        std::cout << "exception caught: " << e.what() << endl;
    }

    return 0;
}