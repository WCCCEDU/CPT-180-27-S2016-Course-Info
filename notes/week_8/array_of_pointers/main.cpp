#include <iostream>

struct house{
    std::string address;
    std::string owner;
    int age_in_years;
};

struct countable{
    char letter;
    int count;
};

int main() {
    house *house_ptr = nullptr;
    house house1 = {"101 N Main", "Paul", 97};
    /* Initializer list is same as below
    house.address = "101 N Main";
    house.owner = "Paul";
    house.age = 97;
    */
    house_ptr = &house1;

    // The original Struct
    house1.owner;
    (*house_ptr).owner;
    house_ptr->owner;

    const int SIZE = 2;

    house *houses = nullptr;
    houses = new house[SIZE];

    houses[0].owner;
    houses[1].address;

    std::string letters = "how now brown cow";
    int letter_count = letters.size();

    countable *countables = nullptr;
    countables = new countable[letter_count];
    int how_many = 0;

    for(int i = 0; i < letter_count; i++){
        char letter = letters[i];
        bool counted_letter = false;
        for(int j = 0; j < letter_count; j++){
            if(countables[j].letter == letter) {
                countables[j].count++;
                counted_letter = true;
            }
        }
        if(!counted_letter){
            countables[how_many] = {letter, 1};
            how_many++;
            //countables[how_many].letter = letter;
            //countables[how_many].count = 1;
        }
    }

    std::cout << countables[0].letter << ":" << countables[0].count;
    std::cout << countables[1].letter << ":" << countables[1].count;

    return 0;
}
