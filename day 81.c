/*Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.*/
#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main(void) {
    const char *dayNames[] = {
        "SUNDAY",
        "MONDAY",
        "TUESDAY",
        "WEDNESDAY",
        "THURSDAY",
        "FRIDAY",
        "SATURDAY"
    };

    printf("Day name    Integer value\n");
    printf("-------------------------\n");

    for (int d = SUNDAY; d <= SATURDAY; ++d) {
        printf("%-10s    %d\n", dayNames[d], d);
    }

    return 0;
}
