#pragma once
#include "IRProvider.h"
#include<iostream>
namespace SiriusFM
{
template<>
class IRProvider<IRModeE::Const>
{
    private:
        double m_IRs[int(CcyE::N)];
    public:
        IRProvider(char const* a_file);
        double r(CcyE a_ccy, double a_t){return m_IRs[int(a_ccy)];};
        void PRINT(){for(int i = 0; i<int(CcyE::N);++i){cout<<m_IRs[i]<<"  ";};};
};
};