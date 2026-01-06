// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXCESSIVEPRIMARYKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXCESSIVEPRIMARYKEYSRESPONSEBODY_HPP_
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
  class DescribeExcessivePrimaryKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExcessivePrimaryKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExcessivePrimaryKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeExcessivePrimaryKeysResponseBody() = default ;
    DescribeExcessivePrimaryKeysResponseBody(const DescribeExcessivePrimaryKeysResponseBody &) = default ;
    DescribeExcessivePrimaryKeysResponseBody(DescribeExcessivePrimaryKeysResponseBody &&) = default ;
    DescribeExcessivePrimaryKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExcessivePrimaryKeysResponseBody() = default ;
    DescribeExcessivePrimaryKeysResponseBody& operator=(const DescribeExcessivePrimaryKeysResponseBody &) = default ;
    DescribeExcessivePrimaryKeysResponseBody& operator=(DescribeExcessivePrimaryKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tables : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tables& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnCount, columnCount_);
        DARABONBA_PTR_TO_JSON(PrimaryKeyColumns, primaryKeyColumns_);
        DARABONBA_PTR_TO_JSON(PrimaryKeyCount, primaryKeyCount_);
        DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Tables& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnCount, columnCount_);
        DARABONBA_PTR_FROM_JSON(PrimaryKeyColumns, primaryKeyColumns_);
        DARABONBA_PTR_FROM_JSON(PrimaryKeyCount, primaryKeyCount_);
        DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      virtual bool empty() const override { return this->columnCount_ == nullptr
        && this->primaryKeyColumns_ == nullptr && this->primaryKeyCount_ == nullptr && this->primaryKeyIndexSize_ == nullptr && this->schemaName_ == nullptr && this->spaceRatio_ == nullptr
        && this->tableName_ == nullptr && this->totalSize_ == nullptr; };
      // columnCount Field Functions 
      bool hasColumnCount() const { return this->columnCount_ != nullptr;};
      void deleteColumnCount() { this->columnCount_ = nullptr;};
      inline int32_t getColumnCount() const { DARABONBA_PTR_GET_DEFAULT(columnCount_, 0) };
      inline Tables& setColumnCount(int32_t columnCount) { DARABONBA_PTR_SET_VALUE(columnCount_, columnCount) };


      // primaryKeyColumns Field Functions 
      bool hasPrimaryKeyColumns() const { return this->primaryKeyColumns_ != nullptr;};
      void deletePrimaryKeyColumns() { this->primaryKeyColumns_ = nullptr;};
      inline string getPrimaryKeyColumns() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyColumns_, "") };
      inline Tables& setPrimaryKeyColumns(string primaryKeyColumns) { DARABONBA_PTR_SET_VALUE(primaryKeyColumns_, primaryKeyColumns) };


      // primaryKeyCount Field Functions 
      bool hasPrimaryKeyCount() const { return this->primaryKeyCount_ != nullptr;};
      void deletePrimaryKeyCount() { this->primaryKeyCount_ = nullptr;};
      inline int32_t getPrimaryKeyCount() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyCount_, 0) };
      inline Tables& setPrimaryKeyCount(int32_t primaryKeyCount) { DARABONBA_PTR_SET_VALUE(primaryKeyCount_, primaryKeyCount) };


      // primaryKeyIndexSize Field Functions 
      bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
      void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
      inline int64_t getPrimaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
      inline Tables& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


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


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Tables& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The total number of columns.
      shared_ptr<int32_t> columnCount_ {};
      // The queried primary key fields.
      shared_ptr<string> primaryKeyColumns_ {};
      // The number of primary key fields.
      shared_ptr<int32_t> primaryKeyCount_ {};
      // The data size of primary key indexes. Unit: bytes.
      shared_ptr<int64_t> primaryKeyIndexSize_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The percentage of the table size. Unit: %.
      // 
      // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
      shared_ptr<double> spaceRatio_ {};
      // The name of the table
      shared_ptr<string> tableName_ {};
      // The cold data size. Unit: bytes.
      // 
      // >  Formula: Cold data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
      shared_ptr<int64_t> totalSize_ {};
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
      // The detection result.
      shared_ptr<string> message_ {};
      // The name of the detection item.
      shared_ptr<string> name_ {};
      // The severity level of the detection result.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->DBClusterId_ == nullptr && this->detectionItems_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->tables_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems>) };
    inline vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems>) };
    inline DescribeExcessivePrimaryKeysResponseBody& setDetectionItems(const vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeExcessivePrimaryKeysResponseBody& setDetectionItems(vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeExcessivePrimaryKeysResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeExcessivePrimaryKeysResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<DescribeExcessivePrimaryKeysResponseBody::Tables> & getTables() const { DARABONBA_PTR_GET_CONST(tables_, vector<DescribeExcessivePrimaryKeysResponseBody::Tables>) };
    inline vector<DescribeExcessivePrimaryKeysResponseBody::Tables> getTables() { DARABONBA_PTR_GET(tables_, vector<DescribeExcessivePrimaryKeysResponseBody::Tables>) };
    inline DescribeExcessivePrimaryKeysResponseBody& setTables(const vector<DescribeExcessivePrimaryKeysResponseBody::Tables> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline DescribeExcessivePrimaryKeysResponseBody& setTables(vector<DescribeExcessivePrimaryKeysResponseBody::Tables> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeExcessivePrimaryKeysResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeExcessivePrimaryKeysResponseBody::DetectionItems>> detectionItems_ {};
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
    // The queried tables that have excessive primary key fields.
    shared_ptr<vector<DescribeExcessivePrimaryKeysResponseBody::Tables>> tables_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
