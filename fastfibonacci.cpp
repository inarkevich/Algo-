#include <iostream>

long long int *array = new long long int[];

long long int fibonacci(int n){
    long long int answer =0;
   // if (array[n]==array[n]){return array[n];}
    if (n==0){array[n] =0;
        return array[n];}
    else if(n==1){array[n] = 1;
        return array[n];}
    else {answer = fibonacci(n-1)+fibonacci (n-2);
        array[n] = answer;
        return array[n];} 
        delete [] array;
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
