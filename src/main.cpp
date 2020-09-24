#include <iostream>
#include "CsvWriter.hpp"

int main() {
  using namespace csv;

  CsvWriter writer("test.csv");
  Record header, record;
  header.put("aaa");
  header.put("bbb");
  header.put("ccc");
  header.put("ddd");

  record.put(3.1415);
  record.put(700);
  record.put("ccc");
  record.put('a');

  writer.setHeader(header);
  writer.insertRecord(record);
  writer.write();

  return 0;
}