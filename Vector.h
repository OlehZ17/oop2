#pragma once
class Vector
{
private:
	int x, y, z;
public:
	int get_x() const { return x; }
	int get_y() const { return y; }
	int get_z() const { return z; }
	void set_x(int value) { x = value; }
	void set_y(int value) { y = value; }
	void set_z(int value) { z = value; }
	int sumX(Vector a, Vector b);
	int sumY(Vector a, Vector b);
	int sumZ(Vector a, Vector b);
	int minusX(Vector a, Vector b);
	int minusY(Vector a, Vector b);
	int minusZ(Vector a, Vector b);
	int scalar(Vector a, Vector b);
	void Read();
	void Display(Vector A, Vector B);
};
