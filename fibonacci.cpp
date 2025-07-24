#include <iostream>

long long int fibonacci(int n){
    long long int answer =0;
    if (n==0){return 0;}
    else if(n==1){return 1;}
    else {return answer = fibonacci(n-1)+fibonacci (n-2);} 
}

int main (){

    int userNumber = 0;
    std::cout<<"Введите число для последовательности Фибоначчи: ";
    std::cin>>userNumber;
    fibonacci(userNumber);
    std::cout<<"Последовательность Фибоначчи: ";
    for (int i=0;i<userNumber; i++){ {std::cout<<fibonacci(i)<<" ";}}
    std::cout<<std::endl;
}
//Алгоритмическая сложность : время - O(2^n), так как каждый вызов рекурсивноц функции вызывает по два других вызова (n-1 и n-2); память - O(n), так как в стеке хранятся переменные для каждого вызова функции, пока вычисления не достигают 0 или 1.