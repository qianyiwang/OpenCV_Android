/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#include "opencv2/opencv.hpp"
/* Header for class com_example_qianyiwang_opencv_android_NativeClass */

using namespace cv;
#ifndef _Included_com_example_qianyiwang_opencv_android_NativeClass
#define _Included_com_example_qianyiwang_opencv_android_NativeClass
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_qianyiwang_opencv_android_NativeClass
 * Method:    getMessageFromJNI
 * Signature: ()Ljava/lang/String;
 */
void detect(Mat& frame);
JNIEXPORT void JNICALL Java_com_example_qianyiwang_opencv_1android_NativeClass_faceDetection
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
