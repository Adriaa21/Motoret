#pragma once

namespace motoret
{

	struct Vector
	{
		float x, y;

		//operators
		Vector operator+(const Vector& other) const;
		Vector operator-(const Vector& other) const;

		//functions
		float Magnitud() const;
		float MagnitudSqrt() const;

		float Dot(const Vector& other) const;
		static float Dot(const Vector& vector, const Vector& other);

		Vector Perpendicular() const;
		static Vector Perpendicular(const Vector& vector);

		void Normalitzar();
		static Vector Normalitzat(const Vector& vector);
	};

	struct Point
	{
		float x, y;

		Point operator+(const Vector& movement) const;
		Point operator-(const Vector& movement) const;

		Vector To(const Point& destination) const;
	};

	
}