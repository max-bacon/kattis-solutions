// https://open.kattis.com/problems/findingana
// Difficulty: 1.3 (Easy)

#include <iostream>
using namespace std;

int main(){
    string input;
    cin >> input;

    cout << input.substr(input.find("a"), input.length());

    return 0;
}