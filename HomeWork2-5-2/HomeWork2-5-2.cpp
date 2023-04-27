#include <iostream>


class Triangle {
private:
    int at, bt, ct, At, Bt, Ct;
public:
    Triangle (){}
    Triangle(int a, int b, int c, int A, int B, int C) :
        at(a), bt(b), ct(c), At(A), Bt(B), Ct(C) {}
    
    void print_info()  {
        std::cout << "Стороны:" << " a = " << at << ", b = " << bt << ", c = " << ct
            << "\n" << "Углы: " << " A = " << At << ", B = " << Bt << ", C = " << Ct << "\n" << std::endl;
    }
};

class Triangle1 : public Triangle {
public:
    Triangle1(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
        std::cout << "Треугольник:\t" << std::endl;
    }
};
class RightTriangle : public Triangle {
public:
    RightTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        std::cout << "Прямоугольный треугольник:\t" << std::endl;
    }
};

class IsoscelesTriangle : public Triangle {
public:
    IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, a ,b, A, A , B) {
        std::cout << "Равнобедренный треугольник:\t" << std::endl;
    }
    
};

class EquilateralTriangle : public Triangle {
public:
    EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {
        std::cout << "Равносторонний треугольник:\t" << std::endl;
    }
    
};

class Quadrilateral {
private:
    int aq, bq, cq, dq, Aq, Bq, Cq, Dq;
public: 
    Quadrilateral (){}
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :
        aq(a), bq(b), cq(c), dq(d), Aq(A), Bq(B), Cq(C), Dq(D) {}
    
    void print_info(){
        std::cout << "Стороны:" << " a = " << aq << ", b = " << bq << ", c = " << cq << ", d = " << dq << "\n"
            << "Углы: " << " A = " << Aq << ", B = " << Bq << ", C = " << Cq << ", D = " << Dq << "\n" << std::endl;
    }
};
class Quadrilateral1 : public Quadrilateral {
public:
    Quadrilateral1(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
        std::cout << "Четырёхугольник:\t" << std::endl;
    }
};

class Rectangle : public Quadrilateral {
public:
    Rectangle(int a, int b) : Quadrilateral(a, b, a, b, 90, 90, 90, 90) {
        std::cout << "Прямоугольник:\t" << std::endl;
    }
    
};

class Square : public Quadrilateral {
public:
    Square(int a) : Quadrilateral(a, a, a, a, 90, 90, 90, 90) {
        std::cout << "Квадрат:\t" << std::endl;
    }
    
};

class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int a, int b) : Quadrilateral(a, b, a, b, 60, 60, 120, 120) {
        std::cout << "Параллелограмм:\t" << std::endl;
    }
    
};

class Rhombus : public Quadrilateral {
public:
    Rhombus(int a, int A) : Quadrilateral(a, a, a, a, 60, 60, 120, 120) {
        std::cout << "Ромб:\t" << std::endl;
    }
    
};
int main() {
    setlocale(LC_ALL, "Russian");
    Triangle1 t1(10, 20, 30, 30, 60, 90);
    t1.print_info();
    
    RightTriangle rt(10, 20, 30, 40, 50);
    rt.print_info();

    IsoscelesTriangle it(10, 20, 45, 90);
    it.print_info();

    EquilateralTriangle et(10);
    et.print_info();

    Quadrilateral1 q(10, 20, 30, 40, 90, 90, 90, 90);
    q.print_info();

    Rectangle r(10, 20);
    r.print_info();

    Square s(10);
    s.print_info();

    Parallelogram p(10, 20);
    p.print_info();

    Rhombus rh(10, 120);
    rh.print_info();

    return 0;
}