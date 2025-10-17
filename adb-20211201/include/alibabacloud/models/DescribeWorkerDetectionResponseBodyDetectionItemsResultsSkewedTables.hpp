// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSSKEWEDTABLES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWORKERDETECTIONRESPONSEBODYDETECTIONITEMSRESULTSSKEWEDTABLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& obj) { 
      DARABONBA_PTR_TO_JSON(DDL, DDL_);
      DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(ShardSkewedRows, shardSkewedRows_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalLocalDataSize, totalLocalDataSize_);
      DARABONBA_PTR_TO_JSON(TotalPkSize, totalPkSize_);
      DARABONBA_PTR_TO_JSON(TotalRemoteDataSize, totalRemoteDataSize_);
      DARABONBA_PTR_TO_JSON(TotalRowCount, totalRowCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& obj) { 
      DARABONBA_PTR_FROM_JSON(DDL, DDL_);
      DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(ShardSkewedRows, shardSkewedRows_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalDataSize, totalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalLocalDataSize, totalLocalDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalPkSize, totalPkSize_);
      DARABONBA_PTR_FROM_JSON(TotalRemoteDataSize, totalRemoteDataSize_);
      DARABONBA_PTR_FROM_JSON(TotalRowCount, totalRowCount_);
    };
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables(DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables &&) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables() = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& operator=(const DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables &) = default ;
    DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& operator=(DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DDL_ == nullptr
        && return this->partitionCount_ == nullptr && return this->schemaName_ == nullptr && return this->shardSkewedRows_ == nullptr && return this->tableName_ == nullptr && return this->totalDataSize_ == nullptr
        && return this->totalLocalDataSize_ == nullptr && return this->totalPkSize_ == nullptr && return this->totalRemoteDataSize_ == nullptr && return this->totalRowCount_ == nullptr; };
    // DDL Field Functions 
    bool hasDDL() const { return this->DDL_ != nullptr;};
    void deleteDDL() { this->DDL_ = nullptr;};
    inline string DDL() const { DARABONBA_PTR_GET_DEFAULT(DDL_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setDDL(string DDL) { DARABONBA_PTR_SET_VALUE(DDL_, DDL) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int32_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setPartitionCount(int32_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // shardSkewedRows Field Functions 
    bool hasShardSkewedRows() const { return this->shardSkewedRows_ != nullptr;};
    void deleteShardSkewedRows() { this->shardSkewedRows_ = nullptr;};
    inline string shardSkewedRows() const { DARABONBA_PTR_GET_DEFAULT(shardSkewedRows_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setShardSkewedRows(string shardSkewedRows) { DARABONBA_PTR_SET_VALUE(shardSkewedRows_, shardSkewedRows) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalDataSize Field Functions 
    bool hasTotalDataSize() const { return this->totalDataSize_ != nullptr;};
    void deleteTotalDataSize() { this->totalDataSize_ = nullptr;};
    inline int64_t totalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalDataSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setTotalDataSize(int64_t totalDataSize) { DARABONBA_PTR_SET_VALUE(totalDataSize_, totalDataSize) };


    // totalLocalDataSize Field Functions 
    bool hasTotalLocalDataSize() const { return this->totalLocalDataSize_ != nullptr;};
    void deleteTotalLocalDataSize() { this->totalLocalDataSize_ = nullptr;};
    inline string totalLocalDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalLocalDataSize_, "") };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setTotalLocalDataSize(string totalLocalDataSize) { DARABONBA_PTR_SET_VALUE(totalLocalDataSize_, totalLocalDataSize) };


    // totalPkSize Field Functions 
    bool hasTotalPkSize() const { return this->totalPkSize_ != nullptr;};
    void deleteTotalPkSize() { this->totalPkSize_ = nullptr;};
    inline int64_t totalPkSize() const { DARABONBA_PTR_GET_DEFAULT(totalPkSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setTotalPkSize(int64_t totalPkSize) { DARABONBA_PTR_SET_VALUE(totalPkSize_, totalPkSize) };


    // totalRemoteDataSize Field Functions 
    bool hasTotalRemoteDataSize() const { return this->totalRemoteDataSize_ != nullptr;};
    void deleteTotalRemoteDataSize() { this->totalRemoteDataSize_ = nullptr;};
    inline int64_t totalRemoteDataSize() const { DARABONBA_PTR_GET_DEFAULT(totalRemoteDataSize_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setTotalRemoteDataSize(int64_t totalRemoteDataSize) { DARABONBA_PTR_SET_VALUE(totalRemoteDataSize_, totalRemoteDataSize) };


    // totalRowCount Field Functions 
    bool hasTotalRowCount() const { return this->totalRowCount_ != nullptr;};
    void deleteTotalRowCount() { this->totalRowCount_ = nullptr;};
    inline int64_t totalRowCount() const { DARABONBA_PTR_GET_DEFAULT(totalRowCount_, 0L) };
    inline DescribeWorkerDetectionResponseBodyDetectionItemsResultsSkewedTables& setTotalRowCount(int64_t totalRowCount) { DARABONBA_PTR_SET_VALUE(totalRowCount_, totalRowCount) };


  protected:
    // The SQL statement that is used to create the table.
    std::shared_ptr<string> DDL_ = nullptr;
    // The number of partitions.
    std::shared_ptr<int32_t> partitionCount_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The number of skewed rows in the table.
    std::shared_ptr<string> shardSkewedRows_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The total data size of the table. Unit: bytes.
    std::shared_ptr<int64_t> totalDataSize_ = nullptr;
    // The size of hot data. Unit: bytes.
    std::shared_ptr<string> totalLocalDataSize_ = nullptr;
    // The data size of the primary key. Unit: bytes.
    std::shared_ptr<int64_t> totalPkSize_ = nullptr;
    // The size of cold data. Unit: bytes.
    std::shared_ptr<int64_t> totalRemoteDataSize_ = nullptr;
    // The number of rows in the table.
    std::shared_ptr<int64_t> totalRowCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
