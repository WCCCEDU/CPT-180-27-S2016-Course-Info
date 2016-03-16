#include <iostream>

int main(int argc, char* argv[]) {
    const int SIZE = argc - 1;
    int *values = new int[SIZE];

    for(int i = 1; i < argc; i++){
        values[i-1] = atoi(argv[i]);
    }

    for(int i = 0; i < SIZE - 1; i++){
        for(int j = 0; j < SIZE - i - 1; j++){
            if(values[j] > values[j+1]){
                int temp      = values[j];
                values[j]   = values[j+1];
                values[j+1] = temp;
            }
        }
    }

    for(int i = 0; i < SIZE; i++){
        std::cout << values[i];
    }
    std::cout << std::endl;

    return 0;
}
