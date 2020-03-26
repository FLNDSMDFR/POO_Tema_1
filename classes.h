#ifndef CLASSES_H_INCLUDED
#define CLASSES_H_INCLUDED

using namespace std;

class Numar_Complex{
private:
    double real, imag;
public:
    Numar_Complex(double r = 0, double i = 0)   {real = r; imag = i;}
    ~Numar_Complex()                                                          //destructor
    Numar_Complex(const Numar_Complex &og)                                    //copy constructor

    double get_real(){return real;}
    double get_imag(){return imag;}

    double modul();

    Numar_Complex operator + (const Numar_Complex &obj){                      //"+" operator overload
        Numar_Complex result;
        result.real = real + obj.real;
        result.imag - imag + obj.imag;
        return result;
        }
    double suma_2el(Numar_Complex obj);

    Numar_Complex operator * (const Numar_Complex &obj){                      //"*" operator overload
        Numar_Complex result;
        result.real = (real * obj.real) + (imag * obj.imag);
        result.imag = (real * obj.imag) + (imag * obj.real);
        return result;
        }
    double produs_2el(Numar_Complex obj);

    Numar_Complex operator / (constNumar_Complex &obj){                      //"/" operator overload
        Numar_Complex result;
        result.real = ((real * obj.real) + (imag * obj.imag)) / ((obj.real * obj.real) + (obj.imag * obj.imag));
        result.imag = ((obj.real * imag) + (real * obj.imag)) / ((obj.real * obj.real) + (obj.imag * obj.imag));
        return result;
        }
    double div_2el(Numar_Complex obj);

    friend citire& operator>>(citire& cit, const Numar_Complex& obj);
    friend afisare& operator<<(afisare& afis, const Numar_Complex& obj);
    friend class Vector_Complex;
};

class Vector_Complex{
private:
    int numar_elemente;
    Numar_Complex *v;
public:
    void init1(int n, Numar_Complex obj);
    void init2(int n);
    Vector_Complex(const Vector_Complex &og);                                //copy constructor
    ~Vector_complex();                                                       //destructor

    get_numar_elemente(){return numar_elemente;}
    get_vector(){return *v;}

    void vector_modul(int &w);
    void sortare();

    Numar_Complex suma();
    Vector_Complex produs_scalar(Vector_Complex &obj);
};

#endif // CLASSES_H_INCLUDED
