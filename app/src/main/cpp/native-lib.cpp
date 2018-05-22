#include <jni.h>
#include <string>

// Include libraries from OpenCV
#include <opencv2/opencv.hpp>

extern "C" JNIEXPORT jstring

JNICALL
Java_com_example_gxlab_ndkandroidstudiodemo_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jint JNICALL
Java_com_example_gxlab_ndkandroidstudiodemo_OpenCVNativeClass_convertGray(JNIEnv *env, jclass type,
                                                                          jlong matAddrRgba,
                                                                          jlong matAddrGray) {

    // TODO


}