#include <iostream>
#include "./main.h"

void edit_name(config &user_config, std::string new_name);
int add(int &number1, int &number2);

int main() {
    config user_config;
    user_config.name = "Paul Scarrone";
    user_config.cypher = "lol_nope";
    user_config.email = "paul@nope.com";
    user_config.timzone = "-5";
    user_config.known_recipients_file = "./known_recipients";

    edit_name(user_config, "BOB");

    std::cout << user_config.name << std::endl;

    int number1 = 10;
    int number2 = 5;

    int result = add(number1, number2);
    result = add(number1, number2);
    result = add(number1, number2);
    result = add(number1, number2);
    result = add(number1, number2);

    std::cout << number1 << " " << number2 << " " << result << std::endl;

    return 0;
}

int add(int &number1, int &number2){
    number1 = number1 + 10;
    return number1 + number2;
}

void edit_name(config &user_config, std::string new_name){
    user_config.name = new_name;
}
