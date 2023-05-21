//
// Created by kukhmkse on 14.5.23.
//

#ifndef SEM_PRACE2_PIXEL_H
#define SEM_PRACE2_PIXEL_H

using namespace std;


class Pixel
{
public:
    Pixel(int red, int blue, int green) : m_red(red), m_blue(blue), m_green(green)
    {};
private:
    int m_red;
    int m_blue;
    int m_green;

};


#endif //SEM_PRACE2_PIXEL_H
