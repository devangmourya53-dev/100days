/*Reverse each word in a sentence without changing the word order.
*/#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[200];
    int i = 0, start = 0;

    printf("Enter a sentence: ");
    gets(str);  
    int len = strlen(str);

    for (i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed words (same order): %s\n", str);

    return 0;
}
