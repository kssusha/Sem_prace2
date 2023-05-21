//
// Created by kukhmkse on 14.5.23.
//

#include "ImageReader.h"


ImageReader :: ImageReader(const std::string &file)
{
ifstream ConfFile (file);
if (ConfFile.is_open())
    {
            getline(ConfFile, m_Path); //for now first line of config file consists of picture path only
        ConfFile.close();
    }
}

Image ImageReader :: read()
{
    return Image(vector<Pixel>{}, 0, 0);

}