#ifndef INCLUDE_ROMAN_H_
#include <iostream>

#define INCLUDE_ROMAN_H_

using namespace std;


struct roman {
    string value;
public:
    roman() : value("") {};
    roman(char val)
    {
        this->value = val;
    }
    roman(string val) : value(val) {};
};

struct arabic {
    int value;
public:
    arabic() : value(0) {};
    arabic(int val) : value(val) {};
};


class Convertor {
public:
    // �������� � �������
    roman toRoman(arabic& t);    // ��� �������� ���� (���������)
    roman toRoman(int& t);       // ��� int
    // ������� � ��������
    arabic toArabic(roman& t);   // ��� ������� ���� (���������)
    arabic toArabic(string& t);  // ��� ������� ������, � ������� ���������� ������� �����

    //bool check(roman &t);      // IIII - IV

    // �������� �����-������, ���� print

};

#endif  // INCLUDE_ROMAN_H_