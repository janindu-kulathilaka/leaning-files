#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A() { cout << "A constructor" << endl; }
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

class B : virtual public A // we should add virtual
// because A will inherit by B,C classes and again
// D will inherit from B, C because of that A will
// inherit two time to D from virtual part will solved that.
{
public:
    B()
    {
        cout << "B constructor" << endl;
        setX(10);
    }
};

class C : virtual public A
{
public:
    C()
    {
        cout << "C constructor" << endl;
        setX(20);
    }
};

class D : public B, public C
{
public:
    D()
    {
        cout << "D constructor" << endl;
    }
};

int main()
{

    D d;
    d.print();

    return 0;
}