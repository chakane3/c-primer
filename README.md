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


## Pointer/reference data types
C++ provides 2 data types that give access to an item of data. 
<b>*</b> is used to specify a pointer data type. This defines a data type that is the <b>address</b> of an item of a specified data type. 
For example, <b>int *</b> specifies a data type that is the address of an integer<br></br>
<b>&</b> is a reference type which is used to create a new name or alias for a data item. For example, <b>float &</b> specifies an object that references a float item. 
