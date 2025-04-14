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


#include <stdio.h>
int* multi(int* num1,int* num2,int* product){
    *product = (*num1) * (*num2);
    return product;
}


int main() {
    int product;
    int num1=3;
    int num2=5;
    int* result = multi(&num1,&num2,&product);
    printf("Product is %d",*result);
    return 0;
}


