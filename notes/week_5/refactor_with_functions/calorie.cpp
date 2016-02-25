#include <iostream>
#include "./calorie.h"

using std::cin;
using std::cout;
using std::endl;
using std::string;

void main(){
  cout << "Blimey you are looking fit! Wanna go on a date!" << endl;

  double total_calories = promptForFood();

  cout << "Total calories consumed: " << total_calories << endl;
  int percentage = percentageOfDailyCalories(total_calories);
  cout << "This is " << percentage << "% of your daily allowance" << endl;
}

string getFoodName(){
  string food_name;
  cout << "What did you eat?" << endl;
  getline(cin, food_name);
  return food_name;
}

double getCalories(){
  double calories = 0;
  cout << "How many calories was that?" << endl;
  cin >> calories;
  cin.ignore(1,'\n');
  return calories;
}

double promptForFood(){
  double total_calories = 0;
  string food_name;
  do{
    food_name = getFoodName();

    if(food_name != ""){
      total_calories += getCalories();
    }
  }while(food_name != "");
  return total_calories;
}

int percentageOfDailyCalories(double total_calories){
  return (total_calories / DAILY_CALORIES) * 100;
}
