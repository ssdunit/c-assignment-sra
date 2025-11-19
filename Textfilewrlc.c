#include <stdio.h>
#include <string.h>
int main(){
    FILE* datafile;
    char line[100];
    printf("Enter text (type END to finish): ");
    while(!strcmp(line,"END")){
        datafile = fopen("data.txt","w");
        scanf("%s",line);
        fgets(line,sizeof(line),stdin);
        fprintf(datafile ,"%s",line);
    }
}