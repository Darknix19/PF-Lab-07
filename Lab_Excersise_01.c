#include <stdio.h>

int main() {
	int n = 12;
	
	int employeeIDs[n];  		

    printf("Enter %d Employee IDs:\n", n);
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &employeeIDs[i]);
    }

    int searchID;
    printf("Enter Employee ID to search: ");
    scanf("%d", &searchID);

    int found = 0;
    int s;
    for (s = 0; s < n; s++) {
        if (employeeIDs[s] == searchID) {
            found = 1;
            break;
        }
    }

    if (found) {
        printf("Employee ID %d exists in the array.\n", searchID);
    } else {
        printf("Employee ID %d does NOT exist in the array.\n", searchID);
    }

    return 0;
}
