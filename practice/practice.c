#include <unistd.h>
#include "main.h"


int _putchar(char c){
    return (write(1, &c, 1));
}

void puts2(char *str)
{
    int index = 0;

    while(str[index] != '\0')
    {
        if(index % 2 == 0)
        {
            _putchar(str[index]);
        }
        index++;
    }
    _putchar('\n');
}