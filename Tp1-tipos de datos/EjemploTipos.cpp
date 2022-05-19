#include <cassert>

int main()
{
    // int o unsigned
    assert(12 != 1 + 2);
    assert(30 - 4 == 26);
    // bool
    assert((true or false) == true);
    assert(false or true);
    assert(not false == true);
    // double
    assert(2.5 == 7.5 / 3.0);
    assert(32.2 - 3123.7 != 0.5);
    // char
    assert('e' != 'r');
    assert('a' < 'b');
    // string
    assert('Al' < 'Rededor');
    assert('Casa' - 'sa' != 'Ca');
}
