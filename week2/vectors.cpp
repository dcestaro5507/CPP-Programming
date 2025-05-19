#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> v);

void rotateRight(vector<int>& v, int k);

int main(){
    vector<int> v {1, 2, 3, 4, 5, 6};

    v.push_back(7);

    cout << v.size() << endl;

    rotateRight(v, 2);

    print(v);

    return 0;
}


void print(vector<int> v) {
    for(int i : v) {
        cout << i << ' ';
    }
    cout << endl;
}

void rotateRight(vector<int>& v, int k) {
    k %= v.size();
    while (k > 0) {
        int first = v.front(); // returns the first element of the vector
        v.push_back(first); // adds to the end of the vector
        v.erase(v.begin()); // deletes the first element of the vector
        k--;
    }
}