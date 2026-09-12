#include <iostream>                         // Includes cout
using namespace std;                        // Uses standard namespace

class Person                                // Base class
{
public:

    void displayPerson()                    // Person function
    {
        cout << "I am a Person" << endl;
    }
};

class Teacher : public Person               // Teacher inherits Person
{
public:

    void teach()                             // Teacher function
    {
        cout << "Teacher teaches" << endl;
    }
};

class Student : public Person               // Student inherits Person
{
public:

    void study()                             // Student function
    {
        cout << "Student studies" << endl;
    }
};

int main()                                  // Main function
{
    Teacher t;                              // Teacher object
    Student s;                              // Student object

    t.displayPerson();                      // Inherited by Teacher
    t.teach();                              // Teacher's own function

    s.displayPerson();                      // Inherited by Student
    s.study();                              // Student's own function

    return 0;                               // End program
}