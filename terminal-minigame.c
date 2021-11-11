#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#include <windows.h>
#include<string.h>

int dice,dice1;
int checkPosition();
int checkPosition1();
int Position, newPosition,newPosition1,above,position1,piece,piece1;
int choice;


char player1[322];
char player2[322];


main()
{

int i, j;
int random;
int board [10][10],count=101,q;          //create the board with array.

srand(time(NULL));
int sum = 0;
int k,l;

while(1){
      printf("\n WELCOME TO SNAKES AND LADDERS\n\n    1)Read the rules\n    2)Single player\n    3)Multiplayer\n    4)View Snakes & Ladders paths\n    5)Exit\n    \n                     \n\n");
      scanf("%d", &choice);
      switch(choice){
      case 1:// the rules case.

    system ("cls");// to clear the screen
Beep(750, 300);// to make beep sound .
      printf("\nThe rules are simple: \n   You press enter to roll the die\n   You are then told which space you have landed on\n   If you land on a snake you will move down the board\n   If you land on a ladder then you will move up it\n   In order to win you must land on 100\n\n Good Luck\n\n"); break;


      case 2:// single player case .
Position = 0 ;


system ("cls") ;
Beep(750, 300);
   printf ("Enter your name: ");
                scanf ("%s",&player1);
            Beep(750, 300);



Beep(750, 300);
do
{
    count = 0;
      printf("\n\n %s enter to roll\n\n", player1);
      dice = toupper(getche());
      dice=((rand()%6)+1);
      system("cls");
      printf("\n %s you rolled a %d.\n", player1, dice);


      Position+=dice;// position of dice.
            for(i=0;i<10;i++){
        printf("\n");
        for(j=0;j<10;j++){
            count--;

            board[i][j]= abs(count);
            if(abs(count) == Position){

              HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);// to make color
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
                 printf("x\t",piece);
                  /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

            } else {



      if (board[i][j]==17 ||  board[i][j]==54 || board[i][j]==62 || board[i][j]==64 || board[i][j]==99 || board[i][j]==87 || board[i][j]==93 || board[i][j]==95 ){

                  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("%d\t", board[i][j]);

                /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
}


else if (board[i][j]==4 || board[i][j]==9 || board[i][j]==20 || board[i][j]==28 || board[i][j]==40 || board[i][j]==51 || board[i][j]==63 || board[i][j]==71){

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

              /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

            printf("%d\t", board[i][j]); //print the board .

}

else {
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
            printf("%d\t", board[i][j]);

                /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
}
        }}
    }

      if(Position >100)
           {above = (Position-100);
           Position = (100 - above);}



      printf("\n\n\nYou have landed on space %d.\n", Position);



      checkPosition();
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
      if (Position<newPosition)

         {printf("\nWell done, you have landed on a ladder. You are now on space %d.", newPosition);}

      if (Position>newPosition)
         {printf("\nUnlucky, you have landed on a snake. You are now on space %d.", newPosition);}
 /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

      Position = newPosition;// in case of ladder or snake.


} while(Position<100);

     printf("You have won!!!");
     printf("\n\n\n");
     break;

      case 3:// multi player game.
position1 = 0 ;
Position = 0 ;
system ("cls") ;
Beep(750, 300);
    printf ("Enter 1st player's name <x> : ");
                scanf ("%s",&player1);
                Beep(750, 300);


    printf ("Enter 2nd player's name <o> : ");
                scanf ("%s",&player2);
                Beep(750, 300);




   do{

      count = 0;
      q = 0;

      printf("\n\n %s please press enter to roll\n\n", player1);
      dice = toupper(getche());
      dice =((rand()%6)+1);
      printf(" %s has rolled a %d.\n", player1, dice);
      Position+=dice;

      printf("\n\n\n %s please press enter to roll\n\n", player2);
      dice1 = toupper(getche());
      dice1 =((rand()%6)+1);

      printf(" %s has rolled a %d.\n", player2, dice1);
      position1+=dice1;
    for ( i= 0 ; i<500000000 ; i++){}// time delay .
      system("cls");
         for(i=0;i<10;i++){
        printf("\n");
        for(j=0;j<10;j++){
            count--;
            q--;

            board[i][j]= abs(count);
            if(abs(count) == Position){

                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);



                 printf("x\t");//position of player 1 piece

                     /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

            }else if(abs(q) == position1){

                HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

                 printf("o\t",piece1); //position of player 2 piece.

                  /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

            }else {



      if (board[i][j]==17 ||  board[i][j]==54 || board[i][j]==62 || board[i][j]==64 || board[i][j]==99 || board[i][j]==87 || board[i][j]==93 || board[i][j]==95 ){

                  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
            printf("%d\t", board[i][j]);

                /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
}


else if (board[i][j]==4 || board[i][j]==9 || board[i][j]==20 || board[i][j]==28 || board[i][j]==40 || board[i][j]==51 || board[i][j]==63 || board[i][j]==71){

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

              /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);

            printf("%d\t", board[i][j]);

}

else {
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
            printf("%d\t", board[i][j]);

                /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
}
            }}}
            if(Position >100)
           {above = (Position-100);
           Position = (100 - above);}
         else if(position1>100){above = (position1-100);
           position1 = (100 - above);}


      printf("\n\n %s has landed on space %d.\n", player1, Position);
      printf(" %s has landed on space %d.\n", player2, position1);


      checkPosition();
 HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;

    /* Save current attributes */
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;

    SetConsoleTextAttribute(hConsole, FOREGROUND_INTENSITY);
      if (Position<newPosition)
         {printf("\n\nNice %s ! You have landed on a ladder. You are now on space %d.", player1, newPosition);
         Beep(800, 200);}
      if (Position>newPosition)
         {printf("\n\nOh no %s ! You have landed on a snake. You are now on space %d.", player1, newPosition);
         Beep(400, 400);}
         Position = newPosition;
      checkPosition1();
      if (position1<newPosition1)
         {printf("\n\nNice %s ! You have landed on a ladder. You are now on space %d.", player2, newPosition1);
         Beep(800, 200);}
      if (position1>newPosition1)
         {printf("\n\nOh no %s ! You have landed on a snake. You are now on space %d.", player2, newPosition1);
         Beep(400, 400);}
      position1 = newPosition1;
       /* Restore original attributes */
    SetConsoleTextAttribute(hConsole, saved_attributes);
          if(Position >= 100){
            printf("\n\n%s is the winner!!", player1);//if player 1 wins.

            break;
    }
    else if(position1 >= 100){
        printf("\n\n%s is the winner !!", player2);//if player 2 wins.
        break;
    }
                 }while(Position<100 & position1<100);




     printf("\n\n\n");

break;





      case 4:// showing paths
system("cls");
      printf("\n       01=Start                        \n");
      printf("       99=Snake  to 78    20=Ladder to 38\n");
      printf("       95=Snake  to 75    28=Ladder to 84\n");
      printf("       64=Snake  to 60    04=Ladder to 14\n");
      printf("       62=Snake  to 19    51=Ladder to 67\n");
      printf("       93=Snake  to 73    40=Ladder to 59\n");
      printf("       54=Snake  to 34    09=Ladder to 31\n");
      printf("       17=Snake  to 7     63=Ladder to 81\n");
      printf("       87=snake  to 24    71=Ladder to 91\n");
      printf("                          100=End    \n\n\n");

break;
case 5:
        exit(0);//ends the code.

        break;
getchar();

return 0;
      }
}}



checkPosition(){//function for snakes and ladders .
     switch(Position)
{
         case 4:
              return newPosition = 14;
              break;

         case 54:
              return newPosition =34 ;
              break;

         case 9:
              return newPosition =31;
              break;

         case 62:
              return newPosition =19;
              break;

         case 17:
              return newPosition =7;
              break;

         case 20:
              return newPosition =38;
              break;

         case 64:
              return newPosition =60;
              break;

         case 28:
              return newPosition =84;
              break;

         case 63:
              return newPosition =81;
              break;

         case 40:
              return newPosition =59;
              break;

         case 87:
              return newPosition =24;
              break;

         case 51:
              return newPosition =67;
              break;

         case 99:
              return newPosition =78;
              break;

         case 95:
              return newPosition =75;
              break;

         case 93:
              return newPosition =73;
              break;

         case 71:
              return newPosition =91;
              break;

         default:
                return newPosition = Position;
                 }


}
checkPosition1(){//function for player 2 .
     switch(position1)
{
         case 4:
              return newPosition1 = 14;
              break;

         case 54:
              return newPosition1 =34 ;
              break;

         case 9:
              return newPosition1 =31;
              break;

         case 62:
              return newPosition1 =19;
              break;

         case 17:
              return newPosition1 =7;
              break;

         case 20:
              return newPosition1 =38;
              break;

         case 64:
              return newPosition1 =60;
              break;

         case 28:
              return newPosition1 =84;
              break;

         case 63:
              return newPosition1 =81;
              break;

         case 40:
              return newPosition1 =59;
              break;

         case 87:
              return newPosition1 =24;
              break;

         case 51:
              return newPosition1 =67;
              break;

         case 99:
              return newPosition1 =78;
              break;

         case 95:
              return newPosition1 =75;
              break;

         case 93:
              return newPosition1 =73;
              break;

         case 71:
              return newPosition1 =91;
              break;

         default:
                return newPosition1 = position1;
                 }}


