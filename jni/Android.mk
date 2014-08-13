LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_SRC_FILES:=JniDowloadManager.cpp \
                 DownloadManager.cpp

LOCAL_MODULE := libHelloJni
LOCAL_LDLIBS := -llog
LOCAL_C_INCLUDES  = system/core/include/cutils \
                    DownloadManager.h
LOCAL_SHARED_LIBRARIES := libcutils
LOCAL_PRELINK_MODULE := false
LOCAL_MODULE_TAGS :=optional
include $(BUILD_SHARED_LIBRARY)