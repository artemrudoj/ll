LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_MODULE := test
LOCAL_C_INCLUDES := $(LOCAL_PATH)/../../include
LOCAL_SRC_FILES := $(LOCAL_PATH)/../test/src/test.cpp
include $(BUILD_EXECUTABLE)

