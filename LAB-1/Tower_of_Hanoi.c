#include <stdio.h>
void tower(int ,char,char,char);
int main()
{
	int num;
    printf("Enter the number of discs:\n");
    scanf("%d",&num);
    printf("The sequence of moves involved in the tower of Hanoi are:\n");
    tower(num,'A','C','B');
	return 0;
}
void tower(int num, char source, char destination, char auxillary)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", source, destination);
        return;
    }
    tower(num - 1, source, auxillary, destination);
    printf("\n Move disk %d from peg %c to peg %c", num, source, destination);
    tower(num - 1, auxillary, destination, source);
}
