#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

void QuaEq();
void BiQuaEq();
void ArPro();
void GePro();
void Tri();
void Pas();
void Fib();

int main()
{
    setlocale(LC_ALL, "ru");
    int i;
    cout << "\t1. Quadratic equations\n";
    cout << "\t2. Biquadratic equations\n";
    cout << "\t3. Arithmetic progression\n";
    cout << "\t4. Geometric progression\n";
    cout << "\t5. \n";
    cout << "\t6. Pascal triangle\n";
    cout << "\t7. Fibonacci numbers\n";
    cout << "\t8. Nothing\n";
    cout << "\t9. Nothing\n";
    cout << "\t10. Nothing\n";
    cout << "I choose: ";
        cin >> i;
        switch (i)
        {
        case 1:
            cout << "1. Quadratic equations\n\n";
            QuaEq();
            break;
        case 2:
            cout << "2. Biquadratic equations\n\n";
            BiQuaEq();
            break;
        case 3:
            cout << "3. Arithmetic progression\n\n";
            ArPro();
            break;
        case 4:
            cout << "4. Geometric progression\n\n";
            GePro();
            break;
        case 5:
            cout << "5.\n\n";
            Tri();
            break;
        case 6:
            cout << "6. Pascal triangle\n\n";
            Pas();
            break;
        case 7:
            cout << "7. Fibonacci numbers\n\n";
            Fib();
            break;
        case 8:
            cout << "8.\n\n";

            break;
        default:
            cout << "Ooops... Something went wrong...\n\n";
            break;
        }
}

void QuaEq()
{
    float a, b, c, x, d;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    d = b * b - 4 * a * c;
    printf("%fx^2 + %fx %f = 0\n\n", a, b, c);
    printf("D = b^2 - 4ac = %f^2 - 4*%f*%f = %f\n\n", b, a, c, d);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("x1 = (-b + √D)/2a = (-%f + √%f)/(2 * %f) = %f", b, d, a, x);
        x = (-1 * b - sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("x1 = (-b - √D)/2a = (-%f + √%f)/(2 * %f) = %f", b, d, a, x);
    }
    if (d == 0)
    {
        x = (-1 * b + sqrt(b * b - 4 * a * c)) / (2 * a);
        printf("x1 =");
        cout << "Первый корень равен " << x << endl;
    }
    if(d < 0)
    {
        cout << "Дискриминант меньше 0, корни невещественные." << endl;
    }
}

void BiQuaEq()
{
    float a, b, c, D, y1, y2;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    D = pow(b, 2) - 4 * a * c;
    printf("D = b^2 - 4ac = %f^2 - 4*%f*%f = %f\n\n", b, a, c, D);
    y1 = (-1 * b + sqrt(D)) / (2.0 * a);
    y2 = (-1 * b - sqrt(D)) / (2.0 * a);
    printf("y1 = %f\n", y1);
    printf("y1 = %f\n\n", y1);
    printf("x1 = %f or x1 = -%f\n", sqrt(y1), sqrt(y1));
    printf("x2 = %f or x2 = -%f\n\n", sqrt(y2), sqrt(y2));
}

void ArPro()
{

}

void GePro()
{

}

void Tri()
{

}

void Pas()
{
    int row;
    cout << "How many Rows? ";
    cin >> row;
    cout << endl;
    int j = row;
    for (int i = 0; i < row; i++)
    {
        int l = 1;
        cout.width(j);
        j--;
        for (int k = 0; k <= i; k++)
        {
            cout << " " << l;
            l = l * (i - k) / (k + 1);
        }
        cout << endl;
    }
}

void Fib()
{
    int x = 1, y, z, n;
    y = x;
    cout << "Please enter n:\n";
    cin >> n;
    cout << x << " " << y;
    for (int i = 3; i <= n; i++)
    {
        z = x + y;
        cout << " " << z;
        x = y, y = z;
    }
}
