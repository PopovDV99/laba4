#include <iostream>
#include <cmath>
#include <cassert>
using namespace std;
char nible_to_hex(uint8_t i)
{
    char digits[]="0123456789abcdef";
    return digits[i];
}
void print_to_hex(uint8_t byte)
{
    cout << nible_to_hex(byte>>4);
    cout << nible_to_hex(byte&0b00001111);
}
const uint8_t*
as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
void print_in_hex(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_hex(bytes[i]);

        // Для удобства чтения: пробелы между байтам, по 16 байт на строку.
        if ((i + 1) % 16 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
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