#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

void list_directory(const char* directory_name);

int main(int argc, char** argv) {
  // Process arguments
  if (argc == 1) {
    list_directory(".");
  } else if (argc == 2) {
    list_directory(argv[1]);
  } else {
    fprintf(stderr, "Please specify one or zero command line arguments.\n");
  }

  return 0;
}

void list_directory(const char* directory_name) {
  // TODO: Print the contents of the specified directory here
}
