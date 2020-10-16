#include <vector>
#include "Sorting.hpp"

//Moves vector element from original index to destination, shifting all existing values between
//destination and origin 1 position towards origin, 
//and then changing the destination index's value to the origin index's value
void moveVectorElement(std::vector<double>* vector, int originIndex, int destinationIndex) {
    double valueAtOriginIndex = vector -> at(originIndex);
    if(originIndex > destinationIndex) {
        for(int i = originIndex; i > destinationIndex; i--) {            
            vector -> at(i) = vector -> at(i - 1);
        }
    }
    else if(destinationIndex > originIndex) {
        for(int i = originIndex; i < destinationIndex; i++) {
            vector -> at(i) = vector -> at(i + 1);
        }
    }
    vector -> at(destinationIndex) = valueAtOriginIndex;
}

void sorting::singlethreaded::insertionSort_numeric(std::vector<double>* inputList) {
    for(int i = 0; i < inputList -> size(); i++) {
        double currentVal = inputList -> at(i);
        for(int j = 0; j < i; j++) {
            if(currentVal < inputList -> at(j)) {
                moveVectorElement(inputList, i, j);
                break;
            }
        }
    }
}