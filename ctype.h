#include<stdio.h>
#include<ctype.h>

int main (){
    char alpha = 'm';
    char upper =toupper(alpha);
    printf("%c\n",upper);
    char lower = tolower(upper);
    printf("%c\n",lower);
    
    return 0;
}
