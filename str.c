#include <stdio.h>

int main() {
    char str[]="Mithun";
    printf("%c\n",str[0]);
    printf("%c\n",str[5]);
   
    
    

    return 0;
}



#include <stdio.h>

int main() {
    char str[]="Mithun";
    str[0]='m';
    str[5]='N';
    printf("%s",str);
   
   
    
    

    return 0;
}


#include <stdio.h>
#include<string.h>

int main() {
    char str[]="Mithun";
    printf("%s",str);
    printf("\nlength is %zu",strlen(str));
   
    
    

    return 0;
}
