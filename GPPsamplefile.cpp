#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Another", "sample,", "this time", "compiled", "with", "G++"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
}
