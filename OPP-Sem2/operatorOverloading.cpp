#include <iostream>

using namespace std;

class unaryOperator
{

private:
    int num;

public:
    unaryOperator() : num(0) {} // default constructor

    unaryOperator(int n) : num(n) {} // paramerterized constructor

    // prefix
    unaryOperator operator++()
    {
        ++num;
        return *this;
    }

    // postfix
    unaryOperator operator++(int)
    {
        unaryOperator temp;
        temp.num = num++;
        return temp;
    }

    int getNumber()
    {
        return num;
    }

    void display()
    {
        cout << "Number: " << num << endl;
    }
};

class binaryOperator
{

private:
    int num;

public:
    binaryOperator() : num(0) {} // default constructor

    binaryOperator(int n) : num(n) {} // parameterized constructor

    binaryOperator operator+(binaryOperator obj)
    {
        num = num + obj.num;

        return *this;
    }

    void display()
    {
        cout << "Number: " << num << endl;
    }
};

int main()
{

    unaryOperator testUnary(29), test2;
    test2 = testUnary++;
    cout << test2.getNumber();

    return 0;
}