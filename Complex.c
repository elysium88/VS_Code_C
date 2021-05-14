#include "stdlib.h"
#include "stdio.h"


typedef struct {
    float realPart;//实部
    float imagPart;//虚部
} Complex;

void assign(Complex *newComplex, float reaL, float imag);//赋值
void add(Complex *newComplex, Complex A, Complex B);//复数相加
void minus(Complex *newComplex, Complex A, Complex B);//复数减
void multiply(Complex *newComplex, Complex A, Complex B);//复数相乘
void divide(Complex *newComplex, Complex A, Complex B);//复数相除

void assign(Complex *newComplex, float reaL, float imag) {
    newComplex->realPart = reaL;
    newComplex->imagPart = imag;
}

void add(Complex *newComplex, Complex A, Complex B) {
    newComplex->realPart = A.realPart + B.realPart;
    newComplex->imagPart = A.imagPart + B.imagPart;
}

void minus(Complex *newComplex, Complex A, Complex B) {
    newComplex->realPart = A.realPart - B.realPart;
    newComplex->imagPart = A.imagPart - B.imagPart;
}

void multiply(Complex *newComplex, Complex A, Complex B) {

    newComplex->realPart = (A.realPart * B.realPart) - (A.imagPart * B.imagPart);
    newComplex->imagPart = (A.imagPart * B.realPart) + (A.realPart * B.imagPart);
}

//相除
void divide(Complex *newComplex, Complex A, Complex B) {

    if (B.realPart == 0 && B.imagPart == 0) {
        return;
    }
    newComplex->realPart = ((A.realPart * B.realPart) + (A.imagPart * B.imagPart)) /
                           (B.realPart * B.realPart + B.imagPart * B.imagPart);
    newComplex->imagPart = ((A.imagPart * B.realPart) - (A.realPart * B.imagPart)) /
                           (B.realPart * B.realPart + B.imagPart * B.imagPart);

}

int main() {
    printf("complex test\n");
    Complex z1, z2, addResult, minuResult, multiplyResult, divideResult;

    assign(&z1, 8, 6);
    assign(&z2, 4, 3);

    add(&addResult, z1, z2);
    printf("complexPlusResult:%f %f\n", addResult.realPart, addResult.imagPart);

    minus(&minuResult, z1, z2);
    printf("complexMinuxResult:%f %f\n", minuResult.realPart, minuResult.imagPart);

    multiply(&multiplyResult, z1, z2);
    printf("complexMultiplyResult:%f %f\n", multiplyResult.realPart, multiplyResult.imagPart);

    divide(&divideResult, z1, z2);
    printf("complexDivideResult:%f %f\n", divideResult.realPart, divideResult.imagPart);
    return 0;
}