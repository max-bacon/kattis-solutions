// https://open.kattis.com/problems/nsum
// Difficulty: 1.3 (Easy)

#include <iostream>
using namespace std;

int main(){
    int len;
    cin >> len;

    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        int x;
        cin >> x;
        sum += x;
    }

    cout << sum;

    return 0;
}