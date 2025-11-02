#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;

    printf("Enter your full name: ");
    gets(name);

    len = strlen(name);

    printf("Formatted name: ");

    // Print first initial
    if (name[0] != ' ')
        printf("%c. ", name[0]);

    // Print initials for middle names
    for (i = 0; i < len; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0') {
            if (strchr(name + i + 1, ' ') != NULL)
                printf("%c. ", name[i + 1]);
            else
                printf("%s", name + i + 1);  // Print surname in full
            break;
        }
    }

    printf("\n");
    return 0;
}
