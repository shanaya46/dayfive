#include <stdio.h>
#include <string.h>

char *ft_strlcat(char *dest, char *src) {
    int i, j;
    j = strlen(dest);

    for (i = 0; src[i] != '\0'; i++){
        dest[j] = src[i];
        j++;
    }
    return dest;
}




int main () {
    char src[20] = "source";
    char dest[20] = "destination";

    printf("%s\n", ft_strlcat(dest, src));
}