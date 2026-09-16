ClassName objectName[size];
#include <iostream>
using namespace std;
class Student                              // Defining Student class
{
public:
    string name;                         // Stores student's name
    int marks;                            // Stores student's marks

    // Function to display student information
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student students[3];                                     // Creating an array containing 3 Student objects
    students[0].name = "Riya";                           // Storing data in the first object
    students[0].marks = 85;

    students[1].name = "Aman";                        // Storing data in the second object
    students[1].marks = 90;

    students[2].name = "Neha";                       // Storing data in the third object
    students[2].marks = 78;

    students[0].display();                                  // Calling display() for each object
    students[1].display();
    students[2].display();
    return 0;
}
