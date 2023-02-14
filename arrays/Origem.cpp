#include <string.h>
#include <stdio.h>
#include <stdlib.h>


struct stack {
	int size = -1, item[];
} stck;

void push1()
{
	int x;
	printf("\nEnter the element to be added onto the stack: ");
	scanf_s("%d", &x);
	stck.size += 1;
	stck.item[stck.size] = x;
}

void pop1() {
	if (stck.size == -1)
	{
		printf("\nUndeflow");
	}
	else {
		printf("\nPopped element: %d", stck.item[stck.size]);
		stck.size--;
	}
}

void show1()
{
	if (stck.size == -1)
	{
		printf("\nUnderflow!!");
	}
	else
	{
		printf("\nElements present in the stack: \n");
		for (int i = stck.size; i >= 0; --i)
			printf("%d\n", stck.item[i]);
	}
}

/*int main() {
	int choice;

	while (true)
	{
		printf("\n1-Push | 2-Pop | 3-show | 4-exit: ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			push();
		}
		if (choice == 2) {
			pop();
		}
		if (choice == 3) {
			show();
		}
		if (choice == 4) {
			break;
		}

	}
}*/