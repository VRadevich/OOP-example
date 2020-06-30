// OOP-example.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

namespace nsEx1
{
    class Ex1 
    {
    // Секция определения членов класса.
    public:  
        Ex1()=default;
        Ex1(int A, int B);
        void Swap_ab(void);
        int get_a(void);
        int get_b(void);
    protected:
        int a,b;
    };
    // Конец секции.

    // Секция определения функций и конструкторов.
    Ex1::Ex1(int A, int B) {
        a = A;
        b = B;
    }

    void Ex1::Swap_ab(void) {
        int swapHelper = a; // Свап значений через третью переменную.
        a = b;
        b = swapHelper;     
    }

    int Ex1::get_a(void) {
        return a;
    }

    int Ex1::get_b(void) {
        return b;
    }
    // Конец секции.

    // Унаследованный класс.
    class Ex2: public Ex1 {
    // Секция определения членов класса.
    public:
        Ex2(int A, int B, int C); 
        int get_c(void);
        void Swap_ac(void);
        void Swap_bc(void);
    private:
        int  c;
    };
    // Конец секции.

    // Секция определения функций и конструкторов.
    Ex2::Ex2(int A, int B, int C) {
        a = A;
        b = B;
        c = C;
    }

    int Ex2::get_c(void) {
        return c;
    }

    void Ex2::Swap_ac(void) {
        int swapHelper = a; // Свап значений через третью переменную.
        a = c;
        c = swapHelper;
    }

    void Ex2::Swap_bc(void) {
        int swapHelper = b; // Свап значений через третью переменную.
        b= c;
        c = swapHelper;
    }
    // Конец секции.
}
using namespace nsEx1;

int main()
{
    // Объявление экземпляров классов
    Ex1 Example1_1(10,15);
    Ex1 Example1_2(20, 25);
    Ex2 Example2_1(3, 6, 9);
    Ex2 Example2_2(7, 14, 21);

    cout<< "Instances of class examples was declared succsessfully" <<endl;

    cout << "A in first Example1: " << Example1_1.get_a() << endl
        << "B in first Example1: " << Example1_1.get_b() << endl;

    cout << "A in second Example1: " << Example1_2.get_a() << endl
        << "B in second Example1: " << Example1_2.get_b() << endl;

    cout << "A in first Example2: " << Example2_1.get_a() << endl
        << "B in first Example2: " << Example2_1.get_b() << endl
        << "C in first Example2: " << Example2_1.get_c() << endl;

    cout << "A in second Example2: " << Example2_2.get_a() << endl
        << "B in second Example2: " << Example2_2.get_b() << endl
        << "C in second Example2: " << Example2_2.get_c() << endl;

    // Свапы

    Example1_1.Swap_ab();
    Example1_2.Swap_ab();
    cout<< "As and Bs swaped in all class Example1 instances" << endl;

    cout << "A in first Example1: " << Example1_1.get_a() << endl
        << "B in first Example1: " << Example1_1.get_b() << endl;

    cout << "A in second Example1: " << Example1_2.get_a() << endl
        << "B in second Example1: " << Example1_2.get_b() << endl;

    Example2_1.Swap_ac();
    Example2_2.Swap_ac();
    cout << "As and Cs swaped in all class Example2 instances" << endl;

    cout << "A in first Example2: " << Example2_1.get_a() << endl
        << "B in first Example2: " << Example2_1.get_b() << endl
        << "C in first Example2: " << Example2_1.get_c() << endl;

    cout << "A in second Example2: " << Example2_2.get_a() << endl
        << "B in second Example2: " << Example2_2.get_b() << endl
        << "C in second Example2: " << Example2_2.get_c() << endl;

    Example2_1.Swap_bc();
    Example2_2.Swap_bc();
    cout << "Bs and Cs swaped in all class Example2 instances" << endl;

    cout << "A in first Example2: " << Example2_1.get_a() << endl
        << "B in first Example2: " << Example2_1.get_b() << endl
        << "C in first Example2: " << Example2_1.get_c() << endl;

    cout << "A in second Example2: " << Example2_2.get_a() << endl
        << "B in second Example2: " << Example2_2.get_b() << endl
        << "C in second Example2: " << Example2_2.get_c() << endl;



}

