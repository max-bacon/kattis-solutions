// https://open.kattis.com/problems/princesspeach
// Difficulty: 2.2 (Easy)

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int totalNumbers;
    cin >> totalNumbers;

    int totalFound;
    cin >> totalFound;

    vector<int> found;

    int mistakes = 0;
    for(int i = 0; i < totalFound; i++)
    {
        bool foundMistake = false;
        int foundNum;
        cin >> foundNum;

        for(int j = 0; j < found.size(); j++)
        {
            if (foundNum == found.at(j))
            {
                foundMistake = true;
                mistakes++;
                break;
            }
            else
            {
                continue;
            }
        }

        if (!foundMistake)
        {
            found.push_back(foundNum);
        }
    }

    for(int i = 0; i < totalNumbers; i++)
    {
        bool foundMistake = false;
        for(int j = 0; j < found.size(); j++)
        {
            if (i == found[j])
            {
                foundMistake = true;
                break;
            }
            else
            {
                continue;
            }
        }

        if (!foundMistake)
        {
            cout << i << endl;
        }
    }

    cout << "Mario got " << totalFound - mistakes << " of the dangerous obstacles." <<endl;

    return 0;
}