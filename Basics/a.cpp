#include <iostream>
int main(int argc, char *argv[]) 
{
    using namespace std;
    cout << "Hello, Chakane" << endl;
    cout << "You wont regret it" << endl;

    for(int i = 0; i < argc; ++i)
    {
        cout<<"This is part of of argv[]: ";
        cout << argv[i] << endl;
    }
    return 0;
}
