#include <stdio.h>
#include <string.h>

char *ft_strncat(char *dest, char *src, int nb) {
    int i, j;
    j = strlen(dest);

    for (i = 0; i < nb; i++){
        dest[j] = src[i];
        j++;
    }

    dest[j] = '\0';
    return dest;
}




int main () {
    char src[30] = "this is the source";
    char dest[30] = "this is the destination";
    int nb = 10;

    printf("%s\n", ft_strncat(dest, src, nb));
}