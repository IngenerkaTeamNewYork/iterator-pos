#include <iostream>
#include "library.h"

int main() {
    std::list<int> someList = {
            1,
            123,
            52,
            234,
            45
    };

    iteratorPos<int> a(&someList, 1);
    std::cout << "Position: " << a.pos << "\n";
    std::cout << ((*a.iter == *someList.begin()) ? "true" : "false");
    return 0;
}