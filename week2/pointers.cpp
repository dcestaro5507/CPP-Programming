#include <iostream>
using namespace std;

int main() {
    int a = 100;
    
    // Print address in memory of variable a
    cout << &a << endl;

    // Create a variable (pointer variable) which stores memory address
    // <data_type> *pointer_name;
    int *a_ptr = &a;
    cout << a_ptr << endl;

    // Access data through the pointer
    // * - dereferencing operator
    // Indirect access
    cout << *a_ptr << endl;

    // Modify the data through the pointer
    *a_ptr = 999;
    cout << a << endl;


    return 0;
}