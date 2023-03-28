#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdarg.h>

/* To be created in 0x01-put.c file */
int _putc(char c);
int _puts(char *str);

/*
 * To be created in 0x01-puti.c.
 * File pour lire ecrire des entiers
*/
int _puti(int number);

/* To be created in 0x01-printf.c file*/
int _printf(char *format, ...);

/*
 * Function to be created in 0x01-putb.c file.
 * To convert and int number to binary
*/
int _putb(int num);

#endif
