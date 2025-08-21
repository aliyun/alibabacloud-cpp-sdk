// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATASTORAGEANALYSISRESULTTABLESTATS_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATASTORAGEANALYSISRESULTTABLESTATS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& obj) { 
      DARABONBA_PTR_TO_JSON(AvgRowLength, avgRowLength_);
      DARABONBA_PTR_TO_JSON(DataFree, dataFree_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Engine, engine_);
      DARABONBA_PTR_TO_JSON(FragmentSize, fragmentSize_);
      DARABONBA_PTR_TO_JSON(IndexSize, indexSize_);
      DARABONBA_PTR_TO_JSON(PhyTotalSize, phyTotalSize_);
      DARABONBA_PTR_TO_JSON(PhysicalFileSize, physicalFileSize_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(TableRows, tableRows_);
      DARABONBA_PTR_TO_JSON(TableType, tableType_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgRowLength, avgRowLength_);
      DARABONBA_PTR_FROM_JSON(DataFree, dataFree_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Engine, engine_);
      DARABONBA_PTR_FROM_JSON(FragmentSize, fragmentSize_);
      DARABONBA_PTR_FROM_JSON(IndexSize, indexSize_);
      DARABONBA_PTR_FROM_JSON(PhyTotalSize, phyTotalSize_);
      DARABONBA_PTR_FROM_JSON(PhysicalFileSize, physicalFileSize_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(TableRows, tableRows_);
      DARABONBA_PTR_FROM_JSON(TableType, tableType_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats() = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats(const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats &) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats(GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats &&) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats() = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& operator=(const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats &) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& operator=(GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgRowLength_ != nullptr
        && this->dataFree_ != nullptr && this->dataSize_ != nullptr && this->dbName_ != nullptr && this->engine_ != nullptr && this->fragmentSize_ != nullptr
        && this->indexSize_ != nullptr && this->phyTotalSize_ != nullptr && this->physicalFileSize_ != nullptr && this->tableName_ != nullptr && this->tableRows_ != nullptr
        && this->tableType_ != nullptr && this->totalSize_ != nullptr; };
    // avgRowLength Field Functions 
    bool hasAvgRowLength() const { return this->avgRowLength_ != nullptr;};
    void deleteAvgRowLength() { this->avgRowLength_ = nullptr;};
    inline int64_t avgRowLength() const { DARABONBA_PTR_GET_DEFAULT(avgRowLength_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setAvgRowLength(int64_t avgRowLength) { DARABONBA_PTR_SET_VALUE(avgRowLength_, avgRowLength) };


    // dataFree Field Functions 
    bool hasDataFree() const { return this->dataFree_ != nullptr;};
    void deleteDataFree() { this->dataFree_ = nullptr;};
    inline int64_t dataFree() const { DARABONBA_PTR_GET_DEFAULT(dataFree_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setDataFree(int64_t dataFree) { DARABONBA_PTR_SET_VALUE(dataFree_, dataFree) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // engine Field Functions 
    bool hasEngine() const { return this->engine_ != nullptr;};
    void deleteEngine() { this->engine_ = nullptr;};
    inline string engine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


    // fragmentSize Field Functions 
    bool hasFragmentSize() const { return this->fragmentSize_ != nullptr;};
    void deleteFragmentSize() { this->fragmentSize_ = nullptr;};
    inline int64_t fragmentSize() const { DARABONBA_PTR_GET_DEFAULT(fragmentSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setFragmentSize(int64_t fragmentSize) { DARABONBA_PTR_SET_VALUE(fragmentSize_, fragmentSize) };


    // indexSize Field Functions 
    bool hasIndexSize() const { return this->indexSize_ != nullptr;};
    void deleteIndexSize() { this->indexSize_ = nullptr;};
    inline int64_t indexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


    // phyTotalSize Field Functions 
    bool hasPhyTotalSize() const { return this->phyTotalSize_ != nullptr;};
    void deletePhyTotalSize() { this->phyTotalSize_ = nullptr;};
    inline int64_t phyTotalSize() const { DARABONBA_PTR_GET_DEFAULT(phyTotalSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setPhyTotalSize(int64_t phyTotalSize) { DARABONBA_PTR_SET_VALUE(phyTotalSize_, phyTotalSize) };


    // physicalFileSize Field Functions 
    bool hasPhysicalFileSize() const { return this->physicalFileSize_ != nullptr;};
    void deletePhysicalFileSize() { this->physicalFileSize_ = nullptr;};
    inline int64_t physicalFileSize() const { DARABONBA_PTR_GET_DEFAULT(physicalFileSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setPhysicalFileSize(int64_t physicalFileSize) { DARABONBA_PTR_SET_VALUE(physicalFileSize_, physicalFileSize) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // tableRows Field Functions 
    bool hasTableRows() const { return this->tableRows_ != nullptr;};
    void deleteTableRows() { this->tableRows_ = nullptr;};
    inline int64_t tableRows() const { DARABONBA_PTR_GET_DEFAULT(tableRows_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setTableRows(int64_t tableRows) { DARABONBA_PTR_SET_VALUE(tableRows_, tableRows) };


    // tableType Field Functions 
    bool hasTableType() const { return this->tableType_ != nullptr;};
    void deleteTableType() { this->tableType_ = nullptr;};
    inline string tableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The average length of rows. Unit: bytes.
    std::shared_ptr<int64_t> avgRowLength_ = nullptr;
    // The size of space fragments. Unit: bytes.
    // 
    // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters. The fragmentation rate of a table is generally calculated based on the following formula: `Fragmentation rate = DataFree/(DataSize + IndexSize + DataFree)`. In this topic, `Fragmentation rate = DataFree/PhyTotalSize`.
    std::shared_ptr<int64_t> dataFree_ = nullptr;
    // *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this parameter indicates the amount of space occupied by data. Unit: bytes.
    // *   For ApsaraDB for MongoDB instances, this parameter indicates the size of uncompressed data, that is, the amount of data. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // The type of the storage engine used by the table.
    // 
    // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
    std::shared_ptr<string> engine_ = nullptr;
    // The size of space that can be reclaimed. Unit: bytes.
    // 
    // >  This parameter is applicable only to ApsaraDB for MongoDB instances. `Fragmentation rate = FragmentSize/PhyTotalSize`.
    std::shared_ptr<int64_t> fragmentSize_ = nullptr;
    // The storage space occupied by indexes. Unit: bytes.
    std::shared_ptr<int64_t> indexSize_ = nullptr;
    // The storage space of the table. Unit: bytes.
    // 
    // >  For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, the value of the parameter is the sum of **DataSize**, **IndexSize**, and **DataFree**. For ApsaraDB for MongoDB instances, the value of this parameter is the sum of **DataSize** and **IndexSize**.
    std::shared_ptr<int64_t> phyTotalSize_ = nullptr;
    // The physical file size of the table. Unit: bytes.
    // 
    // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters. Data of specific database instances cannot be obtained due to deployment mode.
    std::shared_ptr<int64_t> physicalFileSize_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
    // The number of rows in the table.
    std::shared_ptr<int64_t> tableRows_ = nullptr;
    // The type of the table.
    // 
    // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
    std::shared_ptr<string> tableType_ = nullptr;
    // *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this parameter indicates the amount of space occupied by table data and indexes. Unit: bytes. The value is the sum of **DataSize** and **IndexSize**.
    // *   For ApsaraDB for MongoDB instances, this parameter indicates the actual size of space allocated by Block Manager. Unit: Bytes. The compression ratio of an ApsaraDB for MongoDB instance is calculated based on the following formula: `Compression ratio = TotalSize/DataSize`.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
