#include <cmath>
#include "OtherComparisonOperators.h"

class NewA : public OtherComparisonOperators<NewA>
{
public:
    NewA(int a, int b) : m_a(a), m_b(b){}

    // Операторы сравнения с NewA
    bool operator<(const NewA& other) const
    {
        return (m_a < other.m_a) && (m_b < other.m_b);
    }

    bool operator>(const NewA& other) const
    {
        return (m_a > other.m_a) && (m_b > other.m_b);
    }


    // Операторы сравнения с int
    bool operator<(const int other) const
    {
        return m_a < other;
    }

    bool operator>(const int other) const
    {
        return m_a > other;
    }

    // Операторы сравнения с double
    bool operator<(const double other) const
    {
        return static_cast<const double>(m_a) < other;
    }

    bool operator>(const double other) const
    {
        return static_cast<const double>(m_a) > other;
    }

    // Операторы сравнения с string
    bool operator<(const char other) const
    {
        return m_a < static_cast<int>(other);
    }

    bool operator>(const char other) const
    {
        return m_a > static_cast<int>(other);
    }

private:
    int m_a = 0;
    int m_b = 0;
};