#include "rational.h"
#include <iostream>
#include <cstdlib>


int count_gcd(int num, int den)
{
    num = abs(num);
    den = abs(den);

    while(num != den)
    {
        if(num > den)
            num -= den;
        else 
            den -=num;
    }

    return num;
}

Rational Rational::normalize(const Rational & other)
{
    int numerator = other.numerator();
    int denominator = other.denominator();

    if(numerator < 0 && denominator < 0)
    {
        numerator = abs(numerator);
        denominator = abs(denominator);
    }

    if(numerator > 0 && denominator < 0)
    {
        numerator = -numerator;
        denominator = abs(denominator);
    }

    if(numerator == denominator)
    {
        numerator = denominator = 1;
    }

    
    if(numerator == 0)
    {
        denominator = 1;
    }
    else
    {
        int gcd = count_gcd(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    Rational r1(numerator,denominator);
    return r1;
        
}

Rational Rational::normalized(int numerator, int denominator)
{
    if(numerator < 0 && denominator < 0)
    {
        numerator = abs(numerator);
        denominator = abs(denominator);
    }

    if(numerator > 0 && denominator < 0)
    {
        numerator = -numerator;
        denominator = abs(denominator);
    }

    if(numerator == denominator)
    {
        numerator = denominator = 1;
    }

    if(numerator == 0)
    {
        denominator = 1;
    }

    int gcd = count_gcd(numerator, denominator);
    numerator /= gcd;
    denominator /= gcd;

    Rational r1(numerator,denominator);
    return r1;
        
}

void Rational::initialize(int numerator, int denominator){
    numer = numerator;
    denom = denominator;
    if(numer != 0)
        gcdND = count_gcd(numer,denom);
}

Rational::Rational(int numerator, int denominator)
{
    initialize(numerator,denominator);
}

Rational::~Rational()
{

}

Rational::Rational(const Rational & copy)
{
    this->numer = copy.numer;
    this->denom = copy.denom;
    this->gcdND = copy.gcdND;
}

std::ostream & operator<<(std::ostream & out, const Rational & r){
    out << r.numer << "/" << r.denom;
    return out;
}

std::istream & operator>>(std::istream & in, Rational & r){
    std::cout << "Numerator = ";
    in >> r.numer;
    std::cout << "Denominator = ";
    in >> r.denom;
    return in;
}

bool Rational::operator==(const Rational & other) const{
    return ((this->denom == other.denom) && (this->numer == other.numer) && (this->gcdND == other.gcdND));
}

bool Rational::operator>(const Rational & other) const{
    Rational first = Rational::normalize(Rational(this->numer,this->denom));
    Rational second = Rational::normalize(other);
    
    int left = first.numerator() * second.denominator();
    int right = first.denominator() * second.numerator();

    return (left > right);

    
}  

bool Rational::operator<(const Rational & other) const{
    Rational first = Rational::normalize(Rational(this->numer,this->denom));
    Rational second = Rational::normalize(other);
    
    int left = first.numerator() * second.denominator();
    int right = first.denominator() * second.numerator();

    return (left < right);
}

bool Rational::operator<=(const Rational & other) const{
    Rational temp = Rational(this->numer,this->denom);
    if(temp < other)
        return true;
    if(temp == other)
        return true;
    
    return false;
}

bool Rational::operator>=(const Rational & other) const{
    Rational temp = Rational(this->numer,this->denom);
    if(temp > other)
        return true;
    if(temp == other)
        return true;
    
    return false;
}

Rational Rational::operator+(const Rational & other) const{
    Rational temp(1,1);
    temp.numer = this->numer * other.denom + other.numer * this->denom;
    temp.denom = this->denom * other.denom;

    Rational temp2 = Rational::normalize(temp);
    return temp2;
}

Rational Rational::operator-(const Rational & other) const{
    Rational temp(1,1);
    temp.numer = this->numer * other.denom - other.numer * this->denom;
    temp.denom = this->denom * other.denom;

    Rational temp2 = Rational::normalize(temp);
    return temp2;
}

Rational Rational::operator*(const Rational & other) const{
    Rational temp(1,1);
    temp.numer = this->numer * other.numer;
    temp.denom = this->denom * other.denom;

    Rational temp2 = Rational::normalize(temp);
    return temp2;
}

Rational Rational::operator/(const Rational & other) const{
    Rational temp(1,1);
    temp.numer = this->numer * other.denom;
    temp.denom = this->denom * other.numer;

    Rational temp2 = Rational::normalize(temp);
    return temp2;
}

Rational operator+(const Rational & r, int i)
{
    int denominator = r.denominator();
    int numerator = r.numerator() + i * denominator;

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator+(int i, const Rational & r){
    int denominator = r.denominator();
    int numerator = r.numerator() + i * denominator;

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator-(const Rational & r, int i)
{
    int denominator = r.denominator();
    int numerator = r.numerator() - i * denominator;

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator-(int i, const Rational & r){
    int denominator = r.denominator();
    int numerator = i * denominator - r.numerator();

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator*(const Rational & r, int i)
{
    int denominator = r.denominator();
    int numerator = r.numerator() * i;
    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator*(int i, const Rational & r){
    int denominator = r.denominator();
    int numerator = r.numerator() * i;

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator/(const Rational & r, int i)
{
    int denominator = r.denominator() * i;
    int numerator = r.numerator();

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational operator/(int i, const Rational & r){
    int numerator = r.denominator() * i;
    int denominator = r.numerator();

    Rational temp = Rational::normalized(numerator,denominator);
    return temp;
}

Rational Rational::operator+() const
{
    Rational temp(numer,denom);
    return Rational::normalize(temp);
}

Rational Rational::operator-() const
{
    Rational temp(-numer,denom);
    return Rational::normalize(temp);
}

Rational & Rational::operator=(const Rational & other)
{
    numer = other.numer;
    denom = other.denom;
    return *this;
}

Rational & Rational::operator=(int i)
{
    numer = i;
    denom = 1;
    return *this;
}