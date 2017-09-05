#include <iostream>
#include "secClass.h"
#include "FetchClass.h"
using namespace std;

secClass::secClass(){

};

int secClass::sFetch(int e) {
	return sFetch(myArray, e);
};

int secClass::sFetch(int a[], int e) {
	for(int i=0;i<sizeof(a);i++)
		if (a[i] == e) {
			return e;
		}
		return -1;
	}
