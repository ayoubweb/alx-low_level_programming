#include <unistd.h>

/**
 * _putchar - write c
 * Return: on 1
 * 
 */

 int _putchar (char ch)
 {
    return(write(1,&ch,1));
 }