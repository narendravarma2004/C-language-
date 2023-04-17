#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 50
Struct Book {
    Char title[50];
    Char author[50];
    Int year_published;
};
Struct Book library[MAX_BOOKS];
Int num_books = 0;
Void add_book() {
    If (num_books < MAX_BOOKS) {
        Printf(“Enter book details:\n”);

        Printf(“Title: “);
        Scanf(“%s”, library[num_books].title);

        Printf(“Author: “);
        Scanf(“%s”, library[num_books].author);

        Printf(“Year Published: “);
        Scanf(“%d”, &library[num_books].year_published);

        Num_books++;

        Printf(“Book added to library.\n”);
    } else {
        Printf(“Error: Library is full. Cannot add more books.\n”);
    }
}
Void display_all_books() {
    Printf(“All books in library:\n”);

    For (int I = 0; I < num_books; i++) {
        Printf(“Title: %s\n”, library[i].title);
        Printf(“Author: %s\n”, library[i].author);
        Printf(“Year Published: %d\n\n”, library[i].year_published);
    }
}
Void list_books_by_author() {
    Char author[50];

    Printf(“Enter author name: “);
    Scanf(“%s”, author);

    Printf(“Books by author %s:\n”, author);

    Int count = 0;
    For (int I = 0; I < num_books; i++) {
        If (strcmp(library[i].author, author) == 0) {
            Printf(“Title: %s\n”, library[i].title);
            Printf(“Year Published: %d\n\n”, library[i].year_published);
            Count++;
        }
    }

    If (count == 0) {
        Printf(“No books by author %s found in library.\n”, author);
    }
}
Void list_book_count() {
    Printf(“Total number of books in library: %d\n”, num_books);
}

Int main() {
    Int choice;

    Do {
        Printf(“\nLibrary Menu\n”);
        Printf(“1. Add Book\n”);
        Printf(“2. Display All Books\n”);
        Printf(“3. List Books by Author\n”);
        Printf(“4. List Book Count\n”);
        Printf(“5. Exit\n”);

        Printf(“\nEnter choice (1-5): “);
        Scanf(“%d”, &choice);

        Switch (choice) {
            Case 1:
                Add_book();
                Break;
            Case 2:
                Display_all_books();
                Break;
            Case 3:
                List_books_by_author();
                Break;
            Case 4:
                List_book_count();
                Break;
            Case 5:
                Printf(“Exiting program.\n”);
                Break;
            Default:
                Printf(“Invalid choice. Please enter a number between 1 and 5.\n”);
        }
    } while (choice != 5);

    Return 0;
}

