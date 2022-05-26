#include <stdio.h>
#include <stdlib.h>

void newLine (void)
{
    printf("\n");
}

int main()
{
    FILE *pFile = NULL;
    char *fileName = "file.txt";

    pFile = fopen(fileName, "r");

    if(pFile == NULL)
    {
        perror("");
        return -1;
    }

    fclose(pFile);
    pFile = NULL;

    /* to rename and delete
    
    rename("file.txt", "my_file.txt");

    remove(".\\file.txt");

    */

    /* to read characters from a text file */

    FILE *fp;
    int c;

    fp = fopen("my_file.txt", "r");

    if(fp == NULL)
    {
        perror("");
        return -1;
    }

    while((c = fgetc(fp)) != EOF)
    {
        printf("%c", c);
    }

    fclose(fp);
    fp = NULL;

    newLine();

    /* to read a string from a text file */
    
    // char *fgets(char *str, int nchars, FILE *stream)

    char str[60];
    
    fp = fopen("my_file.txt", "r");

    if(fp == NULL)
    {
        perror("");
        return(-1);
    }

    if(fgets(str, 60, fp) != NULL)
    {
        printf("%s", str);
    }
    
    fclose(fp);
    fp = NULL;

    newLine();

    /* to read a formatted input from a file */

    // int fscanf(FILE *stream, const char *fromat, ...)

    char str1[10], str2[10], str3[10];
    int year;

    fp = fopen("file.txt", "w+");

    if(fp != NULL)
        fputs("Hello how are you?", fp);

    rewind(fp);

    fscanf(fp, "%s %s %s %d", str1, str2, str3, &year);

    printf("Read String1 |%s|\n", str1);
    printf("Read String2 |%s|\n", str2);
    printf("Read String3 |%s|\n", str3);
    printf("Read Integer |%d|\n", year);

    fclose(fp);
    fp = NULL;

    /* to write a character to a text file */

    // int fputc(int ch, FILE *pFile);

    fp = fopen("file.txt", "w+");

    for(int ch = 32; ch <= 101; ch++)
    {
        fputc(ch, fp);
    }

    fclose(fp);
    fp = NULL;

    /* to write a string to a text file */

    // int fputs(const char *str, FILE *pFile)

    fp = fopen("file.txt", "w+");

    fputs("Hi, I'm Saurav", fp);

    fclose(fp);
    fp = NULL;

    /* to write a formatted output to a text file */

    // int fprintf(FILE *stream, const char *format, ...)

    fp = fopen("file.txt", "w+");

    fprintf(fp, "%s %s %s","Hi", "I'm", "Jeff");

    fclose(fp);
    fp = NULL;

    newLine();
    
    /* to find your pos in file */
    
    /* ftell() 
    
    long ftell(FILE *pFile)

    long fpos = ftell(pFILE) 
    
    offset in bytes from the beginning of the file */
    
    int len;
    
    fp = fopen("file.txt", "r");
    
    if(fp == NULL)
    {
        perror("");
        return(-1);
    }

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);
    fclose(fp);
    fp = NULL;

    printf("Total size of file.txt = %d bytes\n", len);

    newLine();

    /* Setting a position in a file */

    /* as complement to ftell() you have fseek()

    int fseek(FILE *pFile, long offset, int origin); */

    /* SEEK_SET, SEEK_CUR, SEEK_END */

    fp = fopen("file.txt", "w+");

    if(fp == NULL)
    {
        perror("");
        return(-1);
    }
    fputs("This is saurav", fp);

    fseek(fp, 7, SEEK_SET);
    fputs("Hello How are you?", fp);

    fclose(fp);
    fp = NULL;

    newLine();

    /* fsetpos()

    int fsetpos(FILE *pFile, const fpost_t *position);

    fsetpos(pFile, &here); */

    /* fgetpos()

    int fgetpos(FILE *pFile, fpos_t *position);

    fpost_t here;

    fgetpos(pFile, here) */

    fpos_t position;

    fp = fopen("file.txt", "w+");

    fputs("Hello Hello", fp);

    fseek(fp, 0, SEEK_END);

    len = ftell(fp);

    fgetpos(fp, &position);

    fsetpos(fp, &position);

    fputs("This is going to write after the previous text ends previous content", fp);

    fclose(fp);

    return 0;

}