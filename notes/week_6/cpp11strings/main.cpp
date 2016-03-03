#include <iostream>
#include <string>

int main() {
    std::string thing("Hello");
    std::string word;

    //getline(std::cin, thing);
    int number = atoi(thing.c_str());
    double double_number = atof(thing.c_str());

    //getline(std::cin, word);
    word = "bird";

    //std::cout << word << " | " << thing + "hi" << " | " << number + '1';

    //std::cout << word[0] << std::endl;

    for(int i = word.size() - 1; i >= 0; i--){
        std::cout << word[i];
    }
    std::cout << std::endl;

    std::string reversed_word;
    int counter = 0;
    for(int i = word.size() - 1; i >= 0; i--){
        std::cout << i << " " << counter << " " << word.size() <<  std::endl;
        reversed_word += word[i];
        //reversed_word[counter++] = word[i];
    }
    std::cout << reversed_word << std::endl;
    return 0;
}
