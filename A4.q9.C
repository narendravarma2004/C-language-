#include <stdio.h>

Union student{
    Char name[50];
    Float gpa;
};

Int main()
{
    Union student s;
    
    Printf(“Enter student’s name: “);
    Fgets(s.name, 50, stdin);
    
    Printf(“Enter student’s GPA: “);
    Scanf(“%f”,&s.gpa);
    
    Printf(“Student’s name: %s”,s.name);
    Printf(“Student’s GPA: %f\n”,s.gpa);
    
    Return 0;
}

