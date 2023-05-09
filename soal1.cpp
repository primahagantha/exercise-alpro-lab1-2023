#include <iostream>
#include <vector>

using namespace std;

void eraseDuplicate(vector<int> &myVector)
{
    int n = myVector.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (myVector[i] == myVector[j])
            {
                myVector.erase(myVector.begin() + j);
                n--;
                j--;
            }
        }
    }
}

int main()
{
    vector<int> myVector = {1, 2, 2, 3, 4, 5, 5};
    cout << "Before : ";
    for (int loopVector : myVector){
        cout << loopVector << " ";
    }
    
    eraseDuplicate(myVector);
    cout << endl << "After  : ";
    for (int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << " ";
    }
}