#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    #define DUDES 4;
    #define NEWLINE "\n";

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;
    //
    cout << DUDES;
    cout << NEWLINE;
}