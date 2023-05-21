//
// Created by kukhmkse on 14.5.23.
//

#ifndef SEM_PRACE2_IMAGEREADER_H
#define SEM_PRACE2_IMAGEREADER_H
#include "Image.h"
#include "Pixel.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstdint>

using namespace std;

class ImageReader
{
public:
    ImageReader(const string& file);
    virtual ~ImageReader(){};
   virtual Image read();
protected:
    string m_Path;
};


#endif //SEM_PRACE2_IMAGEREADER_H
