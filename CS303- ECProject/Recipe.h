#ifndef RECIPE_H
#define RECIPE_H

#include <queue>
#include <string>
#include "PrefQueue.h"

class Recipe {
public:
    Recipe ();
    Recipe (std::string name);

    void addItem(std::string itemName, int preference);
    void printList();

private:
    std::string name;
    std::queue<Process> list;
};

#endif
