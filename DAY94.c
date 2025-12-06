\\ Write a function that accepts a structure as parameter and prints its members.

  #include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

void printStudent(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll No: %d\n", s.roll_no);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student st;

    printf("Enter student details:\n");
    printf("Name: ");
    scanf("%s", st.name);
    printf("Roll No: ");
    scanf("%d", &st.roll_no);
    printf("Marks: ");
    scanf("%f", &st.marks);
  
    printf("\n--- Student Details ---\n");
    printStudent(st);

    return 0;
}
