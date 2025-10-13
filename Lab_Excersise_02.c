#include <stdio.h>

int main() {
	float marks[10];
	float avg = 0;
	int sum = 0;
	
	printf("Enter marks of 10 students:\n");
	
	int i;
	for(i=0; i<10; i++){
		scanf("%f", &marks[i]);
		sum = sum + marks[i];		
	}
	
	avg = sum/10;
	
	printf("The average marks are: %.3f", avg);
	
	
    return 0;
}
