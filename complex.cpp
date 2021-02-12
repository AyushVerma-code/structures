// PROGRAM THAT ADDS TWO COMPLEX NUMBER

#include <iostream.h>
#include<conio.h>

struct complex
{
    float real;
    float imag;
};

complex addComplexNumbers(complex,complex);

void main()
{
    clrscr();
    complex n1,n2,temp;
    char sign;

    cout << "For 1st complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> n1.real >> n1.imag;

    cout << endl << "For 2nd complex number," << endl;
    cout << "Enter real and imaginary parts respectively:" << endl;
    cin >> n2.real >> n2.imag;

    temp=addComplexNumbers(n1,n2);

    sign=(temp.imag>0) ? '+' : '-'; //deciding a+ib or a-ib depending on b
    temp.imag=(temp.imag>0)?temp.imag:(-temp.imag);
    cout << "Sum = "  << temp.real <<sign<< temp.imag << "i";
    getch();
}

complex addComplexNumbers(complex n1,complex n2)
{
      complex temp;
      temp.real = n1.real+n2.real;
      temp.imag = n1.imag+n2.imag;
      return(temp);
}
