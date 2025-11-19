#include <stdio.h>
#include <string.h>

int main(){
    int o_weight;
    char planet[100];
    float c_weight;
    printf("Enter your weight on earth(in kg): ");
    scanf("%d",&o_weight);
    printf("Enter planet name: ");
    scanf("%s",&planet);
    if(strcmp(planet, "Mercury") || strcmp(planet, "mercury")){
        c_weight = (float)o_weight*0.38;
    } else if(strcmp(planet, "Venus") || strcmp(planet, "venus")){
        c_weight = (float)o_weight*0.91;     
    } else if(strcmp(planet, "Mars") || strcmp(planet, "mars")){
        c_weight = (float)o_weight*0.38;        
    } else if(strcmp(planet, "Jupiter") || strcmp(planet, "jupiter")){
        c_weight = (float)o_weight*2.34;        
    } else if(strcmp(planet, "Saturn") || strcmp(planet, "saturn")){
        c_weight = (float)o_weight*1.06;        
    } else if(strcmp(planet, "Uranus") || strcmp(planet, "uranus")){
        c_weight = (float)o_weight*0.92;        
    } else if(strcmp(planet, "Neptune") || strcmp(planet, "neptune")){
        c_weight = (float)o_weight*1.19;
    } else{
        printf("%s is not a planet",planet);
    }
    printf("OUTPUT: Your weight on planet %s would be %0.01f kg",planet,c_weight);
    return 0;
}