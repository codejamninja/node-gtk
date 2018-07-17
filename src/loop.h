
#pragma once

#include <nan.h>
#include <v8.h>

using namespace v8;

namespace GNodeJS {

  void StartLoop();

  void QuitLoopStack();

  Local<Array> GetLoopStack();

};
