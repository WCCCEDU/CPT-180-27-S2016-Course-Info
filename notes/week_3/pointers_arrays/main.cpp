#include <iostream>
#include "calorie.h"

int main() {
    std::string *words;
    std::string word_data[5];
    words = word_data;
    words[0] = "How";
    words[1] = "now";
    words[2] = "stop";
    words[3] = "anticipating";
    words[4] = "MOOOOOOOO!";z
    std::cout << words[1];
    return 0;
}

std::string* getData(){
    std::string *data;
    return data;
}
