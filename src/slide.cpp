#include "slide.hpp"


void arrayShift(int arr[], int size, int shifts) {
    int temperature;
    for (int i = 0; i < shifts; i++) {
        temperature = arr[0];
        for (int j = 0; j < size - 1; j++) {
            arr[j] = arr[j + 1];
        }
        arr[size - 1] = temperature;
    }
}

