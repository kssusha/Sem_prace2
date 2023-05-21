//
// Created by kukhmkse on 15.5.23.
//
#include "ImageFilter.h"

#ifndef SEM_PRACE2_NEGATIVEFILTER_H
#define SEM_PRACE2_NEGATIVEFILTER_H


class NegativeFilter : ImageFilter
{
public:
    NegativeFilter(bool NeInput) : negative(NeInput){};
    Image ApplyFilter();
private:
    bool negative;
};


#endif //SEM_PRACE2_NEGATIVEFILTER_H
