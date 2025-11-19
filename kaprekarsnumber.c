#include <stdio.h>
#include <math.h>

int length(int num){
    int counter = 0;
    if(num<10){
        return 1;
    }
    while(num!=0){
        num/=10;
        counter++;
    }
    return counter;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int n_square = n*n;
    if(length(n_square)%2!=0){
        printf("Not a kaprekars number");
    } 
    else {
        int val1,val2,sum;
        sum = n_square/(int)(pow(10,length(n_square)/2)) + n_square%(int)(pow(10,length(n_square)/2));
        if(sum == n){
            printf("Kaprekars number!");
        } else {
            printf("Not a kaprekars number");
        }
    }
    return 0;
}
