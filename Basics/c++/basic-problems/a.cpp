#include <iostream>
#include <string>

int returnNumber();
int addTwoNumbers();
using namespace std;

int main() 
{
    using namespace std;
    // int returnNum = returnNumber();
    // cout << "The user gave input: " << returnNum << endl;

    // int addTwo = addTwoNumbers();
    // cout << "The result is: " << addTwo << endl;

    

}

// get the user to give input on the console and print it out
int returnNumber()
{
    using namespace std;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    return number;
}

int addTwoNumbers()
{
    using namespace std;
    int l, r;
    cout << "Enter a number: ";
    cin >> l;

    cout << "Enter another number: ";
    cin >> r;
    return l+r;
}