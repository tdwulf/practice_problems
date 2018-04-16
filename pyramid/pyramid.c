#include <stdio.h>


//promise the compiler that we will tell it more about the printer function later
void printer(int type, int toPrint);


int main(void){
    
    //set variable to store user input
    int height;
    
    //set variable to store the current row
    int row = 1;
    
    //ask user for the height of the pyramid until the userinput is between 1 and 23 
    do {
        printf("Enter the height of the pyramid:");
        scanf("%d", &height);
    }
    while (height < 0 || height > 23);
    
    //run this loop once for each increment of height 
    for(int i = 0; i<=height; i++){
    
        // pass some information to the printer function. 
        printer(0,(height+1)-row);   //type 0 prints spaces, height minus current row 
        printer(1,row+i); 
        //end the line, we dont need to worry about the trailing spaces 
        printf("\n");
        
        //increase row by one 
        row++;
    }
}


//printer function 
void printer(int type,int toPrint)
{
    switch(type){
        //when the type == 0 this block will print (toPrint) amount of spaces
        case 0:
            for(int i = 0; i<toPrint; i++)
            {
                printf(" ");
            } 
        break;
        //when the type == 1 this block will print (toPrint) amount of hashes
        case 1:
            for(int i = 0; i<toPrint; i++)
            {
                printf("#");
            }
        break;
    }
}