// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTORAGEPARTITIONSINFORESPONSEBODYDATASTORAGEPARTITIONINFOLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTORAGEPARTITIONSINFORESPONSEBODYDATASTORAGEPARTITIONINFOLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& obj) { 
      DARABONBA_PTR_TO_JSON(fileCount, fileCount_);
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(fileSizeUnit, fileSizeUnit_);
      DARABONBA_PTR_TO_JSON(isPartitioned, isPartitioned_);
      DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(partition, partition_);
      DARABONBA_PTR_TO_JSON(projectName, projectName_);
      DARABONBA_PTR_TO_JSON(rate, rate_);
      DARABONBA_PTR_TO_JSON(schemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(storageType, storageType_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(totalFrequency, totalFrequency_);
      DARABONBA_PTR_TO_JSON(totalInputAmount, totalInputAmount_);
      DARABONBA_PTR_TO_JSON(totalInputAmountUnit, totalInputAmountUnit_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& obj) { 
      DARABONBA_PTR_FROM_JSON(fileCount, fileCount_);
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(fileSizeUnit, fileSizeUnit_);
      DARABONBA_PTR_FROM_JSON(isPartitioned, isPartitioned_);
      DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(partition, partition_);
      DARABONBA_PTR_FROM_JSON(projectName, projectName_);
      DARABONBA_PTR_FROM_JSON(rate, rate_);
      DARABONBA_PTR_FROM_JSON(schemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(storageType, storageType_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(totalFrequency, totalFrequency_);
      DARABONBA_PTR_FROM_JSON(totalInputAmount, totalInputAmount_);
      DARABONBA_PTR_FROM_JSON(totalInputAmountUnit, totalInputAmountUnit_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList() = default ;
    ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList(const ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList &) = default ;
    ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList(ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList &&) = default ;
    ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList() = default ;
    ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& operator=(const ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList &) = default ;
    ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& operator=(ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fileCount_ == nullptr
        && return this->fileSize_ == nullptr && return this->fileSizeUnit_ == nullptr && return this->isPartitioned_ == nullptr && return this->lastAccessTime_ == nullptr && return this->partition_ == nullptr
        && return this->projectName_ == nullptr && return this->rate_ == nullptr && return this->schemaName_ == nullptr && return this->storageType_ == nullptr && return this->tableName_ == nullptr
        && return this->totalFrequency_ == nullptr && return this->totalInputAmount_ == nullptr && return this->totalInputAmountUnit_ == nullptr && return this->type_ == nullptr; };
    // fileCount Field Functions 
    bool hasFileCount() const { return this->fileCount_ != nullptr;};
    void deleteFileCount() { this->fileCount_ = nullptr;};
    inline int64_t fileCount() const { DARABONBA_PTR_GET_DEFAULT(fileCount_, 0L) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setFileCount(int64_t fileCount) { DARABONBA_PTR_SET_VALUE(fileCount_, fileCount) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline double fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0.0) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setFileSize(double fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // fileSizeUnit Field Functions 
    bool hasFileSizeUnit() const { return this->fileSizeUnit_ != nullptr;};
    void deleteFileSizeUnit() { this->fileSizeUnit_ = nullptr;};
    inline string fileSizeUnit() const { DARABONBA_PTR_GET_DEFAULT(fileSizeUnit_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setFileSizeUnit(string fileSizeUnit) { DARABONBA_PTR_SET_VALUE(fileSizeUnit_, fileSizeUnit) };


    // isPartitioned Field Functions 
    bool hasIsPartitioned() const { return this->isPartitioned_ != nullptr;};
    void deleteIsPartitioned() { this->isPartitioned_ = nullptr;};
    inline bool isPartitioned() const { DARABONBA_PTR_GET_DEFAULT(isPartitioned_, false) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setIsPartitioned(bool isPartitioned) { DARABONBA_PTR_SET_VALUE(isPartitioned_, isPartitioned) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // partition Field Functions 
    bool hasPartition() const { return this->partition_ != nullptr;};
    void deletePartition() { this->partition_ = nullptr;};
    inline string partition() const { DARABONBA_PTR_GET_DEFAULT(partition_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setPartition(string partition) { DARABONBA_PTR_SET_VALUE(partition_, partition) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline double rate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0.0) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setRate(double rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string schemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string storageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalFrequency Field Functions 
    bool hasTotalFrequency() const { return this->totalFrequency_ != nullptr;};
    void deleteTotalFrequency() { this->totalFrequency_ = nullptr;};
    inline int64_t totalFrequency() const { DARABONBA_PTR_GET_DEFAULT(totalFrequency_, 0L) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setTotalFrequency(int64_t totalFrequency) { DARABONBA_PTR_SET_VALUE(totalFrequency_, totalFrequency) };


    // totalInputAmount Field Functions 
    bool hasTotalInputAmount() const { return this->totalInputAmount_ != nullptr;};
    void deleteTotalInputAmount() { this->totalInputAmount_ = nullptr;};
    inline double totalInputAmount() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmount_, 0.0) };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setTotalInputAmount(double totalInputAmount) { DARABONBA_PTR_SET_VALUE(totalInputAmount_, totalInputAmount) };


    // totalInputAmountUnit Field Functions 
    bool hasTotalInputAmountUnit() const { return this->totalInputAmountUnit_ != nullptr;};
    void deleteTotalInputAmountUnit() { this->totalInputAmountUnit_ = nullptr;};
    inline string totalInputAmountUnit() const { DARABONBA_PTR_GET_DEFAULT(totalInputAmountUnit_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setTotalInputAmountUnit(string totalInputAmountUnit) { DARABONBA_PTR_SET_VALUE(totalInputAmountUnit_, totalInputAmountUnit) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListStoragePartitionsInfoResponseBodyDataStoragePartitionInfoList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of files.
    std::shared_ptr<int64_t> fileCount_ = nullptr;
    // The storage size.
    std::shared_ptr<double> fileSize_ = nullptr;
    // The unit of the storage size.
    std::shared_ptr<string> fileSizeUnit_ = nullptr;
    // Indicates whether the table is a partitioned table. This operation returns the partition information. You do not need to take note of this parameter.
    std::shared_ptr<bool> isPartitioned_ = nullptr;
    // The time when the partition data was last accessed.
    // 
    // >  The data collection method is upgraded from July 2023. If the data is not accessed after the upgrade or is accessed by using ALGO jobs or the direct read method of Hologres, the last access time cannot be collected.
    std::shared_ptr<int64_t> lastAccessTime_ = nullptr;
    // The partition name.
    std::shared_ptr<string> partition_ = nullptr;
    // The project name.
    std::shared_ptr<string> projectName_ = nullptr;
    // The change rate of the total storage usage compared with that of the recent {$recentDays} days. No value is returned.
    std::shared_ptr<double> rate_ = nullptr;
    // The schema name.
    std::shared_ptr<string> schemaName_ = nullptr;
    // The storage type.
    // 
    // *   standard
    // *   lowfrequency
    // *   longterm
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
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
