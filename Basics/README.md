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
More can be found about these header files <link href="https://www.cplusplus.in/c-standard-library/">here</link>