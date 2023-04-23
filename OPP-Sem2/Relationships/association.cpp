#include <iostream>
using namespace std;

class SwipeCard;

class Manager
{
    string name;

public:
    Manager(string aname)
    {
        name = aname;
    }

    void logon(SwipeCard obj);

    string getName() { return name; }
};

class SwipeCard
{
    string model;

public:
    SwipeCard(string amodel)
    {
        model = amodel;
    }

    void swipe(Manager obj)
    {
        cout << obj.getName() << " swiped the card " << model << endl;
    }

    string getModel() { return model; }
};

void Manager::logon(SwipeCard obj)
{
    obj.swipe(*this);
};

int main()
{

    Manager objManager("Gamunu");
    SwipeCard objSD("officeID");
    objManager.logon(objSD);

    return 0;
}