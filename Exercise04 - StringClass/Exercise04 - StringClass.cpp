// Exercise04 - StringClass.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.

#include "String.h";

#include <iostream>
using namespace std;


String GetMeAString() {
    return String("This is a random string for you!");
}


int main()
{
    String* a();
    String b("Jelou");
    b.Print();
    String c(b);
    c.Print();
    cout << c.length() << endl;
    c.clear();
    cout << "Here is the output of a cleared String -> ";
    c.Print();

    String d(" Uorl");

    String sum = b + d;
    sum.Print();

    if (b == "Jelou") {
        cout << "TRUE: boolean works" << endl;
    }
    if (!(b == "False")) {
        cout << "FALSE: boolean works" << endl;
    }
    if (!(b == "Jelouoaosid")) {
        cout << "FALSE: boolean works" << endl;
    }

    String a = GetMeAString();
}


