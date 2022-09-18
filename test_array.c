#include <stdio.h>
#include <stdlib.h>

#include "test_array.h"

// 1. Функция генерации массива и заполнения его случайными значениями

void random_array(int* a, int size)
{
	// int i = 0;
	for(int i = 0; i < size; i++)
	{
		a[i] = rand();		
	}
}

// 2. Функция вывода всех значений массива на печать

void print_array(int* a, int size)
{
	printf("Yor array, sir: ");
	for(int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);	
	}
	printf("\n\n");
}

// 3. Функция поиска и вывода минимального / максимального значений и их индексов

void min_max_element(int* a, int size)
{
	int min_element = a[0];
	int max_element = a[0];
	
	int min_element_index = 0;
	int max_element_index = 0;
	
	
	for(int i = 0; i < size; i++)
	{
		if (a[i] < min_element)
		{
			min_element = a[i];
			min_element_index = i;
		}
		if (a[i] > max_element)
		{
			max_element = a[i];
			max_element_index = i;
		}	
	}
	printf("Min value / index: %d / %d\n", min_element, min_element_index);
	printf("Max value / index: %d / %d\n", max_element, max_element_index);
}

// 4. Функция подсчета количества бит в памяти произвольного размера (продумать необходимые параметры функции)

void bitCounter (int* a, int size)
{	
	int counter = 0;
	for(int i = 0; i < size; i++)
	{
		for(a[i]; a[i] !=0; a[i] >>=1)
		{
			if((a[i] & 1) == 1)
				counter++;			
		}
	}
	printf("Bits in the array: %d\n\n", counter);
}

// 5. Функция поиска и вывода индекса элемента по заданному значению

void array_element_index(int* a, int size, int value)
{
	int counter = 0;
	for(int i = 0; i < size; i++)
		if (a[i] == value)
		{
			printf("Array element index: %d \n", i);
			counter++;
		}
	if (counter == 0)
	{
		printf("Value is not found\n");
	}
	printf("\n");
}