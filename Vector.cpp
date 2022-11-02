#include "Vector.h"
#include <cmath>
#include <iostream>

using namespace std;
int h, j, k;
int Vector::scalar(Vector a, Vector b) {
	return a.x * b.x + a.y * b.y + a.z * b.z;
}

int Vector::sumX(Vector a, Vector b) {
	return  a.x + b.x;
}
int Vector::sumY(Vector a, Vector b) {
	return  a.y + b.y;
}
int Vector::sumZ(Vector a, Vector b) {
	return  a.z + b.z;
}
int Vector::minusX(Vector a, Vector b) {
	return a.x - b.x;
}
int Vector::minusY(Vector a, Vector b) {
	return a.y - b.y;
}
int Vector::minusZ(Vector a, Vector b) {
	return a.z - b.z;
}
void Vector::Read()
{
	Vector A, B;
	cout << "Enter coordinates of the vector A" << endl;
	cout << "x = "; cin >> A.x;
	cout << "y = "; cin >> A.y;
	cout << "z = "; cin >> A.z;
	set_x(A.x);
	set_y(A.y);
	set_z(A.z);

	cout << "Enter coordinates of the vector B" << endl;
	cout << "x = "; cin >> B.x;
	cout << "y = "; cin >> B.y;
	cout << "z = "; cin >> B.z;
	set_x(B.x);
	set_y(B.y);
	set_z(B.z);
	Display(A, B);
}
void Vector::Display(Vector A, Vector B)
{
	cout << "---------------------------------" << endl;
	cout << " Scalar product of vectors = " << scalar(A, B) << endl;
	cout << "---------------------------------" << endl;
	cout << " SumX = " << sumX(A, B) << endl;
	cout << " SumY = " << sumY(A, B) << endl;
	cout << " SumZ = " << sumZ(A, B) << endl;
	cout << "---------------------------------" << endl;
	cout << " MinusX =  " << minusX(A, B) << endl;
	cout << " MinusY =  " << minusY(A, B) << endl;
	cout << " MinusZ =  " << minusZ(A, B) << endl;


}