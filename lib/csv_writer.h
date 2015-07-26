/*
  csv_writer.h:
  create csv file
  add row to csv file
*/

typedef struct {
  char *columns;
  char *fname;
} csv;

extern int add_row(csv *csv, char *row);
extern int create_csv(csv *csv);
