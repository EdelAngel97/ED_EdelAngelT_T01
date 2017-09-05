#include <iostream>
#include "BinClass.h"
#include "SortClass.h"
#include "FetchClass.h"
using namespace std;

BinClass::BinClass() {

}

int BinClass::bFetch(int e) {
	return bFetch(myArray, e);
}

int BinClass::bFetch(int a[], int e) {
	int n = sizeof(a);
	int start = 0;
	int center;
	int end = n - 1;

	while (start <= end) {
		center = (start + end) / 2;

		if (a[center] == e)
			return e;

		if (e < a[center]) {
			end = center - 1;
		}
		else {
			start = center + 1;
		}
	}
	return -1;
}