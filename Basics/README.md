# Basic things

<details>
<summary>declaring contstants 2</summary>

```c++
int main() 
{
    int NUMBER = 99;
}
```
</details>

## making a simple project
This example goes over typing a name, and the output is the name, time and date; all on the commabnd line.

We need the help of input/out streams, string type, and C time+date functions

Below would be our header file which we can store as <b>utils.h</b>
```c++

// this file is utils.h
#include <iostream>
#include <string>
#include <ctime>

```

In our source file we can add

```c++
// this file is utils.cpp
#include "utils.h"
```




We can decalre a constant in 2 ways

<details>
<summary>declaring contstants 1</summary>

```c++
#include <iostream>
#define NUMBER 4
int main()
{
    using namespace std;
    int main()
    {
        cout << NUMBER << endl;
    }
}
```
</details>
