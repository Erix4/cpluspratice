#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

main(){
    //
    int empty[2] = {0, 1};
    //
    //empty[4] = 2;
    std::cout << "Array size: " << size(empty) << "\n";
    //
    for(int n = 0; n < std::size_t(empty); n++){
        cout << empty[n] << ", ";
    }
    //
}

int size(int arr[]){
    return sizeof(arr)/sizeof(arr[0]);
};