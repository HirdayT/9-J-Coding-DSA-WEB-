#include <stdio.h>

struct Student {
  int id;
  char name[50];
  float marks;
};

// function to write records to a binary file
void write_records() {
  FILE *file = fopen("students.dat", "wb");
  if (file == NULL) {
    printf("error opening file for writing!\n");
    return;
  }

  int n;
  printf("enter number of records to write: ");
  scanf("%d", &n);

  struct Student s;
  for (int i = 0; i < n; i++) {
    printf("\nenter details for student %d:\n", i + 1);
    printf("enter id: ");
    scanf("%d", &s.id);
    printf("enter name: ");
    scanf("%s", s.name);
    printf("enter marks: ");
    scanf("%f", &s.marks);

    fwrite(&s, sizeof(struct Student), 1, file);
  }

  fclose(file);
  printf("\nrecords written to binary file successfully!\n");
}

// function to read records from a binary file
void read_records() {
    FILE *file = fopen("students.dat", "rb");
    if (file == NULL) {
        printf("\nerror opening file for reading (or file does not exist yet)!\n");
        return;
    }

    struct Student s;
    printf("\n--- reading records from binary file ---\n");
    printf("%-5s\t%-15s\t%-10s\n", "id", "name", "marks");
    printf("------------------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("%-5d\t%-15s\t%-10.2f\n", s.id, s.name, s.marks);
    }
    printf("------------------------------------\n");

    fclose(file);
}

int main() {
    int choice;

    // menu loop
    do {
        printf("\n--- binary file operations ---\n");
        printf("1. write records\n");
        printf("2. read records\n");
        printf("3. exit\n");
        printf("enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: write_records(); break;
            case 2: read_records(); break;
            case 3: printf("exiting...\n"); break;
            default: printf("invalid choice!\n");
        }
    } while (choice != 3);

    return 0;
}