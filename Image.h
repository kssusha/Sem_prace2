//
// Created by kukhmkse on 14.5.23.
//
#include "Pixel.h"
#ifndef SEM_PRACE2_IMAGE_H
#define SEM_PRACE2_IMAGE_H
#include <vector>

using namespace std;

class Image
{
public:
Image(vector <Pixel> pixels, int height, int width) : m_width(width), m_height(height)
{
    m_pixels.assign(pixels.begin(),pixels.end());
}
private:
int m_width;
int m_height;

vector <Pixel> m_pixels;
};


#endif //SEM_PRACE2_IMAGE_H
