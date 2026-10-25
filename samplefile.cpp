#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"This", "is", "a", "sample file", "to ensure", "everything works."};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
