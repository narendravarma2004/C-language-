#include <stdio.h>

#define PI 3.14159

Union shape{
    Float radius;
    Struct {
        Float length;
        Float width;
    } rectangle;
};

Int main()
{
    Union shape s;
    Char choice;
    Float area;

    Printf(“Enter the shape you want to calculate (c for circle, r for rectangle): “);
    Scanf(“%c”,&choice);

    If(choice == ‘c’)
    {
        Printf(“Enter the radius of the circle: “);
        Scanf(“%f”,&s.radius);
        Area = PI * s.radius * s.radius;
        Printf(“Area of the circle = %f\n”, area);
    }
    Else if(choice == ‘r’)
    {
        Printf(“Enter the length of the rectangle: “);
        Scanf(“%f”,&s.rectangle.length);
        Printf(“Enter the width of the rectangle: “);
        Scanf(“%f”,&s.rectangle.width);
        Area = s.rectangle.length * s.rectangle.width;
        Printf(“Area of the rectangle = %f\n”, area);
    }
    Else
    {
        Printf(“Invalid choice!\n”);
    }

    Return 0;
}

