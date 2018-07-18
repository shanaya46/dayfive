#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *str, char *to_find) {
int i;
for (i = 0; str[i] != '\0'; i++) {
}

to_find[i] = '\0';

return to_find;
}

int main () {
char str[10] = "Shanaya";
char to_find[10] = "na";

printf("%s\n", ft_strcpy(str, to_find));

}