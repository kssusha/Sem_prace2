//
// Created by kukhmkse on 15.5.23.
//
#include "Image.h"
#ifndef SEM_PRACE2_IMAGEFILTER_H
#define SEM_PRACE2_IMAGEFILTER_H


class ImageFilter
{
public:
    ImageFilter() = default;
    virtual ~ImageFilter() {};
    virtual Image ApplyFilter();

};


#endif //SEM_PRACE2_IMAGEFILTER_H
