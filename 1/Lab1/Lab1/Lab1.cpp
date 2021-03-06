
#include <iostream>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    //Лабораторна робота 1

    // Завдання 1
    // Розробити алгоритм та написати програму, в якій здійснюється читання значення певної довжини в дюймах і обчислюється й виводиться значення цієї довжини в міліметрах (1 дюйм = 25,4 мм).

    float inch, mm;
    cout << "Введите значение в дюймах, чтобы получить миллиметры " << endl;
    cin >> inch;
    mm = inch * 25.4;
    inch >= 0 ? cout << "Ваше значение в миллиметрах = " << mm << endl : cout << "Введены неправильные данные" << endl;


    
    //Завдання 2
    //Розробити алгоритм та написати програму, яка зчитує вісім значень і повертає середнє арифметичне.

    int a, b, c, d, e, f, g, h, result;
    cout << "Введите 8 цифр чтобы получить среднее арифметическое " << endl;
    cin >> a >> b >> c >> d >> e >> f >> g >> h;
    result = (a + b + c + d + e + f + g + h) / 8;
    cout << "Среднее арифметическое = " << result << endl;



    //Завдання 3
    // Розробити алгоритм та написати програму, яка зчитує значення змінної n цілого типу й обчислює n!

    int n, result;
    cout << "Введите число факториал которого Вы хотите посчитать " << endl;
    cin >> n;
    result = 1;
    while (n != 1) {
        result *= n;
        n--;
    }
    cout << "Факториал введенного числа = " << result << endl;



    //Лабораторна робота 2

    //1.1 Програмна реалізація алгоритму з розгалуженням
    //    Розробити програму розв'язання квадратного рівняння. Програма повинна включати перевірку всіх можливих варіантів вихідних даних. Зокрема, слід перевіряти дискримінант, а також передбачити перевірку, чи рівняння є квадратним. Якщо рівняння виродилося в лінійне, слід передбачити знаходження кореня цього лінійного рівняння, або встановити наявність безлічі розв'язків(відсутності розв'язків). 

    double a, b, c, x1, x2, d;
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0) {
            cout << "Бесконечное количевство корней";
        }

        else if (b != 0) {
            if (c == 0) {
                cout << "Нет корней";
            }
            else if (c != 0) {
                x1 = -c / b;
                cout << x1;
            }
        }
    }

    else if (a != 0) {
        d = pow(b, 2) - 4 * a * c;
        if (d < 0) {
            cout << "Нет корней";
        }
        else if (d > 0) {
            x1 = ((-b + sqrt(d)) / 2 * a);
            x2 = ((-b - sqrt(d)) / 2 * a);
            cout << x1 << " , " << x2;
        }
        else if (d == 0) {
            x1 = -b / 2 * a;
            cout << x1;
        }
    }




    //1.2 Програмна реалізація циклічного алгоритму
    //Розробити програму, яка реалізує алгоритм обчислення виразу :

    int n, k, x, y, i;
    cin >> n >> k >> x;
    if (k > n) {
        cout << "Error1";
    }
    else if (k <= n) {
        if (n < 0) {
            cout << "Error2";
        }
        else if (n >= 0) {
            y = 0;
            i = 1;
            do {
                if (i == k) {
                    i++;
                }
                else if (i != k) {
                    if ((x + 2) != 0) {
                        y += i / (x + 2);
                        i++;
                        cout << y;
                    }
                    else if ((x + 2) == 0) {
                        cout << "Error";
                    }
                }
            } while (i <= n);
        }
    }




    //1.3 Індивідуальне завдання

    //    Розробити алгоритм програми, яка обчислює значення функції в заданому діапазоні.Програма повинна прочитати значення початку і кінця інтервалу, крок збільшення аргументу і значення n.

    //    Алгоритм повинен бути представлений з використанням UML - діаграми діяльності.Алгоритм повинен містити такі частини :

    //зчитування даних
    //    основний цикл, у якому встановлюється нове значення аргументу, розраховується значення функції, виводяться на екран значення аргументу і функції та здійснюється збільшення значення аргументу на величину кроку.

    //    Конкретна функція визначається відповідно до номеру в списку студентів у групах(номер варіанту).

    int a, b, h, n, y, i, j, s;
    cout << "Введите входные данные (интервал a-b, шаг h, n) " << endl;
    cin >> a >> b >> h >> n;
    if (n > 1) {
        int x = a;
        do {

            if (x < 0) {
                y = 1;
                i = 1;
                do {
                    s = 0;
                    j = 1;
                    do {
                        s += pow((x - pow(i, 2) + j), 2);
                        j++;
                    } while (j <= n);
                    y *= s;
                    i++;
                } while (i <= n);
            }

            else if (x >= 0) {
                y = 0;
                i = 0;
                do {
                    y += (x - 1) / (i + 1);
                    i++;
                } while (i <= n);
            }
            cout << "x = " << x << " y = " << y << endl;
            x += h;
        } while (x <= b);
        cout << "end" << endl;
    }
    else if (n < 1) {
        cout << "incorrect n" << endl;
    }


    
}
