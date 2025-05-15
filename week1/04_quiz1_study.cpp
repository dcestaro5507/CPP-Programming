#include <iostream>
#include <string>
using namespace std;

int main(){

    int count;
    count ++;
    int& r = count; // int& is a refernce variable. Should initialize one.
    //you can't change the value of a reference variable.

r = 10;

cout << "r " << r << endl;
cout << "count " << count << endl;

    return 0;
}