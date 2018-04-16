#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(void)
{
    char name[50];
    //get user input
    printf("Type your full name: ");
    fgets(name, 50 ,stdin);
    
    //itterate through each character of the string
    for(int i = 0; name[i] != '\0'; i++)
    {
        //check to see if the character is a NOT a space AND is either preceded by a blank or is the first character in the string
        if(name[i] != (char)32 && (name[i-1] == (char)32 || name[i] == name[0])) {
            //Print the intials in uppercase
            printf("%c",toupper(name[i]));
        } 
    }
    printf("\n");
}