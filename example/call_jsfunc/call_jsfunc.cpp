#include <iostream>
#include <string>
#include <emscripten.h>
#include <emscripten/bind.h>

using namespace std;

EM_JS(void, call_js, (const string subject, const char *msg), {
  jsFunction(UTF8ToString(subject), UTF8ToString(msg));
});

bool my_calls()
{
  const string subject = "제목";
  const string msg = "메세지";
  call_js(subject, msg.c_str());
  return true;
}

EMSCRIPTEN_BINDINGS(my_module)
{
  emscripten::function("callJs", &my_calls);
}