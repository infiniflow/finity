//
// Created by JinHai on 2022/7/20.
//

#pragma once

#include "exception.h"
#include "str.h"

#include <stdexcept>

namespace infinity {

#ifdef INFINITY_DEBUG

#define NetworkAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw NetworkException(errmsg);                                       \
} \

#define ParserAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw ParserException(errmsg);                                       \
}

#define PlannerAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw PlannerException(errmsg);                                       \
}

#define OptimizerAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw OptimizerException(errmsg);                                       \
}

#define ExecutorAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw ExecutorException(errmsg);                                       \
}

#define SchedulerAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw SchedulerException(errmsg);                                       \
}

#define CatalogAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw CatalogException(errmsg);                                       \
}

#define StorageAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw StorageException(errmsg);                                       \
}

#define GeneralAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = std::string(message) + " @" + infinity::TrimPath(__FILE__) + ":" + std::to_string(__LINE__); \
    throw std::logic_error(errmsg);                                       \
}

#else

#define NetworkAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw NetworkException(errmsg);                                       \
}

#define ParserAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw ParserException(errmsg);                                       \
}

#define PlannerAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw PlannerException(errmsg);                                       \
}

#define OptimizerAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw OptimizerException(errmsg);                                       \
}

#define ExecutorAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw ExecutorException(errmsg);                                       \
}

#define SchedulerAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw SchedulerException(errmsg);                                       \
}

#define CatalogAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw CatalogException(errmsg);                                       \
}

#define StorageAssert(is_true, message)                                              \
if(!(is_true)) {                                                            \
    std::string errmsg = (message);                                         \
    throw StorageException(errmsg);                                       \
}

//#define Assert(is_true, message)                                              \
//if(!(is_true)) {                                                            \
//    std::string errmsg = (message);                                         \
//    throw std::logic_error(errmsg);                                       \
//}

#endif

#define NetworkError(message) NetworkAssert(false, message)
#define ParserError(message) ParserAssert(false, message)
#define PlannerError(message) PlannerAssert(false, message)
#define OptimizerError(message) OptimizerAssert(false, message)
#define ExecutorError(message) ExecutorAssert(false, message)
#define SchedulerError(message) SchedulerAssert(false, message)
#define CatalogError(message) CatalogAssert(false, message)
#define StorageError(message) CatalogAssert(false, message)
#define ResponseError(message) Assert(false, message)
}