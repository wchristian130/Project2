#ifndef FILEIO_H_
#define FILEIO_H_

#include <string>
#include <vector>
#include "constants.h"

int loadData(const std::string filename, std::vector<process> &myProcesses);
int saveData(const std::string filename, std::vector<process> &myProcesses);

#endif