// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOVERSIZENONPARTITIONTABLEINFOSRESPONSEBODYTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOVERSIZENONPARTITIONTABLEINFOSRESPONSEBODYTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeOversizeNonPartitionTableInfosResponseBodyTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOversizeNonPartitionTableInfosResponseBodyTables& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeOversizeNonPartitionTableInfosResponseBodyTables& obj) { 
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
    DescribeOversizeNonPartitionTableInfosResponseBodyTables() = default ;
    DescribeOversizeNonPartitionTableInfosResponseBodyTables(const DescribeOversizeNonPartitionTableInfosResponseBodyTables &) = default ;
    DescribeOversizeNonPartitionTableInfosResponseBodyTables(DescribeOversizeNonPartitionTableInfosResponseBodyTables &&) = default ;
    DescribeOversizeNonPartitionTableInfosResponseBodyTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOversizeNonPartitionTableInfosResponseBodyTables() = default ;
    DescribeOversizeNonPartitionTableInfosResponseBodyTables& operator=(const DescribeOversizeNonPartitionTableInfosResponseBodyTables &) = default ;
    DescribeOversizeNonPartitionTableInfosResponseBodyTables& operator=(DescribeOversizeNonPartitionTableInfosResponseBodyTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSize_ != nullptr
        && this->indexSize_ != nullptr && this->localDataSize_ != nullptr && this->primaryKeySize_ != nullptr && this->remoteDataSize_ != nullptr && this->rowCount_ != nullptr
        && this->schemaName_ != nullptr && this->spaceRatio_ != nullptr && this->tableName_ != nullptr; };
    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // localDataSize Field Functions 
    bool hasLocalDataSize() const { return this->localDataSize_ != nullptr;};
    void deleteLocalDataSize() { this->localDataSize_ = nullptr;};
    inline int64_t localDataSize() const { DARABONBA_PTR_GET_DEFAULT(localDataSize_, 0L) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setLocalDataSize(int64_t localDataSize) { DARABONBA_PTR_SET_VALUE(localDataSize_, localDataSize) };


    // primaryKeySize Field Functions 
    bool hasPrimaryKeySize() const { return this->primaryKeySize_ != nullptr;};
    void deletePrimaryKeySize() { this->primaryKeySize_ = nullptr;};
    inline int64_t primaryKeySize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeySize_, 0L) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setPrimaryKeySize(int64_t primaryKeySize) { DARABONBA_PTR_SET_VALUE(primaryKeySize_, primaryKeySize) };


    // remoteDataSize Field Functions 
    bool hasRemoteDataSize() const { return this->remoteDataSize_ != nullptr;};
    void deleteRemoteDataSize() { this->remoteDataSize_ = nullptr;};
    inline int64_t remoteDataSize() const { DARABONBA_PTR_GET_DEFAULT(remoteDataSize_, 0L) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setRemoteDataSize(int64_t remoteDataSize) { DARABONBA_PTR_SET_VALUE(remoteDataSize_, remoteDataSize) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // spaceRatio Field Functions 
    bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
    void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
    inline double spaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeOversizeNonPartitionTableInfosResponseBodyTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The data size of the table. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The data size of regular indexes. Unit: bytes.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The size of hot data. Unit: bytes.
    std::shared_ptr<int64_t> localDataSize_ = nullptr;
    // The data size of the primary key index. Unit: bytes.
    std::shared_ptr<int64_t> primaryKeySize_ = nullptr;
    // The size of cold data. Unit: bytes.
    std::shared_ptr<int64_t> remoteDataSize_ = nullptr;
    // The number of rows in the table.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The percentage of the table size. Unit: %.
    // 
    // >  Formula: Table storage percentage = Total data size of a table/Total data size of the cluster × 100%.
    std::shared_ptr<double> spaceRatio_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
