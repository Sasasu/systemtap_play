#include <stddef.h>
#include <stdio.h>
#include <string.h>

char *get_str(char *str, size_t len) {
  printf("get str: len %d\n", len);
  return str;
}

int main() {
  char *str = "helloworld";
  printf("%s\n", get_str(str, strlen(str)));
  return 0;
}
