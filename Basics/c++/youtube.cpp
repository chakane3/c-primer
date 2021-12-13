#include <iostream>
/*
std is a namespace (container?), which is a grouping of code which prevents naming conflicts
std = standard library - so we use cout from the C standard library and not someone elses cout

you could use: using namespace std;

cout is considered an object which is an instance of "ostream"

*/
int main()
{
    // << is an operator which feeds an operand to cout
    std::cout << "Hello, world" << std::endl;
    return 0;
}
