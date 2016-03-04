#include <iostream>
#include <string>

int ctoi(char c);

int main() {
    std::string numbers_with_spaces = "1 2 3 4 5 6";
    const int LENGTH = numbers_with_spaces.size();

    int *numbers = new int[LENGTH];
    char *tokens = strtok((char *)numbers_with_spaces.c_str(), " ");
    int counter = 0;
    while(tokens){
        numbers[counter++] = ctoi(*tokens);
        tokens = strtok(NULL, " ");
    }

    std::cout << numbers[2];

    return 0;
}

int ctoi(char c){
    return c - '0';
}
