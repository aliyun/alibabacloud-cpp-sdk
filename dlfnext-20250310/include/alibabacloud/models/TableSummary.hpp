// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLESUMMARY_HPP_
#define ALIBABACLOUD_MODELS_TABLESUMMARY_HPP_
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
  class TableSummary : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableSummary& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(databaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(generatedDate, generatedDate_);
      DARABONBA_PTR_TO_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(objTypeArchiveSize, objTypeArchiveSize_);
      DARABONBA_PTR_TO_JSON(objTypeColdArchiveSize, objTypeColdArchiveSize_);
      DARABONBA_PTR_TO_JSON(objTypeIaSize, objTypeIaSize_);
      DARABONBA_PTR_TO_JSON(objTypeStandardSize, objTypeStandardSize_);
      DARABONBA_PTR_TO_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(storageActionParams, storageActionParams_);
      DARABONBA_PTR_TO_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_TO_JSON(storageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(tableName, tableName_);
      DARABONBA_PTR_TO_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_TO_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
      DARABONBA_PTR_TO_JSON(totalMetaFileCount, totalMetaFileCount_);
      DARABONBA_PTR_TO_JSON(totalMetaSizeInBytes, totalMetaSizeInBytes_);
      DARABONBA_PTR_TO_JSON(unaccessedStdIaPartitionCount180d, unaccessedStdIaPartitionCount180d_);
      DARABONBA_PTR_TO_JSON(unaccessedStdPartitionCount30d, unaccessedStdPartitionCount30d_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, TableSummary& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(databaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(generatedDate, generatedDate_);
      DARABONBA_PTR_FROM_JSON(lastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(objTypeArchiveSize, objTypeArchiveSize_);
      DARABONBA_PTR_FROM_JSON(objTypeColdArchiveSize, objTypeColdArchiveSize_);
      DARABONBA_PTR_FROM_JSON(objTypeIaSize, objTypeIaSize_);
      DARABONBA_PTR_FROM_JSON(objTypeStandardSize, objTypeStandardSize_);
      DARABONBA_PTR_FROM_JSON(partitionCount, partitionCount_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(storageActionParams, storageActionParams_);
      DARABONBA_PTR_FROM_JSON(storageActionTimestamp, storageActionTimestamp_);
      DARABONBA_PTR_FROM_JSON(storageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(tableName, tableName_);
      DARABONBA_PTR_FROM_JSON(totalFileCount, totalFileCount_);
      DARABONBA_PTR_FROM_JSON(totalFileSizeInBytes, totalFileSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(totalMetaFileCount, totalMetaFileCount_);
      DARABONBA_PTR_FROM_JSON(totalMetaSizeInBytes, totalMetaSizeInBytes_);
      DARABONBA_PTR_FROM_JSON(unaccessedStdIaPartitionCount180d, unaccessedStdIaPartitionCount180d_);
      DARABONBA_PTR_FROM_JSON(unaccessedStdPartitionCount30d, unaccessedStdPartitionCount30d_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    TableSummary() = default ;
    TableSummary(const TableSummary &) = default ;
    TableSummary(TableSummary &&) = default ;
    TableSummary(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableSummary() = default ;
    TableSummary& operator=(const TableSummary &) = default ;
    TableSummary& operator=(TableSummary &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->databaseName_ == nullptr && this->generatedDate_ == nullptr && this->lastAccessTime_ == nullptr && this->objTypeArchiveSize_ == nullptr && this->objTypeColdArchiveSize_ == nullptr
        && this->objTypeIaSize_ == nullptr && this->objTypeStandardSize_ == nullptr && this->partitionCount_ == nullptr && this->path_ == nullptr && this->storageActionParams_ == nullptr
        && this->storageActionTimestamp_ == nullptr && this->storageClass_ == nullptr && this->tableName_ == nullptr && this->totalFileCount_ == nullptr && this->totalFileSizeInBytes_ == nullptr
        && this->totalMetaFileCount_ == nullptr && this->totalMetaSizeInBytes_ == nullptr && this->unaccessedStdIaPartitionCount180d_ == nullptr && this->unaccessedStdPartitionCount30d_ == nullptr && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline TableSummary& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline TableSummary& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // generatedDate Field Functions 
    bool hasGeneratedDate() const { return this->generatedDate_ != nullptr;};
    void deleteGeneratedDate() { this->generatedDate_ = nullptr;};
    inline string getGeneratedDate() const { DARABONBA_PTR_GET_DEFAULT(generatedDate_, "") };
    inline TableSummary& setGeneratedDate(string generatedDate) { DARABONBA_PTR_SET_VALUE(generatedDate_, generatedDate) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline int64_t getLastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, 0L) };
    inline TableSummary& setLastAccessTime(int64_t lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // objTypeArchiveSize Field Functions 
    bool hasObjTypeArchiveSize() const { return this->objTypeArchiveSize_ != nullptr;};
    void deleteObjTypeArchiveSize() { this->objTypeArchiveSize_ = nullptr;};
    inline int64_t getObjTypeArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeArchiveSize_, 0L) };
    inline TableSummary& setObjTypeArchiveSize(int64_t objTypeArchiveSize) { DARABONBA_PTR_SET_VALUE(objTypeArchiveSize_, objTypeArchiveSize) };


    // objTypeColdArchiveSize Field Functions 
    bool hasObjTypeColdArchiveSize() const { return this->objTypeColdArchiveSize_ != nullptr;};
    void deleteObjTypeColdArchiveSize() { this->objTypeColdArchiveSize_ = nullptr;};
    inline int64_t getObjTypeColdArchiveSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeColdArchiveSize_, 0L) };
    inline TableSummary& setObjTypeColdArchiveSize(int64_t objTypeColdArchiveSize) { DARABONBA_PTR_SET_VALUE(objTypeColdArchiveSize_, objTypeColdArchiveSize) };


    // objTypeIaSize Field Functions 
    bool hasObjTypeIaSize() const { return this->objTypeIaSize_ != nullptr;};
    void deleteObjTypeIaSize() { this->objTypeIaSize_ = nullptr;};
    inline int64_t getObjTypeIaSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeIaSize_, 0L) };
    inline TableSummary& setObjTypeIaSize(int64_t objTypeIaSize) { DARABONBA_PTR_SET_VALUE(objTypeIaSize_, objTypeIaSize) };


    // objTypeStandardSize Field Functions 
    bool hasObjTypeStandardSize() const { return this->objTypeStandardSize_ != nullptr;};
    void deleteObjTypeStandardSize() { this->objTypeStandardSize_ = nullptr;};
    inline int64_t getObjTypeStandardSize() const { DARABONBA_PTR_GET_DEFAULT(objTypeStandardSize_, 0L) };
    inline TableSummary& setObjTypeStandardSize(int64_t objTypeStandardSize) { DARABONBA_PTR_SET_VALUE(objTypeStandardSize_, objTypeStandardSize) };


    // partitionCount Field Functions 
    bool hasPartitionCount() const { return this->partitionCount_ != nullptr;};
    void deletePartitionCount() { this->partitionCount_ = nullptr;};
    inline int64_t getPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(partitionCount_, 0L) };
    inline TableSummary& setPartitionCount(int64_t partitionCount) { DARABONBA_PTR_SET_VALUE(partitionCount_, partitionCount) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline TableSummary& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // storageActionParams Field Functions 
    bool hasStorageActionParams() const { return this->storageActionParams_ != nullptr;};
    void deleteStorageActionParams() { this->storageActionParams_ = nullptr;};
    inline const map<string, string> & getStorageActionParams() const { DARABONBA_PTR_GET_CONST(storageActionParams_, map<string, string>) };
    inline map<string, string> getStorageActionParams() { DARABONBA_PTR_GET(storageActionParams_, map<string, string>) };
    inline TableSummary& setStorageActionParams(const map<string, string> & storageActionParams) { DARABONBA_PTR_SET_VALUE(storageActionParams_, storageActionParams) };
    inline TableSummary& setStorageActionParams(map<string, string> && storageActionParams) { DARABONBA_PTR_SET_RVALUE(storageActionParams_, storageActionParams) };


    // storageActionTimestamp Field Functions 
    bool hasStorageActionTimestamp() const { return this->storageActionTimestamp_ != nullptr;};
    void deleteStorageActionTimestamp() { this->storageActionTimestamp_ = nullptr;};
    inline int64_t getStorageActionTimestamp() const { DARABONBA_PTR_GET_DEFAULT(storageActionTimestamp_, 0L) };
    inline TableSummary& setStorageActionTimestamp(int64_t storageActionTimestamp) { DARABONBA_PTR_SET_VALUE(storageActionTimestamp_, storageActionTimestamp) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline TableSummary& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableSummary& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // totalFileCount Field Functions 
    bool hasTotalFileCount() const { return this->totalFileCount_ != nullptr;};
    void deleteTotalFileCount() { this->totalFileCount_ = nullptr;};
    inline int64_t getTotalFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalFileCount_, 0L) };
    inline TableSummary& setTotalFileCount(int64_t totalFileCount) { DARABONBA_PTR_SET_VALUE(totalFileCount_, totalFileCount) };


    // totalFileSizeInBytes Field Functions 
    bool hasTotalFileSizeInBytes() const { return this->totalFileSizeInBytes_ != nullptr;};
    void deleteTotalFileSizeInBytes() { this->totalFileSizeInBytes_ = nullptr;};
    inline int64_t getTotalFileSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(totalFileSizeInBytes_, 0L) };
    inline TableSummary& setTotalFileSizeInBytes(int64_t totalFileSizeInBytes) { DARABONBA_PTR_SET_VALUE(totalFileSizeInBytes_, totalFileSizeInBytes) };


    // totalMetaFileCount Field Functions 
    bool hasTotalMetaFileCount() const { return this->totalMetaFileCount_ != nullptr;};
    void deleteTotalMetaFileCount() { this->totalMetaFileCount_ = nullptr;};
    inline int64_t getTotalMetaFileCount() const { DARABONBA_PTR_GET_DEFAULT(totalMetaFileCount_, 0L) };
    inline TableSummary& setTotalMetaFileCount(int64_t totalMetaFileCount) { DARABONBA_PTR_SET_VALUE(totalMetaFileCount_, totalMetaFileCount) };


    // totalMetaSizeInBytes Field Functions 
    bool hasTotalMetaSizeInBytes() const { return this->totalMetaSizeInBytes_ != nullptr;};
    void deleteTotalMetaSizeInBytes() { this->totalMetaSizeInBytes_ = nullptr;};
    inline int64_t getTotalMetaSizeInBytes() const { DARABONBA_PTR_GET_DEFAULT(totalMetaSizeInBytes_, 0L) };
    inline TableSummary& setTotalMetaSizeInBytes(int64_t totalMetaSizeInBytes) { DARABONBA_PTR_SET_VALUE(totalMetaSizeInBytes_, totalMetaSizeInBytes) };


    // unaccessedStdIaPartitionCount180d Field Functions 
    bool hasUnaccessedStdIaPartitionCount180d() const { return this->unaccessedStdIaPartitionCount180d_ != nullptr;};
    void deleteUnaccessedStdIaPartitionCount180d() { this->unaccessedStdIaPartitionCount180d_ = nullptr;};
    inline int64_t getUnaccessedStdIaPartitionCount180d() const { DARABONBA_PTR_GET_DEFAULT(unaccessedStdIaPartitionCount180d_, 0L) };
    inline TableSummary& setUnaccessedStdIaPartitionCount180d(int64_t unaccessedStdIaPartitionCount180d) { DARABONBA_PTR_SET_VALUE(unaccessedStdIaPartitionCount180d_, unaccessedStdIaPartitionCount180d) };


    // unaccessedStdPartitionCount30d Field Functions 
    bool hasUnaccessedStdPartitionCount30d() const { return this->unaccessedStdPartitionCount30d_ != nullptr;};
    void deleteUnaccessedStdPartitionCount30d() { this->unaccessedStdPartitionCount30d_ = nullptr;};
    inline int64_t getUnaccessedStdPartitionCount30d() const { DARABONBA_PTR_GET_DEFAULT(unaccessedStdPartitionCount30d_, 0L) };
    inline TableSummary& setUnaccessedStdPartitionCount30d(int64_t unaccessedStdPartitionCount30d) { DARABONBA_PTR_SET_VALUE(unaccessedStdPartitionCount30d_, unaccessedStdPartitionCount30d) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline TableSummary& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    // Latest snapshot storage size
    shared_ptr<int64_t> createdAt_ {};
    // Database name
    shared_ptr<string> databaseName_ {};
    shared_ptr<string> generatedDate_ {};
    shared_ptr<int64_t> lastAccessTime_ {};
    shared_ptr<int64_t> objTypeArchiveSize_ {};
    shared_ptr<int64_t> objTypeColdArchiveSize_ {};
    shared_ptr<int64_t> objTypeIaSize_ {};
    shared_ptr<int64_t> objTypeStandardSize_ {};
    // Creation timestamp in milliseconds
    shared_ptr<int64_t> partitionCount_ {};
    shared_ptr<string> path_ {};
    shared_ptr<map<string, string>> storageActionParams_ {};
    shared_ptr<int64_t> storageActionTimestamp_ {};
    shared_ptr<string> storageClass_ {};
    // Table name
    shared_ptr<string> tableName_ {};
    // 30-day access count
    shared_ptr<int64_t> totalFileCount_ {};
    shared_ptr<int64_t> totalFileSizeInBytes_ {};
    shared_ptr<int64_t> totalMetaFileCount_ {};
    shared_ptr<int64_t> totalMetaSizeInBytes_ {};
    // Creation timestamp in milliseconds
    shared_ptr<int64_t> unaccessedStdIaPartitionCount180d_ {};
    // Creation timestamp in milliseconds
    shared_ptr<int64_t> unaccessedStdPartitionCount30d_ {};
    shared_ptr<int64_t> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
