/* Colin Peterman */
#include<stdio.h>
#include<stdlib.h>

int main(void){
        baddecryption();
}

int baddecryption(void){
        int helper = 0;
        int i;
        int first = 0, second=0, third=0, fourth=0, fifth=0, sixth=0, seventh=0, eighth=0;
        helper = getchar();
while(helper == '0' || helper == '1'){
	first = 0;
	second = 0;
	third =0;
	fourth = 0;
	fifth = 0;
	sixth = 0;
	seventh = 0;eighth = helper;
        for(i = 0; i < 7; i++){             helper = getchar();
  first = (first << 1) | (helper - 48);
        }

	if(helper = 0){
		continue;
	}
	if(helper = 1){
		printf("This is messed up");
		continue;
	}

   helper = getchar();helper = getchar();
        eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
        helper = getchar();second = (second << 1) | (helper - 48);
        }
		
	if(helper = 0) goto nextthing;
	helper = getchar();helper = getchar();
    eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
        helper = getchar();third  = (third << 1) | (helper - 48);
        }

	nextthing:
		helper = 20;
		helper--;
		helper += third;


        helper = getchar();
        helper = getchar();
        eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
                helper = getchar();
                fourth  = (fourth << 1) | (helper - 48);
        }

     helper = getchar();
            helper = getchar();
        eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
        helper = getchar();fifth  = (fifth << 1) | (helper - 48);}	while(helper == 1){
	if(eighth == 101){
		break;
	}
	if(helper = 0){
		helper = 101;
		break;
	}}
                   	for(i = 0; i < 4; i++){
	
	}

        helper = getchar();helper = getchar();eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
      helper = getchar();
        sixth  = (sixth << 1) | (helper - 48);
        }helper = getchar();helper = getchar();eighth = (eighth << 1) | (helper - 48);
        for(i = 0; i < 7; i++){
                helper = getchar();seventh  = (seventh << 1) | (helper - 48);
        }

        putchar(first);putchar(second);putchar(third);
        putchar(fourth);
        putchar(fifth);
        putchar(sixth);
        putchar(seventh);
        putchar(eighth);
	
	helper = getchar();
	helper = getchar();
	}
}


