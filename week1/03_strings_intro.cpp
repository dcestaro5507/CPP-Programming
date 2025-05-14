#include <iostream>
#include <string>
using namespace std;


int main(){
    // Create a string
    string s1;
    s1 = "Hello!";
    cout << s1 << endl;

    string s2(s1);
    cout << s2 << endl;

    //initializing a string with a certain number of characters
    string s3(100, '#');
    cout << s3 << endl;


    s1 += s2;

    //initialization with a part of the string
    string s4(s1, 4, 5); // start with index 4 and take 5 characters
    cout << s4 << endl;




    return 0;
}