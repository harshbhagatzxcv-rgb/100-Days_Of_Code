\\ Create Employee structure with nested Date structure for joining date and print details.

  #include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    float salary;
    struct Date joining_date;  
};

int main() {
    struct Employee e;

    printf("Enter employee details:\n");
    printf("Name: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Salary: ");
    scanf("%f", &e.salary);

    printf("Joining Date (DD MM YYYY): ");
    scanf("%d %d %d", &e.joining_date.day,
                     &e.joining_date.month,
                     &e.joining_date.year);

    printf("\n--- Employee Details ---\n");
    printf("Name: %s\n", e.name);
    printf("ID: %d\n", e.id);
    printf("Salary: %.2f\n", e.salary);
    printf("Joining Date: %02d-%02d-%04d\n",
           e.joining_date.day,
           e.joining_date.month,
           e.joining_date.year);

    return 0;
}
