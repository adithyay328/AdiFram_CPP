#include <vector>
#include "Sorting.hpp"

void swapIndicesInVector(std::vector<double>* inputList, int indexOne, int indexTwo) {
    double valueAtIndexOne_original = inputList -> at(indexOne);
    inputList -> at(indexOne) = inputList -> at(indexTwo);
    inputList -> at(indexTwo) = valueAtIndexOne_original;
}

void sorting::singlethreaded::selectionSort_numeric(std::vector<double>* inputList) {
    for(int i = 0; i < inputList -> size(); i++) {
        //Starting with current index as the smallest
        int smallestNumberIndex = i;
        for(int j = i + 1; j < inputList -> size(); j++) {
            if(inputList -> at(j) < inputList -> at(smallestNumberIndex)) {
                smallestNumberIndex = j;
            }
        }
        swapIndicesInVector(inputList, i, smallestNumberIndex);
    }
}