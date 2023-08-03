#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

unsigned int binary_to_uint(const char *b); /*task 0*/
void print_binary(unsigned long int n); /*task 1*/
int get_bit(unsigned long int n, unsigned int index); /*task 2*/
int set_bit(unsigned long int *n, unsigned int index); /*task 3*/
int clear_bit(unsigned long int *n, unsigned int index); /*task 4*/
unsigned int flip_bits(unsigned long int n, unsigned long int m); /*task 5*/
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void); /*task 6*/

#endif
