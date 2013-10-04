// Создайте функцию, которая меняет местами значения двух элементов.
#include <iostream.h>
#include <conio.h>

void swap (int& a, int& b){
    int c;
    c = a;
    a = b;
    b = c;
}
int main(int argc, char* argv[])
{
    int x = 10, y = 15;
    swap(x,y);
    cout << x << ' ' << y;
    getch();
return 0;
}
