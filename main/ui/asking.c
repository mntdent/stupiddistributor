#include<stdio.h>
#include"../header.h" 

int ynCheck () {
        char* input;
        scanf("%s",input);
        if (input = 'y'){
         	return 1;
	      }
        else if (input = 'n'){
         	return 2;
		}
        else {
         printf("Incorrect input! \n");
        }
}

int startSetup () {

if (fopen("sonfig", "r") != NULL) {
	printf("%s","Use existing configuration? (y/n) \n");
	switch (ynCheck()) {
		case 1:
		 return 1;
		case 2:
		 break;
		}
	}
if (useLocalConfig)





}

