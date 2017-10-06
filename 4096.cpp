//PROGRAM GAME 4096
#include <bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#include <string.h>
using namespace std;

FILE * pFile;

char nama[100];
int arr[4][4];
long score=0;
int arra;
char *arrb[2];
void messageboxx(){
  int btn = MessageBox( 0,arra > 1 ? arrb[1] : "You have reached 2048. Do you wish to continue ?",arra > 2 ? arrb[2] : "Message",MB_YESNO + MB_ICONQUESTION );
  if (btn == IDYES) {
    return;
  }
  else {
    return;
  }
}
void header()
{
    system("cls");
    puts("\n\t\t  \xB0\xB0\xB0\xB0\xB0  \xB0   \xB0   \xB0\xB0\xB0    \xB0\xB0\xB0   \xB0\xB0\xB0\xB0       \xB0\xB0\xB0\xB0\xB0");
    puts("\t\t    \xB0    \xB0   \xB0  \xB0      \xB0   \xB0  \xB0         \xB0");
    puts("\t\t    \xB0    \xB0   \xB0  \xB0 \xB0\xB0\xB0  \xB0\xB0\xB0\xB0\xB0  \xB0\xB0\xB0\xB0      \xB0");
    puts("\t\t    \xB0    \xB0   \xB0  \xB0   \xB0  \xB0   \xB0     \xB0      \xB0");
    puts("\t\t    \xB0     \xB0\xB0\xB0    \xB0\xB0\xB0   \xB0   \xB0  \xB0\xB0\xB0\xB0       \xB0\xB0\xB0\xB0\xB0");
    puts("");
}

void startpage()
{
    puts("\t        ================================================");
    puts("\t\t\t\t     Anggota:\n");
    puts("\t\t     1. Stephen\t\t\t(14.111.0868)\n");
    puts("\t\t     2. Calvin\t\t\t(14.111.2028)\n");
    puts("\t\t     3. Christopher Ganda\t(14.111.3368)\n");
    puts("\t        ================================================");
    printf("\n\t\t\t     Press any key to continue");
    printf("\n\t\t\t\t Press Esc to exit");
}

void instruction()
{
    puts("\t        ================================================");
    puts("\t\t\t\t   Instruction:\n");
    printf("\t\t\t         %c / W   =     UP\n\n",24);
    printf("\t\t\t         %c / A   =   LEFT\n\n",27);
    printf("\t\t\t         %c / S   =   DOWN\n\n",25);
    printf("\t\t\t         %c / D   =  RIGHT\n\n",26);
    puts("\t        ================================================");
    printf("\n\t\t\t     Press any key to continue");
    printf("\n\t\t\t\t Press Esc to exit");
}

int textcolor(int a)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

void logo()
{
    printf("Player's Name : %s\t\t\t\t\t",nama);
    printf("Score: %ld\n\n",score);
    puts("\t\t\t \xB0    \xB0 \xB0\xB0\xB0\xB0\xB0\xB0 \xB0\xB0\xB0\xB0\xB0\xB0 \xB0\xB0\xB0\xB0\xB0\xB0");
    puts("\t\t\t \xB0    \xB0 \xB0    \xB0 \xB0    \xB0 \xB0");
    puts("\t\t\t \xB0\xB0\xB0\xB0\xB0\xB0 \xB0    \xB0 \xB0\xB0\xB0\xB0\xB0\xB0 \xB0\xB0\xB0\xB0\xB0\xB0");
    puts("\t\t\t      \xB0 \xB0    \xB0      \xB0 \xB0    \xB0");
    puts("\t\t\t      \xB0 \xB0\xB0\xB0\xB0\xB0\xB0      \xB0 \xB0\xB0\xB0\xB0\xB0\xB0");
}

void printDisplay(int arr[4][4])
{
    int i,j;

    for(i = 0 ; i<4 ; i++)
    {
        printf("\n\t\t\t ");
        for(j = 0 ; j<4 ; j++)
        {
            textcolor(143);
            printf("      ");
            textcolor(240);
            printf(" ");
        }

        printf("\n\t\t\t ");
        for(j = 0 ; j<4 ; j++)
        {
            textcolor(143);

            if(arr[i][j]==0){
                printf("      ");
            }
            else if(arr[i][j]==4){
                textcolor(129);

                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==8){
                textcolor(139);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==16){
                textcolor(137);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==32){
                textcolor(142);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==64){
                textcolor(130);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==128){
                textcolor(140);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==256){
                textcolor(135);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==512){
                textcolor(140);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==1024){
                textcolor(142);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==2048){
                textcolor(138);
                printf(" %4d ",arr[i][j]);
            }
            else if(arr[i][j]==4096){
                textcolor(137);
                printf(" %4d ",arr[i][j]);

            }
            else{
                printf(" %4d ",arr[i][j]);
            }

            textcolor(240);
            printf(" ");
        }

        printf("\n\t\t\t ");
        for(j = 0 ; j<4 ; j++)
        {
            textcolor(143);
            printf("      ");
            textcolor(240);
            printf(" ");
        }
        printf("\n");
    }
    puts("");
}

void startRandom()
{
    int batas;
    int randTmpt1,randTmpt2,randAngka;
    batas=0;

    srand(time(NULL));

    while(batas!=2)
    {
        randTmpt1 = rand()%4;
        randTmpt2 = rand()%4;

        if(arr[randTmpt1][randTmpt2]==0)
        {
            randAngka = rand()%7;
            if(randAngka==0)
                arr[randTmpt1][randTmpt2] = 4;
            else
                arr[randTmpt1][randTmpt2] = 2;
            batas++;
        }//end if
    }//end while
}//end function

void randomization()
{
    int batas;
    int randTmpt1,randTmpt2,randAngka;
    batas=0;

    srand(time(NULL));

    while(batas!=1)
    {
        randTmpt1 = rand()%4;
        randTmpt2 = rand()%4;

        if(arr[randTmpt1][randTmpt2]==0)
        {
            randAngka = rand()%7;
            if(randAngka==0)
                arr[randTmpt1][randTmpt2] = 4;
            else
                arr[randTmpt1][randTmpt2] = 2;
            batas++;
        }//end if
    }
}

int checkGameOver()
{
    for(int i = 0 ; i<4 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            if(arr[i][j]==0) return 0;
        }
    }

    for(int i = 0 ; i<4 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            if(arr[i][j]==arr[i][j+1]) return 0;
        }
    }
    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            if(arr[i][j]==arr[i+1][j]) return 0;
        }
    }
    return 1;

}

void moveUP()
{
    int cek;
    cek = 0;
    //PERGESERAN
    for(int z=0;z<=2;z++){
        for(int k=0;k<3;k++){
            for(int l=0;l<4;l++){
                if(arr[k][l]==0 && arr[k+1][l]!=0){
                    arr[k][l] = arr[k+1][l];
                    arr[k+1][l]=0;
                    cek=1;
                }//end if
            }//end for l
        }//end for k
    }//end for z

    //PENGGABUNGAN
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==arr[i+1][j] && arr[i][j]!=0){
                arr[i][j]*=2;
                arr[i+1][j]=0;
                if(arr[i][j]==32){
                    messageboxx();
                }
                score += arr[i][j];
                cek = 1;
            }//end if
        }//end for j
    }//end i

    //GESER
    for(int z=0;z<=2;z++){
        for(int k=0;k<3;k++){
            for(int l=0;l<4;l++){
                if(arr[k][l]==0 && arr[k+1][l]!=0){
                    arr[k][l] = arr[k+1][l];
                    arr[k+1][l]=0;
                    cek=1;
                }//end if
            }//end for l
        }//end for k
    }//end for z
    if(cek)
        randomization();
    printDisplay(arr);
}

void moveLEFT()
{
    int cek;
    cek = 0;
    //PERGESERAN
    for(int z=0;z<=2;z++){
        for(int k=0;k<4;k++){
            for(int l=0;l<3;l++){
                if(arr[k][l]==0 && arr[k][l+1]!=0){
                    arr[k][l] = arr[k][l+1];
                    arr[k][l+1]=0;
                    cek=1;
                }//end if
            }//end for l
        }//end for k
    }//end for z

    //PENGGABUNGAN
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==arr[i][j+1] && arr[i][j]!=0){
                arr[i][j]*=2;
                arr[i][j+1]=0;
                if(arr[i][j]==32){
                    messageboxx();
                }
                score += arr[i][j];
                cek=1;
            }//end if
        }//end for j
    }//end for i

    //PERGESERAN
    for(int z=0;z<=2;z++){
        for(int k=0;k<4;k++){
            for(int l=0;l<3;l++){
                if(arr[k][l]==0 && arr[k][l+1]!=0){
                    arr[k][l] = arr[k][l+1];
                    arr[k][l+1]=0;
                    cek=1;
                }//end if
            }//end for l
        }//end for k
    }//end for z
    if(cek)
        randomization();
    printDisplay(arr);
}

void moveDOWN()
{
    int cek;
    cek = 0;
    //PERGESERAN
    for(int z=0;z<=2;z++){
        for(int k=2;k>=0;k--){
            for(int l=3;l>=0;l--){
                if(arr[k+1][l]==0 && arr[k][l]!=0){
                    arr[k+1][l] = arr[k][l];
                    arr[k][l]=0;
                    cek=1;
                }//end if
            }//end for l
        }//end for k
    }//end for z

    //PENGGABUNGAN
    for(int i=3;i>=1;i--){
        for(int j=3;j>=0;j--){
            if(arr[i][j]==arr[i-1][j] && arr[i][j]!=0){
                arr[i][j]*=2;
                arr[i-1][j]=0;
                if(arr[i][j]==32){
                    messageboxx();
                }
                score += arr[i][j];
                cek = 1;
            }//end if
        }// end for j
    }//end for i

    //PERGESERAN
    for(int z=0;z<=2;z++){
        for(int k=2;k>=0;k--){
            for(int l=3;l>=0;l--){
                if(arr[k+1][l]==0 && arr[k][l]!=0){
                    arr[k+1][l] = arr[k][l];
                    arr[k][l]=0;
                    cek=1;
                }//end if
            }//end for l
        }//end for k
    }//end for z
    if(cek)
        randomization();
    printDisplay(arr);
}

void moveRIGHT()
{
    int cek;
    cek = 0;
    for(int z=0;z<=2;z++){
        for(int k=3;k>=0;k--){
            for(int l=2;l>=0;l--){
                if(arr[k][l+1]==0 && arr[k][l]!=0){
                    arr[k][l+1] = arr[k][l];
                    arr[k][l]=0;
                    cek = 1;
                }
            }
        }
    }
    for(int i=3;i>=0;i--){
        for(int j=3;j>=1;j--){
            if(arr[i][j]==arr[i][j-1] && arr[i][j]!=0){
                arr[i][j]*=2;
                arr[i][j-1]=0;
                if(arr[i][j]==32){
                    messageboxx();
                }
                score += arr[i][j];
                cek=1;
            }
        }
    }
    for(int z=0;z<=2;z++){
        for(int k=3;k>=0;k--){
            for(int l=2;l>=0;l--){
                if(arr[k][l+1]==0 && arr[k][l]!=0){
                    arr[k][l+1] = arr[k][l];
                    arr[k][l]=0;
                    cek = 1;
                }
            }
        }
    }
    if(cek)
        randomization();
    printDisplay(arr);
}
void gameover()
{
    system("cls");
    puts("\n\t      \xB0\xB0\xB0    \xB0\xB0\xB0   \xB0   \xB0  \xB0\xB0\xB0\xB0\xB0     \xB0\xB0\xB0   \xB0   \xB0  \xB0\xB0\xB0\xB0\xB0  \xB0\xB0\xB0\xB0 ");
    puts("\t     \xB0      \xB0   \xB0  \xB0\xB0 \xB0\xB0  \xB0        \xB0   \xB0  \xB0   \xB0  \xB0      \xB0   \xB0");
    puts("\t     \xB0 \xB0\xB0\xB0  \xB0\xB0\xB0\xB0\xB0  \xB0 \xB0 \xB0  \xB0\xB0\xB0\xB0     \xB0   \xB0  \xB0   \xB0  \xB0\xB0\xB0\xB0   \xB0\xB0\xB0\xB0");
    puts("\t     \xB0   \xB0  \xB0   \xB0  \xB0   \xB0  \xB0        \xB0   \xB0   \xB0 \xB0   \xB0      \xB0  \xB0  ");
    puts("\t      \xB0\xB0\xB0   \xB0   \xB0  \xB0   \xB0  \xB0\xB0\xB0\xB0\xB0     \xB0\xB0\xB0     \xB0    \xB0\xB0\xB0\xB0\xB0  \xB0   \xB0  ");

    printDisplay(arr);
    printf("\t\t\t\t Score : %ld\n",score);
    pFile = fopen ("myfile.txt","a+");
    fprintf (pFile, "Nama : %s\nScore : %d\n===================================",nama,score);
}

int main()
{
    char ch;
    system("title 4096");
    system("color F0");
    string Menu[3] = {"Start Game", "Score", "Exit"};
	int pointer = 0;
	while(true){
        system("cls");
        textcolor(240);
        cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t    Main Menu\n\n";
		for (int i = 0; i < 3; ++i)
		{
			if (i == pointer)
			{
				textcolor(249);
				cout <<"\t\t\t\t    "<< Menu[i] << endl;
			}
			else
			{
				textcolor(240);
				cout <<"\t\t\t\t    "<< Menu[i] << endl;
			}
		}
		while(true)
		{
		    ch = getch();
			if (ch == 72)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 2;
				}
				break;
			}
			else if (ch == 80)
			{
				pointer += 1;
				if (pointer == 3)
				{
					pointer = 0;
				}
				break;
			}
			else if (ch == 13)
			{
				switch (pointer)
				{
					case 0:
					{
                        goto start;
					} break;
					case 1:
					{
						cout << "\n\n\nThis is the options...";
						Sleep(1000);
					} break;
					case 2:
					{
					    textcolor(240);
                        return 0;
					} break;
				}
				break;
			}
        }
    }
start:


    header();
    startpage();
    ch = getch();
    if(ch == 27) return 0;
    system("cls");
    printf("\n\n\n\n\n\t\t\tMasukkan Nama Pemain : ");
    gets(nama);
    header();
    instruction();
    ch = getch();
    if(ch == 27) return 0;
    system("cls");

    startRandom();
    logo();
    printDisplay(arr);

    while(checkGameOver()==0)
    {
        ch = getch();
        system("cls");
        logo();

        if(ch == 72 || ch == 'w') moveUP();
        else if(ch == 75 || ch == 'a') moveLEFT();
        else if(ch == 80 || ch == 's') moveDOWN();
        else if(ch == 77 || ch == 'd') moveRIGHT();
        else if(ch == 27) break;
        else{
            printDisplay(arr);
            continue;
        }
    }
    gameover();
    getch();
}
