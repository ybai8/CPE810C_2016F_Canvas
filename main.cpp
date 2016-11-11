#include <iostream>
#include "curving.h"
using namespace std;

int main()
{
    int length = 10;
    double data[length] = { 0 };
    Curving c(data);
    c.linCurve(10);
    //double* point = c.returnCurve();
    //for(int i = 0; i < length; i++)
      //  cout << data[i] << '\t';
}
