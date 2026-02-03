// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONSUMMARY_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONSUMMARY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class PartitionSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionSummary& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(partitionName, partitionName_);
      DARABONBA_PTR_TO_JSON(storageActionParams, storageActionParams_);
      DARABONBA_PTR_TO_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_TO_JSON(storageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(partitionName, partitionName_);
      DARABONBA_PTR_FROM_JSON(storageActionParams, storageActionParams_);
      DARABONBA_PTR_FROM_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_FROM_JSON(storageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    PartitionSummary() = default ;
    PartitionSummary(const PartitionSummary &) = default ;
    PartitionSummary(PartitionSummary &&) = default ;
    PartitionSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PartitionSummary() = default ;
    PartitionSummary& operator=(const PartitionSummary &) = default ;
    PartitionSummary& operator=(PartitionSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->databaseName_ == nullptr && this->lastAccessTime_ == nullptr && this->partitionName_ == nullptr && this->storageActionParams_ == nullptr && this->storageActionTimestamp_ == nullptr
        && this->storageClass_ == nullptr && this->tableName_ == nullptr && this->totalFileCount_ == nullptr && this->totalFileSizeInBytes_ == nullptr && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline PartitionSummary& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline PartitionSummary& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline PartitionSummary& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // partitionName Field Functions 
    bool hasPartitionName() const { return this->partitionName_ != nullptr;};
    void deletePartitionName() { this->partitionName_ = nullptr;};
    inline string getPartitionName() const { DARABONBA_PTR_GET_DEFAULT(partitionName_, "") };
    inline PartitionSummary& setPartitionName(string partitionName) { DARABONBA_PTR_SET_VALUE(partitionName_, partitionName) };


    // storageActionParams Field Functions 
    bool hasStorageActionParams() const { return this->storageActionParams_ != nullptr;};
    void deleteStorageActionParams() { this->storageActionParams_ = nullptr;};
    inline const map<string, string> & getStorageActionParams() const { DARABONBA_PTR_GET_CONST(storageActionParams_, map<string, string>) };
    inline map<string, string> getStorageActionParams() { DARABONBA_PTR_GET(storageActionParams_, map<string, string>) };
    inline PartitionSummary& setStorageActionParams(const map<string, string> & storageActionParams) { DARABONBA_PTR_SET_VALUE(storageActionParams_, storageActionParams) };
    inline PartitionSummary& setStorageActionParams(map<string, string> && storageActionParams) { DARABONBA_PTR_SET_RVALUE(storageActionParams_, storageActionParams) };


    // storageActionTimestamp Field Functions 
    bool hasStorageActionTimestamp() const { return this->storageActionTimestamp_ != nullptr;};
    void deleteStorageActionTimestamp() { this->storageActionTimestamp_ = nullptr;};
    inline int64_t getStorageActionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storageActionTimestamp_, 0L) };
    inline PartitionSummary& setStorageActionTimestamp(int64_t storageActionTimestamp) { DARABONBA_PTR_SET_VALUE(storageActionTimestamp_, storageActionTimestamp) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline PartitionSummary& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline PartitionSummary& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline int64_t getTotalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0L) };
    inline PartitionSummary& setTotalFileCount(int64_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


    // totalFileSizeInBytes Field Functions 
    bool hasTotalFileSizeInBytes() const { return this->totalFileSizeInBytes_ != nullptr;};
    void deleteTotalFileSizeInBytes() { this->totalFileSizeInBytes_ = nullptr;};
    inline int64_t getTotalFileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(totalFileSizeInBytes_, 0L) };
    inline PartitionSummary& setTotalFileSizeInBytes(int64_t totalFileSizeInBytes) { DARABONBA_PTR_SET_VALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline PartitionSummary& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // Partition creation timestamp in milliseconds
    shared_ptr<int64_t> createdAt_ {};
    // Database name
    shared_ptr<string> databaseName_ {};
    // Total files in partition
    shared_ptr<int64_t> lastAccessTime_ {};
    // Partition identifier
    shared_ptr<string> partitionName_ {};
    shared_ptr<map<string, string>> storageActionParams_ {};
    shared_ptr<int64_t> storageActionTimestamp_ {};
    shared_ptr<string> storageClass_ {};
    // Table name
    shared_ptr<string> tableName_ {};
    // 24h access count
    shared_ptr<int64_t> totalFileCount_ {};
    // Last data access timestamp in milliseconds
    shared_ptr<int64_t> totalFileSizeInBytes_ {};
    shared_ptr<int64_t> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
