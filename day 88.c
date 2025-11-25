/*Print all enum names and integer values using a loop.*/
#include <stdio.h>

enum Roles {
    ADMIN,
    USER,
    GUEST
};

int main() {
    const char *roleNames[] = {"ADMIN", "USER", "GUEST"};

    printf("Enum Name   Integer Value\n");
    printf("-------------------------\n");

    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%-10s   %d\n", roleNames[i], i);
    }

    return 0;
}
