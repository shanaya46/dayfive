#include <stdio.h>

char *ft_strlowcase(char *str) {

    for (int i = 0; str[i] != '\0'; i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    return str;

}




int main () {
    char str[15] = "ABCDEFGHI";

    printf("%s\n", ft_strlowcase(str));
}