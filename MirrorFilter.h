//
// Created by kukhmkse on 15.5.23.
//
#include "ImageFilter.h"
#ifndef SEM_PRACE2_MIRRORFILTER_H
#define SEM_PRACE2_MIRRORFILTER_H


class MirrorFilter
{
public:
    MirrorFilter(bool in_mirror) : mirror(in_mirror)
    {};
private:
    bool mirror;

};


#endif //SEM_PRACE2_MIRRORFILTER_H
