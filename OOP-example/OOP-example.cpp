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
        virtual int sum() {
            return 0;
        }
    protected:
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

    // Унаследованный класс

    class Ex2 : public Ex1 {
    public: 
        Ex2(int A, int B) :Ex1(A, B) {}
        int sum();
    };

    int Ex2::sum() {
        int s = a + b;
        return s;
    }
}
using namespace nsEx1;

int main()
{
    Ex1* example;
    Ex2 Example1(10,15);
    Ex2 Example2(20, 25);
    cout << "A in Example1 " << Example1.get_a() << " B in Example1: " << Example1.get_b() << endl;
    cout << "A in Example2 " << Example2.get_a() << " B in Example2: " << Example2.get_b() << endl;
    example = &Example1;
    int ex1Sum = example->sum();
    cout << "Sum of A an B in Example1: " << ex1Sum << endl;
    example = &Example2;
    int ex2Sum = example->sum();
    cout << "Sum of A an B in Example2: " << ex2Sum << endl;


}

