#include <stdio.h>  
#include "JniBridge.h"
JNIEXPORT jint JNICALL Java_JniBridge_calcDist(JNIEnv *env, jclass cls, jobject obj) 
{ 
	jfieldID xField = env->GetFieldID(cls, "x", "I");
	jfieldID yField = env->GetFieldID(cls, "y", "I");
	jint x = env->GetIntField(obj, xField);
	jint y = env->GetIntField(obj, yField);
	printf("Get X:%d, Y:%d\n", x, y);
	return x+y;
} 
