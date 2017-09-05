#include <iostream>
using namespace std;

class SortClass {
public:
	void selection(int a[]);
	void insertion(int a[]);
	void bubble(int a[]);
	void intercambio(int a[],int i, int j);
	void quicksort(int a[],int i, int f);
	void mergesort(int a[], int i, int f);
	void merge(int a[], int b, int f, int medio);
};