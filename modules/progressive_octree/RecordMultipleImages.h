#pragma once

#include <glm/glm.hpp>
#include <vector>

struct coordinates {
	double yaw;
	double pitch;
	double radius;
	glm::dvec3 target;
};
bool recordMultipleImages = false;
bool first = false;
int iterationImage=0;




// Create vector of coordinates
std::vector<coordinates> coordinates_arr = {
    {-87.995, 62.420, 7.781, {8.531, 4.140, 2.708}},
    {-87.860, 61.930, 7.781, {13.999, 4.962, 4.783}},
    {-87.793, 62.610, 7.781, {17.472, 5.964, 4.780}},
    {-87.775, 62.058, 7.781, {24.725, 6.934, 4.326}},
    {-87.782, 62.465, 7.781, {29.922, 8.164, 4.260}},
    // Add more coordinates as needed
};