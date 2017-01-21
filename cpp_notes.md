## Variable Naming

* Letter, numbers and underscores valid
* Most start with a lowercase letter and separated by underscores
* Initial capital for types we define
* All Caps reserved for macros
* Initial underscore reserved

## Types and objects

* A *type* defines a set of possible values and a set of operations (for an object).
* An *object* is some memory that holds a value of a given type.
* A *value* is a set of bits in memory interpreted according to a type.
* A *variable* is a named object.
* A *declaration* is a statement that gives a name to an object.
* A *definition* is a declaration that sets aside memory for an object.

- Every int is of the same size; the compiler sets aside the same fixed amount of memory for each int (4 bytes / (2^4) or 32 bits)
- A computer usually uses a byte (8 bits) for a bool of char and 8 bytes for a double.
- A string object differs because it takes up different amounts of space
- A string keeps track of the number of characters it holds
- So the bits in memory is completely dependent on the type used to access it
    - Ex: the same bits of memory that represent the value 120 when look upon as an int, would be 'x' when looked up as a char
    - 00000000 00000000 00000000 01111000
- A bit is a unit of computer memory that can hold the value 1 or 0.


int length = 20;
"Length is the name of an object of type int containing the value 20."

Read up to 4.6 -- Vector
