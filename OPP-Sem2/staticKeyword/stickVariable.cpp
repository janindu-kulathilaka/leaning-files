#include <iostream>
using namespace std;

class staticTest
{

public:
    static int i;

    staticTest(){};
};

int staticTest::i = 20;

int main()
{

    staticTest obj1;
    staticTest obj2;

    cout << obj1.i << endl;
    cout << obj2.i << endl;

    return 0;
}