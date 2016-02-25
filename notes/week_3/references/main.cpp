#include <iostream>

using std::cout;
using std::endl;

void by_reference(int butt, int *butt2);

int main() {
    cout << "Hello, World!" << endl;
    int* butts;
    int ten = 10;
    butts = &ten;
    by_reference(5, butts);
    cout << *butts << endl;
    return 0;
}

void by_reference(int butt, int *butt2){
    *butt2 = butt+1;
}
