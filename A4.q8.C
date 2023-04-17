#include<stdio.h>

Union myUnion{
    Int I;
    Float f;
};

Int main()
{
    Union myUnion data;
    Int choice;
    
    Printf(“Enter a value of your choice:\n1. Integer\n2. Float\n”);
    Scanf(“%d”,&choice);
    
    If(choice == 1)
    {
        Printf(“Enter an integer value: “);
        Scanf(“%d”,&data.i);
        Printf(“The value you entered is %d\n”,data.i);
    }
    Else if(choice == 2)
    {
        Printf(“Enter a float value: “);
        Scanf(“%f”,&data.f);
        Printf(“The value you entered is %f\n”,data.f);
    }
    Else
    {
        Printf(“Invalid choice!\n”);
    }
    
    Return 0;
}

