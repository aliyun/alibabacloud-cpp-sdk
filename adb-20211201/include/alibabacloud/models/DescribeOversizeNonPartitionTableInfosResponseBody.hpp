// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOVERSIZENONPARTITIONTABLEINFOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOVERSIZENONPARTITIONTABLEINFOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeOversizeNonPartitionTableInfosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOversizeNonPartitionTableInfosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOversizeNonPartitionTableInfosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOversizeNonPartitionTableInfosResponseBody() = default ;
    DescribeOversizeNonPartitionTableInfosResponseBody(const DescribeOversizeNonPartitionTableInfosResponseBody &) = default ;
    DescribeOversizeNonPartitionTableInfosResponseBody(DescribeOversizeNonPartitionTableInfosResponseBody &&) = default ;
    DescribeOversizeNonPartitionTableInfosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOversizeNonPartitionTableInfosResponseBody() = default ;
    DescribeOversizeNonPartitionTableInfosResponseBody& operator=(const DescribeOversizeNonPartitionTableInfosResponseBody &) = default ;
    DescribeOversizeNonPartitionTableInfosResponseBody& operator=(DescribeOversizeNonPartitionTableInfosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
        DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
        DARABONBA_PTR_TO_JSON(LocalDataSize, localDataSize_);
        DARABONBA_PTR_TO_JSON(PrimaryKeySize, primaryKeySize_);
        DARABONBA_PTR_TO_JSON(RemoteDataSize, remoteDataSize_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
        DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
        DARABONBA_PTR_FROM_JSON(LocalDataSize, localDataSize_);
        DARABONBA_PTR_FROM_JSON(PrimaryKeySize, primaryKeySize_);
        DARABONBA_PTR_FROM_JSON(RemoteDataSize, remoteDataSize_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      Tables() = default ;
      Tables(const Tables &) = default ;
      Tables(Tables &&) = default ;
      Tables(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tables() = default ;
      Tables& operator=(const Tables &) = default ;
      Tables& operator=(Tables &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dataSize_ == nullptr
        && this->indexSize_ == nullptr && this->localDataSize_ == nullptr && this->primaryKeySize_ == nullptr && this->remoteDataSize_ == nullptr && this->rowCount_ == nullptr
        && this->schemaName_ == nullptr && this->spaceRatio_ == nullptr && this->tableName_ == nullptr; };
      // dataSize Field Functions 
      bool hasDataSize() const { return this->dataSize_ != nullptr;};
      void deleteDataSize() { this->dataSize_ = nullptr;};
      inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
      inline Tables& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


      // indexSize Field Functions 
      bool hasIndexSize() const { return this->indexSize_ != nullptr;};
      void deleteIndexSize() { this->indexSize_ = nullptr;};
      inline int64_t getIndexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
      inline Tables& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


      // localDataSize Field Functions 
      bool hasLocalDataSize() const { return this->localDataSize_ != nullptr;};
      void deleteLocalDataSize() { this->localDataSize_ = nullptr;};
      inline int64_t getLocalDataSize() const { DARABONBA_PTR_GET_DEFAULT(localDataSize_, 0L) };
      inline Tables& setLocalDataSize(int64_t localDataSize) { DARABONBA_PTR_SET_VALUE(localDataSize_, localDataSize) };


      // primaryKeySize Field Functions 
      bool hasPrimaryKeySize() const { return this->primaryKeySize_ != nullptr;};
      void deletePrimaryKeySize() { this->primaryKeySize_ = nullptr;};
      inline int64_t getPrimaryKeySize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeySize_, 0L) };
      inline Tables& setPrimaryKeySize(int64_t primaryKeySize) { DARABONBA_PTR_SET_VALUE(primaryKeySize_, primaryKeySize) };


      // remoteDataSize Field Functions 
      bool hasRemoteDataSize() const { return this->remoteDataSize_ != nullptr;};
      void deleteRemoteDataSize() { this->remoteDataSize_ = nullptr;};
      inline int64_t getRemoteDataSize() const { DARABONBA_PTR_GET_DEFAULT(remoteDataSize_, 0L) };
      inline Tables& setRemoteDataSize(int64_t remoteDataSize) { DARABONBA_PTR_SET_VALUE(remoteDataSize_, remoteDataSize) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
      inline Tables& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Tables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // spaceRatio Field Functions 
      bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
      void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
      inline double getSpaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
      inline Tables& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Tables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The data size of the table. Unit: bytes.
      shared_ptr<int64_t> dataSize_ {};
      // The data size of regular indexes. Unit: bytes.
      shared_ptr<int64_t> indexSize_ {};
      // The size of hot data. Unit: bytes.
      shared_ptr<int64_t> localDataSize_ {};
      // The data size of the primary key index. Unit: bytes.
      shared_ptr<int64_t> primaryKeySize_ {};
      // The size of cold data. Unit: bytes.
      shared_ptr<int64_t> remoteDataSize_ {};
      // The number of rows in the table.
      shared_ptr<int64_t> rowCount_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The percentage of the table size. Unit: %.
      // 
      // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
      shared_ptr<double> spaceRatio_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
    };

    class DetectionItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DetectionItems& obj) { 
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, DetectionItems& obj) { 
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      DetectionItems() = default ;
      DetectionItems(const DetectionItems &) = default ;
      DetectionItems(DetectionItems &&) = default ;
      DetectionItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DetectionItems() = default ;
      DetectionItems& operator=(const DetectionItems &) = default ;
      DetectionItems& operator=(DetectionItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->message_ == nullptr
        && this->name_ == nullptr && this->status_ == nullptr; };
      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline DetectionItems& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline DetectionItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline DetectionItems& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The information about the detection result.
      shared_ptr<string> message_ {};
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The severity level of the detection result.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->detectionItems_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tables_ == nullptr
        && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems>) };
    inline vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems>) };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setDetectionItems(const vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setDetectionItems(vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables>) };
    inline vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables>) };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setTables(const vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setTables(vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeOversizeNonPartitionTableInfosResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeOversizeNonPartitionTableInfosResponseBody::DetectionItems>> detectionItems_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried oversized non-partitioned tables.
    shared_ptr<vector<DescribeOversizeNonPartitionTableInfosResponseBody::Tables>> tables_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
