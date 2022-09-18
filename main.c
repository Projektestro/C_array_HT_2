#include <stdio.h>
#include <stdlib.h>

#include "test_array.h"

int main(int argc, char *argv[])
{

// 1. Получение размера массива со ввода
	
	unsigned int arrSize;
	printf("Enter the size of an array: \n");
	scanf("%i", &arrSize);
	// printf("You entered: %d", arrSize);
	
// 2. Генерация массива заданного размера вызовом функции, заполнение массива случайными значениями, выделение памяти

	int* myArray = (int*)malloc(arrSize * sizeof(int));
	random_array(myArray, arrSize);

// 3. Вывод на печать всех значений массива вызовом функции

	print_array(myArray, arrSize);

// 4. Поиск и вывод на печать минимального и максимального значений и их индексов вызовом функции

	min_max_element(myArray, arrSize);

// 5. Вычисление и вывод на печать количества бит в полученном массиве вызовом функции
	
	bitCounter (myArray, arrSize);

// 6. Поиск и вывод на печать индекса элемента по заданному значению вызовом функции

	unsigned int elementValue;
	printf("Enter the value of an array element: \n");
	scanf("%i", &elementValue);
	array_element_index(myArray, arrSize, elementValue);

// 7. Освобождение памяти

	free(myArray);
	
	return 0;
}