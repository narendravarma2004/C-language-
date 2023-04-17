#include <stdio.h>
#include <string.h>

Int main()
{
    FILE *fp_input, *fp_error;
    Char line[100];

    Fp_input = fopen(“input.txt”,”r”);
    Fp_error = fopen(“error_log.txt”,”w”);

    If(fp_input == NULL || fp_error == NULL)
    {
        Printf(“Error opening file!\n”);
        Return 1;
    }

    While(fgets(line, 100, fp_input) != NULL)
    {
        If(strstr(line,”error”) != NULL)
        {
            Fputs(line, fp_error);
        }
    }

    Fclose(fp_input);
    Fclose(fp_error);

    Fp_error = fopen(“error_log.txt”,”r”);

    While(fgets(line, 100, fp_error) != NULL)
    {
        Printf(“%s”, line);
    }

    Fclose(fp_error);

    Return 0;
}

