#include <iostream>
using namespace std;

class Birthday
{
    int day, month, year;

public:
    Birthday(int dd, int mm, int yy)
    {
        this->day = dd;
        this->month = mm;
        this->year = yy;
    }

    void getDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class People
{
    string name;
    Birthday bd;

public:
    People(string an, Birthday abd) : name(an), bd(abd) {}

    void printInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Birthday; ";
        bd.getDate();
    }
};

int main()
{

    Birthday mybd(12, 11, 2001);
    People me("Janindu", mybd);
    me.printInfo();

    return 0;
}