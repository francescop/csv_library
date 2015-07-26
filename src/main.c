#include <csv_writer.h>
#include <stdio.h>

int main(){
  // create a variable 'csv' of type csv (definition in lib/csv_writer.h)
  csv csv; 
  csv.fname = "/tmp/test.csv"; // set file name to create / appen rows
  csv.columns = "ab;cd;ef;gh"; // define columns separated by your symbol of choice

  create_csv(&csv); // invoke the function to create the file

  char *string = "11;22;33;44"; // the row to be added
  add_row(&csv, string); // add row to csv file

  return 0;
}
