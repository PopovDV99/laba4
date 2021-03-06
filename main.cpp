#include <iostream>
#include <cassert>
using namespace std;
char nibble_to_hex(uint8_t i) {
    assert(0x0 <= i && i <= 0xf);
    char digits[] = "0123456789abcdef";
    return digits[i];
}
void print_in_hex(uint8_t byte)
{
    cout << nibble_to_hex(byte >> 4);
    cout<< nibble_to_hex(byte & 0b00001111);
}
const uint8_t*
as_bytes(const void* data) {
    return reinterpret_cast<const uint8_t*>(data);
}
void print_in_hex(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_hex(bytes[i]);

        if ((i + 1) % 16 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
char bit_digit(uint8_t byte, uint8_t bit) {
    if (byte & (0x1 << bit)) {
        return '1';
    }
    return '0';
}
void print_in_binary(uint8_t byte) {
    for (uint8_t bit = 7; bit > 0; bit--) {
        cout << bit_digit(byte, bit);
    }
    cout<<bit_digit(byte,0);
}

void
print_in_binary(const void* data, size_t size) {
    const uint8_t* bytes = as_bytes(data);
    for (size_t i = 0; i < size; i++) {
        print_in_binary(bytes[i]);

        if ((i + 1) % 4 == 0) {
            cout << '\n';
        }
        else {
            cout << ' ';
        }
    }
}
struct Student{
    char name[17];
    uint16_t year;
    float sred_ball;
    uint8_t sex:1;
    int classes;
    Student*starosta;
};
int main()
{
    uint16_t oper1, oper3, res;
    char oper2;
    Student students[3];
    {
        {
            "Dima";2017;5.0;0;7;
            students[0];
        }
        {
            "Sasha";2017;0.1;0;7;
            students[0];
        }
        {
            "Artem";2017;4.1;0;7;
            nullptr;
        }
    }
    cout<<endl<<"Address of array:"<<&students<<endl;
    cout<<"size of array:"<<sizeof(students)<<endl;
    cout<<"\t address of element: "<<"\t size of elements: "<<endl;
    cout<<"FOR FIRST elem of array:\n";
    cout<<"\t Address of field:"<<"\t sizeof field:"<<"\t offset"<<endl;
    cout<<"NAME:\t"<<&students[0].name;
    cout<<sizeof(students[0].name)<<"\t"<< offsetof(struct Student,name)<<endl;
    cout<<"YEAR:\t"<<&students[0].year;
    cout<<sizeof(students[0].year)<<"\t"<< offsetof(struct Student,year)<<endl;
    cout<<"SRED BALL:\t"<<&students[0].sred_ball;
    cout<<sizeof(students[0].sred_ball)<<"\t"<< offsetof(struct Student,sred_ball)<<endl;
    cout<<"CLASSES:\t"<<&students[0].classes;
    cout<<sizeof(students[0].classes)<<"\t"<< offsetof(struct Student,classes)<<endl;
    cout<<"STAROSTA:\t"<<&students[0].starosta;
    cout<<sizeof(students[0].starosta)<<"\t"<< offsetof(struct Student,starosta)<<endl;
    cout<<"Name: "<<endl;
    cout<<"Binary"<<endl;
    print_in_binary(&students[0].name,sizeof(students[0].name));
    cout<<"\n Hex: \n";
    print_in_hex(&students[0].name,sizeof(students[0].name));
    cout<<endl;
    for (int i=0;i<3;i++){
        cout<<i<<"\t"<<&students[i]<<"\t\t"<<sizeof(students[i]);
        cout<<"\n";

    }
    assert(nibble_to_hex(0x0) == '0');
    assert(nibble_to_hex(0x1) == '1');
    assert(nibble_to_hex(0x2) == '2');
    assert(nibble_to_hex(0x3) == '3');
    assert(nibble_to_hex(0x4) == '4');
    assert(nibble_to_hex(0x5) == '5');
    assert(nibble_to_hex(0x6) == '6');
    assert(nibble_to_hex(0x7) == '7');
    assert(nibble_to_hex(0x8) == '8');
    assert(nibble_to_hex(0x9) == '9');
    assert(nibble_to_hex(0xa) == 'a');
    assert(nibble_to_hex(0xb) == 'b');
    assert(nibble_to_hex(0xc) == 'c');
    assert(nibble_to_hex(0xd) == 'd');
    assert(nibble_to_hex(0xe) == 'e');
    assert(nibble_to_hex(0xf) == 'f');
    cout<<"Vvedite 16rich";
    cin>>oper1>>oper2>>oper3;
    switch(oper2)
    {
    case '&':
        res=oper1&oper3;
        print_in_hex(&oper1, sizeof(oper1));
        cout<<oper2;
        print_in_hex(&oper3, sizeof(oper3));
        cout<<" = ";
        print_in_hex(&res, sizeof(res));
        cout<<'\n';
        print_in_binary(&oper1, sizeof(oper1));
        cout<<oper2<<" ";
        print_in_binary(&oper2, sizeof(oper2));
        cout<<" = ";
        print_in_binary(&res, sizeof(res));
        cout<<'\n';
break;

case '|':

res=oper1|oper3;
print_in_hex(&oper1, sizeof(oper1));
cout<<oper2;
print_in_hex(&oper3, sizeof(oper3));
cout<<" = ";
print_in_hex(&res, sizeof(res));
cout<<'\n';
print_in_binary(&oper1, sizeof(oper1));
cout<<oper2<<" ";
print_in_binary(&oper2, sizeof(oper2));
cout<<" = ";
print_in_binary(&res, sizeof(res));
cout<<'\n';
        break;

    case'^':
res=oper1^oper3;
print_in_hex(&oper1, sizeof(oper1));
cout<<oper2;
print_in_hex(&oper3, sizeof(oper3));
cout<<" = ";
print_in_hex(&res, sizeof(res));
cout<<'\n';
print_in_binary(&oper1, sizeof(oper1));
cout<<oper2<<" ";
print_in_binary(&oper2, sizeof(oper2));
cout<<" = ";
print_in_binary(&res, sizeof(res));
cout<<'\n';
        break;

}

}