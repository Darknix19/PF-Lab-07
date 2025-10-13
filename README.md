# PF-Lab-07
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

int main(){
	/*int studentAges[] = {21,22,19,18};
	printf("%d", studentAges[1]);
	printf("%d", sizeof(studentAges)/sizeof(studentAges[0]));
	int i;
	for(i=0; i<4; i++){
		printf("%d\n", studentAges[i]);
	}
	
	for(i=0; i<sizeof(studentAges)/sizeof(studentAges[0]); i++){
		printf("%d\n", studentAges[i]);
	}
	
	char allChar[] = {'H','E','L','L','O'};
	int Lcount = 0;
	
	for(i=0; i<sizeof(allChar)/sizeof(allChar[0]); i++){
		printf("%c\n", allChar[i]);
		if(allChar[i] == 'L'){
			Lcount++;
		}
		
	}
	printf("%d\n", Lcount);
	
	
	char CharWord[6] = "hello";*/
    /*int s;

    printf("Enter size of Array: ");
    scanf("%d", &s);

    int userAges[s];
	int i;
	
    printf("Enter Students' Ages:\n");
    for ( i = 0; i < s; i++) {
        scanf("%d", &userAges[i]);
    }

	int n;
	
    printf("Ages in reverse order:\n");
    for (n= s - 1; n >= 0; n--) {
        printf("%d\n", userAges[n]);
		}*/
		
	char str[100];
	printf("Enter Your name: ");
	scanf("%[A-Za-z]", str);
	printf("Your name is: %s", str);
		
		
	return 0;
}
