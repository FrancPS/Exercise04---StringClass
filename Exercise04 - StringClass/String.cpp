#include "String.h"

#include <iostream>
using namespace std;

// Empty constructor
String::String() : word{ nullptr } {
	this->word = new char[1];
    this->word[0] = '\0';
}

// Constructor
String::String(const char* chars) {
    if (chars == nullptr) {
        this->word = new char[1];
        this->word[0] = '\0';
    }
    else {
        int cont = 0;

        while (chars[cont] != '\0') {
            cont++;
        }

        this->word = new char[cont+1];
        // Copy character of str[]
        for (int i = 0; i <= cont; i++) {
            this->word[i] = chars[i];
        }
    }
}

// Copy constructor
String::String(const String & source) {

    int cont = 0;
    while (source.word[cont] != '\0') {
        cont++;
    }

    this->word = new char[cont+1];

    // Copy character of str[]
    for (int i = 0; i <= cont; i++) {
        this->word[i] = source.word[i];
    }
}

String::~String() {
	delete word;
}

const void String::Print() {
    cout << this->word << endl;
}

const int String::length() {
    int len = 0;
    while (this->word[len] != '\0') {
        len++;
    }
    return len;
}

void String::clear() {
    this->word = new char[1];
    this->word[0] = '\0';
}

// Operators
String String::operator+(const String& str) {
    int len1 = this->length();
    //int len2 = str->length();         // str.lenght() no funciona si no quitamos el const al parametro 'str'
    int len2 = 0;
    while (str.word[len2] != '\0') {
        len2++;
    }

    char* strOut = new char[len1+len2+1];
    //copy the 1st part
    int i = 0;
    for (i; i < len1; i++) {            // si ponemos <= copiara tbn el '\0' !
        strOut[i] = this->word[i];
    }
    
    int offset = i;
    //copy the 2nd part
    for (i=0; i <= len1; i++) {
        strOut[i+offset] = str.word[i];  // y este warning??
    }
    return String(strOut);
}

bool String::operator==(const char* chars) {
    //Check same length
    int charsLen = 0;
    while (chars[charsLen] != '\0') {
        charsLen++;
    }
    if (charsLen != this->length())
        return false;

    //Check same letters
    for (int i = 0; i < this->length(); i++) {
        if (this->word[i] != chars[i])
            return false;
    }
    return true;
}

// BONUS


