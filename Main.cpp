#include "Matrix.h"
#include "Vektor2D.h"

using namespace std;

int main(int argc, char** argv) {
    Matrix myObject;
    myObject.ausgabe();

    Vektor2D a(3,1), b(1,2), c;
    c.addiere(a);
    b.addiere(c);

    cout << b.betrag() << endl;
}
