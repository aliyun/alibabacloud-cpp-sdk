// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFORESPONSEBODYDATASTORAGETABLEINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGETABLESINFORESPONSEBODYDATASTORAGETABLEINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStorageTablesInfoResponseBodyDataStorageTableInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStorageTablesInfoResponseBodyDataStorageTableInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(date, date_);
      DARABONBA_PTR_TO_JSON(isPartitioned, isPartitioned_);
      DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(longTermStorage, longTermStorage_);
      DARABONBA_PTR_TO_JSON(longTermStorageFileCount, longTermStorageFileCount_);
      DARABONBA_PTR_TO_JSON(longTermStorageUnit, longTermStorageUnit_);
      DARABONBA_PTR_TO_JSON(lowFreqStorage, lowFreqStorage_);
      DARABONBA_PTR_TO_JSON(lowFreqStorageFileCount, lowFreqStorageFileCount_);
      DARABONBA_PTR_TO_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(standardStorage, standardStorage_);
      DARABONBA_PTR_TO_JSON(standardStorageFileCount, standardStorageFileCount_);
      DARABONBA_PTR_TO_JSON(standardStorageUnit, standardStorageUnit_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(totalFrequency, totalFrequency_);
      DARABONBA_PTR_TO_JSON(totalInputAmount, totalInputAmount_);
      DARABONBA_PTR_TO_JSON(totalInputAmountUnit, totalInputAmountUnit_);
      DARABONBA_PTR_TO_JSON(totalStorage, totalStorage_);
      DARABONBA_PTR_TO_JSON(totalStorageFileCount, totalStorageFileCount_);
      DARABONBA_PTR_TO_JSON(totalStorageUnit, totalStorageUnit_);
    };
    friend void from_json(const Darabonba::Json& j, ListStorageTablesInfoResponseBodyDataStorageTableInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(date, date_);
      DARABONBA_PTR_FROM_JSON(isPartitioned, isPartitioned_);
      DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(longTermStorage, longTermStorage_);
      DARABONBA_PTR_FROM_JSON(longTermStorageFileCount, longTermStorageFileCount_);
      DARABONBA_PTR_FROM_JSON(longTermStorageUnit, longTermStorageUnit_);
      DARABONBA_PTR_FROM_JSON(lowFreqStorage, lowFreqStorage_);
      DARABONBA_PTR_FROM_JSON(lowFreqStorageFileCount, lowFreqStorageFileCount_);
      DARABONBA_PTR_FROM_JSON(lowFreqStorageUnit, lowFreqStorageUnit_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(standardStorage, standardStorage_);
      DARABONBA_PTR_FROM_JSON(standardStorageFileCount, standardStorageFileCount_);
      DARABONBA_PTR_FROM_JSON(standardStorageUnit, standardStorageUnit_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(totalFrequency, totalFrequency_);
      DARABONBA_PTR_FROM_JSON(totalInputAmount, totalInputAmount_);
      DARABONBA_PTR_FROM_JSON(totalInputAmountUnit, totalInputAmountUnit_);
      DARABONBA_PTR_FROM_JSON(totalStorage, totalStorage_);
      DARABONBA_PTR_FROM_JSON(totalStorageFileCount, totalStorageFileCount_);
      DARABONBA_PTR_FROM_JSON(totalStorageUnit, totalStorageUnit_);
    };
    ListStorageTablesInfoResponseBodyDataStorageTableInfoList() = default ;
    ListStorageTablesInfoResponseBodyDataStorageTableInfoList(const ListStorageTablesInfoResponseBodyDataStorageTableInfoList &) = default ;
    ListStorageTablesInfoResponseBodyDataStorageTableInfoList(ListStorageTablesInfoResponseBodyDataStorageTableInfoList &&) = default ;
    ListStorageTablesInfoResponseBodyDataStorageTableInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStorageTablesInfoResponseBodyDataStorageTableInfoList() = default ;
    ListStorageTablesInfoResponseBodyDataStorageTableInfoList& operator=(const ListStorageTablesInfoResponseBodyDataStorageTableInfoList &) = default ;
    ListStorageTablesInfoResponseBodyDataStorageTableInfoList& operator=(ListStorageTablesInfoResponseBodyDataStorageTableInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->isPartitioned_ != nullptr && this->lastAccessTime_ != nullptr && this->longTermStorage_ != nullptr && this->longTermStorageFileCount_ != nullptr && this->longTermStorageUnit_ != nullptr
        && this->lowFreqStorage_ != nullptr && this->lowFreqStorageFileCount_ != nullptr && this->lowFreqStorageUnit_ != nullptr && this->projectName_ != nullptr && this->rate_ != nullptr
        && this->schemaName_ != nullptr && this->standardStorage_ != nullptr && this->standardStorageFileCount_ != nullptr && this->standardStorageUnit_ != nullptr && this->storageType_ != nullptr
        && this->tableName_ != nullptr && this->totalFrequency_ != nullptr && this->totalInputAmount_ != nullptr && this->totalInputAmountUnit_ != nullptr && this->totalStorage_ != nullptr
        && this->totalStorageFileCount_ != nullptr && this->totalStorageUnit_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // isPartitioned Field Functions 
    bool hasIsPartitioned() const { return this->isPartitioned_ != nullptr;};
    void deleteIsPartitioned() { this->isPartitioned_ = nullptr;};
    inline bool isPartitioned() const { DARABONBA_PTR_GET_DEFAULT(isPartitioned_, false) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setIsPartitioned(bool isPartitioned) { DARABONBA_PTR_SET_VALUE(isPartitioned_, isPartitioned) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // longTermStorage Field Functions 
    bool hasLongTermStorage() const { return this->longTermStorage_ != nullptr;};
    void deleteLongTermStorage() { this->longTermStorage_ = nullptr;};
    inline double longTermStorage() const { DARABONBA_PTR_GET_DEFAULT(longTermStorage_, 0.0) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLongTermStorage(double longTermStorage) { DARABONBA_PTR_SET_VALUE(longTermStorage_, longTermStorage) };


    // longTermStorageFileCount Field Functions 
    bool hasLongTermStorageFileCount() const { return this->longTermStorageFileCount_ != nullptr;};
    void deleteLongTermStorageFileCount() { this->longTermStorageFileCount_ = nullptr;};
    inline int64_t longTermStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(longTermStorageFileCount_, 0L) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLongTermStorageFileCount(int64_t longTermStorageFileCount) { DARABONBA_PTR_SET_VALUE(longTermStorageFileCount_, longTermStorageFileCount) };


    // longTermStorageUnit Field Functions 
    bool hasLongTermStorageUnit() const { return this->longTermStorageUnit_ != nullptr;};
    void deleteLongTermStorageUnit() { this->longTermStorageUnit_ = nullptr;};
    inline string longTermStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(longTermStorageUnit_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLongTermStorageUnit(string longTermStorageUnit) { DARABONBA_PTR_SET_VALUE(longTermStorageUnit_, longTermStorageUnit) };


    // lowFreqStorage Field Functions 
    bool hasLowFreqStorage() const { return this->lowFreqStorage_ != nullptr;};
    void deleteLowFreqStorage() { this->lowFreqStorage_ = nullptr;};
    inline double lowFreqStorage() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorage_, 0.0) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLowFreqStorage(double lowFreqStorage) { DARABONBA_PTR_SET_VALUE(lowFreqStorage_, lowFreqStorage) };


    // lowFreqStorageFileCount Field Functions 
    bool hasLowFreqStorageFileCount() const { return this->lowFreqStorageFileCount_ != nullptr;};
    void deleteLowFreqStorageFileCount() { this->lowFreqStorageFileCount_ = nullptr;};
    inline int64_t lowFreqStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorageFileCount_, 0L) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLowFreqStorageFileCount(int64_t lowFreqStorageFileCount) { DARABONBA_PTR_SET_VALUE(lowFreqStorageFileCount_, lowFreqStorageFileCount) };


    // lowFreqStorageUnit Field Functions 
    bool hasLowFreqStorageUnit() const { return this->lowFreqStorageUnit_ != nullptr;};
    void deleteLowFreqStorageUnit() { this->lowFreqStorageUnit_ = nullptr;};
    inline string lowFreqStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(lowFreqStorageUnit_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setLowFreqStorageUnit(string lowFreqStorageUnit) { DARABONBA_PTR_SET_VALUE(lowFreqStorageUnit_, lowFreqStorageUnit) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // standardStorage Field Functions 
    bool hasStandardStorage() const { return this->standardStorage_ != nullptr;};
    void deleteStandardStorage() { this->standardStorage_ = nullptr;};
    inline double standardStorage() const { DARABONBA_PTR_GET_DEFAULT(standardStorage_, 0.0) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setStandardStorage(double standardStorage) { DARABONBA_PTR_SET_VALUE(standardStorage_, standardStorage) };


    // standardStorageFileCount Field Functions 
    bool hasStandardStorageFileCount() const { return this->standardStorageFileCount_ != nullptr;};
    void deleteStandardStorageFileCount() { this->standardStorageFileCount_ = nullptr;};
    inline int64_t standardStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(standardStorageFileCount_, 0L) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setStandardStorageFileCount(int64_t standardStorageFileCount) { DARABONBA_PTR_SET_VALUE(standardStorageFileCount_, standardStorageFileCount) };


    // standardStorageUnit Field Functions 
    bool hasStandardStorageUnit() const { return this->standardStorageUnit_ != nullptr;};
    void deleteStandardStorageUnit() { this->standardStorageUnit_ = nullptr;};
    inline string standardStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(standardStorageUnit_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setStandardStorageUnit(string standardStorageUnit) { DARABONBA_PTR_SET_VALUE(standardStorageUnit_, standardStorageUnit) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalFrequency Field Functions 
    bool hasTotalFrequency() const { return this->totalFrequency_ != nullptr;};
    void deleteTotalFrequency() { this->totalFrequency_ = nullptr;};
    inline int64_t totalFrequency() const { DARABONBA_PTR_GET_DEFAULT(totalFrequency_, 0L) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTotalFrequency(int64_t totalFrequency) { DARABONBA_PTR_SET_VALUE(totalFrequency_, totalFrequency) };


    // totalInputAmount Field Functions 
    bool hasTotalInputAmount() const { return this->totalInputAmount_ != nullptr;};
    void deleteTotalInputAmount() { this->totalInputAmount_ = nullptr;};
    inline double totalInputAmount() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmount_, 0.0) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTotalInputAmount(double totalInputAmount) { DARABONBA_PTR_SET_VALUE(totalInputAmount_, totalInputAmount) };


    // totalInputAmountUnit Field Functions 
    bool hasTotalInputAmountUnit() const { return this->totalInputAmountUnit_ != nullptr;};
    void deleteTotalInputAmountUnit() { this->totalInputAmountUnit_ = nullptr;};
    inline string totalInputAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmountUnit_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTotalInputAmountUnit(string totalInputAmountUnit) { DARABONBA_PTR_SET_VALUE(totalInputAmountUnit_, totalInputAmountUnit) };


    // totalStorage Field Functions 
    bool hasTotalStorage() const { return this->totalStorage_ != nullptr;};
    void deleteTotalStorage() { this->totalStorage_ = nullptr;};
    inline double totalStorage() const { DARABONBA_PTR_GET_DEFAULT(totalStorage_, 0.0) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTotalStorage(double totalStorage) { DARABONBA_PTR_SET_VALUE(totalStorage_, totalStorage) };


    // totalStorageFileCount Field Functions 
    bool hasTotalStorageFileCount() const { return this->totalStorageFileCount_ != nullptr;};
    void deleteTotalStorageFileCount() { this->totalStorageFileCount_ = nullptr;};
    inline int64_t totalStorageFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalStorageFileCount_, 0L) };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTotalStorageFileCount(int64_t totalStorageFileCount) { DARABONBA_PTR_SET_VALUE(totalStorageFileCount_, totalStorageFileCount) };


    // totalStorageUnit Field Functions 
    bool hasTotalStorageUnit() const { return this->totalStorageUnit_ != nullptr;};
    void deleteTotalStorageUnit() { this->totalStorageUnit_ = nullptr;};
    inline string totalStorageUnit() const { DARABONBA_PTR_GET_DEFAULT(totalStorageUnit_, "") };
    inline ListStorageTablesInfoResponseBodyDataStorageTableInfoList& setTotalStorageUnit(string totalStorageUnit) { DARABONBA_PTR_SET_VALUE(totalStorageUnit_, totalStorageUnit) };


  protected:
    // The date on which the statistics are collected. This value is not returned.
    std::shared_ptr<string> date_ = nullptr;
    // Indicates whether the table is a partitioned table.
    std::shared_ptr<bool> isPartitioned_ = nullptr;
    // The time when the table was last accessed. This value is returned when the table is a non-partitioned table.
    // 
    // >  The data collection method is upgraded from July 2023. If the data is not accessed after the upgrade or is accessed by using ALGO jobs or the direct read method of Hologres, the last access time cannot be collected.
    std::shared_ptr<int64_t> lastAccessTime_ = nullptr;
    // The storage usage at the long-term storage tier.
    std::shared_ptr<double> longTermStorage_ = nullptr;
    // The number of long-term storage files.
    std::shared_ptr<int64_t> longTermStorageFileCount_ = nullptr;
    // The unit of the storage usage at the long-term storage tier.
    std::shared_ptr<string> longTermStorageUnit_ = nullptr;
    // The storage usage at the low-frequency tier.
    std::shared_ptr<double> lowFreqStorage_ = nullptr;
    // The number of low-frequency storage files.
    std::shared_ptr<int64_t> lowFreqStorageFileCount_ = nullptr;
    // The unit of the storage usage at the low-frequency storage tier.
    std::shared_ptr<string> lowFreqStorageUnit_ = nullptr;
    // The project name.
    std::shared_ptr<string> projectName_ = nullptr;
    // The change rate of the total storage usage compared with that of the recent {$recentDays} days.
    std::shared_ptr<double> rate_ = nullptr;
    // The schema name.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The storage usage at the standard storage tier.
    std::shared_ptr<double> standardStorage_ = nullptr;
    // The number of standard storage files.
    std::shared_ptr<int64_t> standardStorageFileCount_ = nullptr;
    // The unit of the storage usage at the standard storage tier.
    std::shared_ptr<string> standardStorageUnit_ = nullptr;
    // The table storage type.
    // 
    // *   standard
    // *   lowfrequency
    // *   longterm
    // *   unknown: This value is returned when the table is a partitioned table. You can call the ListStoragePartitionsInfo operation to query the storage type of each partition.
    std::shared_ptr<string> storageType_ = nullptr;
    // The table name.
    std::shared_ptr<string> tableName_ = nullptr;
    // The access frequency.
    // 
    // > 
    // 
    // *   Access behaviors include:
    // 
    // *   The table is used as the input table of an SQL task.
    // *   The table is downloaded by Tunnel.
    // *   The table is read by calling the Storage API. The partition granularity of the partitioned table is not available. Each time an access operation is performed, the access frequency is incremented by 1.
    // 
    // *   The data collection method is upgraded from July 2023. If the data is not accessed after the upgrade or is accessed by using ALGO jobs or the direct read method of Hologres, the access frequency cannot be collected.
    std::shared_ptr<int64_t> totalFrequency_ = nullptr;
    // The total amount of accessed data.
    // 
    // >  The amount of data that is read by all access behaviors.
    std::shared_ptr<double> totalInputAmount_ = nullptr;
    // The unit of the total amount of accessed data.
    std::shared_ptr<string> totalInputAmountUnit_ = nullptr;
    // The total storage usage. For a partitioned table, this parameter indicates the sum of the storage usage of all partitions. If the storage types of partitions are different, the value is the sum of the storage usage of each storage type.
    std::shared_ptr<double> totalStorage_ = nullptr;
    // The total number of files.
    std::shared_ptr<int64_t> totalStorageFileCount_ = nullptr;
    // The unit of storage usage.
    std::shared_ptr<string> totalStorageUnit_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
