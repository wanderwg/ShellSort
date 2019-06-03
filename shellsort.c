#include <stdio.h>

void PrintArray(int* array, int size) {
	for (int i = 0; i < size; ++i)
		printf("%d ", array[i]);
	printf("\n");
}

void ShellSort(int* array, int size) {
	int gap = 3;
	while (gap) {
		for (int i = gap; i < size; ++i) {
			int end = i - gap;
			int key = array[i];
			while (end >= 0 && key < array[end]) {
				array[end + gap] = array[end];
				end-=gap;
			}
			array[end + gap] = key;
		}
		gap--;
	}
}

int main() {
	int array[] = { 5,3,7,1,0,9,2,6,4,8 };
	ShellSort(array, sizeof(array) / sizeof(array[0]));
	PrintArray(array, sizeof(array) / sizeof(array[0]));

	return 0;
}