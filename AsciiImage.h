//
// Created by kukhmkse on 14.5.23.
//
#include "Outputer.h"
#include <vector>
#ifndef SEM_PRACE2_ASCIIIMAGE_H
#define SEM_PRACE2_ASCIIIMAGE_H

using namespace std;

class AsciiImage
{
public:
    AsciiImage(vector <char> symbols)
    {
        m_symbols.assign(symbols.begin(), symbols.end());
    }
private:
    vector <char> m_symbols;
};


#endif //SEM_PRACE2_ASCIIIMAGE_H
