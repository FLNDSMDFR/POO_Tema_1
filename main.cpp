#include <iostream>
#include<math.h>
#include<classes.h>

using namespace std;

void Numar_Complex::Numar_Complex(const Numar_Complex &og){
        real = og.real;
        imag = ob.imag;
        }

Numar_Complex::~Numar_Complex()

citire& operator>>(citire& cit, const Numar_Complex& obj){
    cout << "Introduceti partea reala: \n";
    cit >> obj.real;
    cout << "Introduceti partea complexa: i * \n";
    cit >> obj.imag;
    return cit;
    }
afisare& operator>>(afisare& afis, const Numar_Complex& obj){
    if (obj.real == 0) {afis << "i * " << obj.imag << "\n";}
    else{
        if (obj.imag == 0) {afis << obj.real << "\n";}
        }
    return afis;
    }

double Numar_Complex::modul(){
    double resultat;
    resultat = sqrt((real * real) + (imag * imag));
    return resultat;
    }

void Numar_Complex::suma_2el(Numar_Complex &obj){
    return obj + this;
    }

void Numar_Complex::produs_2el(Numar_Complex &obj){
    return obj * this;
    }

void Numar_Complex::div_2el(Numar_Complex &obj){
    return obj / this;
    }

void Vector_Complex::init1(int n, Numar_Complex obj){
    int i;
    for(i=0; i<numar_elemente; i++){
        v[i] = obj;
        }
    }

void Vector_Complex::init2(int n){
    int i;
    for(i=0; i<numar_elemente; i++){
        cin >> v[i];
        }
    }

Vector_Complex(const Vector_Complex &og){
    int i;
    for(i=0; i<og.numar_elemente; i++){
        v[i].real = og.v[i].real;
        v[i].imag = og.v[i].imag;
        }
    }

~Vector_Complex(){delete []v;}

void Vector_Complex::vector_modul(double &w){                       //needs to be performed on a copy
    int i;
    for(i=0; i<numar_elemente; i++){
        w[i] = v[i].modul;
        }
    }

void Vector_Complex::sortare(){
    int i, j, w[numar_elemente], c;
    for(i=0; i<numar_elemente; i++){
        w[i] = 0;
        }
    this.vector_modul(&w);
    for(i=1; i<numar_elemente; i++){
        for(j=i; j<numar_elemente; j++){
            if(w[j] < w[j - 1]){
                c = w[j];
                w[j] = w[j - 1];
                w[j - 1] = c;
                }
            }
        }
    }

Numar_Complex Vector_Complex::suma(){
    int i; Numar_Complex resultat();
    for(i=0; i<numar_elemente; i++){
        resultat = resultat + v[i];
        }
    return resultat;
    }

Vector_Complex Vector_Complex::produs_scalar(Vector_Complex &obj){
    int i;
    Vector_Complex resultat;
    Numar_Complex zero();
    resultat.init1(numar_elemente, zero);
    for(i=0; i<numar_elemente; i++){
        resultat.v[i] = v[i] * obj.v[i];
        }
    return resultat;
    }




int main()
{
    return 0;
}
