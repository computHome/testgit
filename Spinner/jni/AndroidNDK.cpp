#include <string.h>
#include <jni.h>

extern "C" {
JNIEXPORT jstring JNICALL Java_com_example_hellojni_HelloJni_stringFromJNI

}

jstring
Java_com_example_hellojni_HelloJni_stringFromJNI( JNIEnv* env,
                                                  jobject thiz )
{

	return env->NewStringUTF("Hello from JNI !")
}
