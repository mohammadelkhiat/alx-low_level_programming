# 0x14. C - Bit manipulation
## In this project we will work on bitwise operation (manipulation).
#### By Mohammad Elkhiat ####


### AS usual we will create the README.md -this file- and the header file (main.h) first then see what are the tasks.

---

### The tasks are

### 0. 0
- [mandatory]
- Write a function that converts a binary number to an unsigned int.

- Prototype: unsigned int binary_to_uint(const char *b);
- where b is pointing to a string of 0 and 1 chars
- Return: the converted number, or 0 if
					there is one or more chars in the string b that is not 0 or 1
					b is NULL
Its file - 0-binary_to_uint.

### 1. 1
- [mandatory]
- Write a function that prints the binary representation of a number.

- Prototype: void print_binary(unsigned long int n);
- Format: see example
- You are not allowed to use arrays
- You are not allowed to use malloc
- You are not allowed to use the % or / operatorsc
Its file - 1-print_binary.c

### 2. 10
- [mandatory]
- Write a function that returns the value of a bit at a given index.

- Prototype: int get_bit(unsigned long int n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to get
- Returns: the value of the bit at index index or -1 if an error occured
Its file - 2-get_bit.c

### 3. 11
- [mandatory]
- Write a function that sets the value of a bit to 1 at a given index.

- Prototype: int set_bit(unsigned long int *n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred
Its file - 3-set_bit.c

### 4. 100
- [mandatory]
- Write a function that sets the value of a bit to 0 at a given index.

- Prototype: int clear_bit(unsigned long int *n, unsigned int index);
- where index is the index, starting from 0 of the bit you want to set
- Returns: 1 if it worked, or -1 if an error occurred
Its file - 4-clear_bit.c
