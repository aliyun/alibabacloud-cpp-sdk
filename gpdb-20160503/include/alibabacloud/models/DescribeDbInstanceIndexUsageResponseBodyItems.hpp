// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEINDEXUSAGERESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEINDEXUSAGERESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceIndexUsageResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceIndexUsageResponseBodyItems& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceIndexUsageResponseBodyItems& obj) { 
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
    DescribeDBInstanceIndexUsageResponseBodyItems() = default ;
    DescribeDBInstanceIndexUsageResponseBodyItems(const DescribeDBInstanceIndexUsageResponseBodyItems &) = default ;
    DescribeDBInstanceIndexUsageResponseBodyItems(DescribeDBInstanceIndexUsageResponseBodyItems &&) = default ;
    DescribeDBInstanceIndexUsageResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceIndexUsageResponseBodyItems() = default ;
    DescribeDBInstanceIndexUsageResponseBodyItems& operator=(const DescribeDBInstanceIndexUsageResponseBodyItems &) = default ;
    DescribeDBInstanceIndexUsageResponseBodyItems& operator=(DescribeDBInstanceIndexUsageResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->databaseName_ == nullptr
        && return this->indexDef_ == nullptr && return this->indexName_ == nullptr && return this->indexScanTimes_ == nullptr && return this->indexSize_ == nullptr && return this->isPartitionTable_ == nullptr
        && return this->parentTableName_ == nullptr && return this->schemaName_ == nullptr && return this->tableName_ == nullptr && return this->timeLastUpdated_ == nullptr; };
    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // indexDef Field Functions 
    bool hasIndexDef() const { return this->indexDef_ != nullptr;};
    void deleteIndexDef() { this->indexDef_ = nullptr;};
    inline string indexDef() const { DARABONBA_PTR_GET_DEFAULT(indexDef_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setIndexDef(string indexDef) { DARABONBA_PTR_SET_VALUE(indexDef_, indexDef) };


    // indexName Field Functions 
    bool hasIndexName() const { return this->indexName_ != nullptr;};
    void deleteIndexName() { this->indexName_ = nullptr;};
    inline string indexName() const { DARABONBA_PTR_GET_DEFAULT(indexName_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setIndexName(string indexName) { DARABONBA_PTR_SET_VALUE(indexName_, indexName) };


    // indexScanTimes Field Functions 
    bool hasIndexScanTimes() const { return this->indexScanTimes_ != nullptr;};
    void deleteIndexScanTimes() { this->indexScanTimes_ = nullptr;};
    inline int64_t indexScanTimes() const { DARABONBA_PTR_GET_DEFAULT(indexScanTimes_, 0L) };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setIndexScanTimes(int64_t indexScanTimes) { DARABONBA_PTR_SET_VALUE(indexScanTimes_, indexScanTimes) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline string indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setIndexSize(string indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // isPartitionTable Field Functions 
    bool hasIsPartitionTable() const { return this->isPartitionTable_ != nullptr;};
    void deleteIsPartitionTable() { this->isPartitionTable_ = nullptr;};
    inline bool isPartitionTable() const { DARABONBA_PTR_GET_DEFAULT(isPartitionTable_, false) };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setIsPartitionTable(bool isPartitionTable) { DARABONBA_PTR_SET_VALUE(isPartitionTable_, isPartitionTable) };


    // parentTableName Field Functions 
    bool hasParentTableName() const { return this->parentTableName_ != nullptr;};
    void deleteParentTableName() { this->parentTableName_ = nullptr;};
    inline string parentTableName() const { DARABONBA_PTR_GET_DEFAULT(parentTableName_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setParentTableName(string parentTableName) { DARABONBA_PTR_SET_VALUE(parentTableName_, parentTableName) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // timeLastUpdated Field Functions 
    bool hasTimeLastUpdated() const { return this->timeLastUpdated_ != nullptr;};
    void deleteTimeLastUpdated() { this->timeLastUpdated_ = nullptr;};
    inline string timeLastUpdated() const { DARABONBA_PTR_GET_DEFAULT(timeLastUpdated_, "") };
    inline DescribeDBInstanceIndexUsageResponseBodyItems& setTimeLastUpdated(string timeLastUpdated) { DARABONBA_PTR_SET_VALUE(timeLastUpdated_, timeLastUpdated) };


  protected:
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The definition of the index.
    std::shared_ptr<string> indexDef_ = nullptr;
    // The name of the index.
    std::shared_ptr<string> indexName_ = nullptr;
    // The number of index scans.
    std::shared_ptr<int64_t> indexScanTimes_ = nullptr;
    // The size of the index. Unit: bytes.
    std::shared_ptr<string> indexSize_ = nullptr;
    // Indicates whether the table is a partitioned table. Valid values:
    // 
    // *   **true**: The table is a partitioned table.
    // *   **false**: The table is not a partitioned table.
    std::shared_ptr<bool> isPartitionTable_ = nullptr;
    // The name of the parent table.
    std::shared_ptr<string> parentTableName_ = nullptr;
    // The name of the schema.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The time when the table was last deleted, inserted, or updated.
    std::shared_ptr<string> timeLastUpdated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
