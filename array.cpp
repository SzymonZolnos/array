//
// Created by szych on 08.06.2024.
//

#include "array.h"
#include <iostream>
void displayArray(int *array){
    for (int i = 0; i < SIZE; ++i) {
        printf("*(array + %d) = %d\n",i, *(array+i));
    }
}

float calcAverage(int *array){
    int sum = 0;
    for (int i = 0; i < SIZE; ++i) {
        sum+= *(array+i);
    }
    return (float) sum / SIZE;
}

int calcMin(int *array){
    int min = *array;
    for (int i = 1; i < SIZE; ++i) {
        if(*(array + i) < min)
            min = *(array + i);
    }
    return min;
}
int calcMax(int *array){
    int max = *array;
    for (int i = 1; i < SIZE; ++i) {
        if(*(array + i) > max)
            max = *(array + i);
    }
    return max;
}

void fetchData(int *array){
    for (int i = 0; i < SIZE; ++i) {
        printf("*(array + %d) = ", i);
        scanf("%d", (array + i));
    }
}
