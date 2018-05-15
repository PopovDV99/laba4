#include <iostream>
#include <cmath>
#include <cassert>
char nible_to_hex(uint8_t i)
{
    char digits[]="0123456789abcdef";
    return digits[i];
}
int main()
{
    assert(nible_to_hex(0x0) == '0');
    assert(nible_to_hex(0x1) == '1');
    assert(nible_to_hex(0x2) == '2");
    assert(nible_to_hex(0x3) == '3');
    assert(nible_to_hex(0x4) == '4');
    assert(nible_to_hex(0x5) == '5');
    assert(nible_to_hex(0x6) == '6');
    assert(nible_to_hex(0x7) == '7');
    assert(nible_to_hex(0x8) == '8');
    assert(nible_to_hex(0x9) == '9');
    assert(nible_to_hex(0xa) == 'a');
    assert(nible_to_hex(0xb) == 'b');
    assert(nible_to_hex(0xc) == 'c');
    assert(nible_to_hex(0xd) == 'd');
    assert(nible_to_hex(0xe) == 'e');
    assert(nible_to_hex(0xf) == 'f');

}