#ifndef UTILS_H_
#define UTILS_H_

#include <vector>
#include "constants.h"

void sortData(const SORT_ORDER &mySortOrder,std::vector<process> &myProcesses);
process getNext(std::vector<process> &myProcesses);
int getSize(std::vector<process> &myProcesses);
int handleMissingData(std::vector<process> &myProcesses);

#endif