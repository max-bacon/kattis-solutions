// https://open.kattis.com/problems/electricaloutlets
// Difficulty: 1.3 (Easy)

#include <iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;

    for(int testCase = 0; testCase < testCases; testCase++)
    {
        int sum = 0;
        int numbers;
        cin >> numbers;

        for(int i = 0; i < numbers; i++)
        {
            int num;
            cin >> num;

            sum += num;
        }

        cout << sum + 1 - numbers << endl;
    }

    return 0;
}