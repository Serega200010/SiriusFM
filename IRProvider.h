#pragma once
#include <cstring>
namespace SiriusFM
{
enum class CcyE
{
    USD = 0,
    EUR = 1,
    GBP = 2,
    CHF = 3,
    RUB = 4,
    N = 5
};

inline CcyE Str2CcyE(char const* a_str)
{
    if(strcmp(a_str,"USD") == 0 )return CcyE::USD;
    if(strcmp(a_str,"EUR") == 0 )return CcyE::EUR;
    if(strcmp(a_str,"GBP") == 0 )return CcyE::GBP;
    if(strcmp(a_str,"CHF") == 0 )return CcyE::CHF;
    if(strcmp(a_str,"RUB") == 0 )return CcyE::RUB;

    throw std::invalid_argument("Invalid argument");

};

inline char const* CcyE2Str(CcyE a_ccy)
    {
        switch(a_ccy)
        {
            case CcyE::USD : return "USD";
            case CcyE::EUR : return "EUR";
            case CcyE::GBP : return "GBP";
            case CcyE::CHF : return "CHF";
            case CcyE::RUB : return "RUB";
            default : throw std::invalid_argument("Invalid argument");
        };

    };

enum class IRModeE
{
    Const = 0,
    FwdCurve = 1,
    Stoch = 2
};

template<IRModeE IRM>
class IRProvider;




};