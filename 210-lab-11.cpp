//COMSC-210 | Lab 11 Pointers II | Noel Mier-Luna
#include <iostream>

using namespace std;

struct HikingTrail { // Idea: App that displays hiking trails by name(string), length(double), and flora(dynamic string array).
    string name;
    double miles;
    string *flora;

    ~HikingTrail() 
    {
        if (flora) // Checks if pointer is null before deleting.
            delete [] flora; // Brackets ensure every element of dynamic array is destroyed.
        flora = nullptr; // No dangling pointers allowed.
    }
};

void inputTrail(HikingTrail *); 
void display(HikingTrail *);

int main() 
{
    int numberOfTrails; // Will be used to make dynamic array of HikingTrail objects via user input.

    cout << "Enter the number of hiking trails you want to compare: ";
    cin >> numberOfTrails;
    cout << "\n ";
    HikingTrail *listOfTrails = new HikingTrail[numberOfTrails]; // Creates dynamic array of HikingTrail objects.


    return 0;
}

void inputTrail(HikingTrail *ptr) // Function will allow user to input all members of each HikingTrail object.
{
    cout << " 
}