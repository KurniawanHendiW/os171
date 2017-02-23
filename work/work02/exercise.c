/*
 * Name : Kurniawan Hendi Wijaya
 * NPM : 1606954842
 * Class : Eks SI
 * Comment : I expect OS will be fun
 */

#define LOOP 4
#include <stdio.h>

void main(){
	int input = 0;
	int temp = 0;
	printf("Masukan bilangan bulat positif : ");
	scanf("%d",&input);
	while(input < 0){
		printf("Masukan bilangan bulat positif : ");
		scanf("%d",&input);
	}
	int i;
	for(i=0; i<LOOP; i++){
		temp = temp + input;
	}
	printf("%d times %d equals %d \n",input, LOOP, temp);
}
