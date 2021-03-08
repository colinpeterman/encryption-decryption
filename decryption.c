/* Colin Peterman */
#include<stdio.h>
#include<stdlib.h>

int main(void){
        decryption();
}

int decryption(void){
	/* Sets up inital variables */
	int helper = 0;
	int i;
        int first = 0, second=0, third=0, fourth=0, fifth=0, sixth=0, seventh=0, eighth=0;
	/* Gets the first digit of the first binary number */
	helper = getchar();
	/* While loop to continuously read in numbers */
	while(helper == '0' || helper == '1'){
	/* Resets variables */
        first = 0;
	second = 0;
	third = 0;
	fourth = 0;
	fifth = 0;
	sixth = 0;
	seventh = 0;
	/* sets the first digit equal to the eighth binary number */
	eighth = helper;
	/* Gets the first binary number using bitshifting and saves it to a variable */
       	for(i = 0; i < 7; i++){
      		helper = getchar();
      		first = (first << 1) | (helper - 48);
        }

       	helper = getchar();
       	helper = getchar();
	/* Adds to the eight digit and gets the second number */
       	eighth = (eighth << 1) | (helper - 48);
       	for(i = 0; i < 7; i++){
       	        helper = getchar();
       	        second = (second << 1) | (helper - 48);
       	}
      
 	helper = getchar();
       	helper = getchar();
	/* Adds to the eight digit and gets the third number */
       	eighth = (eighth << 1) | (helper - 48);
       	for(i = 0; i < 7; i++){
       	        helper = getchar();
       	        third  = (third << 1) | (helper - 48);
       	}

       	helper = getchar();
       	helper = getchar();
	/* Adds to the eighth digit and gets the fourth number */
       	eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
       	        helper = getchar();
       	        fourth  = (fourth << 1) | (helper - 48);
       	}

        helper = getchar();
        helper = getchar();
	/* Adds to the eighth digit and gets the fifth number */
        eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
                helper = getchar();
                fifth  = (fifth << 1) | (helper - 48);
        }

        helper = getchar();
        helper = getchar();
	/* Adds to the eighth digit and gets the sixth number */
        eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
                helper = getchar();
                sixth  = (sixth << 1) | (helper - 48);
        }

        helper = getchar();
        helper = getchar();
	/* Adds to the eighth digit and gets the seventh number */
        eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
                helper = getchar();
                seventh  = (seventh << 1) | (helper - 48);
        }
	/* Prints out the decoded message and set it up to rerun the while loop */
	putchar(first);
        putchar(second);
        putchar(third);
        putchar(fourth);
        putchar(fifth);
        putchar(sixth);
        putchar(seventh);
	putchar(eighth);
	helper = getchar();
	helper = getchar();
	}
}

