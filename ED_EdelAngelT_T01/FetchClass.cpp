#include <iostream>
#include "time.h"
#include "FetchClass.h"
using namespace std;

void FetchClass::fetchClass(){
};

void FetchClass::setArray(int a[]){
	myArray = a;
}
int* FetchClass::getArray(){
	return myArray;
}
void FetchClass::ShowArray(){
	showArray(myArray);
}
void FetchClass::showFetch(int position){
	if (position >= 0) {
		std::cout << "La posicion del numero es: " << position << endl;
	}
	else {
		std::cout << "El numero no esta en el arreglo" << endl;
	}
}
void FetchClass::showArray(int a[]){
	for (int i = 0; i < sizeof(a); i++) {
		cout << "arreglo[ " << i << " ] = " << a[i];
	}
}

int* FetchClass::RandArray(int size) {
	srand(time(NULL));
	int* myArray = new int[size];
	for (int i = 0; i < size; i++) {
		myArray[i] = rand() % 100;
	}
	return myArray;
}
