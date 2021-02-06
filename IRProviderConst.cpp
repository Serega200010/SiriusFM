#include "IRProvider.h"
#include "IRProviderConst.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include <cstdlib>
#include <cstring>
namespace SiriusFM{



IRProvider<IRModeE::Const>::IRProvider(char const* a_file)
{
    FILE *file = fopen(a_file, "r");
    char arr[128];
    for(int i = 0; i<int(CcyE::N);++i){this->m_IRs[i] = 0;};
    while (fgets(arr, 128, file) != nullptr)
        {   
            arr[3] = '\0';
            CcyE Ccy = Str2CcyE(arr);
            double r = atof(arr + 4);
            cout << r <<'\n';
            this->m_IRs[int(Ccy)] = r;
        };
    fclose(file);
};
};