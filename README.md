# c++ primer

c++ supports
<ul>
    <li>int - signed integer values</li>
    <li>float - 32 bit floating point values</li>
    <li>double - 64 bit double precision float value</li>
    <li>char - a one byte value</li>
    <li>void - represents nothing when used as a return type </li>
</ul>

## GCC and File Extensions
Heres all the file extensions we could use
| Extension | Meaning |
| --- | --- |
| .h | C header file (not compiled or linked) |
| .c | C source code that is pre processed |
| .i | C source code which isnt preprocessed |
| .cpp | C++ source code that is preprocessed |

## Compiliers
The compilier translates high level code into low level code. It can set up memory called, a stack frame. It will give u some erros should it come across one (mainly syntax). The ourput of a compilier is object code. 

The compilier also provides a <b>linker</b> that links object files into an executable.

## Running on macos (VScode)
Terminal:
```c++
make foo
```

Or we could use:
```c++
g++ -o foo foo.cpp
// or gcc?
```
Then we would run ./foo to see output

The difference between make and gcc is that gcc is a compilier to help us build programs. 

Make is a build tool that invokes a compilier in a particular sequence to compile multiple sources and link them together. 

**note when adding parameters use ./foo param1 param2 param3 after running gcc/make




## Pointer/reference data types
C++ provides 2 data types that give access to an item of data. 
<b>*</b> is used to specify a pointer data type. This defines a data type that is the <b>address</b> of an item of a specified data type. 
For example, <b>int *</b> specifies a data type that is the address of an integer<br></br>
<b>&</b> is a reference type which is used to create a new name or alias for a data item. For example, <b>float &</b> specifies an object that references a float item. 


## Passing Parameters between command line and executable
In our main function we may see this:

```c++
int main(int argc, char *argv[])
{
    // code ...
}

```

argc is an integer that tells us how many parameters were passed into the application. argv is an array of pointers to C strings in memory.

