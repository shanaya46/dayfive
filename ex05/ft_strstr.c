#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *str, char *to_find) {
int i;
int len = strlen(src);
for (i = 0; src[i] != '\0'; i++) {
    dest[i] = src[i];
}

dest[i] = '\0';

return dest;
}

int main () {
char str[10] = "Shanaya";
char to_find[10] = "na";

printf("%s\n", ft_strcpy(str, to_find));

}