/* Colin Peterman */
#include<stdio.h>
#include<stdlib.h>

int main(void){
	encryption();	
}

int encryption(void){
	/* Sets up inital variables needed */
	int i, helper = '0';
	int first = 0, second=0, third=0, fourth=0, fifth=0, sixth=0, seventh=0, eighth=0;	
	int one = 1;
	for(i = 0; i < 7; i++){
                one = (one << 1);
        }
	/* Reads in the first number */
	helper = getchar();	
	/* While loop to keep reading in numbers if there is more */	
	while(helper == '0' || helper == '1'){
		first = 0;
		second = 0;
		third = 0;
		fourth = 0;
		fifth = 0;
		sixth = 0;
		seventh = 0;
		eighth = 0;

	/* Gets the first binary number using bitshifting and saves it to a variable */
	first = first || (helper - 48);
	for(i = 0; i < 7; i++){
		helper = getchar();
		first = (first << 1) | (helper - 48);
	}
	/* Gets the second binary number using bitshifting and saves it to a variable */
	helper = getchar();
	for(i = 0; i < 8; i++){
                helper = getchar();
                second = (second << 1) | (helper - 48);
        }
	/* Gets the third binary number using bitshifting and saves it to a variable */
	helper = getchar();
        for(i = 0; i < 8; i++){
                helper = getchar();
                third  = (third << 1) | (helper - 48);
        }

	/* Gets the fourth binary number using bitshifting and saves it to a variable */
	helper = getchar();
        for(i = 0; i < 8; i++){
                helper = getchar();
                fourth  = (fourth << 1) | (helper - 48);
        }
	/* Gets the fifth binary number using bitshifting and saves it to a variable */
	helper = getchar();
        for(i = 0; i < 8; i++){
                helper = getchar();
                fifth  = (fifth << 1) | (helper - 48);
        }
	/* Gets the sixth binary number using bitshifting and saves it to a variable */
	helper = getchar();
        for(i = 0; i < 8; i++){
                helper = getchar();
                sixth  = (sixth << 1) | (helper - 48);
        }
	/* Gets the seventh binary number using bitshifting and saves it to a variable */
	helper = getchar();
        for(i = 0; i < 8; i++){
                helper = getchar();
                seventh  = (seventh << 1) | (helper - 48);
        }

	/* Takes in the digits of the eight number */
	helper = getchar();
        helper = getchar();
	if(helper == 49){
        	first = first | one;
	}
	helper = getchar();
        if(helper == 49){
                second = second | one;
        }
	helper = getchar();
        if(helper == 49){
                third = third | one;
        }              
	helper = getchar();
        if(helper == 49){
                fourth = fourth | one;
        }              
	helper = getchar();
        if(helper == 49){
                fifth = fifth | one;
        }              
	helper = getchar();
        if(helper == 49){
                sixth  = sixth | one;
        }              
	helper = getchar();
        if(helper == 49){
                seventh = seventh | one;
        }
	/* Prints out the encoded message to the file */
	putchar(first);
	putchar(second);
	putchar(third);
	putchar(fourth);
	putchar(fifth);	
	putchar(sixth);
	putchar(seventh);
	/* Sets it up for the loop to run again */
	helper = getchar();
	helper = getchar();
	helper = getchar();
	} 
}	
