#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find) {
    int a, b, c;

    for (a = 0; str[a] != '\0'; a++) {
        b = 0;
        if (str[a] == to_find[b]) {
            c = b + 1;
            while (str[a] == to_find[b]) {
                a++;
                b++;
            }

            if (to_find[b] == '\0') {
                break;
            }
            else {
                a = c;
                c = 0;
            }
        }
    }

    if (b == '\0') {
        return "The substring is not in the string";
    }
    else {
        return to_find;
    }
}

int main () {
char str[100] = "Shanaya";
char to_find[50] = "an";

printf("%s\n", ft_strstr(str, to_find));

}