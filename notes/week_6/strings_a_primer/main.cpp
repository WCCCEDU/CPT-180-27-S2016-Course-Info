#include <iostream>

int main() {
    char word[10];
    word[0] = 'h';
    word[1] = 'e';
    word[2] = 'l';
    word[3] = 'l';
    word[4] = 'o';
    word[5] = '\0';
    word[6] = 'w';

    char initializer_word[3] = {'h','o','w'};

    // letters are numbers O_o
    char cornfusing[5] = {1,2,3,4,5};


    char *letters = new char[6];
    letters[2];

    char thing[10] = {'1','2','3','4','5','6','7','8','9','0'};
    char thing2[10];

    *thing2 = *thing;

    std::cout << "subscript 0 " << thing[0] << " " << thing2[0] << std::endl;
    thing2[1] = '\0';
    std::cout << "subscript 1 "<< thing[1] << " " << thing2[1] << std::endl;
    std::cout << "cstrings? " << thing << " " << thing2 << std::endl;

    char thing3[10] = {'1','2','3','4','5','6','7','8','9','\0'};
    char thing4[10] = {'1','2','3','4','5','6','7','8','9','\0'};
    bool yes = thing3 == thing4;
    bool no = thing2 == thing4;

    std::cout << "true? " << yes << " false? " << no << std::endl;
    bool same = true;
    for(int i = 0; i < 10; i++){
        same = thing3[i] == thing4[i];
    }
    std::cout << same << std::endl;

    strcmp(thing3, thing4);

    if(strcmp(thing2, thing4) == 0){
        std::cout << "SAME" << std::endl;
    }else{
        std::cout << "DIFFERENT" << std::endl;
    }

    int* nil = 0;

    char * sub = strstr(thing3, "23");

    if(sub == nullptr){
        std::cout << "NOT FOUND" << std::endl;
    }else {
        std::cout << sub << std::endl;
    }

    return 0;
}
