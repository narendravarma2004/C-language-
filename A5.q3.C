#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 1000

Int main()
{
    Char buffer[MAX_LEN];
    Char *input_file = “input.txt”;
    Char *output_file = “output.txt”;
    Char *search_word = “red”;
    Char *replace_word = “blue”;
    FILE *fp_input, *fp_output;

    Fp_input = fopen(input_file, “r”);

    If (fp_input == NULL)
    {
        Printf(“Error opening file %s.\n”, input_file);
        Return 1;
    }

    Fp_output = fopen(output_file, “w”);

    If (fp_output == NULL)
    {
        Printf(“Error opening file %s.\n”, output_file);
        Fclose(fp_input);
        Return 1;
    }

    While (fgets(buffer, MAX_LEN, fp_input))
    {
        Char *pos = strstr(buffer, search_word);
        While (pos != NULL)
        {
            Memcpy(pos, replace_word, strlen(replace_word));
            Pos = strstr(pos + strlen(replace_word), search_word);
        }
        Fputs(buffer, fp_output);
    }

    Fclose(fp_input);
    Fclose(fp_output);

    Printf(“File %s has been modified and saved to %s.\n”, input_file, output_file);

    Return 0;
}

