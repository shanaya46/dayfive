#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int n) {
    int i;
    for (i = 0; i < n; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0';
    return strlen(dest);
}

int main () {
    char src[10] = "Shanaya";
    char dest[10];
    int len = ft_strlcpy(dest, src, 7);
    printf("Length of String '%s' is %d\n", dest, len);
}