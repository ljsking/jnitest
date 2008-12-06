#include <iostream>
#include <cmath>  
#include "JniBridge.h"
using namespace std;
JNIEXPORT jint JNICALL Java_JniBridge_calcDist(JNIEnv *env, jclass cls, jobject obj) 
{ 
	jclass coor = env->GetObjectClass(obj);
	jfieldID xField = env->GetFieldID(coor, "x", "I");
	jfieldID yField = env->GetFieldID(coor, "y", "I");
	jint x = env->GetIntField(obj, xField);
	jint y = env->GetIntField(obj, yField);
	cout<<"Get x:"<<x<<" y:"<<y<<endl;
	return sqrt(x*x+y*y);
} 
