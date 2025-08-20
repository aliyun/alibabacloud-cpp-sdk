// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETARESPONSEBODYTABLEMETA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADBMYSQLTABLEMETARESPONSEBODYTABLEMETA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeAdbMySqlTableMetaResponseBodyTableMeta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdbMySqlTableMetaResponseBodyTableMeta& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DistributeColumn, distributeColumn_);
      DARABONBA_PTR_TO_JSON(DistributeType, distributeType_);
      DARABONBA_PTR_TO_JSON(IsAllIndex, isAllIndex_);
      DARABONBA_PTR_TO_JSON(IsDictEncode, isDictEncode_);
      DARABONBA_PTR_TO_JSON(IsFullTextDict, isFullTextDict_);
      DARABONBA_PTR_TO_JSON(IsHidden, isHidden_);
      DARABONBA_PTR_TO_JSON(PartitionColumn, partitionColumn_);
      DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyColumn, primaryKeyColumn_);
      DARABONBA_PTR_TO_JSON(TableEngine, tableEngine_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableSchema, tableSchema_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdbMySqlTableMetaResponseBodyTableMeta& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DistributeColumn, distributeColumn_);
      DARABONBA_PTR_FROM_JSON(DistributeType, distributeType_);
      DARABONBA_PTR_FROM_JSON(IsAllIndex, isAllIndex_);
      DARABONBA_PTR_FROM_JSON(IsDictEncode, isDictEncode_);
      DARABONBA_PTR_FROM_JSON(IsFullTextDict, isFullTextDict_);
      DARABONBA_PTR_FROM_JSON(IsHidden, isHidden_);
      DARABONBA_PTR_FROM_JSON(PartitionColumn, partitionColumn_);
      DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyColumn, primaryKeyColumn_);
      DARABONBA_PTR_FROM_JSON(TableEngine, tableEngine_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableSchema, tableSchema_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeAdbMySqlTableMetaResponseBodyTableMeta() = default ;
    DescribeAdbMySqlTableMetaResponseBodyTableMeta(const DescribeAdbMySqlTableMetaResponseBodyTableMeta &) = default ;
    DescribeAdbMySqlTableMetaResponseBodyTableMeta(DescribeAdbMySqlTableMetaResponseBodyTableMeta &&) = default ;
    DescribeAdbMySqlTableMetaResponseBodyTableMeta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdbMySqlTableMetaResponseBodyTableMeta() = default ;
    DescribeAdbMySqlTableMetaResponseBodyTableMeta& operator=(const DescribeAdbMySqlTableMetaResponseBodyTableMeta &) = default ;
    DescribeAdbMySqlTableMetaResponseBodyTableMeta& operator=(DescribeAdbMySqlTableMetaResponseBodyTableMeta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->distributeColumn_ != nullptr && this->distributeType_ != nullptr && this->isAllIndex_ != nullptr && this->isDictEncode_ != nullptr && this->isFullTextDict_ != nullptr
        && this->isHidden_ != nullptr && this->partitionColumn_ != nullptr && this->partitionType_ != nullptr && this->primaryKeyColumn_ != nullptr && this->tableEngine_ != nullptr
        && this->tableName_ != nullptr && this->tableSchema_ != nullptr && this->tableType_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // distributeColumn Field Functions 
    bool hasDistributeColumn() const { return this->distributeColumn_ != nullptr;};
    void deleteDistributeColumn() { this->distributeColumn_ = nullptr;};
    inline string distributeColumn() const { DARABONBA_PTR_GET_DEFAULT(distributeColumn_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setDistributeColumn(string distributeColumn) { DARABONBA_PTR_SET_VALUE(distributeColumn_, distributeColumn) };


    // distributeType Field Functions 
    bool hasDistributeType() const { return this->distributeType_ != nullptr;};
    void deleteDistributeType() { this->distributeType_ = nullptr;};
    inline string distributeType() const { DARABONBA_PTR_GET_DEFAULT(distributeType_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setDistributeType(string distributeType) { DARABONBA_PTR_SET_VALUE(distributeType_, distributeType) };


    // isAllIndex Field Functions 
    bool hasIsAllIndex() const { return this->isAllIndex_ != nullptr;};
    void deleteIsAllIndex() { this->isAllIndex_ = nullptr;};
    inline bool isAllIndex() const { DARABONBA_PTR_GET_DEFAULT(isAllIndex_, false) };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setIsAllIndex(bool isAllIndex) { DARABONBA_PTR_SET_VALUE(isAllIndex_, isAllIndex) };


    // isDictEncode Field Functions 
    bool hasIsDictEncode() const { return this->isDictEncode_ != nullptr;};
    void deleteIsDictEncode() { this->isDictEncode_ = nullptr;};
    inline bool isDictEncode() const { DARABONBA_PTR_GET_DEFAULT(isDictEncode_, false) };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setIsDictEncode(bool isDictEncode) { DARABONBA_PTR_SET_VALUE(isDictEncode_, isDictEncode) };


    // isFullTextDict Field Functions 
    bool hasIsFullTextDict() const { return this->isFullTextDict_ != nullptr;};
    void deleteIsFullTextDict() { this->isFullTextDict_ = nullptr;};
    inline bool isFullTextDict() const { DARABONBA_PTR_GET_DEFAULT(isFullTextDict_, false) };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setIsFullTextDict(bool isFullTextDict) { DARABONBA_PTR_SET_VALUE(isFullTextDict_, isFullTextDict) };


    // isHidden Field Functions 
    bool hasIsHidden() const { return this->isHidden_ != nullptr;};
    void deleteIsHidden() { this->isHidden_ = nullptr;};
    inline bool isHidden() const { DARABONBA_PTR_GET_DEFAULT(isHidden_, false) };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setIsHidden(bool isHidden) { DARABONBA_PTR_SET_VALUE(isHidden_, isHidden) };


    // partitionColumn Field Functions 
    bool hasPartitionColumn() const { return this->partitionColumn_ != nullptr;};
    void deletePartitionColumn() { this->partitionColumn_ = nullptr;};
    inline string partitionColumn() const { DARABONBA_PTR_GET_DEFAULT(partitionColumn_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setPartitionColumn(string partitionColumn) { DARABONBA_PTR_SET_VALUE(partitionColumn_, partitionColumn) };


    // partitionType Field Functions 
    bool hasPartitionType() const { return this->partitionType_ != nullptr;};
    void deletePartitionType() { this->partitionType_ = nullptr;};
    inline string partitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


    // primaryKeyColumn Field Functions 
    bool hasPrimaryKeyColumn() const { return this->primaryKeyColumn_ != nullptr;};
    void deletePrimaryKeyColumn() { this->primaryKeyColumn_ = nullptr;};
    inline string primaryKeyColumn() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyColumn_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setPrimaryKeyColumn(string primaryKeyColumn) { DARABONBA_PTR_SET_VALUE(primaryKeyColumn_, primaryKeyColumn) };


    // tableEngine Field Functions 
    bool hasTableEngine() const { return this->tableEngine_ != nullptr;};
    void deleteTableEngine() { this->tableEngine_ = nullptr;};
    inline string tableEngine() const { DARABONBA_PTR_GET_DEFAULT(tableEngine_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setTableEngine(string tableEngine) { DARABONBA_PTR_SET_VALUE(tableEngine_, tableEngine) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableSchema Field Functions 
    bool hasTableSchema() const { return this->tableSchema_ != nullptr;};
    void deleteTableSchema() { this->tableSchema_ = nullptr;};
    inline string tableSchema() const { DARABONBA_PTR_GET_DEFAULT(tableSchema_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setTableSchema(string tableSchema) { DARABONBA_PTR_SET_VALUE(tableSchema_, tableSchema) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeAdbMySqlTableMetaResponseBodyTableMeta& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The time when the table was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The distribution key column.
    std::shared_ptr<string> distributeColumn_ = nullptr;
    // The distribution type.
    std::shared_ptr<string> distributeType_ = nullptr;
    // Indicates whether full-column indexes are used.
    std::shared_ptr<bool> isAllIndex_ = nullptr;
    // Indicates whether dictionary encoding is used.
    std::shared_ptr<bool> isDictEncode_ = nullptr;
    // Indicates whether full-text indexes are used.
    std::shared_ptr<bool> isFullTextDict_ = nullptr;
    // Indicates whether pages are hidden.
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> isHidden_ = nullptr;
    // The partition key column.
    std::shared_ptr<string> partitionColumn_ = nullptr;
    // The type of the partition.
    std::shared_ptr<string> partitionType_ = nullptr;
    // The primary key column.
    std::shared_ptr<string> primaryKeyColumn_ = nullptr;
    // The table engine.
    std::shared_ptr<string> tableEngine_ = nullptr;
    // The name of the table.
    // 
    // **
    // 
    // ****
    std::shared_ptr<string> tableName_ = nullptr;
    // The database to which the table belongs.
    std::shared_ptr<string> tableSchema_ = nullptr;
    // The type of the table.
    std::shared_ptr<string> tableType_ = nullptr;
    // The time when the table was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
