#include <iostream>
#include <string>
#include "Recipe.h"

using namespace std;

const int NUM_RECIPES = 2;

int main() {
    Recipe recipes[NUM_RECIPES];

    // Ask the user for the name and preference level of each item (food item) for each recipe
    for (int i = 0; i < NUM_RECIPES; i++) {
        cout << "Enter the food items and preferences for recipe " << i + 1 << endl;

        // Get the number of food items from the user
        int numItems;
        cout << "How many food items does the recipe have? ";
        cin >> numItems;

        // Loop through each item and add it to the recipe preference queue based on its preference
        for (int j = 0; j < numItems; j++) {
            string itemName;
            int preference;

            // Ask the user for the name and preference level of the item
            cout << "Enter the name of item " << j + 1 << ": ";
            cin >> itemName;
            cout << "Enter the preference level of item " << j + 1 << " (0 = high, 1 = medium, 2 = low): ";
            cin >> preference;

            // Add the item and preference to the recipes preference queue
            recipes[i].addItem(itemName, preference);
        }
    }

    // Print the list for each recipe
    for (int i = 0; i < NUM_RECIPES; i++) {
        cout << "List for recipe " << i + 1 << ":" << endl;
        recipes[i].printList();
        cout << endl;
    }

    return 0;
}
