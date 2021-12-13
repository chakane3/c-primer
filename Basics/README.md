# Hello World
This is a simple hello world program in C++

```c++
#include <stdio.h>
#include <iostream>
int main() 
{
    using namespace std;
    cout << "Hello, World" << endl;
    return 0;
}
```

The first thing we see is that we included <b>stdio.h</b> and iostream.
Stdio.h is our standard input and output header file. 
It declares many functions that we can use in our programs. We mainly use this to perform input and output operations. <br></br>
Theres other types of header files we can use:
| Header file | Purpose |
| --- | --- |
|conio.h|Used to perform console input and console output operations|
|string.h|Used to perform string manipulation (i.e strlen(), strcpy())|
|stdlib.h|Used to perform standard utility functions like dynamic memory allocation using functions like malloc() and calloc()|
|math.h|Used to perform mathematical opeations (i.e sqrt(), pow())|
|time.h|Used to perform functions related to date and time (i.e setdate(), getdate())|
|ctype.h|Used to perform character type functions like isalpha() and iddigit()|

More can be found about these header files <a href="https://www.cplusplus.in/c-standard-library/">here</a><br></br>
We also use <b>iostream</b> in out code as well. This allows us to use classes that provide operations on character streams. Because of this we can use: cout, endl, cin

## Data and Memory
Its important to know how memory is organized. All data values in a computer are stored in the form of bits - a unit of memory with 2 possible states(0 or 1, binary digit). However a binary digit holds very little info, so we combine bits that form bytes (large enough to hold a char, 8 bits). On alot of machines bits are grouped into words (large enough to hold an int, 2 byte word=16 or 4 byte word=32 bits).

### Memory addresses
Every byte is identified by a numeric address within a memory system. Think of these address as a stack starting at 0 to n (depending on on how much memory space the computer has). You can determine how much memory will be assiged to a particular variable by using  the <b>sizeof</b> operator (it returns the number of bytes required to store the value of that expression)

### Pointers
In c++ memory locations have addresses that are visible to us. Alot og opther programming langages such as Java hides the use of pointers for us. Pointers allow us to refer to a large data structure in a compact way. It allows us to use the address as a shorthand for the complete value. Pointers make it possible to reserve new memory during program execution. They can also be used to record relationships among data items.<br></br>
One of the main reasons we use pointers is to have multiple references to the same thing. Think about how we use inout in swift to manipulate data outside a function. Anytime er manipulate dymanic memory where we have to manage our memory we would use pointers. 

### Declaring Pointer variables
Use use an asterisk (*) to declare a pointer variable

```c++
int *p;
```

We typically look at & - being the "address-of". And * - being the "value pointed to"

