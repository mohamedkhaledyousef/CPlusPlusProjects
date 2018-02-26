#include <bits/stdc++.h>

using namespace std;

char square[10]={'o','1','2','3','4','5','6','7','8','9'};

/*To check who is the winner, If the same player has same X or O in the same column or row or diagonal
XXX
------
O
O
O
------
X
 X
  X
*/
int checkWinner()
{
	if (square[1]==square[2] && square[2]==square[3])
    {
        return 1;
    }
	else if (square[4]==square[5] && square[5]==square[6])
    {
        return 1;
    }
	else if (square[7]==square[8] && square[8]==square[9])
    {
		return 1;
    }
	else if (square[1]==square[4] && square[4]==square[7])
    {
		return 1;
    }
	else if (square[2]==square[5] && square[5]==square[8])
    {
		return 1;
    }
	else if (square[3]==square[6] && square[6]==square[9])
    {
        return 1;
	}
	else if (square[1]==square[5] && square[5]==square[9])
	{
	    return 1;
	}
	else if (square[3]==square[5] && square[5]==square[7])
    {
        return 1;
	}
	else if (square[1]!='1' && square[2]!='2' && square[3]!='3' &&
             square[4]!='4' && square[5]!='5' && square[6]!='6' &&
             square[7]!='7' && square[8]!='8' && square[9]!='9')
             {
                return 0;
            }
	else
		return -1;
}

void drawBoard()
{
	system("cls");
	cout<<"--------------------------------------------------"<<endl;
	cout<<"\n\t\tTic Tac Toe\n\n";
	cout<<"Player 1 (X)  Vs  Player 2 (O)"<<endl<<endl;
	cout<<"--------------------------------------------------"<<endl;
	cout<<endl;

	cout<<"_________________"<<endl;
	cout <<"  "<<square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout <<"  "<<square[4]<<"  |  "<<square[5]<<"  |  "<<square[6]<<endl;
	cout<<"_____|_____|_____"<<endl;
	cout <<"  "<<square[7]<<"  |  "<<square[8]<<"  |  "<<square[9]<<endl;
	cout<<"_____|_____|_____"<<endl;

}

int main()
{
	int player=1,choice,i;
	char mark;

	do
	{
		drawBoard();
		if(player%2)
        {
            player=1;
        }
        else
        {
            player=2;
        }

		cout<<"Player number "<<player<<endl<<"Please enter a number on the board: ";

		cin>>choice;
		if(player==1)
            mark='X';
        else
            mark='O';

		if (choice==1 && square[1]=='1')
        {
            square[1]=mark;
		}
		else if (choice==2 && square[2]=='2')
        {
			square[2]=mark;
        }
		else if (choice==3 && square[3]=='3')
        {
			square[3]=mark;
        }
		else if (choice==4 && square[4]=='4')
        {
			square[4]=mark;
        }
		else if (choice==5 && square[5]=='5')
        {
			square[5]=mark;
        }
		else if (choice==6 && square[6]=='6')
        {
			square[6]=mark;
        }
		else if (choice==7 && square[7]=='7')
        {
			square[7]=mark;
        }
		else if (choice==8 && square[8]=='8')
        {
			square[8]=mark;
        }
		else if (choice==9 && square[9]=='9')
        {
			square[9]=mark;
        }
		else
		{
			cout<<"Invalid move, Pres to enter new number ";
			//To return to the previous player
			player--;
			cin.ignore();
			cin.get();
		}

		i=checkWinner();
		player++;
	}while(i==-1);

	drawBoard();
	if(i==1)
    {
        cout<<"Player "<<--player<<" is the winner"<<endl;
	}
	else
	{
	    cout<<"The game is a draw";

	}
	cin.ignore();
	cin.get();

	return 0;
}
