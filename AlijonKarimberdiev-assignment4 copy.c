/*
Alijon Karimberdiev
U11712009
This program deals with the computing the suffix
*/


#include <stdio.h>
#include <string.h>
void file_reader(FILE *pfile);
int M;
int main(int argc, char *argv[])
{
    int M;
    printf("Enter the value of M: ");
    scanf("%d", &M);
    
    int i= 1;
    while (i < argc){
        printf("%s : ", argv[i]);
        file_reader(fopen(argv[i], 'r'));
    }

    return 0;
}
void file_reader(FILE *pfile){
    char array1[100] = "";
    char array2[100] = "";
    int temp;
    temp = 0;
    
    while (fgets(array1, 20, pfile) != NULL){
        
        
        if(M < strlen(array1)-1 )
            continue;
        
        
        if(M - temp < strlen(array1)-1)
            strcpy(array2, "");
        
        
        strncat(array2, array1, strlen(array1)-1);
        
        temp = strlen(array2);
        
    }
    
    printf("%s", array2);
    
    
    fclose(pfile);
}