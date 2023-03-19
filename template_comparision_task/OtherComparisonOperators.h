#ifndef PROSOFTSCHOOL2023_OTHERCOMPARISIONOPERATORS_H
#define PROSOFTSCHOOL2023_OTHERCOMPARISIONOPERATORS_H

template<typename T>
class OtherComparisionOperators
{
public:
    template<typename B>
    bool operator<=(const B& other) const
    {
        return (*self() < other) || !(*self() > other || *self() < other);
    }

    template<typename B>
    bool operator>=(const B& other) const
    {
       return (*self() > other) || !((*self() > other) || (*self() < other));
    }

    template<typename B>
    bool operator!=(const B& other) const
    {
        return (*self() > other) || (*self() < other);
    }

    template<typename B>
    bool operator==(const B& other) const
    {
        return !(*self() > other) && !(*self() < other);
    }

private:
    const T* self() const
    {
        return static_cast<const T*>(this);
    }
};


#endif //PROSOFTSCHOOL2023_OTHERCOMPARISIONOPERATORS_H
