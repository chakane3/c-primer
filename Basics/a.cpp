#include <iostream>
// #include <stdio.h>
int main(int argc, char *argv[]) 
{
    using namespace std;
    cout << "Hello, Chakane" << endl;
    cout << "You wont regret it" << endl;
    int x = 5;
    int *y = &x;
    cout << *y << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;
    cout << sizeof(*y) << endl;

    // for(int i = 0; i < argc; ++i)
    // {
    //     cout<<"This is part of of argv[]: ";
    //     cout << argv[i] << endl;
    // }
    return 0;
}
