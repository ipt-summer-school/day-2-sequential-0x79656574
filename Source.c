#include <stdio.h>


void Double(int* ptr, int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf(" %d,", 2 * ptr[i]);
	}
	printf("]\n");
}


void Square(int* ptr, int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		printf(" %d,", ptr[i] * ptr[i]);
	}
	printf("]\n");
}


void Filter(int* ptr, int size) {
	printf("[");
	for (int i = 0; i < size; i++) {
		if (!ptr[i]) {
			printf(" 1,");
		}
		else {
			printf(" 0,");
		}
	}
	printf("]\n");
}


void Sequential(int* func_ptr, int func_num, int *arr_ptr, int arr_num) {
	for (int i = 0; i < func_num; i++) {
		switch (func_ptr[i]) {
		case 1:
			printf("Double called!\n");
			Double(arr_ptr, arr_num);
		case 2:
			printf("Square called!\n");
			Square(arr_ptr, arr_num);
		case 3:
			printf("Filter called!\n");
			Filter(arr_ptr, arr_num);
		}
	}
}


void Start() {
	int* func;
	int func_size;
	int* arr;
	int arr_size;
	int i = 0;
	printf("Number of functions?\n>>>");
	scanf_s("%d", &func_size);
	func = (int *)malloc(func_size * sizeof(int));				//malloc for func array
	while (i < func_size) {
		int uinput = 0;
		printf("Input your functions.\n1.Double\n2.Square\n3.Filter\n0.Stop\n");
		scanf_s("%d", &uinput);
		if (uinput == 0) {
			break;
			break;
		}
		else if (uinput == 1) {
			func[i] = 1;
		}
		else if (uinput == 2) {
			func[i] = 2;
		}
		else if (uinput == 3) {
			func[i] = 3;
		}
		else {
			printf("Wrong input!");
			func[i] = 0;
		}
		system("cls");
		i++;
	}
	int j = 0;
	printf("Size of an array?\n>>>");
	scanf_s("%d", &arr_size);
	arr = (int *)malloc(arr_size * sizeof(int));				//malloc for int array
	while (j < arr_size) {
		int uinput;
		system("cls");
		printf("Input %d'nd number",j);
		scanf_s("%d", &uinput);
		arr[j] = uinput;
		j++;
	}
	Sequential(func, func_size, arr, arr_size);
}


int main() {
	Start();
	getchar(); 
	getchar();
	return 0;
}