#include <stdio.h>
#include <math.h>
float calcprob(float x, float mean, float var){
    float ans;
    double newval = (x-mean)/var;
    ans = (1/(var*sqrt(2*acos(-1))))*exp((-1/2)*pow(newval,2));
    return ans;
}
int main(){
    float x;
    float mean;
    float var;
    printf("Enter x: ");
    scanf("%f",&x);
    while(1==1){
        printf("Enter mean: ");
        scanf("%f", &mean);
        printf("Enter var: ");
        scanf("%f", &var);
        printf("Probability = %f" ,calcprob(x, mean, var));
        printf("\n");
    }
    return 0;
}
