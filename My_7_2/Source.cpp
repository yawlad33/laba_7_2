#include <iostream>
using namespace std;


void p(double* a, double* b, double* c) {
	double naim, sr, naib;
	if ((*a) < (*b) && (*a) < (*c)) {
		naim = (*a);
		sr = (*b);
		naib = (*c);
		if ((*b) > (*c)) {
			swap(sr, naib);
		}
	}
	else if ((*b) < (*c) && (*b) < (*a)) {
		naim = (*b);
		sr = (*a);
		naib = (*c);
		if ((*a) > (*c)) {
			swap(sr, naib);
		}
	}
	else if ((*c) < (*b) && (*c) < (*a)) {
		naim = (*c);
		sr = (*b);
		naib = (*a);
		if ((*b) > (*c)) {
			swap(sr, naib);
		}
	}

	(*a) = naim;
	(*b) = sr;
	(*c) = naib;
}

int main() {
	setlocale(LC_ALL, "Rus");
	double a, b, c;
	cout << "Введите 3 числа: ";
	cin >> a >> b >> c;

	p(&a, &b, &c);

	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	cout << "c: " << c << endl;




	return 0;
}
