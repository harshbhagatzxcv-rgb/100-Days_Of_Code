\\ Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role {
    ADMIN = 0,
    USER,
    GUEST,
    TOTAL_ROLES   
};

int main() {
    enum Role r;

    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum names and their integer values:\n");

    for (r = ADMIN; r < TOTAL_ROLES; r++) {
        printf("%d -> %s\n", r, roleNames[r]);
    }

    return 0;
}
