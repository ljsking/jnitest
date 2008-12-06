#include <stdio.h>  
#include "JniBridge.h"
JNIEXPORT jint JNICALL Java_JniBridge_calcDist(JNIEnv *env, jclass cls, jobject obj) 
{ 
	jfieldID xField = GetFieldID(env, cls, "x", "I");
	jfieldID yField = GetFieldID(env, cls, "y", "I");
	jint x = GetIntField(env, obj, xField);
	jint y = GetIntField(env, obj, yField);
	printf("Get X:%d, Y:%d\n", x, y);
	return x+y;
} 
