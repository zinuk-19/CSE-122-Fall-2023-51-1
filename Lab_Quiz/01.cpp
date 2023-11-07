#include <bits/stdc++.h>
#include <vector>
using namespace std;
class Array
{
private:
    vector<int> intArray;
    vector<char> charArray;
public:
    void insert(int index, int value)
    {
        if (index >= 0 && index <= intArray.size())
        {
            intArray.insert(intArray.begin() + index, value);
        }
        else
        {
            cout << "Invalid index for integer array insertion." <<endl;
        }
    }

    void insert(int index, char value)
    {
        if (index >= 0 && index <= charArray.size())
        {
            charArray.insert(charArray.begin() + index, value);
        }
        else
        {
            cout << "Invalid index for character array insertion." << std::endl;
        }
    }

    void display()
    {
        cout << "Integer Array: ";
        for (int num : intArray)
        {
            cout << num << " ";
        }
        cout << endl;

        cout << "Character Array: ";
        for (char ch : charArray)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
};

int main()
{
    Array myArray;
    myArray.insert(0, 42);
    myArray.insert(1, 'A');
    myArray.insert(1, 10);
    myArray.display();
    return 0;
}

