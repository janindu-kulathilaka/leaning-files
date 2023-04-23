#include <iostream>

using namespace std;

class Celsius
{

private:
    float t;

public:
    Celsius() : t(0) {}

    operator float();

    void getTemperature();
};

void Celsius::getTemperature()
{
    cout << "Enter the temperature in Celsius: " << endl;
    cin >> t;
};

Celsius::operator float()
{
    return (t * 9) / 5 + 32;
};

int main()
{

    float fer;

    Celsius cel;

    cel.getTemperature();

    fer = float(cel);

    cout << "Fahranhite: " << fer << endl;

    return 0;
}