//
// Created by kukhmkse on 15.5.23.
//
#include "ImageFilter.h"
#ifndef SEM_PRACE2_BRIGHTFILTER_H
#define SEM_PRACE2_BRIGHTFILTER_H


class BrightFilter : public ImageFilter
{
public:
BrightFilter();
Image ApplyFilter () override;
 private:
 int bright;

};


#endif //SEM_PRACE2_BRIGHTFILTER_H
