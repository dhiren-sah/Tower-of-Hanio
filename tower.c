#include<stdio.h>
#include<math.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination)
{
    if(n == 1) {
        printf("Move disk 1 from %c to %c\n", source, destination);
        return;
    }

    // Move n-1 disks from sources to auxillary
    towerOfHanoi(n - 1, source, destination, auxiliary);
    
    //move the nth disk from source to destination
    printf("Move disk %d from %c to %c\n", n, source, destination);

    //Move n - 1 disks from auxiliary to destination
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main()
{
    int n;
    printf("Enter number of disk: ");
    scanf("%d", &n);

    // formula for total moves
    long long totalMoves = pow(2, n) - 1;
    printf("\n Total moves required: %lld\n", totalMoves);

    printf("\nTower of Hanoi solution:\n");
    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}