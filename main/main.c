#include<stdio.h>
int main () {

string input;

if (fopen("sonfig", "r") != NULL) {
	printf("%s","Use existing configuration? (y/n) \n");
	switch (ynCheck()) {
		case 1:
		 goto StartRunning;
		case 2:
		 
		 break
		}
}






StartRunning:

}

ynCheck () {
	scanf("%s",input)
	switch (input){
	case "y":
	 return 1;
	case "n";
	 return 2;
	default:
	 printf("Incorrect input! \n");
	}
}