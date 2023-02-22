#include "Kuyruk.hpp"
#include <iostream>
Kuyruk::Kuyruk(){
    ilk=0;
    son=0;
}
void Kuyruk::ekle(int veri){
    Dugum* gelenVeri= new Dugum(veri);
    if(ilk==0){
        ilk=gelenVeri;
        son=gelenVeri;
    }else{
        son->sonraki=gelenVeri;
        son=gelenVeri;
    }    
}
void Kuyruk::cikar(){
    if(ilk!=0){
        Dugum* gec=ilk->sonraki;
        delete ilk;
        ilk=gec;
    }
}
int Kuyruk::getir(){
    if(ilk!=0)
        return ilk->veri;
    throw std::out_of_range("Kuyruk Bos");    
}
bool Kuyruk::bosmu(){
    if(ilk==0)
        return true;
    return false;    
}


