/*Print initials of a name with the surname displayed in full.*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    gets(name); 

    int len = strlen(name);
    int lastSpace = -1;

  
    for (int i = 0; i < len; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("Formatted name: ");

    
    if (name[0] != ' ')
        printf("%c ", toupper(name[0]));

    for (int i = 0; i < lastSpace; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0')
            printf("%c ", toupper(name[i + 1]));
    }

   
    if (lastSpace != -1)
        printf("%s", &name[lastSpace + 1]);

    return 0;
}
