#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src) {
    int i;
    int len = strlen(src);
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }

    dest[i] = '\0';

    return dest;
}

int main () {
    char src[10] = "Shanaya";
    char dest[10];

    printf("%s\n", ft_strcpy(dest, src));

}