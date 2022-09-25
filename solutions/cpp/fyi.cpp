// https://open.kattis.com/problems/fyi
// Difficulty: 1.3 (Easy)

#include <iostream>
using namespace std;

int main()
{
    string target = "555";
    string phoneNumber;

    cin >> phoneNumber;
    
    if (phoneNumber.substr(0, 3) == target)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }

    return 0;
}