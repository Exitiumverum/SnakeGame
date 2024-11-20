#include <stdio.h>

int WIDTH = 800;
int HEIGHT = 600;

int main() {
	int a = 52;
	int b;

	printf("type down int a number\n");
	scanf("%d", &b);

	if(b == a){
		printf("you are correct!\n the number is %d", a);
	}
	else{
		printf("incorrect bro...");
	}
    return 0;
}
