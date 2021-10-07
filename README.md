# Лабораторная работа №1
**Вариант 21**

Функциональность реализуемой библиотеки:
> Вычисление суммы квадратов заданного количества первых положительных чисел

Ход работы:
1. Для выполнения лабораторной работы будем использовать [Visual Studio Code](https://code.visualstudio.com/download)
2. Установим [MSYS2](https://github.com/msys2/msys2-installer/releases/download/2021-06-04/msys2-x86_64-20210604.exe)
3. Реализуем функцию _CalculateSquareSum_ с нужным функционалом

Функция _CalculateSquareSum_:
```
int SumOfSquaresFunc(int count)
{
    int sum=0;
    for (int i = 1; i<=count ; ++i ) {
        sum+=i*i;
    }
    return sum;
} 
```


Для запуска потребуется:
```
g++ -fpic -shared lib/SumOfSquareLib.cpp -o SumOfSquareLib.dll
g++ main.cpp SumOfSquareLib.dll
```

Запустить исполняемый файл **a.exe**
