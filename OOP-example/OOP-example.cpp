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
        Ex1(int A, int B);
        void Swap_ab( void );
        int get_a( void );
        int get_b( void );
    private:
        int a,b;
    };
    // Конец секции.

    // Секция определения функций и конструкторов.
    Ex1::Ex1(int A, int B) {
        a = A;
        b = B;
    }

    void Ex1::Swap_ab( void ) {
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
}
using namespace nsEx1;

int main()
{
    Ex1 Example1(10,15);
    Ex1 Example2(20, 25);
    cout << "A in first Example: " << Example1.get_a() << " B in second Example: " << Example2.get_b() << endl;
    Example1.Swap_ab();
    Example2.Swap_ab();
    cout << "A in first Example: " << Example1.get_a() << " B in second Example: " << Example2.get_b() << endl;
}

