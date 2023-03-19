#include <cassert>
#include <iostream>
#include "tests.h"
#include "NewA.h"
#include "NewB.h"
#include "second_task.h"

void compareNewA()
{
    NewA a1(1, 2);
    NewA a2(2, 3);
    assert(!(a1 >= a2));
    assert(a1 <= a2);
    assert(!(a1 == a2));
    assert(a1 != a2);

    NewA a3(2, 3);
    assert(a3 >= a2);
    assert(a3 <= a2);
    assert(a3 == a2);
    assert(!(a3 != a2));
    std::cout << "Compare NewA with NewA: OK" << std::endl;
}

void compareNewAInt()
{
    NewA a1(1, 2);
    assert(!(a1 >= 3));
    assert(a1 <= 3);
    assert(!(a1 == 3));
    assert(a1 != 3);

    assert(a1 >= 1);
    assert(a1 <= 1);
    assert(a1 == 1);
    assert(!(a1 != 1));

    NewA a2(2, 3);
    assert(a2 >= -2);
    assert(!(a2 <= -2));
    assert(!(a2 == -2));
    assert(a2 != -2);
    std::cout << "Compare NewA with int: OK" << std::endl;
}

void compareNewADouble()
{
    NewA a1(1, 2);
    assert(a1 >= 0.5);
    assert(!(a1 <= 0.5));
    assert(!(a1 == 0.5));
    assert(a1 != 0.5);

    NewA a2(2, 3);
    assert(!(a2 >= 2.1));
    assert(a2 <= 2.1);
    assert(!(a2 == 2.1));
    assert(a2 != 2.1);

    NewA a3(1, 1);
    assert(a3 >= 1.0);
    assert(a3 <= 1.0);
    assert(a3 == 1.0);
    assert(!(a3 != 1.0));
    std::cout << "Compare NewA with double: OK" << std::endl;
}

void compareNewAChar()
{
    NewA a1(10, 10);
    char s = 127;
    assert(!(a1 >= s));
    assert(a1 <= s);
    assert(!(a1 == s));
    assert(a1 != s);

    NewA a2(65, 65);
    char a = 'A';
    assert(a2 >= a);
    assert(a2 <= a);
    assert(a2 == a);
    assert(!(a2 != a));

    std::cout << "Compare NewA with char: OK" << std::endl;
}

void compareNewB()
{
    NewB b1("hello world");
    NewB b2("Hello world");
    assert(b1 >= b2);
    assert(!(b1 <= b2));
    assert(!(b1 == b2));
    assert(b1 != b2);

    NewB b3("Hello world");
    NewB b4("Hello world");
    assert(b3 >= b4);
    assert(b3 <= b4);
    assert(b3 == b4);
    assert(!(b3 != b4));

    std::cout << "Compare NewB with NewB: OK" << std::endl;
}

void compareNewBString()
{
    NewB b1("foo foo");
    std::string str("foo bar");
    assert(b1 >= str);
    assert(!(b1 <= str));
    assert(!(b1 == str));
    assert(b1 != str);

    NewB b2("foo");
    std::string str1("foo foo foo");
    assert(!(b2 >= str1));
    assert(b2 <= str1);
    assert(!(b2 == str1));
    assert(b2 != str1);

    std::cout << "Compare NewB with string: OK" << std::endl;
}

void compareAB()
{
    A a(1, 2);
    B b(3, 5);
    assert(!(a >= b));
    assert(a <= b);
    assert(!(a == b));
    assert(a != b);
    std::cout << "Compare A with B: OK" << std::endl;
}

