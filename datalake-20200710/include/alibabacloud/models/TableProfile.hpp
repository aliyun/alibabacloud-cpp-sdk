// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLEPROFILE_HPP_
#define ALIBABACLOUD_MODELS_TABLEPROFILE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class TableProfile : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableProfile& obj) { 
      DARABONBA_PTR_TO_JSON(AccessNum, accessNum_);
      DARABONBA_PTR_TO_JSON(AccessNumMonthly, accessNumMonthly_);
      DARABONBA_PTR_TO_JSON(AccessNumWeekly, accessNumWeekly_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(IsPartitioned, isPartitioned_);
      DARABONBA_PTR_TO_JSON(LastAccessNumTime, lastAccessNumTime_);
      DARABONBA_PTR_TO_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_TO_JSON(LastDdlTime, lastDdlTime_);
      DARABONBA_PTR_TO_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_TO_JSON(LatestAccessNumDate, latestAccessNumDate_);
      DARABONBA_PTR_TO_JSON(LatestDate, latestDate_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(ObjectAccessNum, objectAccessNum_);
      DARABONBA_PTR_TO_JSON(ObjectAccessNumMonthly, objectAccessNumMonthly_);
      DARABONBA_PTR_TO_JSON(ObjectAccessNumWeekly, objectAccessNumWeekly_);
      DARABONBA_PTR_TO_JSON(ObjectCnt, objectCnt_);
      DARABONBA_PTR_TO_JSON(ObjectSize, objectSize_);
      DARABONBA_PTR_TO_JSON(PartitionCnt, partitionCnt_);
      DARABONBA_PTR_TO_JSON(RecordCnt, recordCnt_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, TableProfile& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessNum, accessNum_);
      DARABONBA_PTR_FROM_JSON(AccessNumMonthly, accessNumMonthly_);
      DARABONBA_PTR_FROM_JSON(AccessNumWeekly, accessNumWeekly_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSourceType, dataSourceType_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(FileCnt, fileCnt_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(IsPartitioned, isPartitioned_);
      DARABONBA_PTR_FROM_JSON(LastAccessNumTime, lastAccessNumTime_);
      DARABONBA_PTR_FROM_JSON(LastAccessTime, lastAccessTime_);
      DARABONBA_PTR_FROM_JSON(LastDdlTime, lastDdlTime_);
      DARABONBA_PTR_FROM_JSON(LastModifyTime, lastModifyTime_);
      DARABONBA_PTR_FROM_JSON(LatestAccessNumDate, latestAccessNumDate_);
      DARABONBA_PTR_FROM_JSON(LatestDate, latestDate_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(ObjectAccessNum, objectAccessNum_);
      DARABONBA_PTR_FROM_JSON(ObjectAccessNumMonthly, objectAccessNumMonthly_);
      DARABONBA_PTR_FROM_JSON(ObjectAccessNumWeekly, objectAccessNumWeekly_);
      DARABONBA_PTR_FROM_JSON(ObjectCnt, objectCnt_);
      DARABONBA_PTR_FROM_JSON(ObjectSize, objectSize_);
      DARABONBA_PTR_FROM_JSON(PartitionCnt, partitionCnt_);
      DARABONBA_PTR_FROM_JSON(RecordCnt, recordCnt_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    TableProfile() = default ;
    TableProfile(const TableProfile &) = default ;
    TableProfile(TableProfile &&) = default ;
    TableProfile(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableProfile() = default ;
    TableProfile& operator=(const TableProfile &) = default ;
    TableProfile& operator=(TableProfile &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessNum_ == nullptr
        && return this->accessNumMonthly_ == nullptr && return this->accessNumWeekly_ == nullptr && return this->createTime_ == nullptr && return this->dataSourceType_ == nullptr && return this->databaseName_ == nullptr
        && return this->fileCnt_ == nullptr && return this->fileSize_ == nullptr && return this->isPartitioned_ == nullptr && return this->lastAccessNumTime_ == nullptr && return this->lastAccessTime_ == nullptr
        && return this->lastDdlTime_ == nullptr && return this->lastModifyTime_ == nullptr && return this->latestAccessNumDate_ == nullptr && return this->latestDate_ == nullptr && return this->location_ == nullptr
        && return this->objectAccessNum_ == nullptr && return this->objectAccessNumMonthly_ == nullptr && return this->objectAccessNumWeekly_ == nullptr && return this->objectCnt_ == nullptr && return this->objectSize_ == nullptr
        && return this->partitionCnt_ == nullptr && return this->recordCnt_ == nullptr && return this->tableName_ == nullptr; };
    // accessNum Field Functions 
    bool hasAccessNum() const { return this->accessNum_ != nullptr;};
    void deleteAccessNum() { this->accessNum_ = nullptr;};
    inline int64_t accessNum() const { DARABONBA_PTR_GET_DEFAULT(accessNum_, 0L) };
    inline TableProfile& setAccessNum(int64_t accessNum) { DARABONBA_PTR_SET_VALUE(accessNum_, accessNum) };


    // accessNumMonthly Field Functions 
    bool hasAccessNumMonthly() const { return this->accessNumMonthly_ != nullptr;};
    void deleteAccessNumMonthly() { this->accessNumMonthly_ = nullptr;};
    inline int64_t accessNumMonthly() const { DARABONBA_PTR_GET_DEFAULT(accessNumMonthly_, 0L) };
    inline TableProfile& setAccessNumMonthly(int64_t accessNumMonthly) { DARABONBA_PTR_SET_VALUE(accessNumMonthly_, accessNumMonthly) };


    // accessNumWeekly Field Functions 
    bool hasAccessNumWeekly() const { return this->accessNumWeekly_ != nullptr;};
    void deleteAccessNumWeekly() { this->accessNumWeekly_ = nullptr;};
    inline int64_t accessNumWeekly() const { DARABONBA_PTR_GET_DEFAULT(accessNumWeekly_, 0L) };
    inline TableProfile& setAccessNumWeekly(int64_t accessNumWeekly) { DARABONBA_PTR_SET_VALUE(accessNumWeekly_, accessNumWeekly) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline TableProfile& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceType Field Functions 
    bool hasDataSourceType() const { return this->dataSourceType_ != nullptr;};
    void deleteDataSourceType() { this->dataSourceType_ = nullptr;};
    inline string dataSourceType() const { DARABONBA_PTR_GET_DEFAULT(dataSourceType_, "") };
    inline TableProfile& setDataSourceType(string dataSourceType) { DARABONBA_PTR_SET_VALUE(dataSourceType_, dataSourceType) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline TableProfile& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // fileCnt Field Functions 
    bool hasFileCnt() const { return this->fileCnt_ != nullptr;};
    void deleteFileCnt() { this->fileCnt_ = nullptr;};
    inline int64_t fileCnt() const { DARABONBA_PTR_GET_DEFAULT(fileCnt_, 0L) };
    inline TableProfile& setFileCnt(int64_t fileCnt) { DARABONBA_PTR_SET_VALUE(fileCnt_, fileCnt) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline TableProfile& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // isPartitioned Field Functions 
    bool hasIsPartitioned() const { return this->isPartitioned_ != nullptr;};
    void deleteIsPartitioned() { this->isPartitioned_ = nullptr;};
    inline bool isPartitioned() const { DARABONBA_PTR_GET_DEFAULT(isPartitioned_, false) };
    inline TableProfile& setIsPartitioned(bool isPartitioned) { DARABONBA_PTR_SET_VALUE(isPartitioned_, isPartitioned) };


    // lastAccessNumTime Field Functions 
    bool hasLastAccessNumTime() const { return this->lastAccessNumTime_ != nullptr;};
    void deleteLastAccessNumTime() { this->lastAccessNumTime_ = nullptr;};
    inline string lastAccessNumTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessNumTime_, "") };
    inline TableProfile& setLastAccessNumTime(string lastAccessNumTime) { DARABONBA_PTR_SET_VALUE(lastAccessNumTime_, lastAccessNumTime) };


    // lastAccessTime Field Functions 
    bool hasLastAccessTime() const { return this->lastAccessTime_ != nullptr;};
    void deleteLastAccessTime() { this->lastAccessTime_ = nullptr;};
    inline string lastAccessTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessTime_, "") };
    inline TableProfile& setLastAccessTime(string lastAccessTime) { DARABONBA_PTR_SET_VALUE(lastAccessTime_, lastAccessTime) };


    // lastDdlTime Field Functions 
    bool hasLastDdlTime() const { return this->lastDdlTime_ != nullptr;};
    void deleteLastDdlTime() { this->lastDdlTime_ = nullptr;};
    inline string lastDdlTime() const { DARABONBA_PTR_GET_DEFAULT(lastDdlTime_, "") };
    inline TableProfile& setLastDdlTime(string lastDdlTime) { DARABONBA_PTR_SET_VALUE(lastDdlTime_, lastDdlTime) };


    // lastModifyTime Field Functions 
    bool hasLastModifyTime() const { return this->lastModifyTime_ != nullptr;};
    void deleteLastModifyTime() { this->lastModifyTime_ = nullptr;};
    inline string lastModifyTime() const { DARABONBA_PTR_GET_DEFAULT(lastModifyTime_, "") };
    inline TableProfile& setLastModifyTime(string lastModifyTime) { DARABONBA_PTR_SET_VALUE(lastModifyTime_, lastModifyTime) };


    // latestAccessNumDate Field Functions 
    bool hasLatestAccessNumDate() const { return this->latestAccessNumDate_ != nullptr;};
    void deleteLatestAccessNumDate() { this->latestAccessNumDate_ = nullptr;};
    inline string latestAccessNumDate() const { DARABONBA_PTR_GET_DEFAULT(latestAccessNumDate_, "") };
    inline TableProfile& setLatestAccessNumDate(string latestAccessNumDate) { DARABONBA_PTR_SET_VALUE(latestAccessNumDate_, latestAccessNumDate) };


    // latestDate Field Functions 
    bool hasLatestDate() const { return this->latestDate_ != nullptr;};
    void deleteLatestDate() { this->latestDate_ = nullptr;};
    inline string latestDate() const { DARABONBA_PTR_GET_DEFAULT(latestDate_, "") };
    inline TableProfile& setLatestDate(string latestDate) { DARABONBA_PTR_SET_VALUE(latestDate_, latestDate) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline string location() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
    inline TableProfile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


    // objectAccessNum Field Functions 
    bool hasObjectAccessNum() const { return this->objectAccessNum_ != nullptr;};
    void deleteObjectAccessNum() { this->objectAccessNum_ = nullptr;};
    inline int64_t objectAccessNum() const { DARABONBA_PTR_GET_DEFAULT(objectAccessNum_, 0L) };
    inline TableProfile& setObjectAccessNum(int64_t objectAccessNum) { DARABONBA_PTR_SET_VALUE(objectAccessNum_, objectAccessNum) };


    // objectAccessNumMonthly Field Functions 
    bool hasObjectAccessNumMonthly() const { return this->objectAccessNumMonthly_ != nullptr;};
    void deleteObjectAccessNumMonthly() { this->objectAccessNumMonthly_ = nullptr;};
    inline int64_t objectAccessNumMonthly() const { DARABONBA_PTR_GET_DEFAULT(objectAccessNumMonthly_, 0L) };
    inline TableProfile& setObjectAccessNumMonthly(int64_t objectAccessNumMonthly) { DARABONBA_PTR_SET_VALUE(objectAccessNumMonthly_, objectAccessNumMonthly) };


    // objectAccessNumWeekly Field Functions 
    bool hasObjectAccessNumWeekly() const { return this->objectAccessNumWeekly_ != nullptr;};
    void deleteObjectAccessNumWeekly() { this->objectAccessNumWeekly_ = nullptr;};
    inline int64_t objectAccessNumWeekly() const { DARABONBA_PTR_GET_DEFAULT(objectAccessNumWeekly_, 0L) };
    inline TableProfile& setObjectAccessNumWeekly(int64_t objectAccessNumWeekly) { DARABONBA_PTR_SET_VALUE(objectAccessNumWeekly_, objectAccessNumWeekly) };


    // objectCnt Field Functions 
    bool hasObjectCnt() const { return this->objectCnt_ != nullptr;};
    void deleteObjectCnt() { this->objectCnt_ = nullptr;};
    inline int64_t objectCnt() const { DARABONBA_PTR_GET_DEFAULT(objectCnt_, 0L) };
    inline TableProfile& setObjectCnt(int64_t objectCnt) { DARABONBA_PTR_SET_VALUE(objectCnt_, objectCnt) };


    // objectSize Field Functions 
    bool hasObjectSize() const { return this->objectSize_ != nullptr;};
    void deleteObjectSize() { this->objectSize_ = nullptr;};
    inline int64_t objectSize() const { DARABONBA_PTR_GET_DEFAULT(objectSize_, 0L) };
    inline TableProfile& setObjectSize(int64_t objectSize) { DARABONBA_PTR_SET_VALUE(objectSize_, objectSize) };


    // partitionCnt Field Functions 
    bool hasPartitionCnt() const { return this->partitionCnt_ != nullptr;};
    void deletePartitionCnt() { this->partitionCnt_ = nullptr;};
    inline int64_t partitionCnt() const { DARABONBA_PTR_GET_DEFAULT(partitionCnt_, 0L) };
    inline TableProfile& setPartitionCnt(int64_t partitionCnt) { DARABONBA_PTR_SET_VALUE(partitionCnt_, partitionCnt) };


    // recordCnt Field Functions 
    bool hasRecordCnt() const { return this->recordCnt_ != nullptr;};
    void deleteRecordCnt() { this->recordCnt_ = nullptr;};
    inline int64_t recordCnt() const { DARABONBA_PTR_GET_DEFAULT(recordCnt_, 0L) };
    inline TableProfile& setRecordCnt(int64_t recordCnt) { DARABONBA_PTR_SET_VALUE(recordCnt_, recordCnt) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline TableProfile& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    std::shared_ptr<int64_t> accessNum_ = nullptr;
    std::shared_ptr<int64_t> accessNumMonthly_ = nullptr;
    std::shared_ptr<int64_t> accessNumWeekly_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> dataSourceType_ = nullptr;
    std::shared_ptr<string> databaseName_ = nullptr;
    std::shared_ptr<int64_t> fileCnt_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<bool> isPartitioned_ = nullptr;
    std::shared_ptr<string> lastAccessNumTime_ = nullptr;
    std::shared_ptr<string> lastAccessTime_ = nullptr;
    std::shared_ptr<string> lastDdlTime_ = nullptr;
    std::shared_ptr<string> lastModifyTime_ = nullptr;
    std::shared_ptr<string> latestAccessNumDate_ = nullptr;
    std::shared_ptr<string> latestDate_ = nullptr;
    std::shared_ptr<string> location_ = nullptr;
    std::shared_ptr<int64_t> objectAccessNum_ = nullptr;
    std::shared_ptr<int64_t> objectAccessNumMonthly_ = nullptr;
    std::shared_ptr<int64_t> objectAccessNumWeekly_ = nullptr;
    std::shared_ptr<int64_t> objectCnt_ = nullptr;
    std::shared_ptr<int64_t> objectSize_ = nullptr;
    std::shared_ptr<int64_t> partitionCnt_ = nullptr;
    std::shared_ptr<int64_t> recordCnt_ = nullptr;
    std::shared_ptr<string> tableName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
