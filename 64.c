#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j, k, len, maxLen = 0, found;
    printf("Enter a string: ");
    scanf("%s", s);

    len = strlen(s);

    for(i = 0; i < len; i++) {
        for(j = i; j < len; j++) {
            found = 0;
            for(k = i; k < j; k++) {
                if(s[k] == s[j]) {
                    found = 1;
                    break;
                }
            }
            if(found)
                break;
            if(j - i + 1 > maxLen)
                maxLen = j - i + 1;
        }
    }

    printf("%d", maxLen);
    return 0;
}
