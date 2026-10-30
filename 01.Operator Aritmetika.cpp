#include <iostream>
using namespace std;

int main()
{
    int x, y, a, b, c, d;

    cout << "Masukan Nilai x : ";
    cin >> x;

    cout << "Masukan Nilai y : ";
    cin >> y;

    a = x + y;
    c = x % y;
    b = x - y;
    d = x * y;

    cout << "Hasil Dari A = X + Y = " << a << endl;
    cout << "Hasil Dari B = X - Y = " << b << endl;
    cout << "Hasil dari C = X % Y = " << c << endl;
    cout << "Hasil dari D = X * Y = " << d << endl;

    return 0;
}
