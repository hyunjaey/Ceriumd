//Copyright (c) 2021 Heewon Cho

#include "ThreadPool.hpp"

std::vector<std::thread *> ThreadPool::ThreadContainer;

void ThreadPool::AddThread(std::thread *thread) {
    try {
    ThreadPool::ThreadContainer.push_back(thread);
    } catch (std::exception e) {
        throw e;
    }
}

int ThreadPool::GetLength() {
    try {
        return ThreadPool::ThreadContainer.size();
    } catch (std::exception e) {
        throw e;
    }
}