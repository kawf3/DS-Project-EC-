#include "Recipe.h"
#include <iostream>
#include <iomanip>

Recipe::Recipe() {
    name = "";
}

Recipe::Recipe(std::string n) {
    name = n;
}

void Recipe::addItem(std::string itemName, int preference)
{
    Process process = { itemName, preference };
    list.push(process);
}

void Recipe::printList() {
    std::cout << std::setfill('=') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ') << "| " << std::setw(13) << "Item Name" << " | "
        << std::setw(7) << "Preference" << " | " << std::setw(14) << "Preference Level" << " |" << std::endl;
    std::cout << std::setfill('=') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ');

    // Copy elements to a temporary container
    std::deque<Process> tempContainer;
    while (!list.empty()) {
        tempContainer.push_back(list.front());
        list.pop();
    }

        // Reconstruct the priority queue
        std::queue<Process, std::deque<Process>> temp(std::deque<Process>(tempContainer.begin(), tempContainer.end()));


        // Print the list
        while (!temp.empty()) {
            std::cout << "| " << std::setw(13) << temp.front().name << " | "
                << std::setw(7) << temp.front().preference << " | "
                << std::setw(14) << getPreferenceString(temp.front().preference) << " |" << std::endl;
            temp.pop();
        }


    std::cout << std::setfill('=') << std::setw(45) << "" << std::endl;
    std::cout << std::setfill(' ');
}

