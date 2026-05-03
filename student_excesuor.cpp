#include <iostream>
#include <string>
#include <cstdlib> // Needed for rand() and srand()
#include <ctime>   // Needed for time()

using namespace std;

int main() {
    // 1. Seed the randomizer so it's different every time you run the program
    srand(time(0));
    string name;
    
    // 2. A simple array of 5 excuses
    string excuses[5] = {
        "is stuck in a tree because of a dare.",
        "is currently fighting a localized gravity storm.",
        "was mistaken for a famous mime and kidnapped.",
        "is busy teaching a goldfish to bark.",
        "accidentally ate a 'Do Not Eat' packet."
    };

    // 3. Get the user input
    cout << "Enter student name: ";
    getline(cin, name);

    // 4. Pick a number between 0 and 4
    int index = rand() % 5;

    // 5. Show the result
    cout << "\nTHE REASON: " << name << " " << excuses[index] << endl;

    return 0;
}