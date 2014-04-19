#include <stdio.h>
#include "doubly_linked_list.h"

int main(){

	int option = 1;
	Doubly_linked_list list;
	startList(&list);
	

	while(option < 1 || option > 5){
		printf("\tWelcome to the jungle\n");
		printf("\tSelect your option below\n");
		printf("1-Sum\n");
		printf("2-\n");
		printf("3-\n");
		printf("4-\n");
	}



	switch(option){
		
		case 1:
		break;

		case 2:
		break;

		case 3:
		break;
	}


	return 0;
}
