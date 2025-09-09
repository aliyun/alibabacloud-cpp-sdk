// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBROADCASTTABLESRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBROADCASTTABLESRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBroadcastTablesResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBroadcastTablesResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Broadcast, broadcast_);
      DARABONBA_PTR_TO_JSON(BroadcastType, broadcastType_);
      DARABONBA_PTR_TO_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_TO_JSON(IsShard, isShard_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBroadcastTablesResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Broadcast, broadcast_);
      DARABONBA_PTR_FROM_JSON(BroadcastType, broadcastType_);
      DARABONBA_PTR_FROM_JSON(DbInstType, dbInstType_);
      DARABONBA_PTR_FROM_JSON(IsShard, isShard_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    DescribeBroadcastTablesResponseBodyList() = default ;
    DescribeBroadcastTablesResponseBodyList(const DescribeBroadcastTablesResponseBodyList &) = default ;
    DescribeBroadcastTablesResponseBodyList(DescribeBroadcastTablesResponseBodyList &&) = default ;
    DescribeBroadcastTablesResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBroadcastTablesResponseBodyList() = default ;
    DescribeBroadcastTablesResponseBodyList& operator=(const DescribeBroadcastTablesResponseBodyList &) = default ;
    DescribeBroadcastTablesResponseBodyList& operator=(DescribeBroadcastTablesResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->broadcast_ != nullptr
        && this->broadcastType_ != nullptr && this->dbInstType_ != nullptr && this->isShard_ != nullptr && this->status_ != nullptr && this->table_ != nullptr; };
    // broadcast Field Functions 
    bool hasBroadcast() const { return this->broadcast_ != nullptr;};
    void deleteBroadcast() { this->broadcast_ = nullptr;};
    inline bool broadcast() const { DARABONBA_PTR_GET_DEFAULT(broadcast_, false) };
    inline DescribeBroadcastTablesResponseBodyList& setBroadcast(bool broadcast) { DARABONBA_PTR_SET_VALUE(broadcast_, broadcast) };


    // broadcastType Field Functions 
    bool hasBroadcastType() const { return this->broadcastType_ != nullptr;};
    void deleteBroadcastType() { this->broadcastType_ = nullptr;};
    inline string broadcastType() const { DARABONBA_PTR_GET_DEFAULT(broadcastType_, "") };
    inline DescribeBroadcastTablesResponseBodyList& setBroadcastType(string broadcastType) { DARABONBA_PTR_SET_VALUE(broadcastType_, broadcastType) };


    // dbInstType Field Functions 
    bool hasDbInstType() const { return this->dbInstType_ != nullptr;};
    void deleteDbInstType() { this->dbInstType_ = nullptr;};
    inline int32_t dbInstType() const { DARABONBA_PTR_GET_DEFAULT(dbInstType_, 0) };
    inline DescribeBroadcastTablesResponseBodyList& setDbInstType(int32_t dbInstType) { DARABONBA_PTR_SET_VALUE(dbInstType_, dbInstType) };


    // isShard Field Functions 
    bool hasIsShard() const { return this->isShard_ != nullptr;};
    void deleteIsShard() { this->isShard_ = nullptr;};
    inline bool isShard() const { DARABONBA_PTR_GET_DEFAULT(isShard_, false) };
    inline DescribeBroadcastTablesResponseBodyList& setIsShard(bool isShard) { DARABONBA_PTR_SET_VALUE(isShard_, isShard) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeBroadcastTablesResponseBodyList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline string table() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
    inline DescribeBroadcastTablesResponseBodyList& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


  protected:
    // Indicates whether a table is a broadcast table.
    std::shared_ptr<bool> broadcast_ = nullptr;
    // Indicates the type of the broadcast table. Valid values:
    // 
    // *   **1**: multi-write mode
    // *   **2**: synchronous mode
    std::shared_ptr<string> broadcastType_ = nullptr;
    // Indicates the storage type of the database. Valid values:
    // 
    // *   **0**: RDS
    // *   **4**: PolarDB
    std::shared_ptr<int32_t> dbInstType_ = nullptr;
    // Indicates whether the broadcast table was sharded.
    std::shared_ptr<bool> isShard_ = nullptr;
    // Indicates the activation state of the broadcast table. Valid values:
    // 
    // *   **1**: The broadcast table is activated.
    // *   **2**: The broadcast table is being activated.
    // *   **3**: An exception occurs when the broadcast table is being activated.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Indicates the name of the table.
    std::shared_ptr<string> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
