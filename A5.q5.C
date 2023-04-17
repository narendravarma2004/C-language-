#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 1000

Int main()
{
    Char filename[100];
    Char buffer[MAX_LEN];
    FILE *fp_in;
    FILE *fp_out;
    Int counts[26] = {0};
    Int c;

    Printf(“Enter the name of the input file: “);
    Scanf(“%s”, filename);

    Fp_in = fopen(filename, “r”);

    If (fp_in == NULL)
    {
        Printf(“Error opening file %s.\n”, filename);
        Return 1;
    }

    While ((c = fgetc(fp_in)) != EOF)
    {
        If (isalpha©)
        {
            Counts[tolower© - ‘a’]++;
        }
    }

    Fclose(fp_in);

    Fp_out = fopen(“statistics.txt”, “w”);

    If (fp_out == NULL)
    {
        Printf(“Error creating file statistics.txt.\n”);
        Return 1;
    }

    Fprintf(fp_out, “Letter\tFrequency\n”);

    For (int I = 0; I < 26; i++)
    {
        Fprintf(fp_out, “%c\t%d\n”, ‘a’ + I, counts[i]);
    }

    Fclose(fp_out);

    Printf(“Statistics have been written to the file statistics.txt.\n”);

    Return 0;
}

