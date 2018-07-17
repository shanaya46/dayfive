#include <stdio.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, unsigned int n) {
int i;
for (i = 0; i < n; i++) {
    dest[i] = src[i];
}

dest[i] = '\0';

return dest;
}

int main () {
char src[10] = "Shanaya";
char dest[10];

printf("%s\n", ft_strncpy(dest, src, 3));

}