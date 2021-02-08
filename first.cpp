#include<iostream>
#include "DiffusionGBM.h"
#include "DiffusionLipton.h"
#include "DiffusionCEV.h"
#include "DiffusionOU.h"
#include "DiffusionCIR.h"
#include "IRProvider.h"
#include "IRProviderConst.cpp"
#include "MCEngine1D.h"
using namespace std;
using namespace SiriusFM;




int main(void)
{
IRProvider<IRModeE::Const> A("abc.txt");
MCEngine1D<DiffusionGBM,IRProvider<IRModeE::Const>,IRProvider<IRModeE::Const>,CcyE,CcyE> B(10.,10.);

return 0;
}
