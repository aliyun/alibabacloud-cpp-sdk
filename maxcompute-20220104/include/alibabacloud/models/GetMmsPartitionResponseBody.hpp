// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSPARTITIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMMSPARTITIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsPartitionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsPartitionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsPartitionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetMmsPartitionResponseBody() = default ;
    GetMmsPartitionResponseBody(const GetMmsPartitionResponseBody &) = default ;
    GetMmsPartitionResponseBody(GetMmsPartitionResponseBody &&) = default ;
    GetMmsPartitionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsPartitionResponseBody() = default ;
    GetMmsPartitionResponseBody& operator=(const GetMmsPartitionResponseBody &) = default ;
    GetMmsPartitionResponseBody& operator=(GetMmsPartitionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(dbId, dbId_);
        DARABONBA_PTR_TO_JSON(dbName, dbName_);
        DARABONBA_PTR_TO_JSON(dstProjectName, dstProjectName_);
        DARABONBA_PTR_TO_JSON(dstSchemaName, dstSchemaName_);
        DARABONBA_PTR_TO_JSON(dstTableName, dstTableName_);
        DARABONBA_PTR_TO_JSON(dstValue, dstValue_);
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(dbId, dbId_);
        DARABONBA_PTR_FROM_JSON(dbName, dbName_);
        DARABONBA_PTR_FROM_JSON(dstProjectName, dstProjectName_);
        DARABONBA_PTR_FROM_JSON(dstSchemaName, dstSchemaName_);
        DARABONBA_PTR_FROM_JSON(dstTableName, dstTableName_);
        DARABONBA_PTR_FROM_JSON(dstValue, dstValue_);
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbId_ == nullptr
        && this->dbName_ == nullptr && this->dstProjectName_ == nullptr && this->dstSchemaName_ == nullptr && this->dstTableName_ == nullptr && this->dstValue_ == nullptr
        && this->id_ == nullptr && this->lastDdlTime_ == nullptr && this->numRows_ == nullptr && this->size_ == nullptr && this->sourceId_ == nullptr
        && this->sourceName_ == nullptr && this->status_ == nullptr && this->tableId_ == nullptr && this->tableName_ == nullptr && this->updated_ == nullptr
        && this->value_ == nullptr; };
      // dbId Field Functions 
      bool hasDbId() const { return this->dbId_ != nullptr;};
      void deleteDbId() { this->dbId_ = nullptr;};
      inline int64_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0L) };
      inline Data& setDbId(int64_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline Data& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // dstProjectName Field Functions 
      bool hasDstProjectName() const { return this->dstProjectName_ != nullptr;};
      void deleteDstProjectName() { this->dstProjectName_ = nullptr;};
      inline string getDstProjectName() const { DARABONBA_PTR_GET_DEFAULT(dstProjectName_, "") };
      inline Data& setDstProjectName(string dstProjectName) { DARABONBA_PTR_SET_VALUE(dstProjectName_, dstProjectName) };


      // dstSchemaName Field Functions 
      bool hasDstSchemaName() const { return this->dstSchemaName_ != nullptr;};
      void deleteDstSchemaName() { this->dstSchemaName_ = nullptr;};
      inline string getDstSchemaName() const { DARABONBA_PTR_GET_DEFAULT(dstSchemaName_, "") };
      inline Data& setDstSchemaName(string dstSchemaName) { DARABONBA_PTR_SET_VALUE(dstSchemaName_, dstSchemaName) };


      // dstTableName Field Functions 
      bool hasDstTableName() const { return this->dstTableName_ != nullptr;};
      void deleteDstTableName() { this->dstTableName_ = nullptr;};
      inline string getDstTableName() const { DARABONBA_PTR_GET_DEFAULT(dstTableName_, "") };
      inline Data& setDstTableName(string dstTableName) { DARABONBA_PTR_SET_VALUE(dstTableName_, dstTableName) };


      // dstValue Field Functions 
      bool hasDstValue() const { return this->dstValue_ != nullptr;};
      void deleteDstValue() { this->dstValue_ = nullptr;};
      inline string getDstValue() const { DARABONBA_PTR_GET_DEFAULT(dstValue_, "") };
      inline Data& setDstValue(string dstValue) { DARABONBA_PTR_SET_VALUE(dstValue_, dstValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // lastDdlTime Field Functions 
      bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
      void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
      inline string getLastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
      inline Data& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


      // numRows Field Functions 
      bool hasNumRows() const { return this->numRows_ != nullptr;};
      void deleteNumRows() { this->numRows_ = nullptr;};
      inline int64_t getNumRows() const { DARABONBA_PTR_GET_DEFAULT(numRows_, 0L) };
      inline Data& setNumRows(int64_t numRows) { DARABONBA_PTR_SET_VALUE(numRows_, numRows) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int64_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
      inline Data& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // sourceId Field Functions 
      bool hasSourceId() const { return this->sourceId_ != nullptr;};
      void deleteSourceId() { this->sourceId_ = nullptr;};
      inline int64_t getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
      inline Data& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


      // sourceName Field Functions 
      bool hasSourceName() const { return this->sourceName_ != nullptr;};
      void deleteSourceName() { this->sourceName_ = nullptr;};
      inline string getSourceName() const { DARABONBA_PTR_GET_DEFAULT(sourceName_, "") };
      inline Data& setSourceName(string sourceName) { DARABONBA_PTR_SET_VALUE(sourceName_, sourceName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableId Field Functions 
      bool hasTableId() const { return this->tableId_ != nullptr;};
      void deleteTableId() { this->tableId_ = nullptr;};
      inline int64_t getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, 0L) };
      inline Data& setTableId(int64_t tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // updated Field Functions 
      bool hasUpdated() const { return this->updated_ != nullptr;};
      void deleteUpdated() { this->updated_ = nullptr;};
      inline bool getUpdated() const { DARABONBA_PTR_GET_DEFAULT(updated_, false) };
      inline Data& setUpdated(bool updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The ID of the database that contains the partition. The name for this metadata layer depends on the data source. For example, it is a Dataset in BigQuery, a Database in Hive, or a Schema in Databricks and MaxCompute.
      shared_ptr<int64_t> dbId_ {};
      // The name of the database. The name for this metadata layer depends on the data source. For example, it is a Dataset in BigQuery, a Database in Hive, or a Schema in Databricks and MaxCompute.
      shared_ptr<string> dbName_ {};
      // The name of the destination MaxCompute project.
      shared_ptr<string> dstProjectName_ {};
      // The name of the destination MaxCompute schema. This parameter is null if the destination MaxCompute project does not use a schema layer.
      shared_ptr<string> dstSchemaName_ {};
      // The name of the destination MaxCompute table.
      shared_ptr<string> dstTableName_ {};
      // The value of the destination MaxCompute partition. By default, this value is the same as the source partition value.
      shared_ptr<string> dstValue_ {};
      // The partition ID.
      shared_ptr<int64_t> id_ {};
      // The time of the last DDL operation.
      shared_ptr<string> lastDdlTime_ {};
      // The number of rows.
      shared_ptr<int64_t> numRows_ {};
      // The data size in bytes.
      shared_ptr<int64_t> size_ {};
      // The data source ID.
      shared_ptr<int64_t> sourceId_ {};
      // The data source name.
      shared_ptr<string> sourceName_ {};
      // The migration status.
      shared_ptr<string> status_ {};
      // The table ID.
      shared_ptr<int64_t> tableId_ {};
      // The table name.
      shared_ptr<string> tableName_ {};
      // Indicates whether the metadata is updated.
      shared_ptr<bool> updated_ {};
      // The partition value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMmsPartitionResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMmsPartitionResponseBody::Data) };
    inline GetMmsPartitionResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMmsPartitionResponseBody::Data) };
    inline GetMmsPartitionResponseBody& setData(const GetMmsPartitionResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMmsPartitionResponseBody& setData(GetMmsPartitionResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMmsPartitionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The partition object.
    shared_ptr<GetMmsPartitionResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
