#include <iostream>
#include "FetchClass.h"
using namespace std; 

class secClass : public FetchClass{
public:
	secClass() {}
	int sFetch(int e);
	static int sFetch(int a[], int e);
};
