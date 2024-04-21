#include<iostream>

using namespace std;

void display(char board[3][3]){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            cout<<board[i][j]<<" | ";
        }
        cout<<endl;
    }
}

bool winchecker(char board[3][3], char player){
    for(int i=0; i<3; ++i){
        if((board[i][0] == player && board[i][1] == player && board[i][2] == player) || 
           (board[0][i] == player && board[1][i] == player && board[2][i] == player)){
            return true;
        }
    }
    if((board[0][0] == player && board[1][1] == player && board[2][2] == player) || 
       (board[0][2] == player && board[1][1] == player && board[2][0] == player)){
        return true;
    }
    return false;
}

bool drawchecker(char board[3][3]){
    for(int i=0; i<3; ++i){
        for(int j=0; j<3; ++j){
            if(board[i][j] == ' '){
                return false;
            }
        }
    }
    return true;
}

int main(){

    char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    char currentplayer = 'X';
    int row, col;

    while(true){

        cout<<"Player "<<currentplayer<<"'s turn."<<endl<<"Enter row(1-3) , column(1-3)"<<endl;
        cin>>row>> col;

        row--;
        col--;

        if(board[row][col]!= ' '){
            cout<<"The cell is already occupied. Try again!"<<endl;
            continue;
        } 

        board[row][col] = currentplayer;

        display(board);

        if(winchecker(board,currentplayer)){
            cout<<"Player "<<currentplayer<<" wins! "<<endl;
            break;
        }

        if(drawchecker(board)){
            cout<<"It's a draw! "<<endl;
            break;
        }

        if (currentplayer == 'X') {
            currentplayer = 'O';
        }
        else {
            currentplayer = 'X';
        }

    }

    return 0;
}
