#include <iostream>
long long int *array = nullptr;  
long long int fibonacci(int n){
   
    long long int answer =0;
    if (array[n]>=0)
    {return array[n];}  
    else if (n==0){array[n] =0;
        return array[n];}
    else if(n==1){array[n] = 1;
        return array[n];}
    else {answer = fibonacci(n-1)+fibonacci (n-2);
        array[n] = answer;
        return array[n];}    
}

int main (){

    int userNumber = 0;
    std::cout<<"Введите число для последовательности Фибоначчи: ";
    std::cin>>userNumber;
    array = new long long int [userNumber+1];
    for (int i=0;i<userNumber+1;i++){
        array[i] = -1;
    }
    fibonacci(userNumber);
    std::cout<<"Последовательность Фибоначчи: ";
    for (int i=0;i<userNumber+1; i++){ {std::cout<<fibonacci(i)<<" ";}}
    std::cout<<std::endl;
    delete [] array;  
    
}
