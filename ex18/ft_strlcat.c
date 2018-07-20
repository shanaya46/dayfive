#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    int i, j;
    j = strlen(dest);

    for (i = 0; i < size; i++, j++){
        dest[j] = src[i];
    }
    return strlen(dest);
}

int main () {
    char src[20] = "source";
    char dest[20] = "destination";
    int size = 10;

    printf("Source = '%s', Destination = '%s'\n", src, dest);
    size = ft_strlcat(dest, src, size);
    printf("Size of String '%s' is %d\n", dest, size);
}