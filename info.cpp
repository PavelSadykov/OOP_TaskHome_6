//
//  info.cpp
//  ДЗ 6 ООП
//
//  Created by Павел on 04.01.2023.
//

#include <stdio.h>


// 1, 2 .Способы создать конструктор по умолчанию и удалить
//Способ 1:
class D
{
private:
    int year{ 1987 };
    int month{ 7 };
    int day{ 10 };
 
// Конструктор не предоставлен, поэтому создается открытый конструктор по умолчанию
};
 
//  int main(){
    D num(); // вызывает неявный конструктор
 

//Способ 2:
class A{
public:
A();//Неявный конструктор без аргументов

int  RES ();

~ A(){}//деструктор - удаление
private:

};


//Способ 3:
class MyClass
{
public:
     MyClass () = default; // конструктор по умолчанию
MyClass(int i):data(i){}

~MyClass (){}//деструктор - удаление
private:
int data;
};






// 3.Объявление и определение для operator[] для доступа к элементам поля
//std::string по индексу
//.hpp
class MyClass1 {

public:
 const std::string & operator[](int index);
 
private:
 std::string _arr[3]{"123","456","789"};

 
 
};

//.cpp

const std::string & MyClass1:: operator[](int index){
 return arr[index];
}

//int main()
MyClass1 arr;
int index;
std::cout<<"\nВведите индекс --> ";
std::cin>> index;
std::cout<<"В массиве строк arr заданному индексу  "<<index<<"  соответствует строка : "<<arr[index]<<std::endl;


//4. Объявление и определение для любого константного метода
/*
функция класса const используется, чтобы сообщить компилятору, что функция класса не изменит переменную-член. Таким образом, постоянный объект этого типа может безопасно вызывать его.
*/

class X {
private:
int a{1};

public:
void PrintA() const {
std::cout << a << "\n";
}
};

int main() {
const X x;
x.PrintA();
}
/*
 Мы сообщаем компилятору, что PrintA() является const , поэтому константные объекты могут безопасно вызывать его.
 
 */


