#include "Matrix.h"

Matrix::Matrix(): m_Zeilen(2), m_Spalten(1) {
    m_Element[0] = 0;
    m_Element[1] = 0;
    std::cout << "Standartkonstruktor von Matrix wurde aufgerufen" << std::endl;
}

Matrix::~Matrix() {
}

Matrix::ausgabe() {
    for (int i = 0; i < m_Zeilen * m_Spalten; ++i) {
        std::cout << m_Element[i] << std::endl;
    }
}