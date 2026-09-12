#include <iostream>              // Includes input/output library
using namespace std;             // Allows us to use cout without std::

class Rectangle                    // Defines the base class Rectangle
{
public:                           // Public members can be accessed outside class
    int length;                   // Stores length of rectangle
    int breadth;                  // Stores breadth of rectangle

    void show()                   // Defines show() function
    {
        cout << length << endl;   // Displays length
        cout << breadth << endl;  // Displays breadth
    }
};

class Cuboid : public Rectangle    // Cuboid inherits Rectangle publicly
{
public:                           // Public section of Cuboid
    int height;                   // Stores height of cuboid

    void display()                // Defines display() function
    {
        cout << height << endl;   // Displays height
    }
};

int main()                       // Program execution starts here
{
    Cuboid c;                    // Creates object c of Cuboid

    c.length = 10;               // Assigns 10 to inherited length
    c.breadth = 20;              // Assigns 20 to inherited breadth
    c.height = 30;               // Assigns 30 to Cuboid height

    c.show();                    // Calls inherited Rectangle function
    c.display();                 // Calls Cuboid function

    return 0;                    // Ends the program successfully
}