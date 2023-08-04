#include <iostream>

char board[3][3];


void resetBoard(){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            board[i][j] = ' ';
        }
    }
}

void printBoard(){ 
    printf("       |      |        \n");
    printf("   %c   |  %c   |  %c    \n", board[0][0], board[0][1], board[0][2]);
    printf("-------|------|------- \n");
    printf("       |      |        \n");
    printf("   %c   |  %c   |  %c    \n", board[1][0], board[1][1], board[1][2]);
    printf("       |      |        \n");
    printf("-------|------|------- \n");
    printf("       |      |        \n");
    printf("   %c   |  %c   |  %c    \n", board[2][0], board[2][1], board[2][2]);
    printf("       |      |        \n");
    printf("\n");
    
}

int CheckForFreeSpaces(){
    int free_space = 9;

    for(int i=0;i<3;i++){
        for( int j=0;j<3;j++){
            if(board[i][j] != ' '){
                free_space--;
            }
        }
    }

    return free_space;

}

void printWinner(char winner){
    switch(winner){
        case ' ': std::cout << "Empate!";
            break;
        case 'X': std::cout << "Vitoria do Jogador";
            break;
        case 'O': std::cout << "Vitoria do Computador";
            break;
    }
}

void Player1Movement(){
    int Linha, Coluna;
    
    do{
    std::cout << "Insira a linha da sua jogada: ";
    std::cin >> Linha;
    std::cout << std::endl;

    std::cout << "Insira a coluna da sua jogada: ";
    std::cin >> Coluna;
    std::cout << std::endl;
    
    if((Linha <= 2 && Coluna <= 2) && (Linha >= 0 && Coluna >= 0) && (board[Linha][Coluna] == ' ')){
        board[Linha][Coluna] = 'X';
        break;
        }else{
        std::cout << "Jogada Invalida, tente novamente!" << std::endl;
        printBoard();
        continue;
        }
    }while(true);
    
}

void ComputerMove(){
    srand(time(0));
    int linha = 0, coluna=0;

    if(CheckForFreeSpaces() > 0){
        do{
            linha = rand() % 3;
            coluna = rand() % 3;
        }while(board[linha][coluna] != ' ');

        board[linha][coluna] = 'O';
    }else{
        printWinner(' ');
    }
}

char CheckWinner(){
    //testa as colunas 
    for(int i=0;i<3;i++){
        if(board[0][i] == board[1][i] && board[0][i] == board[2][i]){
            return board[0][i];
        }
    }
    //testa as linhas
    for(int i=0;i<3;i++){
        if(board[i][0] == board[i][1] && board[i][0] == board[i][2]){
            return board[i][0];
        }
    }
    //testa as diagonais
    if(board[0][0] == board[1][1] && board[0][0] == board[2][2]){
        return board[0][0];
        }
    if(board[0][2] == board[1][1] && board[0][2] == board[2][0]){
        return board[0][2];
        }
    

    return ' ';
}


int main(){
    char winner = ' ';
    resetBoard();
    
    while(winner == ' ' && CheckForFreeSpaces() > 0){
        printBoard();

        Player1Movement();
        winner = CheckWinner();
        if(winner != ' ' || CheckForFreeSpaces() == 0){
            break;
        }

        printBoard();

        ComputerMove();
        winner = CheckWinner();
        if(winner != ' ' || CheckForFreeSpaces() == 0){
            break;
        }

        printBoard();
    }

    printBoard();
    printWinner(winner);

    return 0;
}