#ifndef STRINGS_H
#define STRINGS_H

#include <Arduino.h>

uint8_t charCount(String str, String target) {
  uint8_t count = 0;
  for(int i = 0; str[i] != '\0'; i++) {
    if(str[i] == target[0]) count += 1;
  }
  return count;
}

String strSplit(String str, String target, uint8_t index) {
  uint8_t count = charCount(str, target);
  if(count == 0) return str;
  String tempStore[count+1];
  uint8_t targetPos[count+2];
  targetPos[count] = str.length();
  uint8_t i;

  targetPos[0] = str.indexOf(target);
  for(i = 1; i < count; i++) {
    targetPos[i] = str.indexOf(target,targetPos[i-1]+1);
  }

  tempStore[0] = str.substring(0,targetPos[0]);
  for(i = 1; i < count+1; i++) {
    tempStore[i] = str.substring(targetPos[i-1]+1,targetPos[i]);
  }

  return tempStore[index-1];
}

float StrToFloat(String str) {
  String a = str;
  float b = str.toFloat();
  return b;
}

#endif
