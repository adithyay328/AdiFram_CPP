#pragma once

#include <vector>

namespace sorting {
    namespace singlethreaded {
        void selectionSort_numeric(std::vector<double>* inputList);
        void insertionSort_numeric(std::vector<double>* inputList);
        void mergeSort_numeric(std::vector<double> &inputList, std::vector<double> &result);
    }
}