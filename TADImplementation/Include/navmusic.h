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
    void set_fila_musicas(vector<string> FilaMusicas){
        _fila_musicas = FilaMusicas;
    }
    vector<string> get_fila_musicas(){
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

    ~NAVMUSIC(){}

    //Methods
    void AumentarVolume();
    void DiminuirVolume();
    void ExibirMusicaAtual();
    void ExibirFila();
    void AdicionarNaFila(string musica);
    void ExcluirDaFila();
    void PularMusica();
};
