#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>

int wp[8]={0, 0, 0, 0, 0, 0, 0, 0};
int bp[8]={0, 0, 0, 0, 0, 0, 0, 0};
char board[8][8]={

  {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    { ' ' ,  ' ' , ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' },
    { ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' },
    { ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' },
    { ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' ,  ' ' },
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
};

void print_board(){
int i, j, k;
printf(" ");

for(k=0; k<8; k++)
{
    printf(" ");
    {for( i=0 ; i<33 ; i++ )
    {
         printf( "-" ) ;
    } printf( "\n" ) ;
     printf( "%d " , k ) ;

    for( j=0 ; j<8 ; j++ )
        {
            printf( "| %c " , board[k][j] ) ;
        }
    printf( "| \n" ) ;
    }

    printf( "  " ) ;
    for( i=0 ; i<33 ; i++ )
        {
            printf( "-" ) ;
        } printf( "\n" ) ;


}for (j='a';j<'i';j++){printf("  ");printf("%c ",j);}
printf("\n");

}

int check_rook(int start[2],int end[2])
{
int aux=0;
int i;
  if((board[start[0]][start[1]])=='r')
   {
        if((board[end[0]][end[1]])==' ')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]>0)
               {
                   for(i=1;i<=abs(start[0]-end[0]);i++){
                   if(board[end[0]][end[1]]==' '){
                   if(board[start[0]-i][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
               }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(i=1;i<=abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]-i][end[1]]==' ')
                    {
                        aux=1;
                    }
                    }
                    if(board[start[0]-i][end[1]]=='P' || board[start[0]-i][end[1]]=='N' || board[start[0]-i][end[1]]=='B' || board[start[0]-i][end[1]]=='R' || board[start[0]-i][end[1]]=='Q' || board[start[0]-i][end[1]]=='K'){
                        if( i == abs(start[0]-end[0])){
                            aux = 1;

                        }
                        else{
                            aux = 0;
                        }
                    }
                }
            }

                if(start[0]-end[0]<0)
               {for(i=1;i<=abs(start[0]-end[0]);i++)
               {
                   if(board[start[0]+i][end[0]]==' ')
                    aux=1;
                    else {
                        aux=0;
                        break;
                    }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(i=1;i<=abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]+i][end[0]]==' ')
                    {
                        aux=1;
                    }
                    else {
                    aux=0;
                    break;}
                }
            }
               }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
                    }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                    if(board[start[0]][start[1]+i] == 'P' || board[start[0]][start[1]+i] == 'N' || board[start[0]][start[1]+i] == 'B' || board[start[0]][start[1]+i] == 'R' || board[start[0]][start[1]+i] == 'Q' || board[start[0]][start[1]+i] == 'K'){
                        if( i == abs(start[1]-end[1]))
                                aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                    if(board[start[0]][end[1]-i] == 'P' || board[start[0]][end[1]-i] == 'N' || board[start[0]][end[1]-i] == 'B' || board[start[0]][end[1]-i] == 'R' || board[start[0]][end[1]-i] == 'Q' || board[start[0]][end[1]-i] == 'K')
                  {
                      if(i == abs(start[1]-end[1]))
                        aux = 1;
                      else
                      {
                          aux = 0;
                          break;
                      }
                  }
                  }
                }
                }
            }
        }
   }
         if((board[start[0]][start[1]])=='R')
      {
        if((board[end[0]][end[1]])==' ')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]>0)
               {
                   for(i=1;i<=abs(start[0]-end[0]);i++){
                   if(board[end[0]][end[1]]==' '){
                   if(board[start[0]-i][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
               }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B')
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
            {
                for(i=1;i<abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]-i][end[1]]==' ')
                    {
                        aux=1;
                    }
                    }
                    if(board[start[0]-i][end[1]]=='p' || board[start[0]-i][end[1]]=='n' || board[start[0]-i][end[1]]=='b' || board[start[0]-i][end[1]]=='r' || board[start[0]-i][end[1]]=='q' || board[start[0]-i][end[1]]=='k'){
                        if( i == abs(start[0]-end[0])){
                            aux = 1;
                        }
                        else{
                            aux = 0;
                        }
                    }
                }
            }

                if(start[0]-end[0]<0)
               {for(i=1;i<=abs(start[0]-end[0]);i++)
               {
                   if(board[start[0]+i][end[1]]==' ')
                    aux=1;
                    else {
                        aux=0;
                        break;
                    }
               }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B')
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b')
            {
                for(i=1;i<abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]+i][end[1]]==' ')
                    {
                        aux=1;
                    }
                }
            }
                for(i=1;i<=abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]+i][end[1]]=='p' || board[start[0]+i][end[1]]=='b' || board[start[0]+i][end[1]]=='r' || board[start[0]+i][end[1]]=='n' || board[start[0]+i][end[1]]=='q' || board[start[0]+i][end[1]]=='k')
                    {
                        if(i == abs(start[0]- end[0]))
                            aux = 1;
                        else
                        {
                            aux = 0;
                            break;
                        }
                    }
                }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
                    }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B')

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b')
                {
                    for(i=1;i<abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                  }
                  for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][start[1]+i] == 'p' || board[start[0]][start[1]+i] == 'n' || board[start[0]][start[1]+i] == 'b' || board[start[0]][start[1]+i] == 'r' || board[start[0]][start[1]+i] == 'q' || board[start[0]][start[1]+i] == 'k'){
                        if( i == abs(start[1]-end[1]))
                                aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    for(i=1;i<abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                  }
                  for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][end[1]-i] == 'p' || board[start[0]][end[1]-i] == 'n' || board[start[0]][end[1]-i] == 'b' || board[start[0]][end[1]-i] == 'r' || board[start[0]][end[1]-i] == 'q' || board[start[0]][end[1]-i] == 'k')
                  {
                      if(i == abs(start[1]-end[1]))
                        aux = 1;
                      else
                      {
                          aux = 0;
                          break;
                      }
                  }
                  }
                }
                }
            }
        }
   }
    printf("%d",aux);
}

int check_pawn(int start[2],int end[2])
{
    int aux=0;
    if(board[start[0]][start[1]]=='p')
    {
      if((start[1] == end[1]) && ((start[0] - 1) == end[0]))
        {
            if(board[end[0]][end[1]] ==' ')
            {
                aux=1;
            }
        }
    if((((start[0]+1) == end[0]) || (start[0]-1) == end[0]) &&  ((start[1] - 1) == end[1]))
        if(board[end[0]][end[1]] != ' ')
            {
                aux=1;
            }
            else
            {
                aux=0;
            }
    }

    if(board[start[0]][start[1]]=='P')
        {
    if((start[1] == end[1]) && ((start[0] + 1) == end[0]))
        {
            if(board[end[0]][end[1]] ==' ')
            {
                aux=1;
            }
        }
    if((((start[0]+1) == end[0]) || (start[0]-1) == end[0]) &&  ((start[1] + 1) == end[1]))
        if(board[end[0]][end[1]] != ' ')
            {
                aux=1;
            }
else
{
    aux=0;
}
    }
    printf("%d",aux);
}

int check_bishop(int start[2],int end[2])
{
   int aux=0;
   int i;
   if(board[start[0]][start[1]] == 'b'){
    if(abs(start[0]-end[0]) == abs(start[1]-end[1]))
    {
        if(board[end[0]][end[1]]== 'n' || board[end[0]][end[1]]== 'q' || board[end[0]][end[1]]== 'r' || board[end[0]][end[1]]== 'k' || board[end[0]][end[1]]== 'b' || board[end[0]][end[1]]== 'p')
            aux = 0;
        if(board[end[0]][end[1]] == ' ' ){
            for( i = 1; i <= abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
        }
        if(board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R'){
            if(abs(start[0]-end[0]) == 1){
                aux = 1;
            }
            for(i = 1; i < abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
}
    }
   }
    if(board[start[0]][start[1]] == 'B'){
    if(abs(start[0]-end[0]) == abs(start[1]-end[1]))
    {
        if(board[end[0]][end[1]]== 'N' || board[end[0]][end[1]]== 'Q' || board[end[0]][end[1]]== 'R' || board[end[0]][end[1]]== 'K' || board[end[0]][end[1]]== 'B' || board[end[0]][end[1]]== 'P')
            aux = 0;
        if(board[end[0]][end[1]] == ' ' ){
            for( i = 1; i <= abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
        }
        if(board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r'){
            if(abs(start[0]-end[0]) == 1){
                aux = 1;
            }
            for(i = 1; i < abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
}
    }
   }
   printf("%d",aux);
}

int check_king(int start[2],int end[2])
{
    int aux=0;
    if((board[start[0]][start[1]])=='k')
    {
        if((board[end[0]][end[1]])==' ')
        {
            if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
        if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='N' )
        {
             if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
    }
     if((board[start[0]][start[1]])=='K')
    {
        if((board[end[0]][end[1]])==' ')
        {
            if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='n' )

        {
             if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
    }
    printf("%d",aux);
}

int check_queen(int start[2],int end[2])
{
int aux=0;
int i;
    if((board[start[0]][start[1]])=='q')
   {
        if((board[end[0]][end[1]])==' ')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]>0)
               {
                   for(i=1;i<=abs(start[0]-end[0]);i++){
                   if(board[end[0]][end[1]]==' '){
                   if(board[start[0]-i][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
               }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(i=1;i<=abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]-i][end[1]]==' ')
                    {
                        aux=1;
                    }
                    }
                    if(board[start[0]-i][end[1]]=='P' || board[start[0]-i][end[1]]=='N' || board[start[0]-i][end[1]]=='B' || board[start[0]-i][end[1]]=='R' || board[start[0]-i][end[1]]=='Q' || board[start[0]-i][end[1]]=='K'){
                        if( i == abs(start[0]-end[0])){
                            aux = 1;

                        }
                        else{
                            aux = 0;
                        }
                    }
                }
            }

                if(start[0]-end[0]<0)
               {for(i=1;i<=abs(start[0]-end[0]);i++)
               {
                   if(board[start[0]+i][end[0]]==' ')
                    aux=1;
                    else {
                        aux=0;
                        break;
                    }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(i=1;i<=abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]+i][end[0]]==' ')
                    {
                        aux=1;
                    }
                    else {
                    aux=0;
                    break;}
                }
            }
               }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
                    }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                    if(board[start[0]][start[1]+i] == 'P' || board[start[0]][start[1]+i] == 'N' || board[start[0]][start[1]+i] == 'B' || board[start[0]][start[1]+i] == 'R' || board[start[0]][start[1]+i] == 'Q' || board[start[0]][start[1]+i] == 'K'){
                        if( i == abs(start[1]-end[1]))
                                aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                    if(board[start[0]][end[1]-i] == 'P' || board[start[0]][end[1]-i] == 'N' || board[start[0]][end[1]-i] == 'B' || board[start[0]][end[1]-i] == 'R' || board[start[0]][end[1]-i] == 'Q' || board[start[0]][end[1]-i] == 'K')
                  {
                      if(i == abs(start[1]-end[1]))
                        aux = 1;
                      else
                      {
                          aux = 0;
                          break;
                      }
                  }
                  }
                }
                }
            }
        }
   }
         if((board[start[0]][start[1]])=='Q')
      {
        if((board[end[0]][end[1]])==' ')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]>0)
               {
                   for(i=1;i<=abs(start[0]-end[0]);i++){
                   if(board[end[0]][end[1]]==' '){
                   if(board[start[0]-i][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
               }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B')
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
            {
                for(i=1;i<abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]-i][end[1]]==' ')
                    {
                        aux=1;
                    }
                    }
                    if(board[start[0]-i][end[1]]=='p' || board[start[0]-i][end[1]]=='n' || board[start[0]-i][end[1]]=='b' || board[start[0]-i][end[1]]=='r' || board[start[0]-i][end[1]]=='q' || board[start[0]-i][end[1]]=='k'){
                        if( i == abs(start[0]-end[0])){
                            aux = 1;
                        }
                        else{
                            aux = 0;
                        }
                    }
                }
            }

                if(start[0]-end[0]<0)
               {for(i=1;i<=abs(start[0]-end[0]);i++)
               {
                   if(board[start[0]+i][end[1]]==' ')
                    aux=1;
                    else {
                        aux=0;
                        break;
                    }
               }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B')
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b')
            {
                for(i=1;i<abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]+i][end[1]]==' ')
                    {
                        aux=1;
                    }
                }
            }
                for(i=1;i<=abs(start[0]-end[0]);i++)
                {
                    if(board[start[0]+i][end[1]]=='p' || board[start[0]+i][end[1]]=='b' || board[start[0]+i][end[1]]=='r' || board[start[0]+i][end[1]]=='n' || board[start[0]+i][end[1]]=='q' || board[start[0]+i][end[1]]=='k')
                    {
                        if(i == abs(start[0]- end[0]))
                            aux = 1;
                        else
                        {
                            aux = 0;
                            break;
                        }
                    }
                }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
                    }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B')

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b')
                {
                    for(i=1;i<abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][start[1]+i]==' ')
                        aux=1;
                  }
                  for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][start[1]+i] == 'p' || board[start[0]][start[1]+i] == 'n' || board[start[0]][start[1]+i] == 'b' || board[start[0]][start[1]+i] == 'r' || board[start[0]][start[1]+i] == 'q' || board[start[0]][start[1]+i] == 'k'){
                        if( i == abs(start[1]-end[1]))
                                aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                for(i=1;i<=abs(start[1]-end[1]);i++)
                {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    for(i=1;i<abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][end[1]-i]==' ')
                        aux=1;
                        else {
                            aux=0;
                            break;
                        }
                  }
                  for(i=1;i<=abs(start[1]-end[1]);i++)
                  {
                    if(board[start[0]][end[1]-i] == 'p' || board[start[0]][end[1]-i] == 'n' || board[start[0]][end[1]-i] == 'b' || board[start[0]][end[1]-i] == 'r' || board[start[0]][end[1]-i] == 'q' || board[start[0]][end[1]-i] == 'k')
                  {
                      if(i == abs(start[1]-end[1]))
                        aux = 1;
                      else
                      {
                          aux = 0;
                          break;
                      }
                  }
                  }
                }
                }
            }
        }
   }
   if(board[start[0]][start[1]] == 'q'){
    if(abs(start[0]-end[0]) == abs(start[1]-end[1]))
    {
        if(board[end[0]][end[1]]== 'n' || board[end[0]][end[1]]== 'q' || board[end[0]][end[1]]== 'r' || board[end[0]][end[1]]== 'k' || board[end[0]][end[1]]== 'b' || board[end[0]][end[1]]== 'p')
            aux = 0;
        if(board[end[0]][end[1]] == ' ' ){
            for( i = 1; i <= abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
        }
        if(board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R'){
            if(abs(start[0]-end[0]) == 1){
                aux = 1;
            }
            for(i = 1; i < abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
}
    }
   }
    if(board[start[0]][start[1]] == 'Q'){
    if(abs(start[0]-end[0]) == abs(start[1]-end[1]))
    {
        if(board[end[0]][end[1]]== 'N' || board[end[0]][end[1]]== 'B' || board[end[0]][end[1]]== 'R' || board[end[0]][end[1]]== 'K' || board[end[0]][end[1]]== 'B' || board[end[0]][end[1]]== 'P')
            aux = 0;
        if(board[end[0]][end[1]] == ' ' ){
            for( i = 1; i <= abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
        }
        if(board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r'){
            if(abs(start[0]-end[0]) == 1){
                aux = 1;
            }
            for(i = 1; i < abs(start[0]-end[0]); i++){
                if((start[0] < end[0]) && (start[1] < end[1])){
                    if(board[start[0]+i][start[1]+i] == ' ')
                        aux = 1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                if((start[0] < end[0]) && (start[1] > end[1])){
                    if(board[start[0]+i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] < end[1])){
                    if(board[start[0]-i][start[1]+i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                if((start[0] > end[0]) && (start[1] > end[1])){
                    if(board[start[0]-i][start[1]-i] == ' ')
                        aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
            }
}
    }
   }
   printf("%d",aux);
}

int check_knight(int start[2],int end[2])
{
int aux=0;
 if((board[start[0]][start[1]])=='n' || (board[start[0]][start[1]])=='N')
   {
        if((board[end[0]][end[1]])==' ')
        {
         if((abs(start[0]-end[0]) == 1) && (abs(start[1]-end[1]) == 2))
        {
            aux=1;
        }
    if((abs(start[0]-end[0]) == 2) && (abs(start[1]-end[1]) == 1))
        {
            aux=1;
        }}
        else if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B' ||
             board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='n' )
        {
            aux=0;
        }

   }
        printf("%d",aux);
}

int check_move(int piece,int start[2],int end[2])
{
    switch (piece){
        case 'p':{
            check_pawn(start, end);
            break;
        }
         case 'b':{
            check_bishop(start, end);
            break;
        }
         case 'k':{
            check_king(start, end);
            break;
        }
         case 'q':{
            check_queen(start, end);
            break;
        }
         case 'n':{
            check_knight(start, end);
            break;
        }
         case 'r':{
            check_rook(start, end);
            break;
        }
         case 'R':{
            check_rook(start, end);
            break;
        }
         case 'P':{
            check_pawn(start, end);
            break;
        }
         case 'Q':{
            check_queen(start, end);
            break;
        }
         case 'N':{
            check_knight(start, end);
            break;
        }
         case 'K':{
            check_king(start, end);
            break;
        }

    }
}


int vpawn(int start[2])
{
    int i,j;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
             int aux=0;
    if(board[start[0]][start[1]]=='p')
    {
      if((start[1] == end[1]) && ((start[0] - 1) == end[0]))
        {
            if(board[end[0]][end[1]] ==' ')
            {
                aux=1;
            }
        }
    if((((start[0]+1) == end[0]) || (start[0]-1) == end[0]) &&  ((start[1] - 1) == end[1]))
        if(board[end[0]][end[1]] == 'N' || board[end[0]][end[1]] == 'K' || board[end[0]][end[1]] == 'Q' || board[end[0]][end[1]] == 'R' || board[end[0]][end[1]] == 'B' || board[end[0]][end[1]] == 'P')
            {
                aux=1;
            }
            else
            {
                aux=0;
            }
    }


  if(aux==1)
  {
      printf("%d%d ",i,j);
  }
    }
    }
}

int vPawn(int start[2])
{
     int i,j;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
             int aux=0;
               if(board[start[0]][start[1]]=='P')
        {
    if((start[1] == end[1]) && ((start[0] + 1) == end[0]))
        {
            if(board[end[0]][end[1]] ==' ')
            {
                aux=1;
            }
        }
    if((((start[0]+1) == end[0]) || (start[0]-1) == end[0]) &&  ((start[1] + 1) == end[1]))
        if(board[end[0]][end[1]] == 'p' || board[end[0]][end[1]] == 'b' || board[end[0]][end[1]] == 'q' || board[end[0]][end[1]] == 'k' || board[end[0]][end[1]] == 'n' || board[end[0]][end[1]] == 'r')
            {
                aux=1;
            }
else
{
    aux=0;
}

}
if(aux==1)
{
    printf("%d%d ",i,j);
    aux=0;
}
        }
    }
}

int vknight(int start[2])
{
    int i,j;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
             int aux=0;
             if((board[start[0]][start[1]])=='n')
   {
        if((board[end[0]][end[1]])==' ')
        {
         if((abs(start[0]-end[0]) == 1) && (abs(start[1]-end[1]) == 2))
        {
            aux=1;
        }
        if((abs(start[0]-end[0]) == 2) && (abs(start[1]-end[1]) == 1))
        {
            aux=1;
        }
        }
        if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='n' )
        {
            aux=0;
        }
        if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='N' )
            if((abs(start[0]-end[0]) == 1) && (abs(start[1]-end[1]) == 2))
                aux = 1;
            if((abs(start[0]-end[0]) == 2) && (abs(start[1]-end[1]) == 1))
                aux = 1;
   }
   if(aux==1)
        printf("%d%d ",i,j);
    aux=0;
    }
    }
}
int vKnight(int start[2])
{
    int i,j;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
             int aux=0;
             if((board[start[0]][start[1]])=='N')
   {
        if((board[end[0]][end[1]])==' ')
        {
         if((abs(start[0]-end[0]) == 1) && (abs(start[1]-end[1]) == 2))
        {
            aux=1;
        }
        if((abs(start[0]-end[0]) == 2) && (abs(start[1]-end[1]) == 1))
        {
            aux=1;
        }
        }
        if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='N')
        {
            aux=0;
        }
        if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='n' )
            if((abs(start[0]-end[0]) == 1) && (abs(start[1]-end[1]) == 2))
                aux = 1;
            if((abs(start[0]-end[0]) == 2) && (abs(start[1]-end[1]) == 1))
                aux = 1;
   }
   if(aux==1)
        printf("%d%d ",i,j);
    aux=0;
    }
    }
}
int vking(int start[2])
{
       int i,j;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
             int aux=0;
              if((board[start[0]][start[1]])=='k')
    {
        if((board[end[0]][end[1]])==' ')
        {
            if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
        if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='N' )
        {
             if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
    }
      if(aux==1)
{
    printf("%d%d ",i,j);
    aux=0;
}
        }
    }
}

int vKing(int start[2])
{
       int i,j;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
             int aux=0;
              if((board[start[0]][start[1]])=='K')
    {
        if((board[end[0]][end[1]])==' ')
        {
            if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='n' )

        {
             if((abs(start[0]-end[0])<=1) && (abs(start[1]-end[1])<=1))
                aux=1;
        }
    }
      if(aux==1)
{
    printf("%d%d ",i,j);
aux=0;
}
        }
    }
}

int vrook(int start[2])
{
    int i,j;
    int n;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if((board[start[0]][start[1]])=='r')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]<0)
                {
                if(board[end[0]][end[1]] == ' ')
                for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                   if(board[end[0]][end[1]] == ' '){
                   if(board[start[0]+n][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]+n][end[1]]==' ')
                    {
                        aux=1;
                    }

                if(board[start[0]+n][end[1]] == 'P' || board[start[0]+n][end[1]] == 'N' || board[start[0]+n][end[1]] == 'B' || board[start[0]+n][end[1]] == 'R' || board[start[0]+n][end[1]] == 'Q' || board[start[0]+n][end[1]] == 'K')
                    {
                        if(n == abs(start[0]-end[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(start[0]-end[0]>0)
                {
                      for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                if(board[end[0]][end[1]] == ' '){
                    if(board[start[0]-n][end[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]-n][end[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(n=1;n<abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][end[0]+n]==' ')
                        aux=1;
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                if(board[end[0]][end[1]] == ' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(n=1;n<=abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][end[0]-n]==' ')
                        aux=1;
                    if(board[start[0]][end[0]-n]=='P' || board[start[0]][end[0]-n]=='N' || board[start[0]][end[0]-n]=='B' || board[start[0]][end[0]-n]=='R' || board[start[0]][end[0]-n]=='Q' || board[start[0]][end[0]-n]=='K'){
                        if(n == abs(start[1]-end[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        printf("%d%d ",i,j);
    aux=0;
        }
    }
}
int vRook(int start[2])
{
    int i,j;
    int n;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if((board[start[0]][start[1]])=='R')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]<0)
                {
                if(board[end[0]][end[1]] == ' ')
                for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                   if(board[end[0]][end[1]] == ' '){
                   if(board[start[0]+n][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='b'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]+n][end[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
                for(n=1;n<=abs(start[0]-end[0]);n++){
                if(board[start[0]+n][end[1]] == 'p' || board[start[0]+n][end[1]] == 'n' || board[start[0]+n][end[1]] == 'b' || board[start[0]+n][end[1]] == 'r' || board[start[0]+n][end[1]] == 'q' || board[start[0]+n][end[1]] == 'k')
                {
                        if(n == abs(start[0]-end[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(start[0]-end[0]>0)
                {
                      for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                if(board[end[0]][end[1]] == ' '){
                    if(board[start[0]-n][end[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]-n][end[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    for(n=1;n<abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][start[1]+n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                if(board[end[0]][end[1]] == ' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    for(n=1;n<=abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][end[0]-n]==' ')
                        aux=1;
                    if(board[start[0]][end[0]-n]=='p' || board[start[0]][end[0]-n]=='n' || board[start[0]][end[0]-n]=='b' || board[start[0]][end[0]-n]=='r' || board[start[0]][end[0]-n]=='q' || board[start[0]][end[0]-n]=='k'){
                        if(n == abs(start[1]-end[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        printf("%d%d ",i,j);
    aux=0;
        }
    }
}

int vbishop(int start[2])
{
    int i,j;
    int n;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if(board[start[0]][start[1]] == 'b'){
            if(abs(start[0]-end[0]) == abs(start[1]-end[1])){
                if(board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r'){
                    aux = 0;
                }
                if(board[end[0]][end[1]]== ' '){
                    for(n = 1; n <= abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R'){
                    if(abs(start[0]-end[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    printf("%d%d ", i, j);
                aux = 0;
                }
            }
}
int vBishop(int start[2])
{
    int i,j;
    int n;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if(board[start[0]][start[1]] == 'B'){
            if(abs(start[0]-end[0]) == abs(start[1]-end[1])){
                if(board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R'){
                    aux = 0;
                }
                if(board[end[0]][end[1]]== ' '){
                    for(n = 1; n <= abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r'){
                    if(abs(start[0]-end[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    printf("%d%d ", i, j);
                aux = 0;
                }
            }
}


int vqueen(int start[2])
{
    int i,j;
    int n;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if(board[start[0]][start[1]] == 'q'){
            if(abs(start[0]-end[0]) == abs(start[1]-end[1])){
                if(board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r'){
                    aux = 0;
                }
                if(board[end[0]][end[1]]== ' '){
                    for(n = 1; n <= abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R'){
                    if(abs(start[0]-end[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    printf("%d%d ", i, j);
                aux = 0;
                }
    }
    for(i=0;i<8;i++)            //rook
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if((board[start[0]][start[1]])=='q')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]<0)
                {
                if(board[end[0]][end[1]] == ' ')
                for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                   if(board[end[0]][end[1]] == ' '){
                   if(board[start[0]+n][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]+n][end[1]]==' ')
                    {
                        aux=1;
                    }

                if(board[start[0]+n][end[1]] == 'P' || board[start[0]+n][end[1]] == 'N' || board[start[0]+n][end[1]] == 'B' || board[start[0]+n][end[1]] == 'R' || board[start[0]+n][end[1]] == 'Q' || board[start[0]+n][end[1]] == 'K')
                    {
                        if(n == abs(start[0]-end[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(start[0]-end[0]>0)
                {
                      for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                if(board[end[0]][end[1]] == ' '){
                    if(board[start[0]-n][end[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
            {
                for(n=1;n<abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]-n][end[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(n=1;n<abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][end[0]+n]==' ')
                        aux=1;
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                if(board[end[0]][end[1]] == ' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    for(n=1;n<=abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][end[0]-n]==' ')
                        aux=1;
                    if(board[start[0]][end[0]-n]=='P' || board[start[0]][end[0]-n]=='N' || board[start[0]][end[0]-n]=='B' || board[start[0]][end[0]-n]=='R' || board[start[0]][end[0]-n]=='Q' || board[start[0]][end[0]-n]=='K'){
                        if(n == abs(start[1]-end[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        printf("%d%d ",i,j);
    aux=0;
        }
    }

}
int vQueen(int start[2])
{
    int i,j;
    int n;
    int end[2];
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if(board[start[0]][start[1]] == 'Q'){
            if(abs(start[0]-end[0]) == abs(start[1]-end[1])){
                if(board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='B' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='R'){
                    aux = 0;
                }
                if(board[end[0]][end[1]]== ' '){
                    for(n = 1; n <= abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='b' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='r'){
                    if(abs(start[0]-end[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(start[0]-end[0]); n++){
                        if((start[0] < end[0]) && (start[1] < end[1])){
                            if(board[start[0]+n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] < end[0]) && (start[1] > end[1])){
                            if(board[start[0]+n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] < end[1])){
                            if(board[start[0]-n][start[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((start[0] > end[0]) && (start[1] > end[1])){
                            if(board[start[0]-n][start[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    printf("%d%d ", i, j);
                aux = 0;
                }
            }
    for(i=0;i<8;i++)            //rook
    {
        for(j=0;j<8;j++)
        {
            end[0]=i;
            end[1]=j;
            int aux=0;
            if((board[start[0]][start[1]])=='Q')
        {
            if(start[1]-end[1]==0 )
            {
                if(start[0]-end[0]<0)
                {
                if(board[end[0]][end[1]] == ' ')
                for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                   if(board[end[0]][end[1]] == ' '){
                   if(board[start[0]+n][end[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='b'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]+n][end[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
                for(n=1;n<=abs(start[0]-end[0]);n++){
                if(board[start[0]+n][end[1]] == 'p' || board[start[0]+n][end[1]] == 'n' || board[start[0]+n][end[1]] == 'b' || board[start[0]+n][end[1]] == 'r' || board[start[0]+n][end[1]] == 'q' || board[start[0]+n][end[1]] == 'k')
                {
                        if(n == abs(start[0]-end[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(start[0]-end[0]>0)
                {
                      for(n=1;n<=abs(start[0]-end[0]);n++)
               {
                if(board[end[0]][end[1]] == ' '){
                    if(board[start[0]-n][end[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
            {
                for(n=1;n<=abs(start[0]-end[0]);n++)
                {
                    if(board[start[0]-n][end[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(start[0]-end[0]==0)
            {
                if(start[1]-end[1]<0)
                {
                    if(board[end[0]][end[1]]==' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )
                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    for(n=1;n<abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][start[1]+n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                  }
                }
                }
                 if(start[1]-end[1]>0)
                {
                if(board[end[0]][end[1]] == ' '){
                for(n=1;n<=abs(start[1]-end[1]);n++)
                {
                    if(board[start[0]][start[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[end[0]][end[1]]=='P' || board[end[0]][end[1]]=='N' || board[end[0]][end[1]]=='K' || board[end[0]][end[1]]=='Q' || board[end[0]][end[1]]=='R' || board[end[0]][end[1]]=='B'  )

                {
                    aux=0;
                }
               if(board[end[0]][end[1]]=='p' || board[end[0]][end[1]]=='n' || board[end[0]][end[1]]=='k' || board[end[0]][end[1]]=='q' || board[end[0]][end[1]]=='r' || board[end[0]][end[1]]=='b'  )
                {
                    for(n=1;n<=abs(start[1]-end[1]);n++)
                  {
                    if(board[start[0]][end[0]-n]==' ')
                        aux=1;
                    if(board[start[0]][end[0]-n]=='p' || board[start[0]][end[0]-n]=='n' || board[start[0]][end[0]-n]=='b' || board[start[0]][end[0]-n]=='r' || board[start[0]][end[0]-n]=='q' || board[start[0]][end[0]-n]=='k'){
                        if(n == abs(start[1]-end[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        printf("%d%d ",i,j);
    aux=0;
        }
    }

}


int vpiece(char piece)
{
    int start[2];
    scanf("%d%d", &start[0], &start[1]);
    printf("Mutarile disponibile sunt: ");
    switch(piece){
        case 'p':{
            vpawn(start);
            break;
        }
         case 'b':{
            vbishop(start);
            break;
        }
         case 'k':{
            vking(start);
            break;
        }
         case 'q':{
            vqueen(start);
            break;
        }
         case 'n':{
            vknight(start);
            break;
        }
         case 'r':{
            vrook(start);
            break;
        }
         case 'R':{
            vRook(start);
            break;
        }
         case 'P':{
            vPawn(start);
            break;
        }
         case 'Q':{
            vQueen(start);
            break;
        }
         case 'N':{
            vKnight(start);
            break;
        }
         case 'K':{
            vKing(start);
            break;
        }
    }
}
int count_pawn()
{
    int i;
    int j;
    int k = 0;
    for(i = 0; i<8; i++)
        for(j = 0; j<8; j++)
            if(board[i][j] == 'p')
                k++;
    return k;
}
int count_Pawn()
{
    int k = 0;
        int i,j;
    for( i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 'P'){
                k++;
            }
        }
    }
    return k;
}
int count_knight()
{
        int i,j;
    int k = 0;
    for( i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 'k'){
                k++;
            }
        }
    }
    return k;
}
int count_Knight()
{
      int i,j;
    int k = 0;
    for(i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 'K'){
                k++;
            }
        }
    }
    return k;
}
int count_bishop()
{
      int i,j;
    int k = 0;
    for(i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] =='b'){
                k++;
            }
        }
    }
    return k;
}
int count_Bishop()
{
      int i,j;
    int k = 0;
    for(i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 'B'){
                k++;
            }
        }
    }
    return k;
}
int count_rook()
{
      int i,j;
    int k = 0;
    for( i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 'r'){
                k++;
            }
        }
    }
    return k;
}
int count_Rook()
{
      int i,j;
    int k = 0;
    for(i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] =='R'){
                k++;
            }
        }
    }
    return k;
}
int count_queen()
{
      int i,j;
    int k = 0;
    for( i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] =='q'){
                k++;
            }
        }
    }
    return k;
}
int count_Queen()
{
      int i,j;
    int k = 0;
    for(i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 'Q'){
                k++;
            }
        }
    }
    return k;
}
int double_pawn()
{
      int i,j;
    int k = 0;
    for( i = 0; i < 8; i++){
        for( j = 0; j < 8; j++){
            if(board[i][j] =='p'){
                if(board[i-1][j] =='p' || board[i+1][j] == 'p'){
                    k=k+1;
                }
            }
        }
    }
    return k;
}
int double_Pawn()
{
      int i,j;
    int k = 0;
    for(i = 0; i < 8; i++){
        for( j = 0; j < 8; j++){
            if(board[i][j] == 'P'){
                if(board[i-1][j] == 'P'|| board[i+1][j] == 'P'){
                    k=k+1;
                }
            }
        }
    }
    return k;
}
int isolated_pawn()
{
    int i,j;
    int k = 0;
    for( i= 0; i < 8; i++){
        for( j = 0; j < 8; j++){
            if(board[i][j] == 'p'){
                if(board[i][j-1] !='p')
                    if(board[i][j+1] != 'p')
                        if(board[i+1][j] != 'p')
                            if(board[i-1][j] != 'p')
                                if(board[i+1][j+1] != 'p')
                                    if(board[i-1][j-1] != 'p')
                                        if(board[i-1][j+1] != 'p')
                                            if(board[i+1][j-1] != 'p')
                                                k++;
              }
            }
        }
    return k;
}
int isolated_Pawn()
{
      int i,j;
    int k = 0;
    for(i = 0; i < 8; i++){
        for( j = 0; j < 8; j++){
            if(board[i][j] == 'P'){
                if(board[i][j-1] != 'P')
                    if(board[i][j+1] != 'P')
                        if(board[i+1][j] != 'P')
                            if(board[i-1][j] != 'P')
                                if(board[i+1][j+1] !='P')
                                    if(board[i-1][j-1] != 'P')
                                        if(board[i-1][j+1] != 'P')
                                            if(board[i+1][j-1] != 'P')
                                                k++;
              }
            }
        }
    return k;
}
int blocked_pawn()
{
    int k = 0;
      int i,j;
    for( i = 0; i < 8; i++){
        for( j = 0; j < 8; j++){
            if(board[i][j] == 'p')
                if(board[i-1][j] == 'P')
                    k++;
        }
    }
    return k;
}
int blocked_Pawn()
{
      int i,j;
    int k = 0;
    for( i = 0; i < 8; i++){
        for( j = 0; j < 8; j++){
            if(board[i][j] == 'P')
                if(board[i-1][j] == 'p')
                    k++;
        }
    }
    return k;
}
int white_mobility()
{
    int x,y;
    int pstart[2];
    int pend[2];
    int bstart[2];
    int bend[2];
    int qstart[2];
    int qend[2];
    int kstart[2];
    int kend[2];
    int rstart[2];
    int rend[2];
    int kingstart[2];
    int kingend[2];
    int i;
    int j;
    int contor = 0;
    int aux = 0;
     for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        pstart[0] = 0;
        pstart[1] = 1;
     for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            pend[0]=i;
            pend[1]=j;
             int aux=0;
    if(board[pstart[0]][pstart[1]]=='p')
    {
      if((pstart[1] == pend[1]) && ((pstart[0] - 1) == pend[0]))
        {
            if(board[pend[0]][pend[1]] ==' ')
            {
                aux=1;
            }
        }
    if((((pstart[0]+1) == pend[0]) || (pstart[0]-1) == pend[0]) &&  ((pstart[1] - 1) == pend[1]))
        if(board[pend[0]][pend[1]] == 'N' || board[pend[0]][pend[1]] == 'K' || board[pend[0]][pend[1]] == 'Q' || board[pend[0]][pend[1]] == 'R' || board[pend[0]][pend[1]] == 'B' || board[pend[0]][pend[1]] == 'P')
            {
                aux=1;
            }
            else
            {
                aux=0;
            }
    }


  if(aux==1)
  {
      contor++;
  }aux=0;
    }
    }
    }
     }
    //end pawn
 for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        kstart[0] = 0;
        kstart[1] = 1;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            kend[0]=i;
            kend[1]=j;
             int aux=0;
             if((board[kstart[0]][kstart[1]])=='n')
   {
        if((board[kend[0]][kend[1]])==' ')
        {
         if((abs(kstart[0]-kend[0]) == 1) && (abs(kstart[1]-kend[1]) == 2))
        {
            aux=1;
        }
        if((abs(kstart[0]-kend[0]) == 2) && (abs(kstart[1]-kend[1]) == 1))
        {
            aux=1;
        }
        }
        if(board[kend[0]][kend[1]]=='p' || board[kend[0]][kend[1]]=='r' || board[kend[0]][kend[1]]=='b' || board[kend[0]][kend[1]]=='q' || board[kend[0]][kend[1]]=='k' || board[kend[0]][kend[1]]=='n' )
        {
            aux=0;
        }
        if(board[kend[0]][kend[1]]=='P' || board[kend[0]][kend[1]]=='R' || board[kend[0]][kend[1]]=='B' || board[kend[0]][kend[1]]=='Q' || board[kend[0]][kend[1]]=='K' || board[kend[0]][kend[1]]=='N' )
            if((abs(kstart[0]-kend[0]) == 1) && (abs(kstart[1]-kend[1]) == 2))
                aux = 1;
            if((abs(kstart[0]-kend[0]) == 2) && (abs(kstart[1]-kend[1]) == 1))
                aux = 1;
   }
   if(aux==1)
   contor++;
    aux=0;
    }
    }
    }
 }
    //end knight
 for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        kingstart[0] = 0;
        kingstart[1] = 1;
     for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            kingend[0]=i;
            kingend[1]=j;
             int aux=0;
              if((board[kingstart[0]][kingstart[1]])=='k')
    {
        if((board[kingend[0]][kingend[1]])==' ')
        {
            if((abs(kingstart[0]-kingend[0])<=1) && (abs(kingstart[1]-kingend[1])<=1))
                aux=1;
        }
        if(board[kingend[0]][kingend[1]]=='P' || board[kingend[0]][kingend[1]]=='R' || board[kingend[0]][kingend[1]]=='B' || board[kingend[0]][kingend[1]]=='Q' || board[kingend[0]][kingend[1]]=='K' || board[kingend[0]][kingend[1]]=='N' )
        {
             if((abs(kingstart[0]-kingend[0])<=1) && (abs(kingstart[1]-kingend[1])<=1))
                aux=1;
        }
    }
      if(aux==1)
{
contor++;
    aux=0;
}
        }
    }
    }
 }
    // end king
 for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        bstart[0] = 0;
        bstart[1] = 1;
        int n;
     for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            bend[0]=i;
            bend[1]=j;
            int aux=0;
            if(board[bstart[0]][bstart[1]] == 'b'){
            if(abs(bstart[0]-bend[0]) == abs(bstart[1]-bend[1])){
                if(board[bend[0]][bend[1]]=='n' || board[bend[0]][bend[1]]=='b' || board[bend[0]][bend[1]]=='q' || board[bend[0]][bend[1]]=='k' || board[bend[0]][bend[1]]=='p' || board[bend[0]][bend[1]]=='r'){
                    aux = 0;
                }
                if(board[bend[0]][bend[1]]== ' '){
                    for(n = 1; n <= abs(bstart[0]-bend[0]); n++){
                        if((bstart[0] < bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]+n][bstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] < bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]+n][bstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]-n][bstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]-n][bstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[bend[0]][bend[1]]=='N' || board[bend[0]][bend[1]]=='B' || board[bend[0]][bend[1]]=='Q' || board[bend[0]][bend[1]]=='K' || board[bend[0]][bend[1]]=='P' || board[bend[0]][bend[1]]=='R'){
                    if(abs(bstart[0]-bend[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(bstart[0]-bend[0]); n++){
                        if((bstart[0] < bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]+n][bstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] < bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]+n][bstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]-n][bstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]-n][bstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                contor++;
                aux = 0;
                }
            }
    }
 }
 //end bishop

  for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        rstart[0] = 0;
        rstart[1] = 1;
         for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            rend[0]=i;
            rend[1]=j;
            int aux=0;
            int n;
            if((board[rstart[0]][rstart[1]])=='r')
        {
            if(rstart[1]-rend[1]==0 )
            {
                if(rstart[0]-rend[0]<0)
                {
                if(board[rend[0]][rend[1]] == ' ')
                for(n=1;n<=abs(rstart[0]-rend[0]);n++)
               {
                   if(board[rend[0]][rend[1]] == ' '){
                   if(board[rstart[0]+n][rend[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
            {
                for(n=1;n<=abs(rstart[0]-rend[0]);n++)
                {
                    if(board[rstart[0]+n][rend[1]]==' ')
                    {
                        aux=1;
                    }

                if(board[rstart[0]+n][rend[1]] == 'P' || board[rstart[0]+n][rend[1]] == 'N' || board[rstart[0]+n][rend[1]] == 'B' || board[rstart[0]+n][rend[1]] == 'R' || board[rstart[0]+n][rend[1]] == 'Q' || board[rstart[0]+n][rend[1]] == 'K')
                    {
                        if(n == abs(rstart[0]-rend[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(rstart[0]-rend[0]>0)
                {
                      for(n=1;n<=abs(rstart[0]-rend[0]);n++)
               {
                if(board[rend[0]][rend[1]] == ' '){
                    if(board[rstart[0]-n][rend[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
            {
                for(n=1;n<=abs(rstart[0]-rend[0]);n++)
                {
                    if(board[rstart[0]-n][rend[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(rstart[0]-rend[0]==0)
            {
                if(rstart[1]-rend[1]<0)
                {
                    if(board[rend[0]][rend[1]]==' '){
                for(n=1;n<=abs(rstart[1]-rend[1]);n++)
                {
                    if(board[rstart[0]][rstart[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )
                {
                    aux=0;
                }
               if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
                {
                    for(n=1;n<abs(rstart[1]-rend[1]);n++)
                  {
                    if(board[rstart[0]][rend[0]+n]==' ')
                        aux=1;
                  }
                }
                }
                 if(rstart[1]-rend[1]>0)
                {
                if(board[rend[0]][rend[1]] == ' '){
                for(n=1;n<=abs(rstart[1]-rend[1]);n++)
                {
                    if(board[rstart[0]][rstart[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
                {
                    for(n=1;n<=abs(rstart[1]-rend[1]);n++)
                  {
                    if(board[rstart[0]][rend[0]-n]==' ')
                        aux=1;
                    if(board[rstart[0]][rend[0]-n]=='P' || board[rstart[0]][rend[0]-n]=='N' || board[rstart[0]][rend[0]-n]=='B' || board[rstart[0]][rend[0]-n]=='R' || board[rstart[0]][rend[0]-n]=='Q' || board[rstart[0]][rend[0]-n]=='K'){
                        if(n == abs(rstart[1]-rend[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
     contor++;
    aux=0;
        }
    }
    }
  }
  //end rook

    for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        qstart[0] = 0;
        qstart[1] = 1;
         for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            qend[0]=i;
            qend[1]=j;
            int aux=0;
            int n;
            if(board[qstart[0]][qstart[1]] == 'q'){
            if(abs(qstart[0]-qend[0]) == abs(qstart[1]-qend[1])){
                if(board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='b' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='r'){
                    aux = 0;
                }
                if(board[qend[0]][qend[1]]== ' '){
                    for(n = 1; n <= abs(qstart[0]-qend[0]); n++){
                        if((qstart[0] < qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]+n][qstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] < qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]+n][qstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]-n][qstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]-n][qstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='B' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='R'){
                    if(abs(qstart[0]-qend[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(qstart[0]-qend[0]); n++){
                        if((qstart[0] < qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]+n][qstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] < qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]+n][qstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]-n][qstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]-n][qstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    printf("%d%d ", i, j);
                aux = 0;
                }
    }
    for(i=0;i<8;i++)            //rook
    {
        for(j=0;j<8;j++)
        {
            qend[0]=i;
            qend[1]=j;
            int n;
            int aux=0;
            if((board[qstart[0]][qstart[1]])=='q')
        {
            if(qstart[1]-qend[1]==0 )
            {
                if(qstart[0]-qend[0]<0)
                {
                if(board[qend[0]][qend[1]] == ' ')
                for(n=1;n<=abs(qstart[0]-qend[0]);n++)
               {
                   if(board[qend[0]][qend[1]] == ' '){
                   if(board[qstart[0]+n][qend[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
            {
                for(n=1;n<=abs(qstart[0]-qend[0]);n++)
                {
                    if(board[qstart[0]+n][qend[1]]==' ')
                    {
                        aux=1;
                    }

                if(board[qstart[0]+n][qend[1]] == 'P' || board[qstart[0]+n][qend[1]] == 'N' || board[qstart[0]+n][qend[1]] == 'B' || board[qstart[0]+n][qend[1]] == 'R' || board[qstart[0]+n][qend[1]] == 'Q' || board[qstart[0]+n][qend[1]] == 'K')
                    {
                        if(n == abs(qstart[0]-qend[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(qstart[0]-qend[0]>0)
                {
                      for(n=1;n<=abs(qstart[0]-qend[0]);n++)
               {
                if(board[qend[0]][qend[1]] == ' '){
                    if(board[qstart[0]-n][qend[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )
               {
                   aux=0;
               }
            if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
            {
                for(n=1;n<abs(qstart[0]-qend[0]);n++)
                {
                    if(board[qstart[0]-n][qend[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(qstart[0]-qend[0]==0)
            {
                if(qstart[1]-qend[1]<0)
                {
                    if(board[qend[0]][qend[1]]==' '){
                for(n=1;n<=abs(qstart[1]-qend[1]);n++)
                {
                    if(board[qstart[0]][qstart[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )
                {
                    aux=0;
                }
               if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
                {
                    for(n=1;n<abs(qstart[1]-qend[1]);n++)
                  {
                    if(board[qstart[0]][qend[0]+n]==' ')
                        aux=1;
                  }
                }
                }
                 if(qstart[1]-qend[1]>0)
                {
                if(board[qend[0]][qend[1]] == ' '){
                for(n=1;n<=abs(qstart[1]-qend[1]);n++)
                {
                    if(board[qstart[0]][qstart[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )

                {
                    aux=0;
                }
               if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
                {
                    for(n=1;n<=abs(qstart[1]-qend[1]);n++)
                  {
                    if(board[qstart[0]][qend[0]-n]==' ')
                        aux=1;
                    if(board[qstart[0]][qend[0]-n]=='P' || board[qstart[0]][qend[0]-n]=='N' || board[qstart[0]][qend[0]-n]=='B' || board[qstart[0]][qend[0]-n]=='R' || board[qstart[0]][qend[0]-n]=='Q' || board[qstart[0]][qend[0]-n]=='K'){
                        if(n == abs(qstart[1]-qend[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        contor++;
    aux=0;
        }
    }

    }
    }
  //end queen
}
int black_mobility()
{
    int pstart[2];
    int pend[2];
    int bstart[2];
    int bend[2];
    int qstart[2];
    int qend[2];
    int kstart[2];
    int kend[2];
    int rstart[2];
    int rend[2];
    int kingstart[2];
    int kingend[2];
    int i;
    int j;
    int contor = 0;
    int aux = 0;
    int x,y;
     for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        pstart[0] = 0;
        pstart[1] = 1;
   for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            pend[0]=i;
            pend[1]=j;
             int aux=0;
               if(board[pstart[0]][pstart[1]]=='P')
        {
    if((pstart[1] == pend[1]) && ((pstart[0] + 1) == pend[0]))
        {
            if(board[pend[0]][pend[1]] ==' ')
            {
                aux=1;
            }
        }
    if((((pstart[0]+1) == pend[0]) || (pstart[0]-1) == pend[0]) &&  ((pstart[1] + 1) == pend[1]))
        if(board[pend[0]][pend[1]] == 'p' || board[pend[0]][pend[1]] == 'b' || board[pend[0]][pend[1]] == 'q' || board[pend[0]][pend[1]] == 'k' || board[pend[0]][pend[1]] == 'n' || board[pend[0]][pend[1]] == 'r')
            {
                aux=1;
            }
else
{
    aux=0;
}

}
if(aux==1)
{
contor++;
    aux=0;
}
        }
    }
    }
     }
    //end Pawn
     for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        kstart[0] = 0;
        kstart[1] = 1;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            kend[0]=i;
            kend[1]=j;
             int aux=0;
             if((board[kstart[0]][kstart[1]])=='N')
   {
        if((board[kend[0]][kend[1]])==' ')
        {
         if((abs(kstart[0]-kend[0]) == 1) && (abs(kstart[1]-kend[1]) == 2))
        {
            aux=1;
        }
        if((abs(kstart[0]-kend[0]) == 2) && (abs(kstart[1]-kend[1]) == 1))
        {
            aux=1;
        }
        }
        if(board[kend[0]][kend[1]]=='P' || board[kend[0]][kend[1]]=='R' || board[kend[0]][kend[1]]=='B' || board[kend[0]][kend[1]]=='Q' || board[kend[0]][kend[1]]=='K' || board[kend[0]][kend[1]]=='N')
        {
            aux=0;
        }
        if(board[kend[0]][kend[1]]=='p' || board[kend[0]][kend[1]]=='r' || board[kend[0]][kend[1]]=='b' || board[kend[0]][kend[1]]=='q' || board[kend[0]][kend[1]]=='k' || board[kend[0]][kend[1]]=='n' )
            if((abs(kstart[0]-kend[0]) == 1) && (abs(kstart[1]-kend[1]) == 2))
                aux = 1;
            if((abs(kstart[0]-kend[0]) == 2) && (abs(kstart[1]-kend[1]) == 1))
                aux = 1;
   }
   if(aux==1)
    contor++;
    aux=0;
    }
    }
    }
     }
   //end Knight
    for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        kingstart[0] = 0;
        kingstart[1] = 1;
    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            kingend[0]=i;
            kingend[1]=j;
             int aux=0;
              if((board[kingstart[0]][kingstart[1]])=='K')
    {
        if((board[kingend[0]][kingend[1]])==' ')
        {
            if((abs(kingstart[0]-kingend[0])<=1) && (abs(kingstart[1]-kingend[1])<=1))
                aux=1;
        }
            if(board[kingend[0]][kingend[1]]=='p' || board[kingend[0]][kingend[1]]=='r' || board[kingend[0]][kingend[1]]=='b' || board[kingend[0]][kingend[1]]=='q' || board[kingend[0]][kingend[1]]=='k' || board[kingend[0]][kingend[1]]=='n' )

        {
             if((abs(kingstart[0]-kingend[0])<=1) && (abs(kingstart[1]-kingend[1])<=1))
                aux=1;
        }
    }
      if(aux==1)
{
    contor++;
aux=0;
}
        }
    }
    }
    }
    // end King
     for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        bstart[0] = 0;
        bstart[1] = 1;
        for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            bend[0]=i;
            bend[1]=j;
            int aux=0;
            int n;
            if(board[bstart[0]][bstart[1]] == 'B'){
            if(abs(bstart[0]-bend[0]) == abs(bstart[1]-bend[1])){
                if(board[bend[0]][bend[1]]=='N' || board[bend[0]][bend[1]]=='B' || board[bend[0]][bend[1]]=='Q' || board[bend[0]][bend[1]]=='K' || board[bend[0]][bend[1]]=='P' || board[bend[0]][bend[1]]=='R'){
                    aux = 0;
                }
                if(board[bend[0]][bend[1]]== ' '){
                    for(n = 1; n <= abs(bstart[0]-bend[0]); n++){
                        if((bstart[0] < bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]+n][bstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] < bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]+n][bstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]-n][bstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]-n][bstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[bend[0]][bend[1]]=='n' || board[bend[0]][bend[1]]=='b' || board[bend[0]][bend[1]]=='q' || board[bend[0]][bend[1]]=='k' || board[bend[0]][bend[1]]=='p' || board[bend[0]][bend[1]]=='r'){
                    if(abs(bstart[0]-bend[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(bstart[0]-bend[0]); n++){
                        if((bstart[0] < bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]+n][bstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] < bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]+n][bstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] < bend[1])){
                            if(board[bstart[0]-n][bstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((bstart[0] > bend[0]) && (bstart[1] > bend[1])){
                            if(board[bstart[0]-n][bstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    contor++;
                aux = 0;
                }
            }
    }
     }
     //end Bishop

     for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        rstart[0] = 0;
        rstart[1] = 1;
         for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            rend[0]=i;
            rend[1]=j;
            int aux=0;
            int n;
            if((board[rstart[0]][rstart[1]])=='R')
        {
            if(rstart[1]-rend[1]==0 )
            {
                if(rstart[0]-rend[0]<0)
                {
                if(board[rend[0]][rend[1]] == ' ')
                for(n=1;n<=abs(rstart[0]-rend[0]);n++)
               {
                   if(board[rend[0]][rend[1]] == ' '){
                   if(board[rstart[0]+n][rend[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='b'  )
            {
                for(n=1;n<=abs(rstart[0]-rend[0]);n++)
                {
                    if(board[rstart[0]+n][rend[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
                for(n=1;n<=abs(rstart[0]-rend[0]);n++){
                if(board[rstart[0]+n][rend[1]] == 'p' || board[rstart[0]+n][rend[1]] == 'n' || board[rstart[0]+n][rend[1]] == 'b' || board[rstart[0]+n][rend[1]] == 'r' || board[rstart[0]+n][rend[1]] == 'q' || board[rstart[0]+n][rend[1]] == 'k')
                {
                        if(n == abs(rstart[0]-rend[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(rstart[0]-rend[0]>0)
                {
                      for(n=1;n<=abs(rstart[0]-rend[0]);n++)
               {
                if(board[rend[0]][rend[1]] == ' '){
                    if(board[rstart[0]-n][rend[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )
            {
                for(n=1;n<=abs(rstart[0]-rend[0]);n++)
                {
                    if(board[rstart[0]-n][rend[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(rstart[0]-rend[0]==0)
            {
                if(rstart[1]-rend[1]<0)
                {
                    if(board[rend[0]][rend[1]]==' '){
                for(n=1;n<=abs(rstart[1]-rend[1]);n++)
                {
                    if(board[rstart[0]][rstart[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )
                {
                    aux=0;
                }
               if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )
                {
                    for(n=1;n<abs(rstart[1]-rend[1]);n++)
                  {
                    if(board[rstart[0]][rstart[1]+n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                  }
                }
                }
                 if(rstart[1]-rend[1]>0)
                {
                if(board[rend[0]][rend[1]] == ' '){
                for(n=1;n<=abs(rstart[1]-rend[1]);n++)
                {
                    if(board[rstart[0]][rstart[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[rend[0]][rend[1]]=='P' || board[rend[0]][rend[1]]=='N' || board[rend[0]][rend[1]]=='K' || board[rend[0]][rend[1]]=='Q' || board[rend[0]][rend[1]]=='R' || board[rend[0]][rend[1]]=='B'  )

                {
                    aux=0;
                }
               if(board[rend[0]][rend[1]]=='p' || board[rend[0]][rend[1]]=='n' || board[rend[0]][rend[1]]=='k' || board[rend[0]][rend[1]]=='q' || board[rend[0]][rend[1]]=='r' || board[rend[0]][rend[1]]=='b'  )
                {
                    for(n=1;n<=abs(rstart[1]-rend[1]);n++)
                  {
                    if(board[rstart[0]][rend[0]-n]==' ')
                        aux=1;
                    if(board[rstart[0]][rend[0]-n]=='p' || board[rstart[0]][rend[0]-n]=='n' || board[rstart[0]][rend[0]-n]=='b' || board[rstart[0]][rend[0]-n]=='r' || board[rstart[0]][rend[0]-n]=='q' || board[rstart[0]][rend[0]-n]=='k'){
                        if(n == abs(rstart[1]-rend[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        contor++;
    aux=0;
        }
    }
    }
     }
//end Rook

     for( x = 0; x<8; x++){
    for( y = 0; y<8; y++){
        qstart[0] = 0;
        qstart[1] = 1;
         for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            qend[0]=i;
            qend[1]=j;
            int aux=0;
            int n;
            if(board[qstart[0]][qstart[1]] == 'Q'){
            if(abs(qstart[0]-qend[0]) == abs(qstart[1]-qend[1])){
                if(board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='B' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='R'){
                    aux = 0;
                }
                if(board[qend[0]][qend[1]]== ' '){
                    for(n = 1; n <= abs(qstart[0]-qend[0]); n++){
                        if((qstart[0] < qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]+n][qstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] < qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]+n][qstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]-n][qstart[1]+n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]-n][qstart[1]-n] == ' '){
                                aux = 1;
                            }
                            else
                            {
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
                if(board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='b' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='r'){
                    if(abs(qstart[0]-qend[0])==1){
                        aux = 1;
                    }
                    for(n = 1; n < abs(qstart[0]-qend[0]); n++){
                        if((qstart[0] < qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]+n][qstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] < qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]+n][qstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] < qend[1])){
                            if(board[qstart[0]-n][qstart[1]+n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                        if((qstart[0] > qend[0]) && (qstart[1] > qend[1])){
                            if(board[qstart[0]-n][qstart[1]-n] == ' ')
                                aux = 1;
                            else{
                                aux = 0;
                                break;
                            }
                        }
                    }
                }
            }
            }
                if(aux == 1)
                    printf("%d%d ", i, j);
                aux = 0;
                }
            }
    for(i=0;i<8;i++)            //rook
    {
        for(j=0;j<8;j++)
        {
            qend[0]=i;
            qend[1]=j;
            int aux=0;
            int n;
            if((board[qstart[0]][qstart[1]])=='Q')
        {
            if(qstart[1]-qend[1]==0 )
            {
                if(qstart[0]-qend[0]<0)
                {
                if(board[qend[0]][qend[1]] == ' ')
                for(n=1;n<=abs(qstart[0]-qend[0]);n++)
               {
                   if(board[qend[0]][qend[1]] == ' '){
                   if(board[qstart[0]+n][qend[1]]==' ')
                    aux=1;
                    else
                    {
                        aux=0;
                        break;
                    }
                   }
               }
               if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='b'  )
            {
                for(n=1;n<=abs(qstart[0]-qend[0]);n++)
                {
                    if(board[qstart[0]+n][qend[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
                for(n=1;n<=abs(qstart[0]-qend[0]);n++){
                if(board[qstart[0]+n][qend[1]] == 'p' || board[qstart[0]+n][qend[1]] == 'n' || board[qstart[0]+n][qend[1]] == 'b' || board[qstart[0]+n][qend[1]] == 'r' || board[qstart[0]+n][qend[1]] == 'q' || board[qstart[0]+n][qend[1]] == 'k')
                {
                        if(n == abs(qstart[0]-qend[0]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    }
            }
            }
                if(qstart[0]-qend[0]>0)
                {
                      for(n=1;n<=abs(qstart[0]-qend[0]);n++)
               {
                if(board[qend[0]][qend[1]] == ' '){
                    if(board[qstart[0]-n][qend[1]]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                    else{
                        aux = 0;
                        break;
                    }
               }
               if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
               {
                   aux=0;
               }
            if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )
            {
                for(n=1;n<=abs(qstart[0]-qend[0]);n++)
                {
                    if(board[qstart[0]-n][qend[1]]==' ')
                    {
                        aux=1;
                    }
                    else{
                        aux = 0;
                        break;
                    }
                }
            }
            }
            }
            else if(qstart[0]-qend[0]==0)
            {
                if(qstart[1]-qend[1]<0)
                {
                    if(board[qend[0]][qend[1]]==' '){
                for(n=1;n<=abs(qstart[1]-qend[1]);n++)
                {
                    if(board[qstart[0]][qstart[1]+n]==' ')
                        aux=1;
                    else{
                        aux = 0;
                        break;
                    }
                }
                    }
            if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )
                {
                    aux=0;
                }
               if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )
                {
                    for(n=1;n<abs(qstart[1]-qend[1]);n++)
                  {
                    if(board[qstart[0]][qstart[1]+n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                  }
                }
                }
                 if(qstart[1]-qend[1]>0)
                {
                if(board[qend[0]][qend[1]] == ' '){
                for(n=1;n<=abs(qstart[1]-qend[1]);n++)
                {
                    if(board[qstart[0]][qstart[1]-n]==' ')
                        aux=1;
                        else{
                            aux = 0;
                            break;
                        }
                }
                }
            if(board[qend[0]][qend[1]]=='P' || board[qend[0]][qend[1]]=='N' || board[qend[0]][qend[1]]=='K' || board[qend[0]][qend[1]]=='Q' || board[qend[0]][qend[1]]=='R' || board[qend[0]][qend[1]]=='B'  )

                {
                    aux=0;
                }
               if(board[qend[0]][qend[1]]=='p' || board[qend[0]][qend[1]]=='n' || board[qend[0]][qend[1]]=='k' || board[qend[0]][qend[1]]=='q' || board[qend[0]][qend[1]]=='r' || board[qend[0]][qend[1]]=='b'  )
                {
                    for(n=1;n<=abs(qstart[1]-qend[1]);n++)
                  {
                    if(board[qstart[0]][qend[0]-n]==' ')
                        aux=1;
                    if(board[qstart[0]][qend[0]-n]=='p' || board[qstart[0]][qend[0]-n]=='n' || board[qstart[0]][qend[0]-n]=='b' || board[qstart[0]][qend[0]-n]=='r' || board[qstart[0]][qend[0]-n]=='q' || board[qstart[0]][qend[0]-n]=='k'){
                        if(n == abs(qstart[1]-qend[1]))
                            aux = 1;
                        else{
                            aux = 0;
                            break;
                        }
                    }
                  }
                }
                }
            }
        }
    if(aux==1)
        contor++;
    aux=0;
        }
    }
    }
     }
    //end Queen
}

float move_value()
{
    int wQ = count_queen();
    int bQ = count_Queen();
    int wKnight = count_knight();
    int bKnight = count_Knight();
    int wB = count_bishop();
    int bB = count_Bishop();
    int wR = count_rook();
    int bR = count_Rook();
    int wP = count_pawn();
    int bP = count_Pawn();
    int wDP = double_pawn();
    int bDP = double_Pawn();
    int wIP = isolated_pawn();
    int bIP = isolated_Pawn();
    int wBP = blocked_pawn();
    int bBP = blocked_Pawn();
    int wM = white_mobility();
    int bM = black_mobility();
    float value;
    value = 9*(wQ - bQ) + 5*(wR - bR) + 3*(wKnight - bKnight + wB - bB) + 1*(wP - bP) - 0.5*(wDP - bDP + wIP - bIP + wBP - bBP) + 0.1*(wM - bM);
}

void comp_move()
{
    float value = 0;
    float best = 100;
    char p;
    char b;
    int b0[2];
    int b1[2];
    int v0[2];
    int v1[2];
    char aux;
    int n,m,i,j;
    for( m = 0; m<8; m++){
        for( n = 0; n<8; n++){
            v0[0] = m;
            v0[1] = n;
        if(board[m][n]=='P' || board[m][n]=='N' || board[m][n]=='K' || board[m][n]=='Q' || board[m][n]=='R' || board[m][n]=='B'  )
               {
                p = board[m][n];
                for( i = 0; i<8; i++){
                    for(j = 0; j<8; j++){
                        v1[0]= i;
                        v1[1] = j;
                        if(check_move(p, v0, v1) == 1){
                            aux = board[i][j];
                            board[m][n] = ' ';
                            board[i][j] = p;
                            value = move_value();
                            board[m][n] = p;
                            board[i][j] = aux;
                            if(value < best){
                                best = value;
                                b0[0] = m;
                                b0[1] = n;
                                b1[0] = i;
                                b1[1] = j;
                                b = p;
                            }
                        }
                    }
                }
            }
        }
    }
    board[b0[0]][b0[1]] = ' ';
    board[b1[0]][b1[1]] = b;
    print_board();
}
void play_PvP(int m)
{
    char p;
    int p0[2];
    int p1[2];
    print_board();
    for(m ; m < 5000; m++){
        if(m % 2 == 1){
            bool mutare_corecta = true;
            do
            {
                printf("White's turn \n");
                printf("If you want to resign, press s \n");
                printf("If u want to save the game,press g\n");
                printf("If you want to continue, choose a piece to move: \n");
                getchar();
                scanf("%c",&p);
                    if(p=='p' || p=='k' || p=='q' || p=='b' || p=='r' || p=='n')
                       {
                        printf("Choose your piece position (ROW COLUMN): ");
                        char cd = getchar();
                        scanf("%d",&p0[0]);
                        cd = getchar();
                        scanf("%d", &p0[1]);
                        printf("Choose where you want to move:");
                        scanf("%d", &p1[0]);
                        cd = getchar();
                        scanf("%d", &p1[1]);

                        mutare_corecta = check_move(p, p0, p1);
                        if (!mutare_corecta)
                        {
                            m--;
                            printf("Not a valid move!\n \n");
                        }

                    }
                    else if(p=='s')
                    {
                        printf("Black won");
                        break;
                    }
                    else if(p=='g')
                    {
                        save_game(0);
                        break;
                    }
            }
            while (!mutare_corecta);
        board[p0[0]][p0[1]] = ' ';
        board[p1[0]][p1[1]] = p;
        print_board();
        }
    if(m % 2 == 0){
            bool mutare_corecta = true;
            do
            {
                printf("Black's turn \n");
                printf("If you want to resign, press s \n");
                printf("If u want to save the game,press g\n");
                printf("If you want to continue, choose a piece to move: \n");
                getchar();
                scanf("%c",&p);
                    if(p=='P' || p=='K' || p=='Q' || p=='B' || p=='R' || p=='N')
                       {
                        printf("Choose your piece position (ROW COLUMN): ");
                        char cd = getchar();
                        scanf("%d",&p0[0]);
                        cd = getchar();
                        scanf("%d", &p0[1]);
                        printf("Choose where you want to move:");
                        scanf("%d", &p1[0]);
                        cd = getchar();
                        scanf("%d", &p1[1]);

                        mutare_corecta = check_move(p, p0, p1);
                        if (!mutare_corecta)
                        {
                            m--;
                            printf("Not a valid move!\n \n");
                        }

                    }
                    else if(p=='s')
                    {
                        printf("White won");
                        break;
                    }
                    else if(p=='g')
                    {
                        save_game(0);
                        break;
                    }
            }
            while (!mutare_corecta);
        board[p0[0]][p0[1]] = ' ';
        board[p1[0]][p1[1]] = p;
        print_board();
        }
    }
}
void play_PvC()
{
    long m = 1;
    char p;
    int p0[2];
    int p1[2];
    print_board();
    for(m = 1; m < 5000; m++){
    if(m % 2 == 1){
            bool mutare_corecta = true;
            do
            {  printf("White's turn \n");
                printf("If you want to resign, press s \n");
                printf("If u want to save the game,press g\n");
                printf("If you want to continue, choose a piece to move: \n");
                getchar();
                scanf("%c",&p);
                    if(p=='p' || p=='k' || p=='q' || p=='b' || p=='r' || p=='n')
                       {
                        printf("Choose your piece position (ROW COLUMN): ");
                        char cd = getchar();
                        scanf("%d",&p0[0]);
                        cd = getchar();
                        scanf("%d", &p0[1]);
                        printf("Choose where you want to move:");
                        scanf("%d", &p1[0]);
                        cd = getchar();
                        scanf("%d", &p1[1]);

                        mutare_corecta = check_move(p, p0, p1);
                        if (!mutare_corecta)
                        {
                            m--;
                            printf("Not a valid move!\n \n");
                        }

                    }
                    else if(p=='s')
                    {
                        printf("Black won");
                        break;
                    }
                    else if(p=='g')
                    {
                        save_game(0);
                        break;
                    }
            }
            while (!mutare_corecta);
        board[p0[0]][p0[1]] = '  ' ;
        board[p1[0]][p1[1]] = p;
        print_board();
        m++;
        }
    if(m % 2 == 0){
        comp_move();
    }
    }
}
int wchecks()
{
    int aux;
    int p;
    int i,j;
    int p0[2];
    int k0[2];
    for(i = 0; i<8; i++){
        for(j = 0; j<8; j++){
            if(board[i][j] == -10){
                k0[0] = i;
                k0[1] = j;
            }
        }
    }
    int r,c;
    for( r = 0; r<8; r++){
        for( c = 0; c<8; c++){
            if(board[r][c] > 0){
                p = board[r][c];
                p0[0] = r;
                p0[1] = c;
            }
            if(check_move(p, p0, k0) == 1){
                aux = 1;
                break;
            }
            else
                aux = 0;
        }
    }
    if(aux == 1)
        return 1;
    return 0;
}
int bchecks()
{
    int aux;
    int p;
    int i,j,r,c;
    int p0[2];
    int k0[2];
    for( i = 0; i<8; i++){
        for( j = 0; j<8; j++){
            if(board[i][j] == 10){
                k0[0] = i;
                k0[1] = j;
            }
        }
    }
    for(r = 0; r<8; r++){
        for( c = 0; c<8; c++){
            if(board[r][c] < 0){
                p = board[r][c];
                p0[0] = r;
                p0[1] = c;
            }
            if(check_move(p, p0, k0) == 1){
                aux = 1;
                break;
            }
            else
                aux = 0;
        }
    }
    if(aux == 1)
        return 1;
    return 0;
}
void save_game(int t)
{
    FILE *f;
    int i,j;
    f = fopen("ChessGame.txt", "w");
    if(f == NULL){
        printf("Error opening the file");
    }
    fprintf(f, "%c", t);
    for( i = 0; i<8; i++){
        for(j = 0; j<8; j++){
            fprintf(f, "%c", board[i][j]);
        }
    }

    fclose(f);
}
void load_game()
{
    int t;
    FILE *f;
    int i,j;
    f = fopen("ChessGame.txt", "r");
    if(f == NULL){
        printf("Error opening the file");
    }
    fscanf(f, "%c", &t);
    getchar();
    for( i = 0; i<8; i++){
        for(j = 0; j<8; j++){
            fscanf(f, "%c ", &board[i][j]);
            //getchar();
        }
    }
    if(t == 0){
        play_PvP(1);
    }
    if(t == 1){
        play_PvP(2);
    }
    if(t == 2){
        play_PvC();
    }
}
int main()
{
    int t;
    printf("Welcome! \nChoose how you want to play \nPress 1 for PvP \nPress 2 for PvC:\nPress 3 if u want to load the previous game\n");
    scanf("%d", &t);
    if(t == 1)
        play_PvP(1);
    if(t == 2)
        play_PvC();
        if(t==3)
            load_game();
    /*char piece;
    print_board();
    scanf("%c", &piece);
    vpiece(piece);
    move_value();
    return 0;*/
}
