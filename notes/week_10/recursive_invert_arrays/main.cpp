#include <iostream>

void reverse(int numbers[], int begin, int length);
void swap(int numbers[], int index1, int index2);

int main() {
    int numbers[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    reverse(numbers, 0, 11);
    for(int i = 0; i < 11; i++){
        std::cout << numbers[i] << std::endl;
    }
    return 0;
}

void reverse(int numbers[], int begin, int length){
    int end = length - 1 - begin;
    if(end - begin > 0){
        swap(numbers, begin, end);
        reverse(numbers, begin + 1, length);
    }
}

void swap(int numbers[], int index1, int index2){
    int swap = numbers[index1];
    numbers[index1] = numbers[index2];
    numbers[index2] = swap;
}
