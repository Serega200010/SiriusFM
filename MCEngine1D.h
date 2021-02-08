#include<cmath>
#include<ctime>
#include<stdexcept>
namespace SiriusFM
{
template<typename Diffusion1D,typename AProvider,typename BProvider, typename AssetClassA, typename AssetClassB>
class MCEngine1D
{
    private:
        long const m_MaxL;
        long const m_MaxP;
        double* const m_Paths;
        /*long m_L; // m_L <= m_MaxL
        long m_P; // m_P <= m_MaxP
        double m_tou;// TimeStep
        double m_t0;//2021.xxxx
        Diffusion1D const* m_diff;
        AProvider const* m_rateA;
        BProvider const* m_rateB;
        AssetClassB m_B; // Asset B
        AssetClassA m_A; //Asset A
        bool m_isRN; //Risk-Neutral Trend Flag */
    public:
        MCEngine1D(long a_MaxL, long a_MaxP): m_MaxL(a_MaxL),
                                              m_MaxP(a_MaxP),
                                              m_Paths(new double[a_MaxL*a_MaxP])/*,
                                              m_L(0),
                                              m_P(0),
                                              m_tou(nan),
                                              m_t0(nan),
                                              m_rateA(nullptr),
                                              m_rateB(nullptr),
                                              m_diff(nullptr),
                                              m_A(AssetClassA::UNDEFINED),
                                              m_B(AssetClassB::UNDEFINED),
                                              m_isRN(false) */
        {if(a_MaxL <= 0 || a_MaxP <= 0) throw std::invalid_argument("Invalid argument");};

        void Simulate(time_t a_t0, //Pricing Time
                      time_t a_T, //Expiration Time
                      int    a_tou_min, 
                      Diffusion1D const* a_diff,
                      AProvider const* a_rateA,
                      BProvider const* a_rateB,
                      AssetClassA a_A ,
                      AssetClassB a_B,
                      bool        a_isRN);








};


};