#include <cs50.h>
#include <stdio.h>

int currenttile = 0;

void empty(int n)
{
    if (n <= 0) return;
    for(int i =0; i < n; i++)
    {
        printf(" ");
    }

}

int main(void)
{
    int tiles = get_int("Number of tiles u wwant");

    for (int n = 0; n < tiles; n++)
    {
        currenttile++;
        for (int i = 0; i < 2; i++)
        {
            if (i == 0) empty(tiles - currenttile);
            
            for (int j = 0; j < currenttile; j++)
            {
                printf("#");
            }

            empty(2);

        }
        printf("\n");
    }
}