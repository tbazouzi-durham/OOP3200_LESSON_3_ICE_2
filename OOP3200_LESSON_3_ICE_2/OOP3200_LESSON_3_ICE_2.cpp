/*
// Author: Taylor Bazouzi
// Student ID: 100579090
// Date: September 24, 2021
//
// File Name: OOP3200_LESSON_3_ICE_2.cpp
// Description: OOP3200 ICE 3 - Week 3 - Demo
*/

#include <iostream>

#include "Vector2D.h"

int main()
{
    Vector2D origin;
	

    Vector2D first(10.0f, 20.0f);

    origin = first;

    std::cout << origin.ToString() << std::endl;


}
