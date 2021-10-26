#include <iostream>
#include <unistd.h>
#include <pthread.h>

using namespace std;

int number = 0;
pthread_rwlock_t rwlock; // ´´½¨¶ÁÐ´Ëø

void * Write(void * arg){

    return nullptr;
}

void * Read(void * arg){


    return nullptr;
}

int main(){
    

    pthread_rwlock_init(&rwlock, nullptr);
    pthread_t pw[3], pr[5];
    for (unsigned long long & i : pw)
        pthread_create(&i, nullptr, Write, nullptr);
    for (unsigned long long & i : pr)
        pthread_create(&i, nullptr, Read, nullptr);



    return 0;
}

