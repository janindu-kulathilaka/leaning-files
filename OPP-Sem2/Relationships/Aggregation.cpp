#include <iostream>
using namespace std;

class Wheel
{

    int diameter;

public:
    Wheel(int ad)
    {
        this->diameter = ad;
    }

    int getDiameter()
    {
        return diameter;
    }
};

class Engine
{
    int cc;

public:
    Engine(int acc)
    {
        this->cc = acc;
    }
    int getCC()
    {
        return cc;
    }
};

class Car
{

    Wheel frontLeft, frontRight, rearLeft, rearRight;
    Engine myEngine;
    int passengers;

public:
    Car(int wheelDiameter, int engineCC, int apassengers) : frontLeft(wheelDiameter),
                                                            frontRight(wheelDiameter),
                                                            rearLeft(wheelDiameter),
                                                            rearRight(wheelDiameter),
                                                            myEngine(engineCC)
    {
        passengers = apassengers;
    }

    void showSelf()
    {
        cout << "All 4 wheels are " << frontLeft.getDiameter() << " in size." << endl;
        cout << "Engine Capacity is " << myEngine.getCC() << endl;
        cout << passengers << " passengers can travel in the car." << endl;
    }
};

int main()
{

    Car myCar(160, 1500, 4);
    myCar.showSelf();

    return 0;
}