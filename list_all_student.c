#include <stdio.h>

#define Length 64

int main(int argc, char const *argv[]) {
  
char last_name[Length];
char first_name[Length];
int age;

FILE* fd = fopen("student.dat", "r");
int id;

fseek(fd, 0, SEEK_SET);
fseek(fd, sizeof(int), SEEK_SET);

int count = fread(&id, sizeof(int), 1, fd);

while(count > 0)
{
    fread(first_name, sizeof(first_name), 1, fd);
    fread(last_name, sizeof(last_name), 1, fd);
    fread(&age, sizeof(int), 1, fd);
    printf("%d %s %s %d \n", id, first_name, last_name, age);
    count = fread(&id, sizeof(int), 1, fd);

}


fclose(fd);
return 0;
}