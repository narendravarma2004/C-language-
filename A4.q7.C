#include<stdio.h>
#include<string.h>

Struct student{
    Int roll_no;
    Char stud_name[50];
    Int mark1,mark2,mark3;
    Float total_marks,avg_marks;
};

Int main()
{
    Int n,I,j;
    Struct student s[100],temp;
    
    Printf(“Enter the number of students: “);
    Scanf(“%d”,&n);
    For(i=0;i<n;i++)
    {
        Printf(“\nEnter the roll number of student %d: “,i+1);
        Scanf(“%d”,&s[i].roll_no);
        
        Printf(“Enter the name of student %d: “,i+1);
        Scanf(“%s”,s[i].stud_name);
        
        Printf(“Enter the marks of student %d in three subjects: “,i+1);
        Scanf(“%d %d %d”,&s[i].mark1,&s[i].mark2,&s[i].mark3);
        S[i].total_marks = s[i].mark1 + s[i].mark2 + s[i].mark3;
        S[i].avg_marks = s[i].total_marks / 3;
    }
    For(i=0;i<n-1;i++)
    {
        For(j=0;j<n-i-1;j++)
        {
            If(s[j].total_marks < s[j+1].total_marks)
            {
                Temp = s[j];
                S[j] = s[j+1];
                S[j+1] = temp;
            }
        }
    }
    Printf(“\n\nRoll No\tName\t\tMark 1\tMark 2\tMark 3\tTotal\tAverage\n”);
    For(i=0;i<n;i++)
    {
        Printf(“%d\t%s\t\t%d\t%d\t%d\t%.2f\t%.2f\n”,s[i].roll_no,s[i].stud_name,s[i].mark1,s[i].mark2,s[i].mark3,s[i].total_marks,s[i].avg_marks);
    }
    
    Return 0;
}

