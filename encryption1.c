#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{   
    char input[100], single_char;
    int key;
    
    printf("Message to encrypt: ");
    gets(input);
    printf("Enter key: ");
    scanf("%d", &key);
    for(int i = 0; input[i] != 0; ++i){
        single_char = input[i];
        single_char += key;
        input[i] = single_char;
    }
    printf("Encrypted Message: %s", input);
    return 0;
}