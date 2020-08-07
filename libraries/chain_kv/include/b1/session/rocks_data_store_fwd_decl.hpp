#pragma once

#include <rocksdb/db.h>

namespace b1::session
{

template <typename allocator>
class rocks_data_store;

template <typename allocator>
auto make_rocks_data_store(std::shared_ptr<rocksdb::DB> db, std::shared_ptr<allocator> memory_allocator) -> rocks_data_store<allocator>;

}
