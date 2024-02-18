#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int count = 0, i = 0;

    scanf("%s", word);

    while (i < strlen(word))
	{
        if (word[i] == 'c') 
		{
            if (word[i + 1] == '=')
                i++;
            else if (word[i + 1] == '-')
                i++;
        } 
		else if (word[i] == 'd')
		{
            if (word[i + 1] == '-')
                i++;
            else if (word[i + 1] == 'z' && word[i + 2] == '=')
                i += 2;
        }
		else if (word[i] == 'l')
		{
            if (word[i + 1] == 'j')
                i++;
        } 
		else if (word[i] == 'n')
		{
            if (word[i + 1] == 'j')
                i++;
        } 
		else if (word[i] == 's')
		{
            if (word[i + 1] == '=')
                i++;
        } 
		else if (word[i] == 'z')
		{
            if (word[i + 1] == '=')
                i++;
        }

        count++;
        i++;
    }

    printf("%d", count);
    return 0;
}
