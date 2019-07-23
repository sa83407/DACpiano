#include <stdint.h>
#include "msp432p401r.h"
#include "SysTickInts.h"
#include "Piano.h"
#include "Sound.h"
#include "DAC.h"

void main(void){

uint32_t keys;
Sound_Init();


  while(1){
     // var= var+1;
      keys = Piano_In(); // key pressed determined
      Sound_Play(keys); // note played depending on key pressed

  }
}

