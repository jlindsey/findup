#include <stdio.h>
#include <dirent.h>
#include <errno.h>
#include "config.h"

void print_usage(void) {
}

int try_opendir(const char* filename, DIR* dir) {
  dir = opendir(filename);

  if (dir == NULL) {
    printf("Unable to read dir '%s': ERR %d", filename, errno);
    return errno;
  } else {
    return 0;
  }
}

int main(int argc, char* argv[]) {
  return 0;
}

