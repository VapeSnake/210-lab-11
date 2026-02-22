//COMSC-210 | Lab 11 Pointers II | Noel Mier-Luna
#include <iostream>

using namespace std;

struct HikingTrail { // Idea: App that displays hiking trails by name(string), length(double), and flora(dynamic string array).
    string name;
    double miles;
    string *flora; //To allow a dynamic array of strings in object.

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
    cin.ignore(); // Ensures buffer is clear for following getline call in inputTrail function.
    cout << "\n ";
    HikingTrail *listOfTrails = new HikingTrail[numberOfTrails]; // Creates dynamic array of HikingTrail objects.


    return 0;
}

void inputTrail(HikingTrail *ptr) // Function will allow user to input all members of each HikingTrail object.
{
    static int trailNr = 1; // Neatly reminds user which trail they are inputting data for.
    cout << "Enter the information for hiking trail # " << trailNr << "\n";
    cout << "Name of trail: ";
    getline(cin, ptr->name);
    cout << "\nLength of trail in miles: ";
    cin >> ptr->miles;
    cout << "\n How much flora does this trail have? ";
    int floraNr; // Allows user to define how many flora to include for current trail.
    cin >> floraNr;
    cin.ignore(); // I include this anytime a cin call precedes any getline call since cin >> ignores leading whitespace, or empty spaces.
    ptr->flora = new string[floraNr];
    for (int i = 0; i < floraNr; i++)
        {   
            cout << "\n Flora #" << i + 1 << ": ";
            getline(cin, ptr->flora[i]);
        }
     trailNr++; // Increases static counter so future calls to function will correctly display which trail is being inputted into array.
}