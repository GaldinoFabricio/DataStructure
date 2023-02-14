#include <stdio.h>

struct queue {
	int size = -1, first = -1, item[];
}queue;

void push() {
	int x;
	printf("\nEnter the element to be added onto the queue: ");
	scanf_s("%d", &x);
	queue.size += 1;
	queue.item[queue.size] = x;

	if (queue.first == -1) {
		queue.first = queue.size;
	}
}

void show()
{
	if (queue.first == -1) {
		for (int i = queue.size; i >= 0; --i)
			printf("%d\n", queue.item[i]);
	} else {
		printf("\nElements present in the queue: \n");
		for (int i = queue.first; i <= queue.size; i++)
			printf("%d\n", queue.item[i]);
	}
}

void first() {
	if (queue.first != -1) {
		printf("First element in queue: %d", queue.item[queue.first]);
	} else {
		printf("not exist element in queue");
	}
}

void pop() {
	if (queue.size == -1) {
		printf("\nUndeflow");
	} else {
		printf("\nPopped element: %d", queue.item[queue.first]);
		queue.first++;
	}
}

int main() {
	int choice;

	while (true)
	{
		printf("\n1-Push | 2-Pop | 3-show | 4 - first element | 5-exit: ");
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
			first();
		}
		if (choice == 5) {
			break;
		}
	}
}