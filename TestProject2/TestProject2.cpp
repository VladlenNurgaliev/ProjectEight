#include <iostream>
using namespace std;

class Component
{
public:
    string CompanyName;

    Component(string CompanyName)
    {
        cout << "Constructor Component" << endl;
        this->CompanyName = CompanyName;
    }
};

/////////////////////////////////////////////////////

class GPU : public Component
{
public:
    GPU(string CompanyName) : Component(CompanyName)
    {
        cout << "Constructor GPU" << endl;
    }
};

class Memory : public Component
{
public:
    Memory(string CompanyName) : Component(CompanyName)
    {
        cout << "Constructor Memory" << endl;
    }
};

class GraphicCard : public GPU, public Memory
{
public:
    GraphicCard(string GPUCompanyName, string MemoryCompanyName): GPU(GPUCompanyName), Memory(MemoryCompanyName)
    {
        cout << "Constructor GraphicCard" << endl;
    }
};


int main()
{
    GraphicCard gc("NVIDIA", "Samsung");
    //Memory m("M");
    //GPU g("G");
    //Component c("Iron");




    return 0;
}