#pragma once
#ifndef __VECTOR_2D__
#define __VECTOR_2D__

#include <string>

class Vector2D
{
public:
	// CONSTRUCTOR(S)
	Vector2D();

	// COPY CONSTRUCTOR
	Vector2D(const Vector2D& vector_2d);


	// DESTRUCTOR
	~Vector2D();

	// GETTERS (accessors)
	float GetX() const;
	float GetY() const;

	// SETTERS (mutators)
	void SetX(float x);
	void SetY(float y);
	void Set(float x, float y);

	//  PUBLIC METHODS (public class function)
	std::string ToString() const;

	// PUBLIC STATIC METHODS (public class functions that are Static)
	
private:
	// INSTANCE VARIABLES (class master variables)
	float m_x;
	float m_y;

	// PRIVATE METHODS (private class functions)
};

#endif /*defined (__VECTOR_2D__) */

