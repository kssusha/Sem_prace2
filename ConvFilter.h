//
// Created by kukhmkse on 15.5.23.
//
#include "ImageFilter.h"
#ifndef SEM_PRACE2_CONVFILTER_H
#define SEM_PRACE2_CONVFILTER_H


class ConvFilter : ImageFilter
{
public:
    ConvFilter();
    Image ApplyFilter() override;

};


#endif //SEM_PRACE2_CONVFILTER_H
