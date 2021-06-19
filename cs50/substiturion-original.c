#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet

string compute_cypher(string cypher, string text);

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please run de command with a cypher 26 long\n");
        return 1;
    }
    else if (strlen(argv[1]) != 26)
    {
        printf("Please run de command with a cypher 26 long\n");
        return 1;
    }
    string plaintext = get_string("Type plain text: ");

    string cypher = compute_cypher(argv[1], plaintext);

    printf("Cypher: %s", cypher);

}

string compute_cypher(string cypher, string text)
{
    char c;

    for (int i = 0, l = strlen(text); i < l; i++ )
    {
        c = toupper(text[i]);

        if ( c - 65 < 0  || c - 65 > 25);
        else
        {
            text[i] = cypher[c - 65];
        }
    }
    return text;
}
