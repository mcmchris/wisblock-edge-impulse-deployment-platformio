
#ifndef _PDM_H_INCLUDED
#define _PDM_H_INCLUDED

#include <Arduino.h>


class PDMClass
{
public:
  PDMClass();
  virtual ~PDMClass();
  int begin(int channels, long sampleRate);
  void end();
  virtual int read(void* buffer, size_t size);
  void onReceive(void(*)(void));
  
  private:  
  void (*_onReceive)(void);


};

extern PDMClass PDM;

#endif
