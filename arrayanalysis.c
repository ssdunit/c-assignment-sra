#include <stdio.h>

int main(){
    int fuel[10];
    printf("Enter fuel consumption for 10 days: ");
    for(int i=0; i<10; i++){
        scanf("%d", &fuel[i]);
    }
    int total_fuel = 0;
    int max_fuel = fuel[0];
    int min_fuel = fuel[0];
    for(int i=0; i<10; i++){
        total_fuel += fuel[i];
        if(max_fuel<fuel[i]){
            max_fuel = fuel[i];
        }
        if(min_fuel>fuel[i]){
            min_fuel = fuel[i];
        }
    }
    float average;
    average = total_fuel/10.0f;
    printf("Output:\n");
    printf("Total fuel used = %d L\n",total_fuel);
    printf("Average fuel = %0.01f L\n",average);
    printf("Maximum = %d L, Minimum = %d L", max_fuel, min_fuel);
}