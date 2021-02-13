#define QT
#include <iostream>
#include <windows.h>
using namespace std;
void newLine() { cout << '\n'; }

template <class TYPE>
void mAbs(TYPE a, TYPE b, TYPE &ra, TYPE &rb)
{
    ra = a >= 0 ? a : -a;
    rb = b >= 0 ? b : -b;
}

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
    TYPE sum = 0;
    sum = a + b;
    return sum >= 0 ? sum : -sum;
}

int main()
{
#ifdef QT
    SetConsoleCP(65001);
    SetConsoleCP(65001);
#endif
#ifdef VC++
    SetConsoleCP(1251);
    SetConsoleCP(1251);
#endif
    int iA = -5, absA = 0;
    int iB = 10, absB = 0;
    float fF = -6, absF = 0;
    float fG = 6, absG = 0;
    mAbs(iA,iB, absA, absB);
    cout << absA <<" "<<absB<<"\n";
    mAbs<float>(fF,iA, absF, absG);
    cout << absF << " " << absG << "\n";
    cout << mAbsSum(iA,iB) << "\n";
    cout << mAbsSum(fF,fG) << "\n";
    cout << mSumAbs(iA,iB) << "\n";
    cout << mSumAbs<int>(fF,iA)<<"\n";
    return 0;
}



