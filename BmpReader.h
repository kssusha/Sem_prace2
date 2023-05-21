//
// Created by kukhmkse on 14.5.23.
//

#ifndef SEM_PRACE2_BMPREADER_H
#define SEM_PRACE2_BMPREADER_H
#include "ImageReader.h"


class BmpReader : public ImageReader
{
public:
    BmpReader(const string& file) : ImageReader(file){};
    ~BmpReader() override {}
    Image read() override;
};


#endif //SEM_PRACE2_BMPREADER_H
