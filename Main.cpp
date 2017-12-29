//
// Created by Valentino Rossi on 2017/6/22.
//

#include <iostream>
#include <pthread.h>
#include "TOTP/library.h"

using namespace std;

void *callbacksss(void *pt) {

    printf("callback");
    hello();

}


int main() {

    pthread_t th;
    int *thread_ret = NULL;
    int ret = pthread_create(&th, NULL, callbacksss, NULL);

    if (ret != 0) {
        printf("Create thread error!\n");
        return -1;
    }
    printf("This is the main process.\n");
    pthread_join(th, (void **) &thread_ret);

    printf("thread_ret = %d.\n", *thread_ret);
    return 0;
}

