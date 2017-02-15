#include "com_example_qianyiwang_opencv_android_NativeClass.h"

JNIEXPORT jstring JNICALL Java_com_example_qianyiwang_opencv_1android_NativeClass_getMessageFromJNI
  (JNIEnv *env, jclass obj){
    return env->NewStringUTF("this is a message from JNI");
  }

