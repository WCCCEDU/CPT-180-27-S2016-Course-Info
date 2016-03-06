#include <iostream>

int main() {
    const int SIZE = 10;
    int unsorted[SIZE] = {5,3,1,6,8,2,9,0,4,7};

    for(int i = 0; i < SIZE - 1; i++){
        int current_pos = i;
        for(int j = i + 1; j < SIZE; j++){
            if(unsorted[j] < unsorted[current_pos]){
                current_pos = j;
            }
            //std::cout << unsorted[i] << " " << unsorted[j] << std::endl;
        }
        int temp = unsorted[i];
        unsorted[i] = unsorted[current_pos];
        unsorted[current_pos] = temp;
     }

    for(int i = 0; i < SIZE; i++){
        std::cout << unsorted[i] << std::endl;
    }

    return 0;
}
