#include <stdio.h>
#include <iostream>

using namespace std;

const int SIZE = 4;

int capacity(int size) {
	cout << "The capacity of the array: " << size;
}

void sizeCount(int size, int items[]) {
	int count = 0;

	for (int i = 0; i < size; i++) {
		if (items[i] == 0) {
			count++;
		}
	}

	cout << "The size of the array is: " << count;
}

int isEmpty(int items[], int size) {
	int empty = 0;

	for (int i = 0; i < size; i++) {
		if (items[i] < 0) {
			empty = 1;
			break;
		}
	}

	return empty;
}

int* push(int size , int items[]) {
	int item;

	for (int i = 0; i < size; i++) {
		cout << "Enter the element to be added onto the array: ";
		cin >> item;

		if (item < 0) {
			break;
		}

		items[i] = item;
	}

	return items;
}

void at(int item[]) {
	int index = -1;

	cout << "inform index? ";
	cin >> index;

	if (item[index] >= 0) {
		cout << "Item in index: " << item[index];
	} else {
		cout << "there is no item in this index " << index;
	}
}

void pop(int size, int items[]) {
	if (size == -1) {
		printf("\nUndeflow");
	} else {
		printf("\nPopped element: %d", items[size]);
		size--;
	}
}

int* deleteItem(int item[], int index,int size = 0) {
	for (int i = index; i < size; i++) {
		item[i - 1] = item[i];
	}

	return item;
}

int removeItem(int item[], int size, int search) {
	int  newIndex = 0;
	for (int i = 0; i < size; i++) {
		if (item[i] != search) {
			item[newIndex] = item[i];
			newIndex++;
		}
	}

	return newIndex;
}

int resize(int size) {
	int choice;

	cout << "Want to alter capacity of the array(1 - Acceppt | 2 - No)? ";
	cin >> choice;

	if (choice == 2) {
		return size;
	}

	int newSize = 0;
	cout << "Ente the size to: ";
	cin >> newSize;

	if (newSize == 0) {
		cout << "size invalid";
		return size;
	}

	return newSize;
}

void find(int item[], int size, int seach) {
	int find = -1, posi = -1;

	for (int i = 0; i < size; i++) {
		if (item[i] == seach) {
			find = item[i];
			posi = i;
		}
	}

	if (find != -1 && posi != -1) {
		cout << "Element find in array: " << find << " position: " << posi << endl;
	}
}

int main() {
	int item[SIZE], size = SIZE, teste[SIZE], index;
	int choice;

	while (true)
	{
		printf("\n1-Push | 2-Pop | 3-show | 4 - first element | 5-exit: ");
		scanf_s("%d", &choice);

		if (choice == 1) {
			push(size, item);
		}
		if (choice == 2) {
			pop(size, item);
		}
		if (choice == 3) {
			capacity(size);
		}
		if (choice == 4) {
			at(item);
		}
		if (choice == 5) {
			break;
		}
	}

	return 0;
}