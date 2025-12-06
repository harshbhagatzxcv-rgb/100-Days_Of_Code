\\ Show that enums store integers by printing assigned values.

  #include <stdio.h>

enum Example {
    A = 5,
    B = 10,
    C = 20
};

int main() {
    enum Example e;

    printf("Enum values stored as integers:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
