#include <stdio.h>

int main() {
    char str[] = "mithun";
    char* ptr = &str[0]; 
    printf("%p\n",&str[0]); 
    printf("%s\n",&str[0]);
    return 0;
}


#include <stdio.h>

int main() {
    int i;
    int arr[5]={1,2,3,4,5};
    int* ptr=arr;
    for (i=0;i<5;++i){
        printf("%d =%p\n",arr[i],(ptr+i));
        
    }
    
    return 0;
}


