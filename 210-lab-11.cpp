//COMSC-210 | Lab 11 Pointers II | Noel Mier-Luna
#include <iostream>

using namespace std;

struct HikingTrail { // Idea: App that categorizes hiking trails by name(string), length(double), and flora(dynamic string array).
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

void inputTrail(HikingTrail *); //
void display(HikingTrail *);

int main() 
{
    int numberOfTrails;




    return 0;
}