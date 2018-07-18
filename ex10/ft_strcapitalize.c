#include <stdio.h>
#include <string.h>



char *ft_strcapitalize(char *str) {
int i;
int len = strlen(str);
for (i = 1; i < len ; i++) {
    if (i == 0){
        if((str[i]>='a' && str[i]<='z')) {
            str[i]=str[i]-32;
        }
    }

    if(str[i]==' ') {
        	i++;
			if(str[i]>='a' && str[i]<='z')
			{
				str[i]=str[i]-32;
			}
    }
    else {
        if(str[i]>='A' && str[i]<='Z') {
            str[i]=str[i] + 32;
        }
    }

}

return str;
}


int main () {
    char str[30] = "ABC DEF GHI";

    printf("%s\n", ft_strcapitalize(str));
}