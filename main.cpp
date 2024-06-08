#include <iostream>
#include "array.h"

void displayMenu(){
    printf("1. Wprowadz dane\n");
    printf("2. wyswietl dane\n");
    printf("3. oblicz srednia\n");
    printf("4. oblicz maksimum\n");
    printf("5. oblicz minimum\n");
    printf("0. koniec\n\n");
    printf("twoj wybor to: ");
}
void clear(){
    while (getchar() != '\n');
}

int main() {
    int array [SIZE] = {1,6,43,32,12,3,12,321,321,4};
    int input;

    do{
        displayMenu();
        scanf("%d", &input);
        clear();
        switch (input) {
            case 1:
                fetchData(array);
                break;
            case 2:
                displayArray(array);
                getchar();
                break;
            case 3:
                printf("Srednia wynosi %f\n", calcAverage(array));
                getchar();
                break;
            case 4:
                printf("maksimum wynosi: %d\n", calcMax(array));
                getchar();
                break;
            case 5:
                printf("minimum wynosi: %d\n", calcMin(array));
                getchar();
                break;
            default:
                printf("podano bledny wybor");
                break;
        }
        printf("\n\n\n\n\n\n");

    } while (input);

    return 0;
}