#include<stdio.h>
#include<string.h>
#define MAX 100

char * sortString(char []);

int main(){
    char str1[MAX];
    char str2[MAX];

    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);

    // chaging the strings to lower case:
    strlwr(str1);
    strlwr(str2);

    if(strlen(str1) != strlen(str2)){
        printf("They can't be anagrams\n");
    }
    else{
        char *p1, *p2;
        p1 = sortString(str1);
        p2 = sortString(str2);
        if(!(strcmp(p1, p2))){
            printf("Yes they are anagram!\n");
        }
        else{
            printf("They ain't!\n");
        }
    }
    
    return 0;
}

char * sortString(char str[]){
    int swap = 1;
    char *string = str;
    while (swap != 0){
        swap = 0;
        for(int i = 0; i < strlen(str)-1; i++){
            if(str[i] > str[i+1]){
                int temp = str[i];
                str[i] = str[i+1];
                str[i+1] = temp;
                swap++;
            }
        }
    }
    return string;
}