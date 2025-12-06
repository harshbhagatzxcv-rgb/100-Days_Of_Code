\\ Return a structure containing top student's details from a function.

  #include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int i, maxIndex = 0;

    for (i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];  
}

int main() {
    struct Student s[5];
    int i;

    printf("Enter details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    struct Student topper = getTopStudent(s, 5);

    printf("\n--- Top Student ---\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}
