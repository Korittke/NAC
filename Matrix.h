#include <iostream>

#ifndef MATRIX_H
#define	MATRIX_H

class Matrix {
public:
    Matrix();
    virtual ~Matrix();
    void ausgabe();
protected:
    int m_Zeilen;
    int m_Spalten;
    float m_Element[2];
};

#endif	/* MATRIX_H */

