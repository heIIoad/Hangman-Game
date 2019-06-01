#include <stdio.h>
#include <string.h>

int main(void)
{
    char underlines[20];
    char word[20];
    char GuessedLetter;
    int l;                  //length
    int i,k;                //variables for for loop
    int j;                  //comparison of strings
    int right;              //correct answers
    int lives=5;

    printf("Enter word to guess\n");
    scanf("%s",word);
    printf("\n\n\n\n\n\n\n\n\n\n\");

    l=strlen(word);

    for (i=0;word[i] != '\0';i++)       //filling string with underlines
    {
        underlines[i]='_';
    }
    underlines[i] = '\0';

    while (j!=0 && lives>0)
    {

        right=0;
        i = 0;

        printf("\n\nnumber of your lives=%d\n",lives);

        while(underlines[i] != '\0')
        {
            printf("%c", underlines[i]);
            i++;
        }


        printf("\ntype in a guessed letter: ");
        scanf(" %c", &GuessedLetter );
        printf("\nletter guessed:%c\n", GuessedLetter);

        for (k=0;k<l;k++)                   //checking if guessed letter is in the word
        {
             if (GuessedLetter==word[k])
            {
                underlines[k]=GuessedLetter;
                right++;
            }

        }

        if (right>0)
        {
            printf("You were right %c is a letter of the word\n",GuessedLetter);

        }
        else
        {
            printf("You were wrong %c is not a letter of the word\n",GuessedLetter);
            lives--;
        }


        j=strcmp(word, underlines);

    }

    if (j==0)
    {
        printf("%s\n",word);
        printf("\n\nCongratulation you won\n");
    }
    if (lives==0)
    {
        printf("\n\nYou lost all of your lives\n");
        printf("Word to guess was: %s\n",word);
    }

    return 0;

}
