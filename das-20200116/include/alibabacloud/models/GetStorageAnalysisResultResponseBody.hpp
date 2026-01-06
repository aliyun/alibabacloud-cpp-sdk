// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetStorageAnalysisResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageAnalysisResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetStorageAnalysisResultResponseBody() = default ;
    GetStorageAnalysisResultResponseBody(const GetStorageAnalysisResultResponseBody &) = default ;
    GetStorageAnalysisResultResponseBody(GetStorageAnalysisResultResponseBody &&) = default ;
    GetStorageAnalysisResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageAnalysisResultResponseBody() = default ;
    GetStorageAnalysisResultResponseBody& operator=(const GetStorageAnalysisResultResponseBody &) = default ;
    GetStorageAnalysisResultResponseBody& operator=(GetStorageAnalysisResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AnalyzedDbCount, analyzedDbCount_);
        DARABONBA_PTR_TO_JSON(StorageAnalysisResult, storageAnalysisResult_);
        DARABONBA_PTR_TO_JSON(TaskFinish, taskFinish_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskProgress, taskProgress_);
        DARABONBA_PTR_TO_JSON(TaskState, taskState_);
        DARABONBA_PTR_TO_JSON(TaskSuccess, taskSuccess_);
        DARABONBA_PTR_TO_JSON(TotalDbCount, totalDbCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AnalyzedDbCount, analyzedDbCount_);
        DARABONBA_PTR_FROM_JSON(StorageAnalysisResult, storageAnalysisResult_);
        DARABONBA_PTR_FROM_JSON(TaskFinish, taskFinish_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskProgress, taskProgress_);
        DARABONBA_PTR_FROM_JSON(TaskState, taskState_);
        DARABONBA_PTR_FROM_JSON(TaskSuccess, taskSuccess_);
        DARABONBA_PTR_FROM_JSON(TotalDbCount, totalDbCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class StorageAnalysisResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const StorageAnalysisResult& obj) { 
          DARABONBA_PTR_TO_JSON(AnalysisErrorType, analysisErrorType_);
          DARABONBA_PTR_TO_JSON(AnalysisSuccess, analysisSuccess_);
          DARABONBA_PTR_TO_JSON(DailyIncrement, dailyIncrement_);
          DARABONBA_PTR_TO_JSON(EstimateAvailableDays, estimateAvailableDays_);
          DARABONBA_PTR_TO_JSON(NeedOptimizeItemList, needOptimizeItemList_);
          DARABONBA_PTR_TO_JSON(TableStats, tableStats_);
          DARABONBA_PTR_TO_JSON(TotalFreeStorageSize, totalFreeStorageSize_);
          DARABONBA_PTR_TO_JSON(TotalStorageSize, totalStorageSize_);
          DARABONBA_PTR_TO_JSON(TotalUsedStorageSize, totalUsedStorageSize_);
        };
        friend void from_json(const Darabonba::Json& j, StorageAnalysisResult& obj) { 
          DARABONBA_PTR_FROM_JSON(AnalysisErrorType, analysisErrorType_);
          DARABONBA_PTR_FROM_JSON(AnalysisSuccess, analysisSuccess_);
          DARABONBA_PTR_FROM_JSON(DailyIncrement, dailyIncrement_);
          DARABONBA_PTR_FROM_JSON(EstimateAvailableDays, estimateAvailableDays_);
          DARABONBA_PTR_FROM_JSON(NeedOptimizeItemList, needOptimizeItemList_);
          DARABONBA_PTR_FROM_JSON(TableStats, tableStats_);
          DARABONBA_PTR_FROM_JSON(TotalFreeStorageSize, totalFreeStorageSize_);
          DARABONBA_PTR_FROM_JSON(TotalStorageSize, totalStorageSize_);
          DARABONBA_PTR_FROM_JSON(TotalUsedStorageSize, totalUsedStorageSize_);
        };
        StorageAnalysisResult() = default ;
        StorageAnalysisResult(const StorageAnalysisResult &) = default ;
        StorageAnalysisResult(StorageAnalysisResult &&) = default ;
        StorageAnalysisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~StorageAnalysisResult() = default ;
        StorageAnalysisResult& operator=(const StorageAnalysisResult &) = default ;
        StorageAnalysisResult& operator=(StorageAnalysisResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TableStats : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TableStats& obj) { 
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
          friend void from_json(const Darabonba::Json& j, TableStats& obj) { 
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
          TableStats() = default ;
          TableStats(const TableStats &) = default ;
          TableStats(TableStats &&) = default ;
          TableStats(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TableStats() = default ;
          TableStats& operator=(const TableStats &) = default ;
          TableStats& operator=(TableStats &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->avgRowLength_ == nullptr
        && this->dataFree_ == nullptr && this->dataSize_ == nullptr && this->dbName_ == nullptr && this->engine_ == nullptr && this->fragmentSize_ == nullptr
        && this->indexSize_ == nullptr && this->phyTotalSize_ == nullptr && this->physicalFileSize_ == nullptr && this->tableName_ == nullptr && this->tableRows_ == nullptr
        && this->tableType_ == nullptr && this->totalSize_ == nullptr; };
          // avgRowLength Field Functions 
          bool hasAvgRowLength() const { return this->avgRowLength_ != nullptr;};
          void deleteAvgRowLength() { this->avgRowLength_ = nullptr;};
          inline int64_t getAvgRowLength() const { DARABONBA_PTR_GET_DEFAULT(avgRowLength_, 0L) };
          inline TableStats& setAvgRowLength(int64_t avgRowLength) { DARABONBA_PTR_SET_VALUE(avgRowLength_, avgRowLength) };


          // dataFree Field Functions 
          bool hasDataFree() const { return this->dataFree_ != nullptr;};
          void deleteDataFree() { this->dataFree_ = nullptr;};
          inline int64_t getDataFree() const { DARABONBA_PTR_GET_DEFAULT(dataFree_, 0L) };
          inline TableStats& setDataFree(int64_t dataFree) { DARABONBA_PTR_SET_VALUE(dataFree_, dataFree) };


          // dataSize Field Functions 
          bool hasDataSize() const { return this->dataSize_ != nullptr;};
          void deleteDataSize() { this->dataSize_ = nullptr;};
          inline int64_t getDataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
          inline TableStats& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


          // dbName Field Functions 
          bool hasDbName() const { return this->dbName_ != nullptr;};
          void deleteDbName() { this->dbName_ = nullptr;};
          inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
          inline TableStats& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


          // engine Field Functions 
          bool hasEngine() const { return this->engine_ != nullptr;};
          void deleteEngine() { this->engine_ = nullptr;};
          inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
          inline TableStats& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


          // fragmentSize Field Functions 
          bool hasFragmentSize() const { return this->fragmentSize_ != nullptr;};
          void deleteFragmentSize() { this->fragmentSize_ = nullptr;};
          inline int64_t getFragmentSize() const { DARABONBA_PTR_GET_DEFAULT(fragmentSize_, 0L) };
          inline TableStats& setFragmentSize(int64_t fragmentSize) { DARABONBA_PTR_SET_VALUE(fragmentSize_, fragmentSize) };


          // indexSize Field Functions 
          bool hasIndexSize() const { return this->indexSize_ != nullptr;};
          void deleteIndexSize() { this->indexSize_ = nullptr;};
          inline int64_t getIndexSize() const { DARABONBA_PTR_GET_DEFAULT(indexSize_, 0L) };
          inline TableStats& setIndexSize(int64_t indexSize) { DARABONBA_PTR_SET_VALUE(indexSize_, indexSize) };


          // phyTotalSize Field Functions 
          bool hasPhyTotalSize() const { return this->phyTotalSize_ != nullptr;};
          void deletePhyTotalSize() { this->phyTotalSize_ = nullptr;};
          inline int64_t getPhyTotalSize() const { DARABONBA_PTR_GET_DEFAULT(phyTotalSize_, 0L) };
          inline TableStats& setPhyTotalSize(int64_t phyTotalSize) { DARABONBA_PTR_SET_VALUE(phyTotalSize_, phyTotalSize) };


          // physicalFileSize Field Functions 
          bool hasPhysicalFileSize() const { return this->physicalFileSize_ != nullptr;};
          void deletePhysicalFileSize() { this->physicalFileSize_ = nullptr;};
          inline int64_t getPhysicalFileSize() const { DARABONBA_PTR_GET_DEFAULT(physicalFileSize_, 0L) };
          inline TableStats& setPhysicalFileSize(int64_t physicalFileSize) { DARABONBA_PTR_SET_VALUE(physicalFileSize_, physicalFileSize) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline TableStats& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


          // tableRows Field Functions 
          bool hasTableRows() const { return this->tableRows_ != nullptr;};
          void deleteTableRows() { this->tableRows_ = nullptr;};
          inline int64_t getTableRows() const { DARABONBA_PTR_GET_DEFAULT(tableRows_, 0L) };
          inline TableStats& setTableRows(int64_t tableRows) { DARABONBA_PTR_SET_VALUE(tableRows_, tableRows) };


          // tableType Field Functions 
          bool hasTableType() const { return this->tableType_ != nullptr;};
          void deleteTableType() { this->tableType_ = nullptr;};
          inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
          inline TableStats& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


          // totalSize Field Functions 
          bool hasTotalSize() const { return this->totalSize_ != nullptr;};
          void deleteTotalSize() { this->totalSize_ = nullptr;};
          inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
          inline TableStats& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


        protected:
          // The average length of rows. Unit: bytes.
          shared_ptr<int64_t> avgRowLength_ {};
          // The size of space fragments. Unit: bytes.
          // 
          // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters. The fragmentation rate of a table is generally calculated based on the following formula: `Fragmentation rate = DataFree/(DataSize + IndexSize + DataFree)`. In this topic, `Fragmentation rate = DataFree/PhyTotalSize`.
          shared_ptr<int64_t> dataFree_ {};
          // *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this parameter indicates the amount of space occupied by data. Unit: bytes.
          // *   For ApsaraDB for MongoDB instances, this parameter indicates the size of uncompressed data, that is, the amount of data. Unit: bytes.
          shared_ptr<int64_t> dataSize_ {};
          // The name of the database.
          shared_ptr<string> dbName_ {};
          // The type of the storage engine used by the table.
          // 
          // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          shared_ptr<string> engine_ {};
          // The size of space that can be reclaimed. Unit: bytes.
          // 
          // >  This parameter is applicable only to ApsaraDB for MongoDB instances. `Fragmentation rate = FragmentSize/PhyTotalSize`.
          shared_ptr<int64_t> fragmentSize_ {};
          // The storage space occupied by indexes. Unit: bytes.
          shared_ptr<int64_t> indexSize_ {};
          // The storage space of the table. Unit: bytes.
          // 
          // >  For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, the value of the parameter is the sum of **DataSize**, **IndexSize**, and **DataFree**. For ApsaraDB for MongoDB instances, the value of this parameter is the sum of **DataSize** and **IndexSize**.
          shared_ptr<int64_t> phyTotalSize_ {};
          // The physical file size of the table. Unit: bytes.
          // 
          // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters. Data of specific database instances cannot be obtained due to deployment mode.
          shared_ptr<int64_t> physicalFileSize_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
          // The number of rows in the table.
          shared_ptr<int64_t> tableRows_ {};
          // The type of the table.
          // 
          // >  This parameter is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          shared_ptr<string> tableType_ {};
          // *   For ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters, this parameter indicates the amount of space occupied by table data and indexes. Unit: bytes. The value is the sum of **DataSize** and **IndexSize**.
          // *   For ApsaraDB for MongoDB instances, this parameter indicates the actual size of space allocated by Block Manager. Unit: Bytes. The compression ratio of an ApsaraDB for MongoDB instance is calculated based on the following formula: `Compression ratio = TotalSize/DataSize`.
          shared_ptr<int64_t> totalSize_ {};
        };

        class NeedOptimizeItemList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NeedOptimizeItemList& obj) { 
            DARABONBA_PTR_TO_JSON(AssociatedData, associatedData_);
            DARABONBA_PTR_TO_JSON(DbName, dbName_);
            DARABONBA_PTR_TO_JSON(OptimizeAdvice, optimizeAdvice_);
            DARABONBA_PTR_TO_JSON(OptimizeItemName, optimizeItemName_);
            DARABONBA_PTR_TO_JSON(TableName, tableName_);
          };
          friend void from_json(const Darabonba::Json& j, NeedOptimizeItemList& obj) { 
            DARABONBA_PTR_FROM_JSON(AssociatedData, associatedData_);
            DARABONBA_PTR_FROM_JSON(DbName, dbName_);
            DARABONBA_PTR_FROM_JSON(OptimizeAdvice, optimizeAdvice_);
            DARABONBA_PTR_FROM_JSON(OptimizeItemName, optimizeItemName_);
            DARABONBA_PTR_FROM_JSON(TableName, tableName_);
          };
          NeedOptimizeItemList() = default ;
          NeedOptimizeItemList(const NeedOptimizeItemList &) = default ;
          NeedOptimizeItemList(NeedOptimizeItemList &&) = default ;
          NeedOptimizeItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NeedOptimizeItemList() = default ;
          NeedOptimizeItemList& operator=(const NeedOptimizeItemList &) = default ;
          NeedOptimizeItemList& operator=(NeedOptimizeItemList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->associatedData_ == nullptr
        && this->dbName_ == nullptr && this->optimizeAdvice_ == nullptr && this->optimizeItemName_ == nullptr && this->tableName_ == nullptr; };
          // associatedData Field Functions 
          bool hasAssociatedData() const { return this->associatedData_ != nullptr;};
          void deleteAssociatedData() { this->associatedData_ = nullptr;};
          inline string getAssociatedData() const { DARABONBA_PTR_GET_DEFAULT(associatedData_, "") };
          inline NeedOptimizeItemList& setAssociatedData(string associatedData) { DARABONBA_PTR_SET_VALUE(associatedData_, associatedData) };


          // dbName Field Functions 
          bool hasDbName() const { return this->dbName_ != nullptr;};
          void deleteDbName() { this->dbName_ = nullptr;};
          inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
          inline NeedOptimizeItemList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


          // optimizeAdvice Field Functions 
          bool hasOptimizeAdvice() const { return this->optimizeAdvice_ != nullptr;};
          void deleteOptimizeAdvice() { this->optimizeAdvice_ = nullptr;};
          inline string getOptimizeAdvice() const { DARABONBA_PTR_GET_DEFAULT(optimizeAdvice_, "") };
          inline NeedOptimizeItemList& setOptimizeAdvice(string optimizeAdvice) { DARABONBA_PTR_SET_VALUE(optimizeAdvice_, optimizeAdvice) };


          // optimizeItemName Field Functions 
          bool hasOptimizeItemName() const { return this->optimizeItemName_ != nullptr;};
          void deleteOptimizeItemName() { this->optimizeItemName_ = nullptr;};
          inline string getOptimizeItemName() const { DARABONBA_PTR_GET_DEFAULT(optimizeItemName_, "") };
          inline NeedOptimizeItemList& setOptimizeItemName(string optimizeItemName) { DARABONBA_PTR_SET_VALUE(optimizeItemName_, optimizeItemName) };


          // tableName Field Functions 
          bool hasTableName() const { return this->tableName_ != nullptr;};
          void deleteTableName() { this->tableName_ = nullptr;};
          inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
          inline NeedOptimizeItemList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        protected:
          // The data associated with the items to be optimized, which is in the JSON format.
          shared_ptr<string> associatedData_ {};
          // The name of the database.
          shared_ptr<string> dbName_ {};
          // The optimization suggestion. Valid values:
          // 
          // *   **NEED_ANALYZE_TABLE**: You can execute the `ANALYZE TABLE` statement on the table during off-peak hours. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // *   **NEED_OPTIMIZE_TABLE**: You can reclaim fragments during off-peak hours.
          // *   **CHANGE_TABLE_ENGINE_IF_NECESSARY**: Change the storage engine type of a table after risk assessment. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // *   **AUTO_INCREMENT_ID_BE_TO_RUN_OUT**: Pay attention to the usage of auto-increment IDs. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // *   **DUPLICATE_INDEX**: Optimize indexes of tables. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // *   **TABLE_SIZE**: Pay attention to the table size. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // *   **TABLE_ROWS_AND_AVG_ROW_LENGTH**: Pay attention to the number of rows in a table and the average row length. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // *   **STORAGE_USED_PERCENT**: Pay attention to the space usage to prevent the instance from being locked if the instance is full.
          shared_ptr<string> optimizeAdvice_ {};
          // The item to be optimized. Valid values:
          // 
          // *   **NEED_ANALYZE_TABLE**: tables whose storage statistics obtained from `information_schema.tables` are 50 GB larger or smaller than the physical file sizes. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // 
          // *   **NEED_OPTIMIZE_TABLE**: tables whose space fragments are larger than 6 GB and whose fragmentation rates are greater than 30%. The fragmentation rate of a table is generally calculated based on the following formulas:
          // 
          //     *   ApsaraDB RDS for MySQL and PolarDB for MySQL: `Fragmentation rate = DataFree/(DataSize + IndexSize + DataFree)`. In this topic, PhyTotalSize = DataSize + IndexSize + DataFree. Thus, the fragmentation rate can be calculated based on the following formula: `Fragmentation rate = DataFree/PhyTotalSize`.
          //     *   ApsaraDB for MongoDB: `Fragmentation rate = FragmentSize/PhyTotalSize`.
          // 
          // *   **TABLE_ENGINE**: tables whose storage engines are not InnoDB or XEngine. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // 
          // *   **AUTO_INCREMENT_ID_BE_TO_RUN_OUT**: tables whose usages of auto-increment IDs exceed 80%. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // 
          // *   **DUPLICATE_INDEX**: tables whose indexes are redundant or duplicate. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // 
          // *   **TABLE_SIZE**: single tables whose sizes are larger than 50 GB. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // 
          // *   **TABLE_ROWS_AND_AVG_ROW_LENGTH**: single tables that contain more than 5 million rows and whose average row lengths exceed 10 KB. This is applicable only to ApsaraDB RDS for MySQL instances and PolarDB for MySQL clusters.
          // 
          // *   **TOTAL_DATA_FREE**: instances whose reclaimable space is larger than 60 GB and whose total fragmentation rate is larger than 5%.
          // 
          // *   **STORAGE_USED_PERCENT**: instances whose space usage is larger than 90%.
          shared_ptr<string> optimizeItemName_ {};
          // The name of the table.
          shared_ptr<string> tableName_ {};
        };

        virtual bool empty() const override { return this->analysisErrorType_ == nullptr
        && this->analysisSuccess_ == nullptr && this->dailyIncrement_ == nullptr && this->estimateAvailableDays_ == nullptr && this->needOptimizeItemList_ == nullptr && this->tableStats_ == nullptr
        && this->totalFreeStorageSize_ == nullptr && this->totalStorageSize_ == nullptr && this->totalUsedStorageSize_ == nullptr; };
        // analysisErrorType Field Functions 
        bool hasAnalysisErrorType() const { return this->analysisErrorType_ != nullptr;};
        void deleteAnalysisErrorType() { this->analysisErrorType_ = nullptr;};
        inline string getAnalysisErrorType() const { DARABONBA_PTR_GET_DEFAULT(analysisErrorType_, "") };
        inline StorageAnalysisResult& setAnalysisErrorType(string analysisErrorType) { DARABONBA_PTR_SET_VALUE(analysisErrorType_, analysisErrorType) };


        // analysisSuccess Field Functions 
        bool hasAnalysisSuccess() const { return this->analysisSuccess_ != nullptr;};
        void deleteAnalysisSuccess() { this->analysisSuccess_ = nullptr;};
        inline bool getAnalysisSuccess() const { DARABONBA_PTR_GET_DEFAULT(analysisSuccess_, false) };
        inline StorageAnalysisResult& setAnalysisSuccess(bool analysisSuccess) { DARABONBA_PTR_SET_VALUE(analysisSuccess_, analysisSuccess) };


        // dailyIncrement Field Functions 
        bool hasDailyIncrement() const { return this->dailyIncrement_ != nullptr;};
        void deleteDailyIncrement() { this->dailyIncrement_ = nullptr;};
        inline int64_t getDailyIncrement() const { DARABONBA_PTR_GET_DEFAULT(dailyIncrement_, 0L) };
        inline StorageAnalysisResult& setDailyIncrement(int64_t dailyIncrement) { DARABONBA_PTR_SET_VALUE(dailyIncrement_, dailyIncrement) };


        // estimateAvailableDays Field Functions 
        bool hasEstimateAvailableDays() const { return this->estimateAvailableDays_ != nullptr;};
        void deleteEstimateAvailableDays() { this->estimateAvailableDays_ = nullptr;};
        inline int64_t getEstimateAvailableDays() const { DARABONBA_PTR_GET_DEFAULT(estimateAvailableDays_, 0L) };
        inline StorageAnalysisResult& setEstimateAvailableDays(int64_t estimateAvailableDays) { DARABONBA_PTR_SET_VALUE(estimateAvailableDays_, estimateAvailableDays) };


        // needOptimizeItemList Field Functions 
        bool hasNeedOptimizeItemList() const { return this->needOptimizeItemList_ != nullptr;};
        void deleteNeedOptimizeItemList() { this->needOptimizeItemList_ = nullptr;};
        inline const vector<StorageAnalysisResult::NeedOptimizeItemList> & getNeedOptimizeItemList() const { DARABONBA_PTR_GET_CONST(needOptimizeItemList_, vector<StorageAnalysisResult::NeedOptimizeItemList>) };
        inline vector<StorageAnalysisResult::NeedOptimizeItemList> getNeedOptimizeItemList() { DARABONBA_PTR_GET(needOptimizeItemList_, vector<StorageAnalysisResult::NeedOptimizeItemList>) };
        inline StorageAnalysisResult& setNeedOptimizeItemList(const vector<StorageAnalysisResult::NeedOptimizeItemList> & needOptimizeItemList) { DARABONBA_PTR_SET_VALUE(needOptimizeItemList_, needOptimizeItemList) };
        inline StorageAnalysisResult& setNeedOptimizeItemList(vector<StorageAnalysisResult::NeedOptimizeItemList> && needOptimizeItemList) { DARABONBA_PTR_SET_RVALUE(needOptimizeItemList_, needOptimizeItemList) };


        // tableStats Field Functions 
        bool hasTableStats() const { return this->tableStats_ != nullptr;};
        void deleteTableStats() { this->tableStats_ = nullptr;};
        inline const vector<StorageAnalysisResult::TableStats> & getTableStats() const { DARABONBA_PTR_GET_CONST(tableStats_, vector<StorageAnalysisResult::TableStats>) };
        inline vector<StorageAnalysisResult::TableStats> getTableStats() { DARABONBA_PTR_GET(tableStats_, vector<StorageAnalysisResult::TableStats>) };
        inline StorageAnalysisResult& setTableStats(const vector<StorageAnalysisResult::TableStats> & tableStats) { DARABONBA_PTR_SET_VALUE(tableStats_, tableStats) };
        inline StorageAnalysisResult& setTableStats(vector<StorageAnalysisResult::TableStats> && tableStats) { DARABONBA_PTR_SET_RVALUE(tableStats_, tableStats) };


        // totalFreeStorageSize Field Functions 
        bool hasTotalFreeStorageSize() const { return this->totalFreeStorageSize_ != nullptr;};
        void deleteTotalFreeStorageSize() { this->totalFreeStorageSize_ = nullptr;};
        inline int64_t getTotalFreeStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalFreeStorageSize_, 0L) };
        inline StorageAnalysisResult& setTotalFreeStorageSize(int64_t totalFreeStorageSize) { DARABONBA_PTR_SET_VALUE(totalFreeStorageSize_, totalFreeStorageSize) };


        // totalStorageSize Field Functions 
        bool hasTotalStorageSize() const { return this->totalStorageSize_ != nullptr;};
        void deleteTotalStorageSize() { this->totalStorageSize_ = nullptr;};
        inline int64_t getTotalStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalStorageSize_, 0L) };
        inline StorageAnalysisResult& setTotalStorageSize(int64_t totalStorageSize) { DARABONBA_PTR_SET_VALUE(totalStorageSize_, totalStorageSize) };


        // totalUsedStorageSize Field Functions 
        bool hasTotalUsedStorageSize() const { return this->totalUsedStorageSize_ != nullptr;};
        void deleteTotalUsedStorageSize() { this->totalUsedStorageSize_ = nullptr;};
        inline int64_t getTotalUsedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalUsedStorageSize_, 0L) };
        inline StorageAnalysisResult& setTotalUsedStorageSize(int64_t totalUsedStorageSize) { DARABONBA_PTR_SET_VALUE(totalUsedStorageSize_, totalUsedStorageSize) };


      protected:
        // The reason why the analysis on the database and table fails.
        // 
        // *   **DB_OR_TABLE_NOT_EXIST**: The specified database or table does not exist.
        // *   **DB_NOT_EXIST**: The specified database does not exist.
        shared_ptr<string> analysisErrorType_ {};
        // Indicates whether the analysis on the database and table is successful.
        shared_ptr<bool> analysisSuccess_ {};
        // The estimated average daily growth of the used storage space in the previous seven days. Unit: bytes.
        shared_ptr<int64_t> dailyIncrement_ {};
        // The estimated number of days for which the remaining storage space is available.
        shared_ptr<int64_t> estimateAvailableDays_ {};
        // The items to be optimized, which are generated based on DAS default rules. You can ignore these items based on your business requirements, and create custom rules to generate items to be optimized based on other basic data that is returned.
        shared_ptr<vector<StorageAnalysisResult::NeedOptimizeItemList>> needOptimizeItemList_ {};
        // The information about the table.
        shared_ptr<vector<StorageAnalysisResult::TableStats>> tableStats_ {};
        // The size of remaining storage.
        // 
        // >  Unit: bytes.
        shared_ptr<int64_t> totalFreeStorageSize_ {};
        // The total size of instance storage.
        // 
        // >  Unit: bytes.
        shared_ptr<int64_t> totalStorageSize_ {};
        // The size of used storage.
        // 
        // >  Unit: bytes.
        shared_ptr<int64_t> totalUsedStorageSize_ {};
      };

      virtual bool empty() const override { return this->analyzedDbCount_ == nullptr
        && this->storageAnalysisResult_ == nullptr && this->taskFinish_ == nullptr && this->taskId_ == nullptr && this->taskProgress_ == nullptr && this->taskState_ == nullptr
        && this->taskSuccess_ == nullptr && this->totalDbCount_ == nullptr; };
      // analyzedDbCount Field Functions 
      bool hasAnalyzedDbCount() const { return this->analyzedDbCount_ != nullptr;};
      void deleteAnalyzedDbCount() { this->analyzedDbCount_ = nullptr;};
      inline int64_t getAnalyzedDbCount() const { DARABONBA_PTR_GET_DEFAULT(analyzedDbCount_, 0L) };
      inline Data& setAnalyzedDbCount(int64_t analyzedDbCount) { DARABONBA_PTR_SET_VALUE(analyzedDbCount_, analyzedDbCount) };


      // storageAnalysisResult Field Functions 
      bool hasStorageAnalysisResult() const { return this->storageAnalysisResult_ != nullptr;};
      void deleteStorageAnalysisResult() { this->storageAnalysisResult_ = nullptr;};
      inline const Data::StorageAnalysisResult & getStorageAnalysisResult() const { DARABONBA_PTR_GET_CONST(storageAnalysisResult_, Data::StorageAnalysisResult) };
      inline Data::StorageAnalysisResult getStorageAnalysisResult() { DARABONBA_PTR_GET(storageAnalysisResult_, Data::StorageAnalysisResult) };
      inline Data& setStorageAnalysisResult(const Data::StorageAnalysisResult & storageAnalysisResult) { DARABONBA_PTR_SET_VALUE(storageAnalysisResult_, storageAnalysisResult) };
      inline Data& setStorageAnalysisResult(Data::StorageAnalysisResult && storageAnalysisResult) { DARABONBA_PTR_SET_RVALUE(storageAnalysisResult_, storageAnalysisResult) };


      // taskFinish Field Functions 
      bool hasTaskFinish() const { return this->taskFinish_ != nullptr;};
      void deleteTaskFinish() { this->taskFinish_ = nullptr;};
      inline bool getTaskFinish() const { DARABONBA_PTR_GET_DEFAULT(taskFinish_, false) };
      inline Data& setTaskFinish(bool taskFinish) { DARABONBA_PTR_SET_VALUE(taskFinish_, taskFinish) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskProgress Field Functions 
      bool hasTaskProgress() const { return this->taskProgress_ != nullptr;};
      void deleteTaskProgress() { this->taskProgress_ = nullptr;};
      inline int64_t getTaskProgress() const { DARABONBA_PTR_GET_DEFAULT(taskProgress_, 0L) };
      inline Data& setTaskProgress(int64_t taskProgress) { DARABONBA_PTR_SET_VALUE(taskProgress_, taskProgress) };


      // taskState Field Functions 
      bool hasTaskState() const { return this->taskState_ != nullptr;};
      void deleteTaskState() { this->taskState_ = nullptr;};
      inline string getTaskState() const { DARABONBA_PTR_GET_DEFAULT(taskState_, "") };
      inline Data& setTaskState(string taskState) { DARABONBA_PTR_SET_VALUE(taskState_, taskState) };


      // taskSuccess Field Functions 
      bool hasTaskSuccess() const { return this->taskSuccess_ != nullptr;};
      void deleteTaskSuccess() { this->taskSuccess_ = nullptr;};
      inline bool getTaskSuccess() const { DARABONBA_PTR_GET_DEFAULT(taskSuccess_, false) };
      inline Data& setTaskSuccess(bool taskSuccess) { DARABONBA_PTR_SET_VALUE(taskSuccess_, taskSuccess) };


      // totalDbCount Field Functions 
      bool hasTotalDbCount() const { return this->totalDbCount_ != nullptr;};
      void deleteTotalDbCount() { this->totalDbCount_ = nullptr;};
      inline int64_t getTotalDbCount() const { DARABONBA_PTR_GET_DEFAULT(totalDbCount_, 0L) };
      inline Data& setTotalDbCount(int64_t totalDbCount) { DARABONBA_PTR_SET_VALUE(totalDbCount_, totalDbCount) };


    protected:
      // The number of databases that have been analyzed.
      shared_ptr<int64_t> analyzedDbCount_ {};
      // The details of storage analysis.
      shared_ptr<Data::StorageAnalysisResult> storageAnalysisResult_ {};
      // Indicates whether the task is complete.
      shared_ptr<bool> taskFinish_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The task progress.
      // 
      // >  Valid values are integers that range from 0 to 100.
      shared_ptr<int64_t> taskProgress_ {};
      // The status of the storage analysis task. Valid values:
      // 
      // *   **INIT**: The task is being initialized.
      // *   **PENDING**: The task is being queued for execution.
      // *   **RECEIVED**: The task is received for execution.
      // *   **RUNNING**: The task is being executed.
      // *   **RETRY**: The task is being retried.
      // *   **SUCCESS**: The task succeeds.
      // *   **FAILURE**: The task fails.
      shared_ptr<string> taskState_ {};
      // Indicates whether the task is successful.
      shared_ptr<bool> taskSuccess_ {};
      // The number of databases that need to be analyzed in the storage analysis task.
      shared_ptr<int64_t> totalDbCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetStorageAnalysisResultResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetStorageAnalysisResultResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetStorageAnalysisResultResponseBody::Data) };
    inline GetStorageAnalysisResultResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetStorageAnalysisResultResponseBody::Data) };
    inline GetStorageAnalysisResultResponseBody& setData(const GetStorageAnalysisResultResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetStorageAnalysisResultResponseBody& setData(GetStorageAnalysisResultResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetStorageAnalysisResultResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetStorageAnalysisResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetStorageAnalysisResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int64_t> code_ {};
    // The data returned.
    shared_ptr<GetStorageAnalysisResultResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request is successful, **Successful** is returned. Otherwise, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
