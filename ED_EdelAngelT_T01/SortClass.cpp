#include <iostream>
#include "SortClass.h"
using namespace std;

void SortClass::selection(int a[]) {
	int menor, aux;
	for (int i = 0; i<sizeof(a); i++) {
		menor = i;
		for (int j = i + 1; j<sizeof(a); j++) {
			if (a[j]<a[menor]) {
				menor = j;
			}
		}
		if (i != menor) {
			aux = a[i];
			a[i] = a[menor];
			a[menor] = aux;
		}
	}
}

void SortClass::insertion(int a[]) {
	for (int i = 0; i < sizeof(a); i++) {
		int temp = a[i];
		int j = i - 1;

		while ((j >= 0) && (a[j] > temp)) {
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = temp;
	}
}

void SortClass::intercambio(int a[],int j, int i) {
	int temp = a[j];
	a[j] = a[i];
	a[i] = temp;
}

void SortClass::bubble(int a[]) {
	for (int i = 1; i<sizeof(a); i++) {
		for (int j = 0; j<sizeof(a); j++) {
			if (a[j]>a[j + 1]) {
				intercambio(a,j, j + 1);
			}
		}
	}
}

void SortClass::quicksort(int a[], int i, int f) {
	int b, j, pivot;
	b = i;
	j = f;
	pivot = a[(i + j) / 2];
	while (a[i]<pivot) {
		i++;
	}
	while (a[j]>pivot) {
		j--;
	}
	if (i <= j) {
		intercambio(a, j, i);
		i++;
		j--;
	}
	while (i <= j) {
		if (b<j) {
			quicksort(a, b, j);
		}
		if (f>j) {
			quicksort(a, i, f);
		}
	}
}

void SortClass::mergesort(int a[], int i, int f) {
	if (f < i) {
		int medio = (f + i) / 2;
		mergesort(a, f, medio);
		mergesort(a, medio + 1, i);
		merge(a, f, i, medio);
	}
}
void SortClass::merge(int a[], int b, int f, int medio) {
		int auxiliar[sizeof(a)];
		for (int i = f; i <= b; i++) {
			auxiliar[i] = a[i];
		}
		int i = f;
		int j = medio + 1;
		int k = f;

		while (i <= medio && j <= b) {
			if (auxiliar[i] <= auxiliar[j]) {
				a[k] = auxiliar[i];
				i++;
			}
			else {
				a[k] = auxiliar[j];
				j++;
			}
			k++;
		}while (i <= medio) {
			a[k] = auxiliar[i];
			k++;
			i++;
		}
}






