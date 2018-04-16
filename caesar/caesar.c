#include <stdio.h>

void cipher(char plaintext[], int key);


int main() {
    int key;
    char plaintext[100];

    //ask user for string to encrypt
    printf("plaintext: ");
    scanf("%s", plaintext);

    //ask for the key to use
    printf("key: ");
    scanf("%d", &key);

    //send text and key to cipher function
    cipher (plaintext, key);
}

//cipher function 
void cipher(char plaintext[], int key) {
    
    int i = 0;
    
    while (plaintext[i] != '\0') {
        //if the cipher character is between a and z inclusively then update original to cipher char
        if((plaintext[i] + key) >= 97 && (plaintext[i] + key) <= 122){
            plaintext[i] += (key); 
        }
        //if the cipher character is between A and Z inclusively then update original to cipher char
        else if((plaintext[i] + key) >= 65 && (plaintext[i] + key)  <= 90){ 
            plaintext[i] += (key);
        }
        else{
            //return the character of the user entered string if it is ont a-z or A-Z.
            plaintext[i] += (key-26);
        }
        i++;
    }
    printf("ciphertext: %s\n",plaintext);
}