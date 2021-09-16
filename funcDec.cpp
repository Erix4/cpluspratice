#include <iostream>

using namespace std;

void pointFib(int *a, int *b, int *fib);//you must specify the variable names in the declaration when using pointers

int getFib(int a, int b, int c = 4){//when using default arguments you (probably) must specify the function before main()
    return a + b + c;
}

int main(){
    //
    cout << "Time for fibinnaci!" << "\n" << "1, 1, ";
    //
    int a = 1;
    int b = 1;
    //
    int fib;
    //
    do
    {
        pointFib(&a, &b, &fib);//you must append '&' to the start of the variable to specify that it is being pointed to
        //
        cout << fib << "." << getFib(a, b) << ", ";
        //
    } while (fib < 50);
    //
    cout << "done!";
    //
}

void pointFib(int *a, int *b, int *fib){
    int c = *a + *b;
    *a = *b;
    *b = c;
    *fib = c;
}