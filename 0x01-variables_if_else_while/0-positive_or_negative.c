#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main() {

    int n;
    scanf("%lf", &n);
    if (n >0) {
            printf("is positive\n");
        else if(n==0){
            printf("is zero\n");
    } 
         else if(n<0){
        printf("is negetive\n");
	 }
    return 0;
}
