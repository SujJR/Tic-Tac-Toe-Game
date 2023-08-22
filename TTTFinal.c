#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include<ctype.h>

void Single();
void Multi();
void main()
{
int x10=0;
while(x10==0)
{
char d1,d2;
printf("Single-player(S) or Multi-player(M)?\n");
scanf(" %c",&d1);
d2=toupper(d1);
if(d2=='M')
{
    x10=1;
Multi();
break;
}
else if(d2=='S')
{
    x10=1;
    Single();
    break;
}
else
{
printf("Invalid input\n");
x10=0;
continue;
}
}
}

void Multi()
{
    printf("Tic Tac Toe Game(Multiplayer)\n");
	printf("Player 1 plays X\nPlayer 2 plays O\n");
	printf("The indexes of the boxes are as shown below\n");
	printf("Enter the position according to the indexes\n");
	printf("The first player to place 3 X's or 3 O's in consecutive boxes wins\n");
	char a[5][5];
	/*a[1][0]='*';
	a[2][0]='*';
	a[3][0]='*';
	a[1][4]='*';
	a[2][4]='*';
	a[3][4]='*';
	a[0][1]='*';
	a[0][2]='*';
	a[0][3]='*';
	a[4][1]='*';
	a[4][2]='*';
	a[4][3]='*';
	a[0][0]=' ';
	a[0][4]=' ';
	a[4][0]=' ';
	a[4][4]=' ';*/
	a[1][1]='1';
	a[1][2]='2';
	a[1][3]='3';
	a[2][1]='4';
	a[2][2]='5';
	a[2][3]='6';
	a[3][1]='7';
	a[3][2]='8';
	a[3][3]='9';
	printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
	int n1,n2,x=1,m1=0,m2=1;
	a[1][1]=' ';
	a[1][2]=' ';
	a[1][3]=' ';
	a[2][1]=' ';
	a[2][2]=' ';
	a[2][3]=' ';
	a[3][1]=' ';
	a[3][2]=' ';
	a[3][3]=' ';

	while(x!=0)
	{
	    if(m2==1)
        {
		printf("Enter the choice of position of player 1\n");
		scanf("%d",&n1);
		if(n1==1&&a[1][1]==' ')
		{
		    a[1][1]='X';

		}
		else if(n1==2&&a[1][2]==' ')
		{
		    a[1][2]='X';
		}
		else if(n1==3&&a[1][3]==' ')
		{
		    a[1][3]='X';
		}
		else if(n1==4&&a[2][1]==' ')
		{
		    a[2][1]='X';
		}
		else if(n1==5&&a[2][2]==' ')
		{
		    a[2][2]='X';
		}
		else if(n1==6&&a[2][3]==' ')
		{
		    a[2][3]='X';
		}
		else if(n1==7&&a[3][1]==' ')
		{
		    a[3][1]='X';
		}
		else if(n1==8&&a[3][2]==' ')
		{
		    a[3][2]='X';
		}
		else if(n1==9&&a[3][3]==' ')
		{
		    a[3][3]='X';
		}
		else
		{
		    printf("Invalid position\n");
		    continue;
		}
		printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");

		if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;

		}
		else if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		int f=0;
		for(int k=1;k<=3;k++)
		{
		    for(int k1=1;k1<=3;k1++)
		    {
		        if(a[k][k1]==' ')
		        {
		            f=1;
		        }
		    }
		}
		if(f==0&&m1==0)
		{
		    m1=3;
		    x=0;
		    break;
		}
		m2=2;
        }
        if(m2==2)
        {
		printf("Enter the choice of position of player 2\n");
		scanf("%d",&n2);
		if(n2==1&&a[1][1]==' ')
		{
		    a[1][1]='O';

		}
		else if(n2==2&&a[1][2]==' ')
		{
		    a[1][2]='O';
		}
		else if(n2==3&&a[1][3]==' ')
		{
		    a[1][3]='O';
		}
		else if(n2==4&&a[2][1]==' ')
		{
		    a[2][1]='O';
		}
		else if(n2==5&&a[2][2]==' ')
		{
		    a[2][2]='O';
		}
		else if(n2==6&&a[2][3]==' ')
		{
		    a[2][3]='O';
		}
		else if(n2==7&&a[3][1]==' ')
		{
		    a[3][1]='O';
		}
		else if(n2==8&&a[3][2]==' ')
		{
		    a[3][2]='O';
		}
		else if(n2==9&&a[3][3]==' ')
		{
		    a[3][3]='O';
		}
		else
		{
		    printf("Invalid Position\n");
		    m2=2;
		    continue;
		}
		printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
		if(a[1][1]=='O'&&a[1][2]=='O'&&a[1][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[2][1]=='O'&&a[2][2]=='O'&&a[2][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[3][1]=='O'&&a[3][2]=='O'&&a[3][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][1]=='O'&&a[2][2]=='O'&&a[3][3]=='O')
		{
		    m1=2;
		    break;
		}
		else if(a[1][2]=='O'&&a[2][2]=='O'&&a[3][2]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[3][1]=='O'&&a[2][2]=='O'&&a[1][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][1]=='O'&&a[2][1]=='O'&&a[3][1]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][3]=='O'&&a[2][3]=='O'&&a[3][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		int f1=0;
		for(int a1=1;a1<=3;a1++)
        {

            for(int a2=1;a2<=3;a2++)
            {

                if(a[a1][a2]==' ')
                {

                    f1++;
                }
            }
        }
        m2=1;
        int f2=0;
		if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[1][2]==' '&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[2][1]=='X'&&a[2][2]==' '&&a[2][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[3][2]==' '&&a[3][3]=='X'&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[2][2]==' '&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]=='X'&&a[2][2]==' '&&a[3][2]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[2][2]==' '&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]=='X'&&a[2][1]==' '&&a[3][1]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][3]=='X'&&a[2][3]==' '&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]==' '&&a[1][2]=='X'&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[2][1]==' '&&a[2][2]=='X'&&a[2][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]==' '&&a[3][2]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]==' '&&a[2][2]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]==' '&&a[2][2]=='X'&&a[3][2]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]==' '&&a[2][2]=='X'&&a[1][3]=='X'&&f1==1)
		{
            f2=0;
		}
		else if(a[1][1]==' '&&a[2][1]=='X'&&a[3][1]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][3]==' '&&a[2][3]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(f1>1)
        {
            f2=0;
        }
        else
            f2=1;
		if(f2==0)
            continue;
        else if(f2==1)
        {

            m1=3;
            break;

        }
        }



	}
	if(m1==1)
	{
	    printf("Player 1, X wins");
	}
	else if(m1==2)
	{
	    printf("Player 2, O wins");
	}
	else if(m1==3)
	{
	    printf("Draw, Game Over");
	}
}
void Single()
{
    printf("Tic Tac Toe Game(Single Player)\n");
    printf("The indexes of the boxes are as shown below\n");
	printf("Enter the position according to the indexes\n");
	printf("If the player places 3 X's or 3 O's in consecutive boxes, The player wins\n");
	printf("If the computer places 3 X's or 3 O's in consecutive boxes, The computer wins\n");

	time_t t;
	srand((unsigned) time(&t));
	char a[5][5];
	/*a[1][0]='*';
	a[2][0]='*';
	a[3][0]='*';
	a[1][4]='*';
	a[2][4]='*';
	a[3][4]='*';
	a[0][1]='*';
	a[0][2]='*';
	a[0][3]='*';
	a[4][1]='*';
	a[4][2]='*';
	a[4][3]='*';
	a[0][0]=' ';
	a[0][4]=' ';
	a[4][0]=' ';
	a[4][4]=' ';*/
	a[1][1]='1';
	a[1][2]='2';
	a[1][3]='3';
	a[2][1]='4';
	a[2][2]='5';
	a[2][3]='6';
	a[3][1]='7';
	a[3][2]='8';
	a[3][3]='9';
	printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
	int n1,n2,x=1,m1=0,m2=1;
	a[1][1]=' ';
	a[1][2]=' ';
	a[1][3]=' ';
	a[2][1]=' ';
	a[2][2]=' ';
	a[2][3]=' ';
	a[3][1]=' ';
	a[3][2]=' ';
	a[3][3]=' ';
    char ch,ch1;
	printf("Enter X or O\n");
	scanf(" %c",&ch1);
	ch=toupper(ch1);
	if(ch=='X')
    {
	while(x!=0)
	{
	    if(m2==1)
        {
        printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
		printf("Enter the choice of position of player \n");
		scanf("%d",&n1);
		if(n1==1&&a[1][1]==' ')
		{
		    a[1][1]='X';

		}
		else if(n1==2&&a[1][2]==' ')
		{
		    a[1][2]='X';
		}
		else if(n1==3&&a[1][3]==' ')
		{
		    a[1][3]='X';
		}
		else if(n1==4&&a[2][1]==' ')
		{
		    a[2][1]='X';
		}
		else if(n1==5&&a[2][2]==' ')
		{
		    a[2][2]='X';
		}
		else if(n1==6&&a[2][3]==' ')
		{
		    a[2][3]='X';
		}
		else if(n1==7&&a[3][1]==' ')
		{
		    a[3][1]='X';
		}
		else if(n1==8&&a[3][2]==' ')
		{
		    a[3][2]='X';
		}
		else if(n1==9&&a[3][3]==' ')
		{
		    a[3][3]='X';
		}
		else
		{
		    printf("Invalid position\n");
		    continue;
		}
		printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");

		if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;

		}
		else if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]=='X')
		{
		    m1=1;
		    x=0;
		    break;
		}
		int f=0;
		for(int k=1;k<=3;k++)
		{
		    for(int k1=1;k1<=3;k1++)
		    {
		        if(a[k][k1]==' ')
		        {
		            f=1;
		        }
		    }
		}
		if(f==0&&m1==0)
		{
		    m1=3;
		    x=0;
		    break;
		}
		m2=2;
        }
        if(m2==2)
        {
            //printf("Computer to play\n");
            if(a[1][1]=='O'&&a[1][2]=='O'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[2][1]=='O'&&a[2][2]=='O'&&a[2][3]==' ')
		{
		    n2=6;
		}
		else if(a[3][1]=='O'&&a[3][2]=='O'&&a[3][3]==' ')
		{
		     n2=9;
		}
		else if(a[1][1]=='O'&&a[2][2]=='O'&&a[3][3]==' ')
		{
		    n2=9;
		}
		else if(a[1][2]=='O'&&a[2][2]=='O'&&a[3][2]==' ')
		{
		    n2=8;
		}
		else if(a[3][1]=='O'&&a[2][2]=='O'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[1][1]=='O'&&a[2][1]=='O'&&a[3][1]==' ')
		{
		   n2=7;
		}
		else if(a[1][3]=='O'&&a[2][3]=='O'&&a[3][3]==' ')
		{
		   n2=9;
		}
		else if(a[1][1]=='O'&&a[1][2]==' '&&a[1][3]=='O')
		{
		    n2=2;
		}
		else if(a[2][1]=='O'&&a[2][2]==' '&&a[2][3]=='O')
		{
		    n2=5;
		}
		else if(a[3][1]=='O'&&a[3][2]==' '&&a[3][3]=='O')
		{
		   n2=8;
		}
		else if(a[1][1]=='O'&&a[2][2]==' '&&a[3][3]=='O')
		{
		    n2=5;
		}
		else if(a[1][2]=='O'&&a[2][2]==' '&&a[3][2]=='O')
		{
		    n2=5;
		}
		else if(a[3][1]=='O'&&a[2][2]==' '&&a[1][3]=='O')
		{
		    n2=5;
		}
		else if(a[1][1]=='O'&&a[2][1]==' '&&a[3][1]=='O')
		{
		    n2=4;
		}
		else if(a[1][3]=='O'&&a[2][3]==' '&&a[3][3]=='O')
		{
		    n2=6;
		}
		else if(a[1][1]==' '&&a[1][2]=='O'&&a[1][3]=='O')
		{
		    n2=1;
		}
		else if(a[2][1]==' '&&a[2][2]=='O'&&a[2][3]=='O')
		{
		    n2=4;
		}
		else if(a[3][1]==' '&&a[3][2]=='O'&&a[3][3]=='O')
		{
		    n2=7;
		}
		else if(a[1][1]==' '&&a[2][2]=='O'&&a[3][3]=='O')
		{
		    n2=1;
		}
		else if(a[1][2]==' '&&a[2][2]=='O'&&a[3][2]=='O')
		{
		    n2=2;
		}
		else if(a[3][1]==' '&&a[2][2]=='O'&&a[1][3]=='O')
		{
            n2=7;
		}
		else if(a[1][1]==' '&&a[2][1]=='O'&&a[3][1]=='O')
		{
		    n2=1;
		}
		else if(a[1][3]==' '&&a[2][3]=='O'&&a[3][3]=='O')
		{
		    n2=3;
		}
        else if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]==' ')
		{
		    n2=6;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]==' ')
		{
		     n2=9;
		}
		else if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]==' ')
		{
		    n2=9;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]==' ')
		{
		    n2=8;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]==' ')
		{
		   n2=7;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]==' ')
		{
		   n2=9;
		}
		else if(a[1][1]=='X'&&a[1][2]==' '&&a[1][3]=='X')
		{
		    n2=2;
		}
		else if(a[2][1]=='X'&&a[2][2]==' '&&a[2][3]=='X')
		{
		    n2=5;
		}
		else if(a[3][1]=='X'&&a[3][2]==' '&&a[3][3]=='X')
		{
		   n2=8;
		}
		else if(a[1][1]=='X'&&a[2][2]==' '&&a[3][3]=='X')
		{
		    n2=5;
		}
		else if(a[1][2]=='X'&&a[2][2]==' '&&a[3][2]=='X')
		{
		    n2=5;
		}
		else if(a[3][1]=='X'&&a[2][2]==' '&&a[1][3]=='X')
		{
		    n2=5;
		}
		else if(a[1][1]=='X'&&a[2][1]==' '&&a[3][1]=='X')
		{
		    n2=4;
		}
		else if(a[1][3]=='X'&&a[2][3]==' '&&a[3][3]=='X')
		{
		    n2=6;
		}
		else if(a[1][1]==' '&&a[1][2]=='X'&&a[1][3]=='X')
		{
		    n2=1;
		}
		else if(a[2][1]==' '&&a[2][2]=='X'&&a[2][3]=='X')
		{
		    n2=4;
		}
		else if(a[3][1]==' '&&a[3][2]=='X'&&a[3][3]=='X')
		{
		    n2=7;
		}
		else if(a[1][1]==' '&&a[2][2]=='X'&&a[3][3]=='X')
		{
		    n2=1;
		}
		else if(a[1][2]==' '&&a[2][2]=='X'&&a[3][2]=='X')
		{
		    n2=2;
		}
		else if(a[3][1]==' '&&a[2][2]=='X'&&a[1][3]=='X')
		{
            n2=7;
		}
		else if(a[1][1]==' '&&a[2][1]=='X'&&a[3][1]=='X')
		{
		    n2=1;
		}
		else if(a[1][3]==' '&&a[2][3]=='X'&&a[3][3]=='X')
		{
		    n2=3;
		}
		else
		{
		n2=(rand()%9)+1;
		}
		if(n2==1&&a[1][1]==' ')
		{
		    a[1][1]='O';
		    printf("Computer to play\n");

		}
		else if(n2==2&&a[1][2]==' ')
		{
		    a[1][2]='O';
		    printf("Computer to play\n");
		}
		else if(n2==3&&a[1][3]==' ')
		{
		    a[1][3]='O';
		    printf("Computer to play\n");
		}
		else if(n2==4&&a[2][1]==' ')
		{
		    a[2][1]='O';
		    printf("Computer to play\n");
		}
		else if(n2==5&&a[2][2]==' ')
		{
		    a[2][2]='O';
		    printf("Computer to play\n");
		}
		else if(n2==6&&a[2][3]==' ')
		{
		    a[2][3]='O';
		    printf("Computer to play\n");
		}
		else if(n2==7&&a[3][1]==' ')
		{
		    a[3][1]='O';
		    printf("Computer to play\n");
		}
		else if(n2==8&&a[3][2]==' ')
		{
		    a[3][2]='O';
		    printf("Computer to play\n");
		}
		else if(n2==9&&a[3][3]==' ')
		{
		    a[3][3]='O';
		    printf("Computer to play\n");
		}
		else
		{
		    m2=2;
		    continue;
		}


		if(a[1][1]=='O'&&a[1][2]=='O'&&a[1][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[2][1]=='O'&&a[2][2]=='O'&&a[2][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[3][1]=='O'&&a[3][2]=='O'&&a[3][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][1]=='O'&&a[2][2]=='O'&&a[3][3]=='O')
		{
		    m1=2;
		    break;
		}
		else if(a[1][2]=='O'&&a[2][2]=='O'&&a[3][2]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[3][1]=='O'&&a[2][2]=='O'&&a[1][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][1]=='O'&&a[2][1]=='O'&&a[3][1]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][3]=='O'&&a[2][3]=='O'&&a[3][3]=='O')
		{
		    m1=2;
		    x=0;
		    break;
		}
		int f1=0;
		for(int a1=1;a1<=3;a1++)
        {

            for(int a2=1;a2<=3;a2++)
            {

                if(a[a1][a2]==' ')
                {

                    f1++;
                }
            }
        }
        m2=1;
        int f2=0;
		if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[1][2]==' '&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[2][1]=='X'&&a[2][2]==' '&&a[2][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[3][2]==' '&&a[3][3]=='X'&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[2][2]==' '&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]=='X'&&a[2][2]==' '&&a[3][2]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[2][2]==' '&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]=='X'&&a[2][1]==' '&&a[3][1]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][3]=='X'&&a[2][3]==' '&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]==' '&&a[1][2]=='X'&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[2][1]==' '&&a[2][2]=='X'&&a[2][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]==' '&&a[3][2]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]==' '&&a[2][2]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]==' '&&a[2][2]=='X'&&a[3][2]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]==' '&&a[2][2]=='X'&&a[1][3]=='X'&&f1==1)
		{
            f2=0;
		}
		else if(a[1][1]==' '&&a[2][1]=='X'&&a[3][1]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][3]==' '&&a[2][3]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(f1>1)
        {
            f2=0;
        }
        else
            f2=1;
		if(f2==0)
            continue;
        else if(f2==1)
        {

            m1=3;
            break;

        }
        }



	}
	if(m1==1)
	{
	    printf("Player 1, X wins");
	}
	else if(m1==2)
	{
	    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
	    printf("Computer, O wins");
	}
	else if(m1==3)
	{
	    if(m2==1)
        {
            printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
        }
	    printf("Draw, Game Over");
	}
    }
	else if(ch=='O')
    {
        m2=2;
        while(x!=0)
        {
            if(m2==2)
        {
            //printf("Computer to play\n");

        if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]==' ')
		{
		    n2=6;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]==' ')
		{
		     n2=9;
		}
		else if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]==' ')
		{
		    n2=9;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]==' ')
		{
		    n2=8;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]==' ')
		{
		   n2=7;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]==' ')
		{
		   n2=9;
		}
		else if(a[1][1]=='X'&&a[1][2]==' '&&a[1][3]=='X')
		{
		    n2=2;
		}
		else if(a[2][1]=='X'&&a[2][2]==' '&&a[2][3]=='X')
		{
		    n2=5;
		}
		else if(a[3][1]=='X'&&a[3][2]==' '&&a[3][3]=='X')
		{
		   n2=8;
		}
		else if(a[1][1]=='X'&&a[2][2]==' '&&a[3][3]=='X')
		{
		    n2=5;
		}
		else if(a[1][2]=='X'&&a[2][2]==' '&&a[3][2]=='X')
		{
		    n2=5;
		}
		else if(a[3][1]=='X'&&a[2][2]==' '&&a[1][3]=='X')
		{
		    n2=5;
		}
		else if(a[1][1]=='X'&&a[2][1]==' '&&a[3][1]=='X')
		{
		    n2=4;
		}
		else if(a[1][3]=='X'&&a[2][3]==' '&&a[3][3]=='X')
		{
		    n2=6;
		}
		else if(a[1][1]==' '&&a[1][2]=='X'&&a[1][3]=='X')
		{
		    n2=1;
		}
		else if(a[2][1]==' '&&a[2][2]=='X'&&a[2][3]=='X')
		{
		    n2=4;
		}
		else if(a[3][1]==' '&&a[3][2]=='X'&&a[3][3]=='X')
		{
		    n2=7;
		}
		else if(a[1][1]==' '&&a[2][2]=='X'&&a[3][3]=='X')
		{
		    n2=1;
		}
		else if(a[1][2]==' '&&a[2][2]=='X'&&a[3][2]=='X')
		{
		    n2=2;
		}
		else if(a[3][1]==' '&&a[2][2]=='X'&&a[1][3]=='X')
		{
            n2=7;
		}
		else if(a[1][1]==' '&&a[2][1]=='X'&&a[3][1]=='X')
		{
		    n2=1;
		}
		else if(a[1][3]==' '&&a[2][3]=='X'&&a[3][3]=='X')
		{
		    n2=3;
		}
		else if(a[1][1]=='O'&&a[1][2]=='O'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[2][1]=='O'&&a[2][2]=='O'&&a[2][3]==' ')
		{
		    n2=6;
		}
		else if(a[3][1]=='O'&&a[3][2]=='O'&&a[3][3]==' ')
		{
		     n2=9;
		}
		else if(a[1][1]=='O'&&a[2][2]=='O'&&a[3][3]==' ')
		{
		    n2=9;
		}
		else if(a[1][2]=='O'&&a[2][2]=='O'&&a[3][2]==' ')
		{
		    n2=8;
		}
		else if(a[3][1]=='O'&&a[2][2]=='O'&&a[1][3]==' ')
		{
		   n2=3;
		}
		else if(a[1][1]=='O'&&a[2][1]=='O'&&a[3][1]==' ')
		{
		   n2=7;
		}
		else if(a[1][3]=='O'&&a[2][3]=='O'&&a[3][3]==' ')
		{
		   n2=9;
		}
		else if(a[1][1]=='O'&&a[1][2]==' '&&a[1][3]=='O')
		{
		    n2=2;
		}
		else if(a[2][1]=='O'&&a[2][2]==' '&&a[2][3]=='O')
		{
		    n2=5;
		}
		else if(a[3][1]=='O'&&a[3][2]==' '&&a[3][3]=='O')
		{
		   n2=8;
		}
		else if(a[1][1]=='O'&&a[2][2]==' '&&a[3][3]=='O')
		{
		    n2=5;
		}
		else if(a[1][2]=='O'&&a[2][2]==' '&&a[3][2]=='O')
		{
		    n2=5;
		}
		else if(a[3][1]=='O'&&a[2][2]==' '&&a[1][3]=='O')
		{
		    n2=5;
		}
		else if(a[1][1]=='O'&&a[2][1]==' '&&a[3][1]=='O')
		{
		    n2=4;
		}
		else if(a[1][3]=='O'&&a[2][3]==' '&&a[3][3]=='O')
		{
		    n2=6;
		}
		else if(a[1][1]==' '&&a[1][2]=='O'&&a[1][3]=='O')
		{
		    n2=1;
		}
		else if(a[2][1]==' '&&a[2][2]=='O'&&a[2][3]=='O')
		{
		    n2=4;
		}
		else if(a[3][1]==' '&&a[3][2]=='O'&&a[3][3]=='O')
		{
		    n2=7;
		}
		else if(a[1][1]==' '&&a[2][2]=='O'&&a[3][3]=='O')
		{
		    n2=1;
		}
		else if(a[1][2]==' '&&a[2][2]=='O'&&a[3][2]=='O')
		{
		    n2=2;
		}
		else if(a[3][1]==' '&&a[2][2]=='O'&&a[1][3]=='O')
		{
            n2=7;
		}
		else if(a[1][1]==' '&&a[2][1]=='O'&&a[3][1]=='O')
		{
		    n2=1;
		}
		else if(a[1][3]==' '&&a[2][3]=='O'&&a[3][3]=='O')
		{
		    n2=3;
		}
		else
		{
		n2=(rand()%9)+1;
		}
		if(n2==1&&a[1][1]==' ')
		{
		    a[1][1]='X';
		    printf("Computer to play\n");

		}
		else if(n2==2&&a[1][2]==' ')
		{
		    a[1][2]='X';
		    printf("Computer to play\n");
		}
		else if(n2==3&&a[1][3]==' ')
		{
		    a[1][3]='X';
		    printf("Computer to play\n");
		}
		else if(n2==4&&a[2][1]==' ')
		{
		    a[2][1]='X';
		    printf("Computer to play\n");
		}
		else if(n2==5&&a[2][2]==' ')
		{
		    a[2][2]='X';
		    printf("Computer to play\n");
		}
		else if(n2==6&&a[2][3]==' ')
		{
		    a[2][3]='X';
		    printf("Computer to play\n");
		}
		else if(n2==7&&a[3][1]==' ')
		{
		    a[3][1]='X';
		    printf("Computer to play\n");
		}
		else if(n2==8&&a[3][2]==' ')
		{
		    a[3][2]='X';
		    printf("Computer to play\n");
		}
		else if(n2==9&&a[3][3]==' ')
		{
		    a[3][3]='X';
		    printf("Computer to play\n");
		}
		else
		{
		    m2=2;
		    continue;
		}


		if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]=='X')
		{
		    m1=2;
		    break;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]=='X')
		{
		    m1=2;
		    x=0;
		    break;
		}
		m2=1;
		int f=0;
		for(int k=1;k<=3;k++)
		{
		    for(int k1=1;k1<=3;k1++)
		    {
		        if(a[k][k1]==' ')
		        {
		            f=1;
		        }
		    }
		}
		if(f==0&&m1==0)
		{
		    m1=3;
		    x=0;
		    break;
		}

        }
        else if(m2==1)
        {
        printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
		printf("Enter the choice of position of player \n");
		scanf("%d",&n1);
		if(n1==1&&a[1][1]==' ')
		{
		    a[1][1]='O';

		}
		else if(n1==2&&a[1][2]==' ')
		{
		    a[1][2]='O';
		}
		else if(n1==3&&a[1][3]==' ')
		{
		    a[1][3]='O';
		}
		else if(n1==4&&a[2][1]==' ')
		{
		    a[2][1]='O';
		}
		else if(n1==5&&a[2][2]==' ')
		{
		    a[2][2]='O';
		}
		else if(n1==6&&a[2][3]==' ')
		{
		    a[2][3]='O';
		}
		else if(n1==7&&a[3][1]==' ')
		{
		    a[3][1]='O';
		}
		else if(n1==8&&a[3][2]==' ')
		{
		    a[3][2]='O';
		}
		else if(n1==9&&a[3][3]==' ')
		{
		    a[3][3]='O';
		}
		else
		{
		    m2=1;
		    printf("Invalid position\n");
		    continue;
		}
		printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");

		if(a[1][1]=='O'&&a[2][2]=='O'&&a[3][3]=='O')
		{
		    m1=1;
		    x=0;
		    break;

		}
		else if(a[1][1]=='O'&&a[1][2]=='O'&&a[1][3]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[2][1]=='O'&&a[2][2]=='O'&&a[2][3]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[3][1]=='O'&&a[3][2]=='O'&&a[3][3]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][2]=='O'&&a[2][2]=='O'&&a[3][2]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[3][1]=='O'&&a[2][2]=='O'&&a[1][3]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][1]=='O'&&a[2][1]=='O'&&a[3][1]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}
		else if(a[1][3]=='O'&&a[2][3]=='O'&&a[3][3]=='O')
		{
		    m1=1;
		    x=0;
		    break;
		}

		m2=2;
		int f1=0;
		for(int a1=1;a1<=3;a1++)
        {

            for(int a2=1;a2<=3;a2++)
            {

                if(a[a1][a2]==' ')
                {

                    f1++;
                }
            }
        }
        /*int f2=0;
		if(a[1][1]=='X'&&a[1][2]=='X'&&a[1][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[2][1]=='X'&&a[2][2]=='X'&&a[2][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[3][2]=='X'&&a[3][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]=='X'&&a[2][2]=='X'&&a[3][3]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]=='X'&&a[2][2]=='X'&&a[3][2]==' '&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[2][2]=='X'&&a[1][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[2][1]=='X'&&a[3][1]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][3]=='X'&&a[2][3]=='X'&&a[3][3]==' '&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[1][2]==' '&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[2][1]=='X'&&a[2][2]==' '&&a[2][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[3][2]==' '&&a[3][3]=='X'&&f1==1)
		{
		   f2=0;
		}
		else if(a[1][1]=='X'&&a[2][2]==' '&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]=='X'&&a[2][2]==' '&&a[3][2]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]=='X'&&a[2][2]==' '&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]=='X'&&a[2][1]==' '&&a[3][1]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][3]=='X'&&a[2][3]==' '&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]==' '&&a[1][2]=='X'&&a[1][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[2][1]==' '&&a[2][2]=='X'&&a[2][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]==' '&&a[3][2]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][1]==' '&&a[2][2]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][2]==' '&&a[2][2]=='X'&&a[3][2]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[3][1]==' '&&a[2][2]=='X'&&a[1][3]=='X'&&f1==1)
		{
            f2=0;
		}
		else if(a[1][1]==' '&&a[2][1]=='X'&&a[3][1]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(a[1][3]==' '&&a[2][3]=='X'&&a[3][3]=='X'&&f1==1)
		{
		    f2=0;
		}
		else if(f1>1)
        {
            f2=0;
        }
        else
            f2=1;
		if(f2==0)
            continue;
        else if(f2==1)
        {

            m1=3;
            break;

        }*/

        }

    }
    if(m1==1)
    {
        printf("The player,O wins");
    }
    else if(m1==2)
    {
        printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
        printf("Computer, X wins");
    }
    else if(m1==3)
    {
        if(m2=2)
        {
            printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", a[1][1], a[1][2], a[1][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[2][1], a[2][2], a[2][3]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", a[3][1], a[3][2], a[3][3]);

    printf("     |     |     \n\n");
        }
        printf("Draw, Game over");
    }
    }
    else
        printf("Invalid Input\n");
}
