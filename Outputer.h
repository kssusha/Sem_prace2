//
// Created by kukhmkse on 14.5.23.
//

#ifndef SEM_PRACE2_OUTPUTER_H
#define SEM_PRACE2_OUTPUTER_H

#include <cstdlib>
#include <ostream>

using namespace std;

class Outputer
{
public:
    Outputer(bool dark, uint out_size, int time, ostream&  out)
    : m_dark(dark), m_out_size(out_size), m_time(time), m_out(out)
    {}
private:
    bool m_dark;
    uint m_out_size;
    int m_time;
    ostream& m_out;

};


#endif //SEM_PRACE2_OUTPUTER_H
