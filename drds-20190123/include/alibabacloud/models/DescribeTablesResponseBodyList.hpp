// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeTablesResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablesResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(AllowFullTableScan, allowFullTableScan_);
      DARABONBA_PTR_TO_JSON(Broadcast, broadcast_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(IsLocked, isLocked_);
      DARABONBA_PTR_TO_JSON(IsShard, isShard_);
      DARABONBA_PTR_TO_JSON(ShardKey, shardKey_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablesResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowFullTableScan, allowFullTableScan_);
      DARABONBA_PTR_FROM_JSON(Broadcast, broadcast_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(IsLocked, isLocked_);
      DARABONBA_PTR_FROM_JSON(IsShard, isShard_);
      DARABONBA_PTR_FROM_JSON(ShardKey, shardKey_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeTablesResponseBodyList() = default ;
    DescribeTablesResponseBodyList(const DescribeTablesResponseBodyList &) = default ;
    DescribeTablesResponseBodyList(DescribeTablesResponseBodyList &&) = default ;
    DescribeTablesResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablesResponseBodyList() = default ;
    DescribeTablesResponseBodyList& operator=(const DescribeTablesResponseBodyList &) = default ;
    DescribeTablesResponseBodyList& operator=(DescribeTablesResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowFullTableScan_ != nullptr
        && this->broadcast_ != nullptr && this->dbInstType_ != nullptr && this->isLocked_ != nullptr && this->isShard_ != nullptr && this->shardKey_ != nullptr
        && this->status_ != nullptr && this->table_ != nullptr; };
    // allowFullTableScan Field Functions 
    bool hasAllowFullTableScan() const { return this->allowFullTableScan_ != nullptr;};
    void deleteAllowFullTableScan() { this->allowFullTableScan_ = nullptr;};
    inline bool allowFullTableScan() const { DARABONBA_PTR_GET_DEFAULT(allowFullTableScan_, false) };
    inline DescribeTablesResponseBodyList& setAllowFullTableScan(bool allowFullTableScan) { DARABONBA_PTR_SET_VALUE(allowFullTableScan_, allowFullTableScan) };


    // broadcast Field Functions 
    bool hasBroadcast() const { return this->broadcast_ != nullptr;};
    void deleteBroadcast() { this->broadcast_ = nullptr;};
    inline bool broadcast() const { DARABONBA_PTR_GET_DEFAULT(broadcast_, false) };
    inline DescribeTablesResponseBodyList& setBroadcast(bool broadcast) { DARABONBA_PTR_SET_VALUE(broadcast_, broadcast) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline int32_t dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, 0) };
    inline DescribeTablesResponseBodyList& setDbInstType(int32_t dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // isLocked Field Functions 
    bool hasIsLocked() const { return this->isLocked_ != nullptr;};
    void deleteIsLocked() { this->isLocked_ = nullptr;};
    inline bool isLocked() const { DARABONBA_PTR_GET_DEFAULT(isLocked_, false) };
    inline DescribeTablesResponseBodyList& setIsLocked(bool isLocked) { DARABONBA_PTR_SET_VALUE(isLocked_, isLocked) };


    // isShard Field Functions 
    bool hasIsShard() const { return this->isShard_ != nullptr;};
    void deleteIsShard() { this->isShard_ = nullptr;};
    inline bool isShard() const { DARABONBA_PTR_GET_DEFAULT(isShard_, false) };
    inline DescribeTablesResponseBodyList& setIsShard(bool isShard) { DARABONBA_PTR_SET_VALUE(isShard_, isShard) };


    // shardKey Field Functions 
    bool hasShardKey() const { return this->shardKey_ != nullptr;};
    void deleteShardKey() { this->shardKey_ = nullptr;};
    inline string shardKey() const { DARABONBA_PTR_GET_DEFAULT(shardKey_, "") };
    inline DescribeTablesResponseBodyList& setShardKey(string shardKey) { DARABONBA_PTR_SET_VALUE(shardKey_, shardKey) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeTablesResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DescribeTablesResponseBodyList& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // Indicates whether full table scanning is allowed.
    std::shared_ptr<bool> allowFullTableScan_ = nullptr;
    // Indicates whether the table is a replicated table.
    std::shared_ptr<bool> broadcast_ = nullptr;
    // The type of the PolarDB-X 1.0 instance. Valid values:
    // 
    // *   0: The instance is a dedicated instance.
    // *   1: The instance is a shard instance.
    std::shared_ptr<int32_t> dbInstType_ = nullptr;
    // Indicates whether the table is locked.
    std::shared_ptr<bool> isLocked_ = nullptr;
    // Indicates whether the table is sharded.
    std::shared_ptr<bool> isShard_ = nullptr;
    // The shard key of the table.
    std::shared_ptr<string> shardKey_ = nullptr;
    // Indicates whether sharding tasks are performed on the table. Valid values:
    // 
    // *   0: No sharding task is performed on the table.
    // *   1: Sharding tasks are performed on the table.
    std::shared_ptr<int32_t> status_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
