#include <iostream>
#include <cmath>
#define numerator(y)(4*pow((y),2))
#define denominator(y,t,z)(4*(y)*exp(z)-2*pow((t),3))

#define x 1.58
#define fun_z(x,y)((3*x)/(pow(cos(y),2)+3))
#define fun_b(x,y,z)(((pow((z),2)/(y+pow((x),3))+(sin((y)/5))))
using namespace std;

void zd_1()
{
    double t = 1;
    double z = 3;
    double y = sin(t);
    cout << "x=" << numerator(y) / denominator(y, t, z) << endl;
}
void zd_2()
{
    double y = 3.42;
    double z = fun_z(x, y);
    double b = fun_b(x, y, z));
    cout << "b=" << b << endl;
}
void zd_3()
{
    double a;
    cout << "Введите а" << endl;
    cin >> a;
    double y = pow(cos(a), 2) + pow(cos(a), 4);
    cout << "y=" <<y<< endl;

}
void choiceTasks()
{   
    while (true)
    {
            int num_zd;
            cout << "Выберите задание. Введите 1,2,3" << endl;
            cin >> num_zd;
            switch (num_zd)
            {
            case 1:
                zd_1();
                break;
            case 2:
                zd_2();
                break;
            case 3:
                zd_3();
                break;
            default:
                cout << "Ошибка ввода" << endl;
                break;
            }
    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    choiceTasks();
}

