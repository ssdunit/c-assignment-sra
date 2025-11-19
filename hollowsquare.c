#include <stdio.h>
int main(){
    int size;
    printf("Enter the size of hollow square: ");
    scanf("%d", &size);
    if(size<3){
        printf("Size of the hollow square cannot be less than 3");
    }
    else{
        for(int i = 1; i<size+1 ; i++){
        for(int j = 1; j<size+1 ; j++){
            printf((i>=2 && i<=size-1 && j>=2 && j<=size-1)?"   ":(j==1)?"* ":" * ");
        }
        printf("\n");
        }
    }
    return 0;
}
