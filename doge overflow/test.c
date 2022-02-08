#include <stdio.h>
#include <string.h>

static const char correct_password[] = "123456";

void success(void)
{
    puts("Success!");
}

int main(void)
{
    size_t len;
    char buffer[512];
    //ADD
    FILE *name;
    char path[255];
    char text[255];
    FILE *dir;
    //string text1 = text, path;
    dir = popen("pwd", "r");
    fgets(path, sizeof(path), dir);
    name = popen("whoami", "r");
    fgets(text, sizeof(text), name);

    printf("[========================================================================================]\n");
    printf("[                                          Doge Overflow                                 ]\n");
    printf("[========================================================================================]\n");
    printf(" Name : %s \n", text);
    printf(" Path : %s \n", path);

    #ifdef _WIN32
    printf(" Systems : Windows32\n");
    #endif
    #ifdef _WIN64
    printf(" Systems : Windows32\n");
    #endif
    #ifdef __linux__
    printf(" Systems : Linux %s Based\n", buffer);
    #else
  	printf(" Can't detect OS\n");
  	#endif
    printf("[========================================================================================]\n");
    printf("\n");
    printf("Exploit here\n");
    printf("$ : ");

    fgets(buffer, 1024, stdin);
    len = strlen(buffer);
    if (buffer[len - 1] == '\n') {
      buffer[len - 1] = '\0';
    }
    if (!strcmp(buffer, correct_password)) {
      success();
    } else {
      puts("Wrong password!");
    }
    return 0;
}
