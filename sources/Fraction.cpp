#include "Fraction.hpp"
#include <stdio.h>
#include <iostream>

using namespace std;


namespace ariel{

    Fraction::Fraction(): numerator(0) , denominator(1){

    }

    Fraction::Fraction(int n, int d):numerator(n), denominator(d){
        if(d == 0){
            throw std::invalid_argument("Cant divide by 0");
        }
        this->reduce();
    }

    Fraction::Fraction(float num) : numerator(int(num*1000)) , denominator(1000){

            this->reduce();
    }

    int Fraction::gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }

    void Fraction::reduce(){
        if (this->denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
        int gcd = this->gcd(this->getNumerator(), this->getDenominator());
        this->setNumerator(this->numerator / gcd);
        this->setDenominator(this->denominator / gcd);
    }

    int Fraction::getNumerator(){
        return this->numerator;
    }

    int Fraction::getDenominator(){
        return this->denominator;
    }

    void Fraction::setNumerator(int num1){
        this->numerator = num1;
    }
    
    void Fraction::setDenominator(int num2){
        if(num2 == 0){
            throw std::invalid_argument("cant divide by 0");
        }
        
        this->denominator = num2;
    }

    

    Fraction Fraction::operator+ (Fraction& fraction){

        return Fraction(1,4);
    }

    Fraction Fraction::operator+ (float num){

        return Fraction(1,2);
    }

    Fraction operator+ (float num, Fraction& fraction){

        return Fraction(1,2);
    }



    Fraction Fraction::operator- (Fraction& fraction){

        return Fraction(1,2);
    }

    Fraction Fraction::operator- (float num){

        return Fraction(1,2);
    }

    Fraction operator- (float num, Fraction& fraction){

        return Fraction(1,2);
    }



    Fraction Fraction::operator* (Fraction& fraction){

        return Fraction(1,2);
    }

    Fraction Fraction::operator* (float num){

        return Fraction(1,2);
    }

    Fraction operator* (float num, Fraction& fraction){

        return Fraction(1,2);
    }

    

    Fraction Fraction::operator/ (Fraction& fraction){

        return Fraction(1,4);
    }

    Fraction Fraction::operator/ (float num){

        return Fraction(1,2);
    }

    Fraction operator/ (float num, Fraction& fraction){

        return Fraction(1,2);
    }



    bool Fraction::operator==(const Fraction& other_fraction) const{

        return false;
    }

    bool Fraction::operator== (float num) const{

        return false;
    }

    bool operator== (float num ,const Fraction& other_fraction){

        return false;
    }




    bool Fraction::operator> (const Fraction& other_fraction) const{

        return false;
    }

    bool Fraction::operator> (float num) const{

        return false;
    }

    bool operator> (float num ,const Fraction& other_fraction){

        return false;
    }




    bool Fraction::operator< (const Fraction& other_fraction) const{

        return false;
    }

    bool Fraction::operator< (float num) const{

        return false;
    }

    bool operator< (float num ,const Fraction& other_fraction){

        return false;
    }





    bool Fraction::operator>= (const Fraction& other_fraction) const{

        return false;
    }

    bool Fraction::operator>= (float num) const{

        return false;
    }

    bool operator>= (float num ,const Fraction& other_fraction){

        return false;
    }



    bool Fraction::operator<= (const Fraction& other_fraction) const{

        return false;
    }

    bool Fraction::operator<= (float num) const{

        return false;
    }

    bool operator<= (float num ,const Fraction& other_fraction){

        return false;
    }



    // postfix (n++)
    const Fraction Fraction::operator++ (int){

        return Fraction(1,1);
    }

    //prefix (++n)
    Fraction& Fraction::operator++ (){

        return *this;
    }



    //postfix (n--)
    const Fraction Fraction::operator--(int){

        return Fraction(1,1);
    }

    //prefix (--n)
    Fraction& Fraction::operator--(){

        return *this;
    }





    std::ostream& operator<< (std::ostream& output, const Fraction& fraction){
        output << fraction.numerator << "/" << fraction.denominator;
        return output;
    }

    std::istream& operator>>(std::istream& input, Fraction& fraction){
        return input;
    }


}