#include "CWORK/out.h"
#include "CWORK/rq.h"
#include "CWORK/os.h"
#include <stdio.h>
int main() {
  cwork_out::println("Welcome!");
  char rq[100] = cwork_req::post_requests("https://google.com", 5);
  cwork_out::println(rq.c_str());
  cwork_os::returnb(true);
}
