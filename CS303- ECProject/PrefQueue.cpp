#include "PrefQueue.h"

// Function to return the preference level as a string
std::string getPreferenceString(int preference) {
    if (preference == HIGH_PREFERENCE) {
        return "High";
    }
    else if (preference == MEDIUM_PREFERENCE) {
        return "Medium";
    }
    else {
        return "Low";
    }
}
