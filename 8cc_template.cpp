#include "8cc_template.hpp"

int main() {
  typedef calc_main::result result;
  print_buffer<result::buf>::run();
}
