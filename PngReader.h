//
// Created by kukhmkse on 14.5.23.
//

#ifndef SEM_PRACE2_PNGREADER_H
#define SEM_PRACE2_PNGREADER_H
#include "ImageReader.h"

class PngReader : public ImageReader
{
public:
    PngReader(const string& file) : ImageReader(file){};
    ~PngReader() override = default;
   Image read() override;
};


#endif //SEM_PRACE2_PNGREADER_H
