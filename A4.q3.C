#include <stdio.h>
#include <string.h>
#include <time.h>
Struct Date {
    Int day;
    Int month;
    Int year;
};
Struct Student {
    Char name[50];
    Int roll_number;
    Struct Date birthday;
    Struct Date admission_date;
};

Int calculate_age(struct Date dob, struct Date admission_date) {
    Time_t now = time(NULL);
    Struct tm *current_time = localtime(&now);

    Int age = current_time->tm_year + 1900 – dob.year;
    If (current_time->tm_mon < dob.month || (current_time->tm_mon == dob.month && current_time->tm_mday < dob.day)) {
        Age--;
    }

    Return age;
}

Int main() {
    Struct Student student;
    Printf(“Enter student name: “);
    Scanf(“%s”, student.name);

    Printf(“Enter student roll number: “);
    Scanf(“%d”, &student.roll_number);

    Printf(“Enter student birthday (DD/MM/YYYY): “);
    Scanf(“%d/%d/%d”, &student.birthday.day, &student.birthday.month, &student.birthday.year);

    Printf(“Enter student admission date (DD/MM/YYYY): “);
    Scanf(“%d/%d/%d”, &student.admission_date.day, &student.admission_date.month, &student.admission_date.year);
    Int age = calculate_age(student.birthday, student.admission_date);
    Printf(“\nStudent details:\n”);
    Printf(“Name: %s\n”, student.name);
    Printf(“Roll number: %d\n”, student.roll_number);
    Printf(“Birthday: %d/%d/%d\n”, student.birthday.day, student.birthday.month, student.birthday.year);
    Printf(“Admission date: %d/%d/%d\n”, student.admission_date.day, student.admission_date.month, student.admission_date.year);
    Printf(“Age at time of admission: %d\n”, age);

    Return 0;
}

