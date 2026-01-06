// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLEPARTITIONDIAGNOSERESPONSEBODY_HPP_
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
  class DescribeTablePartitionDiagnoseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTablePartitionDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuggestMaxRecordsPerPartition, suggestMaxRecordsPerPartition_);
      DARABONBA_PTR_TO_JSON(SuggestMinRecordsPerPartition, suggestMinRecordsPerPartition_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTablePartitionDiagnoseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(DetectionItems, detectionItems_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuggestMaxRecordsPerPartition, suggestMaxRecordsPerPartition_);
      DARABONBA_PTR_FROM_JSON(SuggestMinRecordsPerPartition, suggestMinRecordsPerPartition_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeTablePartitionDiagnoseResponseBody() = default ;
    DescribeTablePartitionDiagnoseResponseBody(const DescribeTablePartitionDiagnoseResponseBody &) = default ;
    DescribeTablePartitionDiagnoseResponseBody(DescribeTablePartitionDiagnoseResponseBody &&) = default ;
    DescribeTablePartitionDiagnoseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTablePartitionDiagnoseResponseBody() = default ;
    DescribeTablePartitionDiagnoseResponseBody& operator=(const DescribeTablePartitionDiagnoseResponseBody &) = default ;
    DescribeTablePartitionDiagnoseResponseBody& operator=(DescribeTablePartitionDiagnoseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(PartitionDetail, partitionDetail_);
        DARABONBA_PTR_TO_JSON(PartitionNumber, partitionNumber_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(PartitionDetail, partitionDetail_);
        DARABONBA_PTR_FROM_JSON(PartitionNumber, partitionNumber_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->partitionDetail_ == nullptr
        && this->partitionNumber_ == nullptr && this->schemaName_ == nullptr && this->spaceRatio_ == nullptr && this->tableName_ == nullptr && this->totalSize_ == nullptr; };
      // partitionDetail Field Functions 
      bool hasPartitionDetail() const { return this->partitionDetail_ != nullptr;};
      void deletePartitionDetail() { this->partitionDetail_ = nullptr;};
      inline string getPartitionDetail() const { DARABONBA_PTR_GET_DEFAULT(partitionDetail_, "") };
      inline Items& setPartitionDetail(string partitionDetail) { DARABONBA_PTR_SET_VALUE(partitionDetail_, partitionDetail) };


      // partitionNumber Field Functions 
      bool hasPartitionNumber() const { return this->partitionNumber_ != nullptr;};
      void deletePartitionNumber() { this->partitionNumber_ = nullptr;};
      inline int32_t getPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(partitionNumber_, 0) };
      inline Items& setPartitionNumber(int32_t partitionNumber) { DARABONBA_PTR_SET_VALUE(partitionNumber_, partitionNumber) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Items& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // spaceRatio Field Functions 
      bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
      void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
      inline double getSpaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
      inline Items& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Items& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The improper partitions.
      shared_ptr<string> partitionDetail_ {};
      // The number of partitions.
      shared_ptr<int32_t> partitionNumber_ {};
      // The name of the database.
      shared_ptr<string> schemaName_ {};
      // The storage percentage of the table. Unit: %.
      // 
      // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
      shared_ptr<double> spaceRatio_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The total data size of the table. Unit: bytes.
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
      // The severity level of the detection result. Valid values:
      // 
      // *   NORMAL
      // *   WARNING
      // *   CRITICAL
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->DBClusterId_ == nullptr && this->detectionItems_ == nullptr && this->items_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->requestId_ == nullptr && this->suggestMaxRecordsPerPartition_ == nullptr && this->suggestMinRecordsPerPartition_ == nullptr && this->totalCount_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline DescribeTablePartitionDiagnoseResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeTablePartitionDiagnoseResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // detectionItems Field Functions 
    bool hasDetectionItems() const { return this->detectionItems_ != nullptr;};
    void deleteDetectionItems() { this->detectionItems_ = nullptr;};
    inline const vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems> & getDetectionItems() const { DARABONBA_PTR_GET_CONST(detectionItems_, vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems>) };
    inline vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems> getDetectionItems() { DARABONBA_PTR_GET(detectionItems_, vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems>) };
    inline DescribeTablePartitionDiagnoseResponseBody& setDetectionItems(const vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems> & detectionItems) { DARABONBA_PTR_SET_VALUE(detectionItems_, detectionItems) };
    inline DescribeTablePartitionDiagnoseResponseBody& setDetectionItems(vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems> && detectionItems) { DARABONBA_PTR_SET_RVALUE(detectionItems_, detectionItems) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeTablePartitionDiagnoseResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeTablePartitionDiagnoseResponseBody::Items>) };
    inline vector<DescribeTablePartitionDiagnoseResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeTablePartitionDiagnoseResponseBody::Items>) };
    inline DescribeTablePartitionDiagnoseResponseBody& setItems(const vector<DescribeTablePartitionDiagnoseResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeTablePartitionDiagnoseResponseBody& setItems(vector<DescribeTablePartitionDiagnoseResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTablePartitionDiagnoseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suggestMaxRecordsPerPartition Field Functions 
    bool hasSuggestMaxRecordsPerPartition() const { return this->suggestMaxRecordsPerPartition_ != nullptr;};
    void deleteSuggestMaxRecordsPerPartition() { this->suggestMaxRecordsPerPartition_ = nullptr;};
    inline int64_t getSuggestMaxRecordsPerPartition() const { DARABONBA_PTR_GET_DEFAULT(suggestMaxRecordsPerPartition_, 0L) };
    inline DescribeTablePartitionDiagnoseResponseBody& setSuggestMaxRecordsPerPartition(int64_t suggestMaxRecordsPerPartition) { DARABONBA_PTR_SET_VALUE(suggestMaxRecordsPerPartition_, suggestMaxRecordsPerPartition) };


    // suggestMinRecordsPerPartition Field Functions 
    bool hasSuggestMinRecordsPerPartition() const { return this->suggestMinRecordsPerPartition_ != nullptr;};
    void deleteSuggestMinRecordsPerPartition() { this->suggestMinRecordsPerPartition_ = nullptr;};
    inline int64_t getSuggestMinRecordsPerPartition() const { DARABONBA_PTR_GET_DEFAULT(suggestMinRecordsPerPartition_, 0L) };
    inline DescribeTablePartitionDiagnoseResponseBody& setSuggestMinRecordsPerPartition(int64_t suggestMinRecordsPerPartition) { DARABONBA_PTR_SET_VALUE(suggestMinRecordsPerPartition_, suggestMinRecordsPerPartition) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeTablePartitionDiagnoseResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the request denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried detection items and detection results.
    shared_ptr<vector<DescribeTablePartitionDiagnoseResponseBody::DetectionItems>> detectionItems_ {};
    // The queried partition diagnostic information.
    shared_ptr<vector<DescribeTablePartitionDiagnoseResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The recommended maximum number of rows in each partition.
    shared_ptr<int64_t> suggestMaxRecordsPerPartition_ {};
    // The recommended minimum number of rows in each partition.
    shared_ptr<int64_t> suggestMinRecordsPerPartition_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
