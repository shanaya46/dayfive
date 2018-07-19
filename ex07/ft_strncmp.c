#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2, unsigned int n) {
    int i = 0;
    int diff = 0;

    while(s1[i] != '\0' && s2[i] != '\0' && i < n){
        if (s1[i] != s2[i]) {
            diff = 1;
            break;
        }

        i++;
    }

    if ((diff == 0) && (i == n)) {
        return 1;
    }
    else {
        return 0;
    }

}

int main () {
    char s1[10] = "ABCDEFG";
    char s2[10] = "ABCDEEG";
    
    int compare = ft_strcmp(s1, s2, 5);

    if (compare == 1){
        printf("The strings are the same.\n");
    }
    else {
        printf("The strings are different.\n");
    }
} 