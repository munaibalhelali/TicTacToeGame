#include<iostream>

using namespace std;
char square[10]={'0','1','2','3','4','5','6','7','8','9'};
int checkWin();
void drawBoard();
int winFlag=-1;
int main()
{
    int currentPlayer=1;
    int input;
    drawBoard();
    while(true){
        cout<< "Player "<<currentPlayer<<", enter a number: ";
        cin>>input;

        if(input>0 && input<10){
            if(square[input]=='O' || square[input]=='X')
                continue;
            else if(square[input]!='O' || square[input]!='X'){
                cout <<"input is "<<input<<endl;
                if(currentPlayer==1){
                    square[input]='X';
                }else if(currentPlayer==2){
                    square[input]='O';
                }
            }
        }
        winFlag=checkWin();
        drawBoard();
        if(winFlag==1){
            cout<<"Player "<<currentPlayer<<" is the winner"<<endl;
            break;
        }
        else if(winFlag ==0){
            cout<<"Game Over!!"<<endl;
            break;
        }
        if(currentPlayer==1)
            currentPlayer=2;
        else if(currentPlayer==2)
            currentPlayer=1;
    }
    


}

int checkWin(){
    //return 1 if it is win with result
    //return -1 if game still in progress
    //return 0 if it is gameover 
    if(square[1]==square[2]&& square[2]==square[3])
        return 1;
    else if(square[4]==square[5]&& square[5]==square[6])
        return 1;
    else if(square[7]==square[8]&& square[8]==square[9])
        return 1;
    else if(square[1]==square[4]&& square[4]==square[7])
        return 1;
    else if(square[2]==square[5]&& square[5]==square[8])
        return 1;
    else if(square[3]==square[6]&& square[6]==square[9])
        return 1;
    else if(square[1]==square[5]&& square[5]==square[9])
        return 1;
    else if(square[3]==square[5]&& square[5]==square[7])
        return 1;
    else if(square[1]!='1'&&square[2]!='2'&&square[3]!='3'
            &&square[4]!='4'&&square[5]!='5'&&square[6]!='6'
            &&square[7]!='7'&&square[8]!='8'&&square[9]!='9')
        return 0;
    else return -1;

}

void drawBoard(){

    system("clear");// MacOS
    //system("cls"); //Windows OS
     
    cout<<"\n\nTic Tac Toe"<<endl<<endl;

    cout<<"Player 1 <X>  -  Player 2 <O>"<<endl<<endl;
    cout<<"   "<<"|"<<"   "<<"|"<<"   "<<endl;
    cout<<" "<<square[1]<<" "<<"|"<<" "<<square[2]<<" "<<"|"<<" "<<square[3]<<endl;
    cout<<"___"<<"|"<<"___"<<"|"<<"___"<<endl;

    cout<<"   "<<"|"<<"   "<<"|"<<"   "<<endl;
    cout<<" "<<square[4]<<" "<<"|"<<" "<<square[5]<<" "<<"|"<<" "<<square[6]<<endl;
    cout<<"___"<<"|"<<"___"<<"|"<<"___"<<endl;

    cout<<"   "<<"|"<<"   "<<"|"<<"   "<<endl;
    cout<<" "<<square[7]<<" "<<"|"<<" "<<square[8]<<" "<<"|"<<" "<<square[9]<<endl;
    cout<<"   "<<"|"<<"   "<<"|"<<"   "<<endl;
}