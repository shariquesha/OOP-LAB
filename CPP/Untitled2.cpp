#include<iostream>
#include<stdlib.h>
using namespace std;

void* operator new(size_t sz) {
    cout<<("global op new called, size = %zu\n",sz);
    return malloc(sz);
}
void operator delete(void* ptr) 
{
    puts("global op delete called");
    free(ptr);
}
int main() {
     int* p1 = new int;
     delete p1;
 
     int* p2 = new int[10]; // guaranteed to call the replacement in C++11
     delete[] p2;
}
