#include <stdio.h>
#include <string.h>

int ft_atoi(char *str) {
    int len = strlen(str);
    int dec = 0;
	for (int i = 0; i < len; i++) {
		dec = dec * 10 + ( str[i] - '0' );
	    //printf("i = %d, char = %c, dec = %d\n", i, str[i], dec);   
	}
   return dec;
}

int main() {
    char str[15] = "456543";
	printf("Number = %d\n", ft_atoi(str));   
}