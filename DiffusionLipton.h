#pragma once 
#include<stdexcept>
#include<iostream>
using namespace std;


namespace SiriusFM
{

class DiffusionLipton
{
private:
        double const m_mu;
        double const m_sigma1;
        double const m_sigma2;
        double const m_sigma3;
    
    public:


         DiffusionLipton(double mu,double sigma1,double sigma2, double sigma3): m_mu(mu),
                                                                                m_sigma1(sigma1),
                                                                                m_sigma2(sigma2),
                                                                                m_sigma3(sigma3)
                {if (sigma1<=0 || sigma3 <= 0 || sigma2*sigma2 - 4*sigma1*sigma3 >= 0) throw invalid_argument("Incorrect values");};
        
        double mu(double st, double t){return st*(this->m_mu);};
        double sigma(double st, double t){double sig =m_sigma1 + st*(this->m_sigma2) + st*st*(this->m_sigma3); return sig>0 ? sig:0;};

};
};