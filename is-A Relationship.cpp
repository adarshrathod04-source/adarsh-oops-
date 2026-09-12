#include <iostream>                       // Includes cout
using namespace std;                      // Uses standard namespace

class Suzuki                               // Base class
{
public:

    void chassis()                         // Base function
    {
        cout << "Chassis" << endl;
    }

    void engine()                          // Base function
    {
        cout << "Engine" << endl;
    }

    void suspension()                      // Base function
    {
        cout << "Suspension" << endl;
    }

    void transmission()                   // Base function
    {
        cout << "Transmission" << endl;
    }

    void doors()                           // Base function
    {
        cout << "Doors" << endl;
    }
};

class DODO : public Suzuki                 // DODO inherits Suzuki
{
public:

    void ABS()                             // New feature
    {
        cout << "ABS" << endl;
    }
};

int main()                                 // Main function
{
    DODO myCar;                            // Creates DODO object

    myCar.engine();                        // Uses inherited function
    myCar.suspension();                    // Uses inherited function
    myCar.transmission();                  // Uses inherited function
    myCar.doors();                         // Uses inherited function
    myCar.ABS();                           // Uses its own function

    return 0;                              // End program
}