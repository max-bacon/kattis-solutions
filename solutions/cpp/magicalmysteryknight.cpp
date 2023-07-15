// https://open.kattis.com/problems/magicalmysteryknight
// Difficulty: 9.6 (Hard)

#include <iostream>
#include <vector>

using namespace std;

class Node
{
    public:
        int position;
        int value;

        Node(int pos, int val);
};

Node::Node(int pos, int val)
{
    position = pos;
    value = val;
}

vector<Node*>* collectInputs()
{
    vector<Node*>* input;

    for (int i = 0; i < 63; i++)
    {
        cout << i;
        int in;
        cin >> in;
        
        (*input).push_back(new Node(i, in));
    }

    return input;
}

void printData(vector<Node*>* output)
{
    
    for (int i = 0; i < 63; i++)
    {
        Node outNode = *(*output).at(i);

        cout << outNode.value;

        if (i % 8 == 7)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }
}

int main()
{
    vector<Node*> input = *collectInputs();


    for (int i = 0; i < 63; i++)
    {
        Node outNode = *input.at(i);

        cout << outNode.value;

        if (i % 8 == 7)
        {
            cout << endl;
        }
        else
        {
            cout << " ";
        }
    }

    printData(&input);
    return 0;
}