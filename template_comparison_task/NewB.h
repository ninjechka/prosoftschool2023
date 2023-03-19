#include <string_view>
#include "OtherComparisonOperators.h"

class NewB : public OtherComparisonOperators<NewB>
{
public:
    NewB(std::string_view value) : m_value(value){}

    // Операторы сравнения с string
    bool operator<(const std::string& other) const
    {
        return m_value < other;
    }

    bool operator>(const std::string& other) const
    {
        return m_value > other;
    }

    // Операторы сравнения с NewB
    bool operator<(const NewB& other) const
    {
        return m_value < other.m_value;
    }

    bool operator>(const NewB& other) const
    {
        return m_value > other.m_value;
    }

private:
    std::string_view m_value;
};