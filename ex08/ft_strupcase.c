#include <stdio.h>

char *ft_strupcase(char *str) {

for (int i = 0; str[i] != '\0'; i++) {
    if(str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - 32;
    }
}

return str;

}




int main () {
    char str[15] = "abcdefghi";

    printf("%s\n", ft_strupcase(str));
}