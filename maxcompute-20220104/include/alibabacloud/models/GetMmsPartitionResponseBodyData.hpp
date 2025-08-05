// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSPARTITIONRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMMSPARTITIONRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsPartitionResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsPartitionResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(dbName, dbName_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(numRows, numRows_);
      DARABONBA_PTR_TO_JSON(size, size_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(sourceName, sourceName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tableId, tableId_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsPartitionResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(numRows, numRows_);
      DARABONBA_PTR_FROM_JSON(size, size_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(sourceName, sourceName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tableId, tableId_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetMmsPartitionResponseBodyData() = default ;
    GetMmsPartitionResponseBodyData(const GetMmsPartitionResponseBodyData &) = default ;
    GetMmsPartitionResponseBodyData(GetMmsPartitionResponseBodyData &&) = default ;
    GetMmsPartitionResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsPartitionResponseBodyData() = default ;
    GetMmsPartitionResponseBodyData& operator=(const GetMmsPartitionResponseBodyData &) = default ;
    GetMmsPartitionResponseBodyData& operator=(GetMmsPartitionResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->dbName_ != nullptr && this->id_ != nullptr && this->lastDdlTime_ != nullptr && this->numRows_ != nullptr && this->size_ != nullptr
        && this->sourceId_ != nullptr && this->sourceName_ != nullptr && this->status_ != nullptr && this->tableId_ != nullptr && this->tableName_ != nullptr
        && this->updated_ != nullptr && this->value_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int64_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
    inline GetMmsPartitionResponseBodyData& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetMmsPartitionResponseBodyData& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMmsPartitionResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline GetMmsPartitionResponseBodyData& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // numRows Field Functions 
    bool hasNumRows() const { return this->numRows_ != nullptr;};
    void deleteNumRows() { this->numRows_ = nullptr;};
    inline int64_t numRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
    inline GetMmsPartitionResponseBodyData& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline GetMmsPartitionResponseBodyData& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline GetMmsPartitionResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // sourceName Field Functions 
    bool hasSourceName() const { return this->sourceName_ != nullptr;};
    void deleteSourceName() { this->sourceName_ = nullptr;};
    inline string sourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
    inline GetMmsPartitionResponseBodyData& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMmsPartitionResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableId Field Functions 
    bool hasTableId() const { return this->tableId_ != nullptr;};
    void deleteTableId() { this->tableId_ = nullptr;};
    inline int64_t tableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
    inline GetMmsPartitionResponseBodyData& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetMmsPartitionResponseBodyData& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline bool updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
    inline GetMmsPartitionResponseBodyData& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetMmsPartitionResponseBodyData& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<int64_t> dbId_ = nullptr;
    std::shared_ptr<string> dbName_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    // lastDdlTime
    std::shared_ptr<string> lastDdlTime_ = nullptr;
    std::shared_ptr<int64_t> numRows_ = nullptr;
    std::shared_ptr<int64_t> size_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> sourceName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> tableId_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
    std::shared_ptr<bool> updated_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
