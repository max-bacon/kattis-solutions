// https://open.kattis.com/problems/classy
// Difficulty: 4.0 (Medium)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    vector<int> data;
};

vector<string> split (string s, string delimiter) {
    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;

    while ((pos_end = s.find(delimiter, pos_start)) != string::npos) {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

bool comparitor(Person p1, Person p2)
{
    for (int i = 0; i < 10; i++)
    {
        if (p1.data[i] == p2.data[i])
        {
            continue;
        }
        else if (p1.data[i] > p2.data[i])
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    vector<string> s {p1.name, p2.name};
    sort(s.begin(),s.end());
    
    if (s[0] == p1.name)
    {
        return true;
    }
    return false;
}

int main()
{
    int testCases;
    cin >> testCases;

    for (int testCase = 0; testCase < testCases; testCase++)
    {
        int peopleCount;
        cin >> peopleCount;

        vector<Person> people;
        for (int i = 0; i < peopleCount; i++)
        {
            string name;
            string data;
            string n;
            cin >> name >> data >> n;
            name.pop_back();

            vector<string> dataVector = split(data, "-");
            
            reverse(dataVector.begin(), dataVector.end());
            
            Person newPerson;
            newPerson.name = name;
            for (auto j : dataVector)
            {
                if (j == "upper")
                {
                    newPerson.data.push_back(3);
                }
                else if (j == "middle")
                {
                    newPerson.data.push_back(2);
                }
                else
                {
                    newPerson.data.push_back(1);
                }
            }

            for (int j = newPerson.data.size(); j < 10; j++)
            {
                newPerson.data.push_back(2);
            }

            people.push_back(newPerson);
        }
        sort(people.begin(), people.end(), comparitor);
        for(auto i : people)
        {
            cout << i.name << endl;
        }

        cout << "==============================" << endl;
    }

    return 0;
}