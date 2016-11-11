#include "curving.h"
#include <math.h>
#include <iostream>
using namespace std;

Curving::Curving(double *data){
    m_confirm = false;
    m_originalGrades = data;
    SIZE = (sizeof(data)/sizeof(*data));
}

// perform a linear curve on grades
void Curving::linCurve(int curve){
    for(int i = 0; i < SIZE; i++)
        m_curvedGrades[i] = m_originalGrades[i] + curve;
    //cout << m_curvedGrades[5];
}

// perform 10*sqrt(g) curve on grades
void Curving::rootCurve(){
    for(int i = 0; i < SIZE; i++)
        m_curvedGrades[i] = 10*sqrt(m_originalGrades[i]);
}

// returns curved array of grades
double* Curving::returnCurve(){
    return m_curvedGrades;
}

// accept or deny changes to grades
void Curving::acceptChanges(){

}
