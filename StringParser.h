#include <Arduino.h>
class StringParser
{
  public:
    static int parse(const char * com, int result[], byte maxResults);
    static void print( const __FlashStringHelper* input...);
    static void send(Stream & serial, const __FlashStringHelper* input...);
 private:
    static void send(Stream & serial, const __FlashStringHelper* input,va_list args);

};
