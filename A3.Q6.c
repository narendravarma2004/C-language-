#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

Int main() {
    Char str1[MAX_SIZE], str2[MAX_SIZE];
    Int freq1[26] = {0}, freq2[26] = {0};
    Int I, len1, len2, flag = 1;

    Printf(“Enter first string: “);
    Gets(str1);

    Printf(“Enter second string: “);
    Gets(str2);

    Len1 = strlen(str1);
    Len2 = strlen(str2);
    If(len1 != len2) {
        Flag = 0;
    } else {
        // calculate frequency of each character in both strings
        For(I = 0; I < len1; i++) {
            Freq1[str1[i] – ‘a’]++;
            Freq2[str2[i] – ‘a’]++;
        }
        For(I = 0; I < 26; i++) {
            If(freq1[i] != freq2[i]) {
                Flag = 0;
                Break;
            }
        }
    }

    If(flag) {
        Printf(“%s and %s are anagrams.\n”, str1, str2);
    } else {
        Printf(“%s and %s are not anagrams.\n”, str1, str2);
    }

    Return 0;
}

