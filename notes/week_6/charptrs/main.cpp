#include <iostream>
#include <string>

std::string doop(std::string str){
    return str;
}

int main() {
    char* word_c_str = "thing";
    char thing[10] = {'1','2','3','4','5','6','7','8','9','0'};
    char thing2[10];
    char thing4[10] = {'1','2','3','4','5','6','7','8','9','0'};
    *thing2 = *thing;
    std::string thing3 = thing;
    bool yes = thing == thing2;
    bool no = thing == thing4;
    std::cout << yes << no << false << thing[2] << thing2[0] << std::endl;
    std::string word_string = "otherThing";
    std::cout << word_c_str[0] << " " << word_string[0] << std::endl;
    std::string butt = "thing";
    std::string butts = doop("HI");

    return 0;
}

