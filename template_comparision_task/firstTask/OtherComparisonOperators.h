#ifndef PROSOFTSCHOOL2023_OTHERCOMPARISONOPERATORS_H
#define PROSOFTSCHOOL2023_OTHERCOMPARISONOPERATORS_H

template<typename T>
class OtherComparisonOperators
{
public:
    template<typename B>
    bool operator<=(const B& other) const
    {
        return (self() < other) || !(self() > other || self() < other);
    }

    template <typename B>
    bool operator>=(const B& other) const
    {
       return (self() > other) || !((self() > other) || (self() < other));
    }

    template<typename B>
    bool operator!=(const B& other) const
    {
        return (self() > other) || (self() < other);
    }

    template<typename B>
    bool operator==(const B& other) const
    {
        return (self() >= other) && (self() <= other);
    }

private:
    const T& self() const
    {
        return static_cast<const T&>(*this);
    }
};


#endif //PROSOFTSCHOOL2023_OTHERCOMPARISONOPERATORS_H
