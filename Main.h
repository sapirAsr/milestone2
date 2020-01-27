//
// Created by michal on 14/01/2020.
//

#ifndef EX4_1_MAIN_H
#define EX4_1_MAIN_H
#include "Mat.h"
#include "Searcher.h"
#include "BFS.h"
#include "DFS.h"
#include "BestFirstSearch.h"
#include "Searchable.h"
#include "MySerialServer.h"
#include "Server.h"
#include "Solver.h"
#include "StringReverser.h"
#include "CacheManager.h"
#include "FileCacheManager.h"
#include "ClientHandler.h"
#include "MyTestClientHandler.h"
#include "OA.h"
#include "MyParallelServer.h"


namespace boot{
class Main {
public:
int main(int port);
};

}


#endif //EX4_1_MAIN_H
