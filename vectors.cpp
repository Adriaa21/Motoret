#include "Vectors_y_punts/vectors.h"
#include <cmath>

using namespace motoret;

//----------------- Point -----------------
// suma
Point Point::operator+(const Vector& movement) const
{
	return Point{ x + movement.x, y + movement.y };
}
// resta
Point Point::operator-(const Vector& movement) const
{
	return Point{ x - movement.x, y - movement.y };
}
//desplazamiento de este punto a otro punto
Vector Point::To(const Point& destination) const
{
	return Vector{ destination.x - x, destination.y - y };
}

//----------------- Vector -----------------
//
Vector Vector::operator+(const Vector& other) const
{
	return Vector{ x + other.x, y + other.y };
}
// resta
Vector Vector::operator-(const Vector& other) const
{
	return Vector{ x - other.x, y - other.y };
}
// magnitud
float Vector::Magnitud() const
{
	return sqrtf(x * x + y * y);
}
// Magnitud quadrada
float Vector::MagnitudSqrt() const
{
	return x * x + y * y;
}

// Producte escalar
float Vector::Dot(const Vector& other) const
{
	return x * other.x + y * other.y;
}

float Vector::Dot(const Vector& a, const Vector& b)
{
	return a.x * b.x + a.y * b.y;
}

// Perpendicular
Vector Vector::Perpendicular() const
{
	return Vector{ -y, x };
}

Vector Vector::Perpendicular(const Vector& v)
{
	return Vector{ -v.y, v.x };
}

// Normalitzar (modifica el vector)
void Vector::Normalitzar()
{
	float mag = Magnitud();
	if (mag != 0.0f)
	{
		x /= mag;
		y /= mag;
	}
}

// Normalitzat (retorna un nou vector)
Vector Vector::Normalitzat(const Vector& v)
{
	float mag = v.Magnitud();
	if (mag != 0.0f)
		return Vector{ v.x / mag, v.y / mag };

	return Vector{ 0.0f, 0.0f };
}
