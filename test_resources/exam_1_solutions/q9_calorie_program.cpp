#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

const int DAILY_CALORIES = 2000;

int main(){
  cout << "Blimey you are looking fit! Wanna go on a date!" << endl;

  double total_calories = 0;

  string food_name;
  do{
    double calories = 0;
    cout << "What did you eat?" << endl;
    getline(cin, food_name);

    if(food_name != ""){
      cout << "How many calories was that?" << endl;
      cin >> calories;
      cin.ignore(1,'\n');
      total_calories += calories;
    }
  }while(food_name != "");

  cout << "Total calories consumed: " << total_calories << endl;
  int percentage = (total_calories / DAILY_CALORIES) * 100;
  cout << "This is " << percentage << "% of your daily allowance" << endl;
}
