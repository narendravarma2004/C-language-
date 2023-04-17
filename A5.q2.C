#include <stdio.h>

Typedef struct {
    Char name[50];
    Int age;
    Float weight;
} Person;

Int main()
{
    FILE *fp;
    Person person;

    Fp = fopen(“data.bin”,”rb”);

    If(fp == NULL)
    {
        Printf(“Error opening file!\n”);
        Return 1;
    }

    While(fread(&person,sizeof(Person),1,fp) == 1)
    {
        Printf(“Name: %s\nAge: %d\nWeight: %f\n”,person.name,person.age,person.weight);
    }

    Fclose(fp);

    Return 0;
}

