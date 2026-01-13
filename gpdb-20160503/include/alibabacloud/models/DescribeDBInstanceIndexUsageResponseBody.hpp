// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEINDEXUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEINDEXUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceIndexUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIndexUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIndexUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDBInstanceIndexUsageResponseBody() = default ;
    DescribeDBInstanceIndexUsageResponseBody(const DescribeDBInstanceIndexUsageResponseBody &) = default ;
    DescribeDBInstanceIndexUsageResponseBody(DescribeDBInstanceIndexUsageResponseBody &&) = default ;
    DescribeDBInstanceIndexUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIndexUsageResponseBody() = default ;
    DescribeDBInstanceIndexUsageResponseBody& operator=(const DescribeDBInstanceIndexUsageResponseBody &) = default ;
    DescribeDBInstanceIndexUsageResponseBody& operator=(DescribeDBInstanceIndexUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_TO_JSON(IndexDef, indexDef_);
        DARABONBA_PTR_TO_JSON(IndexName, indexName_);
        DARABONBA_PTR_TO_JSON(IndexScanTimes, indexScanTimes_);
        DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
        DARABONBA_PTR_TO_JSON(IsPartitionTable, isPartitionTable_);
        DARABONBA_PTR_TO_JSON(ParentTableName, parentTableName_);
        DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(TimeLastUpdated, timeLastUpdated_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
        DARABONBA_PTR_FROM_JSON(IndexDef, indexDef_);
        DARABONBA_PTR_FROM_JSON(IndexName, indexName_);
        DARABONBA_PTR_FROM_JSON(IndexScanTimes, indexScanTimes_);
        DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
        DARABONBA_PTR_FROM_JSON(IsPartitionTable, isPartitionTable_);
        DARABONBA_PTR_FROM_JSON(ParentTableName, parentTableName_);
        DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(TimeLastUpdated, timeLastUpdated_);
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
      virtual bool empty() const override { return this->databaseName_ == nullptr
        && this->indexDef_ == nullptr && this->indexName_ == nullptr && this->indexScanTimes_ == nullptr && this->indexSize_ == nullptr && this->isPartitionTable_ == nullptr
        && this->parentTableName_ == nullptr && this->schemaName_ == nullptr && this->tableName_ == nullptr && this->timeLastUpdated_ == nullptr; };
      // databaseName Field Functions 
      bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
      void deleteDatabaseName() { this->databaseName_ = nullptr;};
      inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
      inline Items& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


      // indexDef Field Functions 
      bool hasIndexDef() const { return this->indexDef_ != nullptr;};
      void deleteIndexDef() { this->indexDef_ = nullptr;};
      inline string getIndexDef() const { DARABONBA_PTR_GET_DEFAULT(indexDef_, "") };
      inline Items& setIndexDef(string indexDef) { DARABONBA_PTR_SET_VALUE(indexDef_, indexDef) };


      // indexName Field Functions 
      bool hasIndexName() const { return this->indexName_ != nullptr;};
      void deleteIndexName() { this->indexName_ = nullptr;};
      inline string getIndexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
      inline Items& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


      // indexScanTimes Field Functions 
      bool hasIndexScanTimes() const { return this->indexScanTimes_ != nullptr;};
      void deleteIndexScanTimes() { this->indexScanTimes_ = nullptr;};
      inline int64_t getIndexScanTimes() const { DARABONBA_PTR_GET_DEFAULT(indexScanTimes_, 0L) };
      inline Items& setIndexScanTimes(int64_t indexScanTimes) { DARABONBA_PTR_SET_VALUE(indexScanTimes_, indexScanTimes) };


      // indexSize Field Functions 
      bool hasIndexSize() const { return this->indexSize_ != nullptr;};
      void deleteIndexSize() { this->indexSize_ = nullptr;};
      inline string getIndexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, "") };
      inline Items& setIndexSize(string indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


      // isPartitionTable Field Functions 
      bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
      void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
      inline bool getIsPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
      inline Items& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


      // parentTableName Field Functions 
      bool hasParentTableName() const { return this->parentTableName_ != nullptr;};
      void deleteParentTableName() { this->parentTableName_ = nullptr;};
      inline string getParentTableName() const { DARABONBA_PTR_GET_DEFAULT(parentTableName_, "") };
      inline Items& setParentTableName(string parentTableName) { DARABONBA_PTR_SET_VALUE(parentTableName_, parentTableName) };


      // schemaName Field Functions 
      bool hasSchemaName() const { return this->schemaName_ != nullptr;};
      void deleteSchemaName() { this->schemaName_ = nullptr;};
      inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
      inline Items& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Items& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // timeLastUpdated Field Functions 
      bool hasTimeLastUpdated() const { return this->timeLastUpdated_ != nullptr;};
      void deleteTimeLastUpdated() { this->timeLastUpdated_ = nullptr;};
      inline string getTimeLastUpdated() const { DARABONBA_PTR_GET_DEFAULT(timeLastUpdated_, "") };
      inline Items& setTimeLastUpdated(string timeLastUpdated) { DARABONBA_PTR_SET_VALUE(timeLastUpdated_, timeLastUpdated) };


    protected:
      // The name of the database.
      shared_ptr<string> databaseName_ {};
      // The definition of the index.
      shared_ptr<string> indexDef_ {};
      // The name of the index.
      shared_ptr<string> indexName_ {};
      // The number of index scans.
      shared_ptr<int64_t> indexScanTimes_ {};
      // The size of the index. Unit: bytes.
      shared_ptr<string> indexSize_ {};
      // Indicates whether the table is a partitioned table. Valid values:
      // 
      // *   **true**: The table is a partitioned table.
      // *   **false**: The table is not a partitioned table.
      shared_ptr<bool> isPartitionTable_ {};
      // The name of the parent table.
      shared_ptr<string> parentTableName_ {};
      // The name of the schema.
      shared_ptr<string> schemaName_ {};
      // The name of the table.
      shared_ptr<string> tableName_ {};
      // The time when the table was last deleted, inserted, or updated.
      shared_ptr<string> timeLastUpdated_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeDBInstanceIndexUsageResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeDBInstanceIndexUsageResponseBody::Items>) };
    inline vector<DescribeDBInstanceIndexUsageResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeDBInstanceIndexUsageResponseBody::Items>) };
    inline DescribeDBInstanceIndexUsageResponseBody& setItems(const vector<DescribeDBInstanceIndexUsageResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeDBInstanceIndexUsageResponseBody& setItems(vector<DescribeDBInstanceIndexUsageResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDBInstanceIndexUsageResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceIndexUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDBInstanceIndexUsageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried index usage.
    shared_ptr<vector<DescribeDBInstanceIndexUsageResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
