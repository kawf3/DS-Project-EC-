#ifndef PROCESS_H
#define PROCESS_H

//#include <iostream>
#include <queue>
#include <string>
//#include <iomanip>


// Define the preference levels
const int HIGH_PREFERENCE = 0;
const int MEDIUM_PREFERENCE = 1;
const int LOW_PREFERENCE = 2;

// Define the process structure
struct Process {
    std::string name;
    int preference;

    bool operator<(const Process& other) const {
        return preference > other.preference;
    }
};

// Function to return the preference level as a string
std::string getPreferenceString(int preference);

#endif

