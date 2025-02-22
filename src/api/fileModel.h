//------------------------------------------------------------------
// fileModel.h
//
// Author:           JuanJakobo
// Date:             23.04.2021
// Description:
//-------------------------------------------------------------------

#ifndef FILEMODEL
#define FILEMODEL

#include "model.h"

#include <string>

enum class Type { FFOLDER, FFILE };

struct FileItem : Entry {
  std::string name;
  std::string path;
  Type type;
  // long long int size;
  tm lastEditDate;
};

#endif
