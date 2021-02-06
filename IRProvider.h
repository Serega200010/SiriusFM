
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

enum class IRModeE
{
    Const = 0,
    FwdCurve = 1,
    Stoch = 2
};

template<IRModeE IRM>
class IRProvider;

template<>
class IRProvider<IRModeE::Const>
{
    private:
        double m_IRs[int(CcyE::N)];
    public:
        IRProvider(std::string const & a_file);
        double r(CcyE a_ccy, double a_t){return m_IRs[a_ccy];};

};



};