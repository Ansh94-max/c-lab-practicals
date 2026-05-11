include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp = fopen("input.txt", "w");
    if (!fp)
        return 1;
    fprintf(fp, "This is a test. test is good. test.\n");
    fclose(fp);

    char oldWord[] = "test";
    char newWord[] = "exam";
    char buffer[1000], output[1000];
    int appearances = 0;

    fp = fopen("input.txt", "r");
    FILE *ft = fopen("temp.txt", "w");

    while (fgets(buffer, sizeof(buffer), fp))
    {
        char *pos, *ptr = buffer;
        output[0] = '\0';
        while ((pos = strstr(ptr, oldWord)) != NULL)
        {
            strncat(output, ptr, pos - ptr);
            strcat(output, newWord);
            ptr = pos + strlen(oldWord);
            appearances++;
        }
        strcat(output, ptr);
        fputs(output, ft);
    }
    fclose(fp);
    fclose(ft);

    remove("input.txt");
    rename("temp.txt", "input.txt");

    printf("Replaced %d appearances in input.txt.\n", appearances);
    return 0;
}