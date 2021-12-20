#include <iostream>
#include <string>
/*
std is a namespace (container?), which is a grouping of code which prevents naming conflicts
std = standard library - so we use cout from the C standard library and not someone elses cout

you could use: using namespace std;

cout is considered an object which is an instance of "ostream"

*/
int main()
{

    using namespace std;
    // << is an operator which feeds an operand to cout
    cout << "Hello, world" << endl; 

    // getting user input
    int userInput;
    cin >> userInput;
    cout << userInput << endl;
    
    cout << greeting[0] << endl;

    string greeting = "hello";


    return 0;
}
