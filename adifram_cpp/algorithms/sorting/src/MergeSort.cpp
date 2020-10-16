#include <vector>
#include "Sorting.hpp"

//Merge 2 smaller vectors into 1 bigger vector
void mergeVectors(std::vector<double> &firstHalf, std::vector<double> &secondHalf, std::vector<double> &result) {
    result.reserve(firstHalf.size() + secondHalf.size());

    //Saving indices so that we don't have to delete the first element in the vector every time we move one element
    //to the result vector, since that's really inefficient
    int firstHalfIndex = 0;
    int secondHalfIndex = 0;

    while(firstHalf.size() > firstHalfIndex || secondHalf.size() > secondHalfIndex) {
        if(firstHalf.size() > firstHalfIndex && secondHalf.size() > secondHalfIndex) {
            if(firstHalf.at(firstHalfIndex) <= secondHalf.at(secondHalfIndex)) {
                result.push_back(firstHalf.at(firstHalfIndex));
                firstHalfIndex++;
            }
            else {
                result.push_back(secondHalf.at(secondHalfIndex));
                secondHalfIndex++;
            }
        }
        else if(firstHalf.size() > firstHalfIndex) {
            result.push_back(firstHalf.at(firstHalfIndex));
            firstHalfIndex++;
        }   
        else {
            result.push_back(secondHalf.at(secondHalfIndex));
            secondHalfIndex++;
        }
    }
}

void sorting::singlethreaded::mergeSort_numeric(std::vector<double> &inputList, std::vector<double> &result) {
    if(inputList.size() > 1) {
        //Initializing firstHalf and secondHalf with vector range constructor
        auto middleIterator = inputList.begin() + (int(inputList.size()) / 2);
        std::vector<double> firstHalf(inputList.begin(), middleIterator);
        std::vector<double> secondHalf(middleIterator, inputList.end());

        std::vector<double> firstHalfSorted;
        firstHalfSorted.reserve(firstHalf.size());
        mergeSort_numeric(firstHalf, firstHalfSorted);

        std::vector<double> secondHalfSorted;
        secondHalfSorted.reserve(firstHalf.size());
        mergeSort_numeric(secondHalf, secondHalfSorted);

        mergeVectors(firstHalfSorted, secondHalfSorted, result); 
    }
    //Base case
    else {
        result = inputList;
    }
}