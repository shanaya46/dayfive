#include <stdio.h>

#include <string.h>

int ft_strcmp(char *s1, char *s2) {
    int i = 0;
    int diff = 0;

    while(s1[i] != '\0' && s2[i] != '\0' ){
        if (s1[i] != s2[i]) {
            diff = 1;
            break;
        }

        i++;
    }

    if ((diff == 0) && ((s1[i] == '\0') || (s2[i] == '\0'))) {
        return 1;
    }
    else {
        return 0;
    }

}

int main () {
    char s1[10] = "ABCDEFG";
    char s2[10] = "ABCDEFG";
    
    int compare = ft_strcmp(s1, s2);

    if (compare == 1){
        printf("The strings are the same.\n");
    }
    else {
        printf("The strings are different.\n");
    }
} 