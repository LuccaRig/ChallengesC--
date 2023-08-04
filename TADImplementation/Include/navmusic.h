#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
using std::string;
using std::vector;

class NAVMUSIC{
    private:
    string _musica_atual;
    vector<string> _fila_musicas;
    int _volume;

    public:
    //Setters and Getters
    void set_musica_atual(string MusicaAtual){
        _musica_atual = MusicaAtual;
    }
    string get_musica_atual(){
        return _musica_atual;
    }
    void set_fila_musicas(vector<string> FilaMusicas){ //pesquisar
        _fila_musicas = FilaMusicas;
    }
    vector<string> get_fila_musicas(){ //pesquisar
        return _fila_musicas;
    }
    void set_volume(int Volume){
        _volume = Volume;
    }
    int get_volume(){
        return _volume;
    }

    //Constructor and Destructor
    NAVMUSIC(string MusicaAtual, vector<string> FilaMusicas, int Volume){
        _musica_atual = MusicaAtual;
        _fila_musicas = FilaMusicas;
        _volume = Volume;
    }

    ~NAVMUSIC(){ //pesquisar
        /*delete  [] _fila_musicas;
        _fila_musicas = nullptr;*/
    }

    //Methods
    
    void AumentarVolume(){
        if(_volume = 100){
            printf("O volume ja esta no maximo\n");
        }else{
            _volume++;
        }
    }
    void DiminuirVolume(){
        if(_volume = 0){
            printf("O volume ja esta no minimo\n");
        }else{
            _volume--;
        }
    }
    void ExibirMusicaAtual(){
        std::cout << _musica_atual << std::endl;
    }
    void ExibirFila(){
        for(string itr: _fila_musicas){
            std::cout << itr << ", ";
        }
    }
    void AdicionarNaFila(string musica){
        _fila_musicas.push_back(musica);
    }
    void ExcluirDaFila(){
        string MusicaExcluir;
        std::cin >> MusicaExcluir;
        auto itr = std::find(_fila_musicas.begin(), _fila_musicas.end(), MusicaExcluir);
        if(itr != _fila_musicas.end()){
            _fila_musicas.erase(itr);
        }else{
            printf("A musica inserida nao esta na fila\n");
        }

    }
    void PularMusica();
};
