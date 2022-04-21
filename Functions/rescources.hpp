#pragma once

#include <string>

struct {

    //*   std::string standard  = "\x1B[ m";

    std::string black           = "\x1B[30m";   // fg 30 | bg 40
    std::string red             = "\x1B[31m";   // fg 31 | bg 41
    std::string green           = "\x1B[32m";   // fg 32 | bg 42
    std::string yellow          = "\x1B[33m";   // fg 33 | bg 43
    std::string blue            = "\x1B[34m";   // fg 34 | bg 44
    std::string magenta         = "\x1B[35m";   // fg 35 | bg 45
    std::string cyan            = "\x1B[36m";   // fg 36 | bg 46
    std::string white           = "\x1B[37m";   // fg 37 | bg 47

    std::string reset           = "\x1B[0m" ;   // 0
    std::string boldBright      = "\x1B[1m" ;   // 1
    std::string underline       = "\x1B[4m";    // 4
    std::string inverse         = "\x1B[7m";    // 7
    std::string boldBrightOff   = "\x1B[21m";   // 21
    std::string underlineOff    = "\x1B[24m";   // 24
    std::string inverseOff      = "\x1B[27m";   // 27

} Colors;