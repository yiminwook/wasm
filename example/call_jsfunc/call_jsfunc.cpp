#include <iostream>
#include <string>
#include <emscripten.h>
#include <emscripten/bind.h>

using namespace std;

// UTF8ToString (포인터, 길이) - emscripten 내장 유틸함수
// https://emscripten.org/docs/api_reference/preamble.js.html?utm_source=chatgpt.com#UTF8ToString
EM_JS(void, call_js, (const char *subject, int subject_len, const char *msg, int msg_len), {
  jsFunction(UTF8ToString(subject, subject_len), UTF8ToString(msg, msg_len));
});

bool my_calls()
{
  const string subject = "제목";
  const string msg = "메세지";
  call_js(subject.c_str(), subject.length(), msg.c_str(), msg.length());
  return true;
}

EMSCRIPTEN_BINDINGS(my_module)
{
  emscripten::function("callJs", &my_calls);
}