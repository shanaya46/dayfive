#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    int i, j;
    j = strlen(dest);

    for (i = 0; i < size; i++){
        dest[j] = src[i];
        j++;
    }
    return strlen(dest);
}




int main () {
    char src[20] = "source";
    char dest[20] = "destination";
    int size = 5;

    printf("Size of String: %d\n", ft_strlcat(dest, src, size));
}