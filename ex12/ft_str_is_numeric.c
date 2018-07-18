#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str) {
int i, check = 0;
int len = strlen(str);
for (i = 0; str[i] != '\0' ; i++) {
    if ((str[i]>='0' && str[i]<='9') || (str[i] == ' '))  {
        check = 1;
    }
    else {
        check = 0;
        break;
    }
}

if (len == 0) {
    check = 1;
}
  return check;
}


int main () {
    char str[15] = "1234ad43";

    printf("%d\n", ft_str_is_numeric(str));
}