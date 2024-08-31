/*CALL BY VALUE
only duplicate changes*/

#include<stdio.h>
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;
}
int main(){
    int a=10,b=20;
    swap(&a,&b);
    printf("A value is %d\n",a);
    printf("B value is %d\n",b);
    return 0;
}

/*CALL BY REFERENCE
It's main value changes*/
// #include<stdio.h>
// int swap(int a,int b){
//     int temp;
//     temp=a;
//     a=b;
// b=temp;
//     return 0;
// }
// int main(){
//     int a=10,b=20;
//     swap(a,b);
//     printf("A value is %d\n",a);
//     printf("B value is %d\n",b);
//     return 0;
// }






