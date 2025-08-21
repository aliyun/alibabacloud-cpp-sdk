// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATASTORAGEANALYSISRESULTNEEDOPTIMIZEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATASTORAGEANALYSISRESULTNEEDOPTIMIZEITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& obj) { 
      DARABONBA_PTR_TO_JSON(AssociatedData, associatedData_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(OptimizeAdvice, optimizeAdvice_);
      DARABONBA_PTR_TO_JSON(OptimizeItemName, optimizeItemName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(AssociatedData, associatedData_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(OptimizeAdvice, optimizeAdvice_);
      DARABONBA_PTR_FROM_JSON(OptimizeItemName, optimizeItemName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList() = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList(const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList &) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList(GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList &&) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList() = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& operator=(const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList &) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& operator=(GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->associatedData_ != nullptr
        && this->dbName_ != nullptr && this->optimizeAdvice_ != nullptr && this->optimizeItemName_ != nullptr && this->tableName_ != nullptr; };
    // associatedData Field Functions 
    bool hasAssociatedData() const { return this->associatedData_ != nullptr;};
    void deleteAssociatedData() { this->associatedData_ = nullptr;};
    inline string associatedData() const { DARABONBA_PTR_GET_DEFAULT(associatedData_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& setAssociatedData(string associatedData) { DARABONBA_PTR_SET_VALUE(associatedData_, associatedData) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // optimizeAdvice Field Functions 
    bool hasOptimizeAdvice() const { return this->optimizeAdvice_ != nullptr;};
    void deleteOptimizeAdvice() { this->optimizeAdvice_ = nullptr;};
    inline string optimizeAdvice() const { DARABONBA_PTR_GET_DEFAULT(optimizeAdvice_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& setOptimizeAdvice(string optimizeAdvice) { DARABONBA_PTR_SET_VALUE(optimizeAdvice_, optimizeAdvice) };


    // optimizeItemName Field Functions 
    bool hasOptimizeItemName() const { return this->optimizeItemName_ != nullptr;};
    void deleteOptimizeItemName() { this->optimizeItemName_ = nullptr;};
    inline string optimizeItemName() const { DARABONBA_PTR_GET_DEFAULT(optimizeItemName_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& setOptimizeItemName(string optimizeItemName) { DARABONBA_PTR_SET_VALUE(optimizeItemName_, optimizeItemName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // The data associated with the items to be optimized, which is in the JSON format.
    std::shared_ptr<string> associatedData_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
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
    std::shared_ptr<string> optimizeAdvice_ = nullptr;
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
    std::shared_ptr<string> optimizeItemName_ = nullptr;
    // The name of the table.
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
