#include<iostream>
#include "/home/luccarig/Documents/GitHub/AutobtzExercises/ChallengesC++/TADImplementation/Include/navmusic.h"


void NAVMUSIC::AumentarVolume(){
        if(_volume = 100){
            printf("O volume ja esta no maximo\n");
        }else{
            _volume++;
        }
    }

void NAVMUSIC::DiminuirVolume(){
        if(_volume = 0){
            printf("O volume ja esta no minimo\n");
        }else{
            _volume--;
        }
    }

void NAVMUSIC::ExibirMusicaAtual(){
        std::cout << _musica_atual << std::endl;
    }

void NAVMUSIC::ExibirFila(){
        for(string itr: _fila_musicas){
            std::cout << itr << ", ";
        }
    }

void NAVMUSIC::AdicionarNaFila(string musica){
        _fila_musicas.push_back(musica);
    }

void NAVMUSIC::ExcluirDaFila(){
        string MusicaExcluir;
        std::cin >> MusicaExcluir;
        auto itr = std::find(_fila_musicas.begin(), _fila_musicas.end(), MusicaExcluir);
        if(itr != _fila_musicas.end()){
            _fila_musicas.erase(itr);
        }else{
            printf("A musica inserida nao esta na fila\n");
        }

    }

void NAVMUSIC::PularMusica(){
        _musica_atual = _fila_musicas[0];
        _fila_musicas.erase(_fila_musicas.begin());
    }


vector<string> FilaLucca;
NAVMUSIC Lucca = NAVMUSIC("Californication",  FilaLucca, 99);

vector<string> FilaJoao;
NAVMUSIC Joao = NAVMUSIC("Batphone", FilaJoao, 2);




