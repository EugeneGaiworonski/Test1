#include <iostream>
using namespace std;
void newLine() { cout << '\n'; }

template <class TYPE> 
TYPE mAbs(&TYPE a, &TYPE b)
{
	a = a >= 0 ? a : -a;
	b = b >= 0 ? b : -b;
};

template <class TYPE>
TYPE mAbsSum(TYPE a, TYPE b)
{
	a = a >= 0 ? a : -a;
	b = b >= 0 ? b : -b;
	return a + b;
};

template <class TYPE> 
TYPE mSumAbs(TYPE a, TYPE b)
{
	TYPE  
}

int main() 
{
	
	return 0;
}
