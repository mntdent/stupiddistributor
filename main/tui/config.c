#include <stdio.h>
#include "../headers/header.h" 
#include "../headers/config.h"
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
int useLocalConfig = 0;

if (fopen("sonfig", "r") != NULL) {
	printf("%s","Use existing configuration? (y/n) \n");
	switch (ynCheck()) {
		case 1:
		 useLocalConfig = 1;
		case 2:
		 break;
		}
	}
if (useLocalConfig == 1) {
	//declare all the variables that are in config.h
	}
else {
	//ask for all the variables that are in config.h
}

}

