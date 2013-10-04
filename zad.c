// Найти сумму всех чисел от 1 до 100.
#include <iostream.h>
#include <conio.h>

int main(int argc, char* argv[])
{
    int sum = 0,i;

    for (i=1;i!=101;i++){
       sum+=i;
    }
    cout << sum;
    getch();
return 0;
}

