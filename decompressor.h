#include "lodepng.h"
#include <iostream>
#include <string>
using namespace std;
/*
	Functions here assume a square image with sides being powers of 2
*/

/*
	Decompresses and saves the file from our compression format with the required filename
*/
bool decompress(char* path_to_compressed_image, char* filename);

/*
	Turns our compressed format into a raw pixel format for the lodepng functions
*/
void turn_compressed_into_raw_data(const char* compressed_image, unsigned char* raw_data, unsigned int w, unsigned int h, unsigned int* counter, unsigned int top_left_corner_x, unsigned int top_left_corner_y, unsigned int coloring_size);