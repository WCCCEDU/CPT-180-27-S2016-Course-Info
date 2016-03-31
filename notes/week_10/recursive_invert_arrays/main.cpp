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

// Performance of this in O would be different given the array is even or odd
// Assuming n is the length of the array
// Odd: O((n-1)/2) Or half of the items -1
// Even: O(n/2)
// The impact of this is that the odd arrays have the same performance as an even one
// Since BigO is about worst case we would refer only to the bigger one
// Thus O(n/2)

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
