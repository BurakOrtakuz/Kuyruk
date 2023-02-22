#ifndef Kuyruk_hpp
#define Kuyruk_hpp
#include "Dugum.hpp"
class Kuyruk{
public:
    Kuyruk();
    void ekle(int veri);
    void cikar();
    bool bosmu();
    int getir();
    
private:
    Dugum* ilk;
    Dugum* son;

};
#endif