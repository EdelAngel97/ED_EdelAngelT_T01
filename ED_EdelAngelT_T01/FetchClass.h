#include <iostream>
using namespace std;

class FetchClass {
public:
	virtual void fetchClass() = 0;
	virtual void setArray(int a[]) = 0;
	virtual int* getArray() = 0;
	virtual void ShowArray() = 0;
	virtual void showFetch(int position) = 0;
	virtual void showArray(int a[]) = 0;
protected:
	int* myArray;
	int* RandArray(int size);
	
};
