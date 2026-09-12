#include <iostream>                       // Includes cout
using namespace std;                      // Uses standard namespace

class Suzuki                               // First class
{
public:

    void chassis()                         // Function of Suzuki
    {
        cout << "Chassis" << endl;
    }

    void suspension()                      // Function of Suzuki
    {
        cout << "Suspension" << endl;
    }
};

class Antoinette                            // Another class
{
public:

    void V8_Engine()                        // Engine function
    {
        cout << "V8 Engine" << endl;
    }
};

class DODO                                  // Main class
{
private:

    Suzuki design_obj;                      // DODO HAS-A Suzuki object
    Antoinette anto_obj;                    // DODO HAS-A Antoinette object

public:

    void addChassis()                       // Function of DODO
    {
        design_obj.chassis();               // Calls Suzuki function
    }

    void addEngine()                        // Function of DODO
    {
        anto_obj.V8_Engine();               // Calls Antoinette function
    }
};

int main()                                  // Main function
{
    DODO obj;                               // Creates DODO object

    obj.addChassis();                       // Uses Suzuki object
    obj.addEngine();                        // Uses Antoinette object

    return 0;                               // End program
}