#include <iostream>

int main() {
    const int SIZE = 10;
    int unsorted[SIZE] = {5,3,8,4,1,2,9,6,0,7};

    for(int i = 0; i < SIZE - 1; i++){
        for(int j = 0; j < SIZE - i - 1; j++){
            if(unsorted[j] > unsorted[j+1]){
                int temp      = unsorted[j];
                unsorted[j]   = unsorted[j+1];
                unsorted[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < SIZE; i++){
        std::cout << unsorted[i] << std::endl;
    }

    return 0;
}
