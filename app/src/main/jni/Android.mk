LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := MyLibs
LOCAL_SRC_FILES := com_example_qianyiwang_opencv_android_NativeClass.cpp
LOCAL_LDLIBS := -llog
include $(BUILD_SHARED_LIBRARY)