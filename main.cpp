#include <iostream>
#include <list>
using namespace std;

#include <Mascota.hpp>
#include <Alimento.hpp>
#include <Dibujo.hpp>

int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;


    Dibujo dibujo1("./assets/wilson.txt");
    dibujo1.Dibujar();
    Dibujo dibujo2("./assets/dragon.txt");
    dibujo2.Dibujar();

    // dibujos.push_front(dibujo1);
    // dibujos.push_front(dibujo2);


    Mascota m1,m2,m3;

    list<Mascota> mascotas;
    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);

    Alimento alimento(5);
    for (auto &&mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);
    }
    
    for (auto &&mascotaActual : mascotas)
    {
    cout<<"Mascota " << mascotaActual.LeerEnergia() <<endl;     
    }

    return 0;
}



