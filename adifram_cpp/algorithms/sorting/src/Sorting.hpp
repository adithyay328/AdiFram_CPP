#pragma once

#include <vector>

namespace sorting {
    namespace singlethreaded {
        template <typename T>
        void selectionSort_numeric(std::vector<T>& inputList);

        template <typename T>
        void insertionSort_numeric(std::vector<T>& inputList);

        template <typename T>
        void mergeSort_numeric(std::vector<T>& inputList, std::vector<T>& result);
    }
}

#include "SelectionSort.cpp"
#include "InsertionSort.cpp"
#include "MergeSort.cpp"