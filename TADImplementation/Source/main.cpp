#include<iostream>
//#include "/home/luccarig/Documents/GitHub/AutobtzExercises/ChallengesC++/TADImplementation/Include/navmusic.h"
#include "../Include/navmusic.h"
#include "navmusic.cpp"


int main(){
    
    Lucca.AdicionarNaFila("Pink as Floyd");
    Lucca.AdicionarNaFila("Cant Stop");
    Lucca.AdicionarNaFila("Under the bridge");
    Lucca.AumentarVolume();
    Lucca.AumentarVolume();
    Lucca.ExibirMusicaAtual();
    Lucca.ExibirFila();

    return 0;
}
    
