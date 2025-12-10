// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PARTITIONPROFILE_HPP_
#define ALIBABACLOUD_MODELS_PARTITIONPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class PartitionProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PartitionProfile& obj) { 
      DARABONBA_PTR_TO_JSON(AccessNum, accessNum_);
      DARABONBA_PTR_TO_JSON(AccessNumMonthly, accessNumMonthly_);
      DARABONBA_PTR_TO_JSON(AccessNumWeekly, accessNumWeekly_);
      DARABONBA_PTR_TO_JSON(ArchiveStatus, archiveStatus_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(LastAccessNumTime, lastAccessNumTime_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ObjectAccessNum, objectAccessNum_);
      DARABONBA_PTR_TO_JSON(ObjectAccessNumMonthly, objectAccessNumMonthly_);
      DARABONBA_PTR_TO_JSON(ObjectAccessNumWeekly, objectAccessNumWeekly_);
      DARABONBA_PTR_TO_JSON(ObjectCnt, objectCnt_);
      DARABONBA_PTR_TO_JSON(ObjectSize, objectSize_);
      DARABONBA_PTR_TO_JSON(PartitionName, partitionName_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, PartitionProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessNum, accessNum_);
      DARABONBA_PTR_FROM_JSON(AccessNumMonthly, accessNumMonthly_);
      DARABONBA_PTR_FROM_JSON(AccessNumWeekly, accessNumWeekly_);
      DARABONBA_PTR_FROM_JSON(ArchiveStatus, archiveStatus_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(LastAccessNumTime, lastAccessNumTime_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ObjectAccessNum, objectAccessNum_);
      DARABONBA_PTR_FROM_JSON(ObjectAccessNumMonthly, objectAccessNumMonthly_);
      DARABONBA_PTR_FROM_JSON(ObjectAccessNumWeekly, objectAccessNumWeekly_);
      DARABONBA_PTR_FROM_JSON(ObjectCnt, objectCnt_);
      DARABONBA_PTR_FROM_JSON(ObjectSize, objectSize_);
      DARABONBA_PTR_FROM_JSON(PartitionName, partitionName_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    PartitionProfile() = default ;
    PartitionProfile(const PartitionProfile &) = default ;
    PartitionProfile(PartitionProfile &&) = default ;
    PartitionProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PartitionProfile() = default ;
    PartitionProfile& operator=(const PartitionProfile &) = default ;
    PartitionProfile& operator=(PartitionProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessNum_ == nullptr
        && return this->accessNumMonthly_ == nullptr && return this->accessNumWeekly_ == nullptr && return this->archiveStatus_ == nullptr && return this->createTime_ == nullptr && return this->dataSourceType_ == nullptr
        && return this->databaseName_ == nullptr && return this->fileCnt_ == nullptr && return this->fileSize_ == nullptr && return this->lastAccessNumTime_ == nullptr && return this->lastAccessTime_ == nullptr
        && return this->lastModifyTime_ == nullptr && return this->location_ == nullptr && return this->objectAccessNum_ == nullptr && return this->objectAccessNumMonthly_ == nullptr && return this->objectAccessNumWeekly_ == nullptr
        && return this->objectCnt_ == nullptr && return this->objectSize_ == nullptr && return this->partitionName_ == nullptr && return this->tableName_ == nullptr; };
    // accessNum Field Functions 
    bool hasAccessNum() const { return this->accessNum_ != nullptr;};
    void deleteAccessNum() { this->accessNum_ = nullptr;};
    inline int64_t accessNum() const { DARABONBA_PTR_GET_DEFAULT(accessNum_, 0L) };
    inline PartitionProfile& setAccessNum(int64_t accessNum) { DARABONBA_PTR_SET_VALUE(accessNum_, accessNum) };


    // accessNumMonthly Field Functions 
    bool hasAccessNumMonthly() const { return this->accessNumMonthly_ != nullptr;};
    void deleteAccessNumMonthly() { this->accessNumMonthly_ = nullptr;};
    inline int64_t accessNumMonthly() const { DARABONBA_PTR_GET_DEFAULT(accessNumMonthly_, 0L) };
    inline PartitionProfile& setAccessNumMonthly(int64_t accessNumMonthly) { DARABONBA_PTR_SET_VALUE(accessNumMonthly_, accessNumMonthly) };


    // accessNumWeekly Field Functions 
    bool hasAccessNumWeekly() const { return this->accessNumWeekly_ != nullptr;};
    void deleteAccessNumWeekly() { this->accessNumWeekly_ = nullptr;};
    inline int64_t accessNumWeekly() const { DARABONBA_PTR_GET_DEFAULT(accessNumWeekly_, 0L) };
    inline PartitionProfile& setAccessNumWeekly(int64_t accessNumWeekly) { DARABONBA_PTR_SET_VALUE(accessNumWeekly_, accessNumWeekly) };


    // archiveStatus Field Functions 
    bool hasArchiveStatus() const { return this->archiveStatus_ != nullptr;};
    void deleteArchiveStatus() { this->archiveStatus_ = nullptr;};
    inline string archiveStatus() const { DARABONBA_PTR_GET_DEFAULT(archiveStatus_, "") };
    inline PartitionProfile& setArchiveStatus(string archiveStatus) { DARABONBA_PTR_SET_VALUE(archiveStatus_, archiveStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PartitionProfile& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline PartitionProfile& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline PartitionProfile& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // fileCnt Field Functions 
    bool hasFileCnt() const { return this->fileCnt_ != nullptr;};
    void deleteFileCnt() { this->fileCnt_ = nullptr;};
    inline int64_t fileCnt() const { DARABONBA_PTR_GET_DEFAULT(fileCnt_, 0L) };
    inline PartitionProfile& setFileCnt(int64_t fileCnt) { DARABONBA_PTR_SET_VALUE(fileCnt_, fileCnt) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline PartitionProfile& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // lastAccessNumTime Field Functions 
    bool hasLastAccessNumTime() const { return this->lastAccessNumTime_ != nullptr;};
    void deleteLastAccessNumTime() { this->lastAccessNumTime_ = nullptr;};
    inline string lastAccessNumTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessNumTime_, "") };
    inline PartitionProfile& setLastAccessNumTime(string lastAccessNumTime) { DARABONBA_PTR_SET_VALUE(lastAccessNumTime_, lastAccessNumTime) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline string lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, "") };
    inline PartitionProfile& setLastAccessTime(string lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline PartitionProfile& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline PartitionProfile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // objectAccessNum Field Functions 
    bool hasObjectAccessNum() const { return this->objectAccessNum_ != nullptr;};
    void deleteObjectAccessNum() { this->objectAccessNum_ = nullptr;};
    inline int64_t objectAccessNum() const { DARABONBA_PTR_GET_DEFAULT(objectAccessNum_, 0L) };
    inline PartitionProfile& setObjectAccessNum(int64_t objectAccessNum) { DARABONBA_PTR_SET_VALUE(objectAccessNum_, objectAccessNum) };


    // objectAccessNumMonthly Field Functions 
    bool hasObjectAccessNumMonthly() const { return this->objectAccessNumMonthly_ != nullptr;};
    void deleteObjectAccessNumMonthly() { this->objectAccessNumMonthly_ = nullptr;};
    inline int64_t objectAccessNumMonthly() const { DARABONBA_PTR_GET_DEFAULT(objectAccessNumMonthly_, 0L) };
    inline PartitionProfile& setObjectAccessNumMonthly(int64_t objectAccessNumMonthly) { DARABONBA_PTR_SET_VALUE(objectAccessNumMonthly_, objectAccessNumMonthly) };


    // objectAccessNumWeekly Field Functions 
    bool hasObjectAccessNumWeekly() const { return this->objectAccessNumWeekly_ != nullptr;};
    void deleteObjectAccessNumWeekly() { this->objectAccessNumWeekly_ = nullptr;};
    inline int64_t objectAccessNumWeekly() const { DARABONBA_PTR_GET_DEFAULT(objectAccessNumWeekly_, 0L) };
    inline PartitionProfile& setObjectAccessNumWeekly(int64_t objectAccessNumWeekly) { DARABONBA_PTR_SET_VALUE(objectAccessNumWeekly_, objectAccessNumWeekly) };


    // objectCnt Field Functions 
    bool hasObjectCnt() const { return this->objectCnt_ != nullptr;};
    void deleteObjectCnt() { this->objectCnt_ = nullptr;};
    inline int64_t objectCnt() const { DARABONBA_PTR_GET_DEFAULT(objectCnt_, 0L) };
    inline PartitionProfile& setObjectCnt(int64_t objectCnt) { DARABONBA_PTR_SET_VALUE(objectCnt_, objectCnt) };


    // objectSize Field Functions 
    bool hasObjectSize() const { return this->objectSize_ != nullptr;};
    void deleteObjectSize() { this->objectSize_ = nullptr;};
    inline int64_t objectSize() const { DARABONBA_PTR_GET_DEFAULT(objectSize_, 0L) };
    inline PartitionProfile& setObjectSize(int64_t objectSize) { DARABONBA_PTR_SET_VALUE(objectSize_, objectSize) };


    // partitionName Field Functions 
    bool hasPartitionName() const { return this->partitionName_ != nullptr;};
    void deletePartitionName() { this->partitionName_ = nullptr;};
    inline string partitionName() const { DARABONBA_PTR_GET_DEFAULT(partitionName_, "") };
    inline PartitionProfile& setPartitionName(string partitionName) { DARABONBA_PTR_SET_VALUE(partitionName_, partitionName) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline PartitionProfile& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<int64_t> accessNum_ = nullptr;
    std::shared_ptr<int64_t> accessNumMonthly_ = nullptr;
    std::shared_ptr<int64_t> accessNumWeekly_ = nullptr;
    std::shared_ptr<string> archiveStatus_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<int64_t> fileCnt_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<string> lastAccessNumTime_ = nullptr;
    std::shared_ptr<string> lastAccessTime_ = nullptr;
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> objectAccessNum_ = nullptr;
    std::shared_ptr<int64_t> objectAccessNumMonthly_ = nullptr;
    std::shared_ptr<int64_t> objectAccessNumWeekly_ = nullptr;
    std::shared_ptr<int64_t> objectCnt_ = nullptr;
    std::shared_ptr<int64_t> objectSize_ = nullptr;
    std::shared_ptr<string> partitionName_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
