#include "Kuyruk.hpp"
#include <iostream>

int main(){
    Kuyruk* kuyruk= new Kuyruk();
    kuyruk->ekle(5);
    std::cout<<kuyruk->getir();
    kuyruk->cikar();
    std::cout<<kuyruk->getir();
}