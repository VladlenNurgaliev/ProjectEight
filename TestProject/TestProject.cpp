#include <iostream>
using namespace std;

class IBicycle
{
public:
    void virtual TwistTheWheel() = 0;
    void virtual Ride() = 0;
};

////////////////////////////////////////////

class SimpleBicycle : public IBicycle
{
public:
    void TwistTheWheel() override
    {
        cout << "TwistTheWheel" << endl;
    }

    void Ride() override
    {
        cout << "Ride" << endl;
    }
};

class SportBibcycle : public IBicycle
{
public:
    void TwistTheWheel() override
    {
        cout << "SportBibcycle TwistTheWheel" << endl;
    }

    void Ride() override
    {
        cout << "SportBibcycle Ride" << endl;
    }
};

////////////////////////////////////////////

class Human
{
public:
    void RideOn(IBicycle & value)
    {
        cout << "Ride" << endl;
        value.TwistTheWheel();
        cout << endl << "Edem" << endl;
        value.Ride();
    }
};

int main()
{
    Human human;
    SimpleBicycle s1;
    SportBibcycle s2;

    human.RideOn(s1);

    cout << endl  << "-------------------------" << endl;

    human.RideOn(s2);


    return 0;
}