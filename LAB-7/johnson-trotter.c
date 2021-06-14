#include <stdio.h>
#include <conio.h>

int NN, i, count=0;
int p[100], pi[100];
int dir[100];

void PrintPerm()
{
   int i;

   count = count + 1;
   printf( "\n");

   for (i=1; i <= NN; ++i)
      printf( "%d", p[i] );
}

void Move( int x, int d )
{
   int z;
   z = p[pi[x]+d];
   p[pi[x]] = z;
   p[pi[x]+d] = x;
   pi[z] = pi[x];
   pi[x] = pi[x]+d;
}

void Perm ( int n )
{
   int i;
   if (n > NN)
      PrintPerm();
   else
   {
      Perm( n+1 );
      for (i=1; i<=n-1; ++i)
      {
         Move( n, dir[n] );
         Perm( n+1 );
      }
      dir[n] = -dir[n];
   }
}

int main()
{
   printf( "Enter Value of n : " );
   scanf( "%d", &NN );
   printf( "\n" );
   for (i=1; i<=NN; ++i)
   {
      dir[i] = -1; p[i] = i;
      pi[i] = i;
   }
   Perm ( 1 );
   printf( "\n" );
   return 0;
}
