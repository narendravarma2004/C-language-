#include <stdio.h>
#include <string.h>

Void reverse(char *str);

Int main()
{
    Char str[100];
    Printf(“Enter any String :: “);
    Scanf(“%s”, str);
    Reverse(str);
    Printf(“The Reverse of the String [ %s ] is :: %s\n”, str, str);
    Return 0;
}

Void reverse(char *str)
{
    Int length = strlen(str);
    Char *begin = str;
    Char *end = str + length – 1;
    Char temp;
    While (begin < end)
    {
        Temp = *begin;
        *begin = *end;
        *end = temp;
        Begin++;
        End--;
    }
}

