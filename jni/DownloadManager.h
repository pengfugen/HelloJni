#ifndef DOWNLOAD_MANAGER_H
#define DOWNLOAD_MANAGER_H
#include <android/log.h>
#include <jni.h>

#ifndef LOG_TAG
#define LOG_TAG "pengfugen"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO,LOG_TAG,__VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG,__VA_ARGS__)
#endif

class DownloadManager
{
public:
	void download(JNIEnv *env, jclass cl, jint index, jobject obj);
};

#endif

