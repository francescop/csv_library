#include <unistd.h>
#include <csv_writer.h>
#include <stdio.h>

int create_csv(csv *csv){
  if(access( csv->fname, F_OK) != -1 ) {
    // file exists
  } else {
    // file doesn't exist, create file and add columns
    FILE *file;
    file = fopen(csv->fname, "w");
    fprintf(file, "%s\n", csv->columns);
    fclose(file);
  }

  return 0;
}

int add_row(csv *csv, char *row){
  // add row to file
  FILE *file;
  file = fopen(csv->fname, "a+");
  fprintf(file, "%s\n", row);
  fclose(file);

  return 0;
}
