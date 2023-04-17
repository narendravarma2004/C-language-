#include <stdio.h>
#include <string.h>

#define MAX_LEN 1000

Int main()
{
    Char filename[100];
    Char search_str[MAX_LEN];
    Char buffer[MAX_LEN];
    FILE *fp;

    Printf(“Enter the name of the file: “);
    Scanf(“%s”, filename);

    Printf(“Enter the search string: “);
    Scanf(“%s”, search_str);

    Fp = fopen(filename, “r”);

    If (fp == NULL)
    {
        Printf(“Error opening file %s.\n”, filename);
        Return 1;
    }

    While (fgets(buffer, MAX_LEN, fp))
    {
        If (strstr(buffer, search_str) != NULL)
        {
            Printf(“%s”, buffer);
        }
    }

    Fclose(fp);

    Return 0;
}

