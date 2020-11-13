#include <stdio.h>
#include <string.h>
#include <conio.h> 

struct student {
	int id;
	char name[40]; 
	float mark;
};

void input_data() {
	struct student std[5];
	int mean = 0;
	int i;
	for (i = 0; i < 5; i++) {
		printf("Student Data[%d] \n", i + 1);
		printf("ID = ");
		scanf("%d", &std[i].id);
		printf("Name = ");
		scanf("%s", &std[i].name);
		printf("Mark = ");
		scanf("%f", &std[i].mark);
		mean = mean + std[i].mark;
	}
	int j;
	for (j = 0; j < 5; j++) {
		
		printf("Display Data of Student[%d] \n",j + 1);
		printf("ID  = %d\n", std[j].id);
		printf("Name = %s\n", std[j].name);
		if (std[j].mark >= 0 && std[j].mark < 50) {
			printf("Get F\n");
		}
		if (std[j].mark >= 50) {
			if (std[j].mark >= 50 && std[j].mark < 60) {
				printf("Get D\n");
			}
			if (std[j].mark >= 60 && std[j].mark < 70) {
				printf("Get C\n");
			}
			if (std[j].mark >= 70 && std[j].mark < 80) {
				printf("Get B\n");
			}
			if (std[j].mark >= 80 && std[j].mark < 100) {
				printf("Get A\n");
			}
		}
	}
	printf("mean = %d", mean / 5);
}

int main() {
	input_data();
	
}