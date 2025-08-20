// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETABLESTATISTICSRESPONSEBODYITEMSTABLESTATISTICRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETABLESTATISTICSRESPONSEBODYITEMSTABLESTATISTICRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeTableStatisticsResponseBodyItemsTableStatisticRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& obj) { 
      DARABONBA_PTR_TO_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
      DARABONBA_PTR_TO_JSON(OtherSize, otherSize_);
      DARABONBA_PTR_TO_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(ColdDataSize, coldDataSize_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(HotDataSize, hotDataSize_);
      DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
      DARABONBA_PTR_FROM_JSON(OtherSize, otherSize_);
      DARABONBA_PTR_FROM_JSON(PartitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(PrimaryKeyIndexSize, primaryKeyIndexSize_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(SpaceRatio, spaceRatio_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    DescribeTableStatisticsResponseBodyItemsTableStatisticRecords() = default ;
    DescribeTableStatisticsResponseBodyItemsTableStatisticRecords(const DescribeTableStatisticsResponseBodyItemsTableStatisticRecords &) = default ;
    DescribeTableStatisticsResponseBodyItemsTableStatisticRecords(DescribeTableStatisticsResponseBodyItemsTableStatisticRecords &&) = default ;
    DescribeTableStatisticsResponseBodyItemsTableStatisticRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTableStatisticsResponseBodyItemsTableStatisticRecords() = default ;
    DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& operator=(const DescribeTableStatisticsResponseBodyItemsTableStatisticRecords &) = default ;
    DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& operator=(DescribeTableStatisticsResponseBodyItemsTableStatisticRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coldDataSize_ != nullptr
        && this->dataSize_ != nullptr && this->hotDataSize_ != nullptr && this->indexSize_ != nullptr && this->otherSize_ != nullptr && this->partitionCount_ != nullptr
        && this->primaryKeyIndexSize_ != nullptr && this->rowCount_ != nullptr && this->schemaName_ != nullptr && this->spaceRatio_ != nullptr && this->tableName_ != nullptr
        && this->totalSize_ != nullptr; };
    // coldDataSize Field Functions 
    bool hasColdDataSize() const { return this->coldDataSize_ != nullptr;};
    void deleteColdDataSize() { this->coldDataSize_ = nullptr;};
    inline int64_t coldDataSize() const { DARABONBA_PTR_GET_DEFAULT(coldDataSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setColdDataSize(int64_t coldDataSize) { DARABONBA_PTR_SET_VALUE(coldDataSize_, coldDataSize) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // hotDataSize Field Functions 
    bool hasHotDataSize() const { return this->hotDataSize_ != nullptr;};
    void deleteHotDataSize() { this->hotDataSize_ = nullptr;};
    inline int64_t hotDataSize() const { DARABONBA_PTR_GET_DEFAULT(hotDataSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setHotDataSize(int64_t hotDataSize) { DARABONBA_PTR_SET_VALUE(hotDataSize_, hotDataSize) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // otherSize Field Functions 
    bool hasOtherSize() const { return this->otherSize_ != nullptr;};
    void deleteOtherSize() { this->otherSize_ = nullptr;};
    inline int64_t otherSize() const { DARABONBA_PTR_GET_DEFAULT(otherSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setOtherSize(int64_t otherSize) { DARABONBA_PTR_SET_VALUE(otherSize_, otherSize) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int64_t partitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setPartitionCount(int64_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // primaryKeyIndexSize Field Functions 
    bool hasPrimaryKeyIndexSize() const { return this->primaryKeyIndexSize_ != nullptr;};
    void deletePrimaryKeyIndexSize() { this->primaryKeyIndexSize_ = nullptr;};
    inline int64_t primaryKeyIndexSize() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyIndexSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setPrimaryKeyIndexSize(int64_t primaryKeyIndexSize) { DARABONBA_PTR_SET_VALUE(primaryKeyIndexSize_, primaryKeyIndexSize) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // spaceRatio Field Functions 
    bool hasSpaceRatio() const { return this->spaceRatio_ != nullptr;};
    void deleteSpaceRatio() { this->spaceRatio_ = nullptr;};
    inline double spaceRatio() const { DARABONBA_PTR_GET_DEFAULT(spaceRatio_, 0.0) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setSpaceRatio(double spaceRatio) { DARABONBA_PTR_SET_VALUE(spaceRatio_, spaceRatio) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline DescribeTableStatisticsResponseBodyItemsTableStatisticRecords& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The size of cold data. Unit: bytes.
    // 
    // >  This parameter is supported only for AnalyticDB for MySQL clusters of V3.1.3.4 or later.
    std::shared_ptr<int64_t> coldDataSize_ = nullptr;
    // The data size of the table. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The size of hot data. Unit: bytes.
    std::shared_ptr<int64_t> hotDataSize_ = nullptr;
    // The data size of indexes. Unit: bytes.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The data size of other data. Unit: bytes.
    std::shared_ptr<int64_t> otherSize_ = nullptr;
    // The number of partitions.
    std::shared_ptr<int64_t> partitionCount_ = nullptr;
    // The data size of the primary key index. Unit: bytes.
    std::shared_ptr<int64_t> primaryKeyIndexSize_ = nullptr;
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
    // The total data size of the table. Unit: bytes.
    // 
    // >  The following formulas can be used to calculate the total data size:
    // 
    // *   Formula 1: Total data size = Hot data size + Cold data size.
    // *   Formula 2: Total data size = Data size of table records + Data size of regular indexes + Data size of primary key indexes + Data size of other data.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
