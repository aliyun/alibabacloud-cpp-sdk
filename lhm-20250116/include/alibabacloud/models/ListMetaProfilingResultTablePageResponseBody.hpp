// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTTABLEPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMETAPROFILINGRESULTTABLEPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class ListMetaProfilingResultTablePageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMetaProfilingResultTablePageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListMetaProfilingResultTablePageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(pageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListMetaProfilingResultTablePageResponseBody() = default ;
    ListMetaProfilingResultTablePageResponseBody(const ListMetaProfilingResultTablePageResponseBody &) = default ;
    ListMetaProfilingResultTablePageResponseBody(ListMetaProfilingResultTablePageResponseBody &&) = default ;
    ListMetaProfilingResultTablePageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMetaProfilingResultTablePageResponseBody() = default ;
    ListMetaProfilingResultTablePageResponseBody& operator=(const ListMetaProfilingResultTablePageResponseBody &) = default ;
    ListMetaProfilingResultTablePageResponseBody& operator=(ListMetaProfilingResultTablePageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(averageFileSize, averageFileSize_);
        DARABONBA_PTR_TO_JSON(averagePartitionSize, averagePartitionSize_);
        DARABONBA_PTR_TO_JSON(created, created_);
        DARABONBA_PTR_TO_JSON(dbName, dbName_);
        DARABONBA_PTR_TO_JSON(ds, ds_);
        DARABONBA_PTR_TO_JSON(engine, engine_);
        DARABONBA_PTR_TO_JSON(fileNum, fileNum_);
        DARABONBA_PTR_TO_JSON(isExternal, isExternal_);
        DARABONBA_PTR_TO_JSON(isPtTable, isPtTable_);
        DARABONBA_PTR_TO_JSON(isTransactional, isTransactional_);
        DARABONBA_PTR_TO_JSON(lastAccessed, lastAccessed_);
        DARABONBA_PTR_TO_JSON(lastModified, lastModified_);
        DARABONBA_PTR_TO_JSON(maxPtCrtTime, maxPtCrtTime_);
        DARABONBA_PTR_TO_JSON(maximumPartitionList, maximumPartitionList_);
        DARABONBA_PTR_TO_JSON(migrationProcess, migrationProcess_);
        DARABONBA_PTR_TO_JSON(migrationStatus, migrationStatus_);
        DARABONBA_PTR_TO_JSON(minPtCrtTime, minPtCrtTime_);
        DARABONBA_PTR_TO_JSON(minimumPartitionList, minimumPartitionList_);
        DARABONBA_PTR_TO_JSON(newAdded, newAdded_);
        DARABONBA_PTR_TO_JSON(partitionFieldNameList, partitionFieldNameList_);
        DARABONBA_PTR_TO_JSON(partitionNum, partitionNum_);
        DARABONBA_PTR_TO_JSON(recordCount, recordCount_);
        DARABONBA_PTR_TO_JSON(storageSize, storageSize_);
        DARABONBA_PTR_TO_JSON(tableComment, tableComment_);
        DARABONBA_PTR_TO_JSON(tableId, tableId_);
        DARABONBA_PTR_TO_JSON(tableModTime, tableModTime_);
        DARABONBA_PTR_TO_JSON(tableName, tableName_);
        DARABONBA_PTR_TO_JSON(tableType, tableType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(averageFileSize, averageFileSize_);
        DARABONBA_PTR_FROM_JSON(averagePartitionSize, averagePartitionSize_);
        DARABONBA_PTR_FROM_JSON(created, created_);
        DARABONBA_PTR_FROM_JSON(dbName, dbName_);
        DARABONBA_PTR_FROM_JSON(ds, ds_);
        DARABONBA_PTR_FROM_JSON(engine, engine_);
        DARABONBA_PTR_FROM_JSON(fileNum, fileNum_);
        DARABONBA_PTR_FROM_JSON(isExternal, isExternal_);
        DARABONBA_PTR_FROM_JSON(isPtTable, isPtTable_);
        DARABONBA_PTR_FROM_JSON(isTransactional, isTransactional_);
        DARABONBA_PTR_FROM_JSON(lastAccessed, lastAccessed_);
        DARABONBA_PTR_FROM_JSON(lastModified, lastModified_);
        DARABONBA_PTR_FROM_JSON(maxPtCrtTime, maxPtCrtTime_);
        DARABONBA_PTR_FROM_JSON(maximumPartitionList, maximumPartitionList_);
        DARABONBA_PTR_FROM_JSON(migrationProcess, migrationProcess_);
        DARABONBA_PTR_FROM_JSON(migrationStatus, migrationStatus_);
        DARABONBA_PTR_FROM_JSON(minPtCrtTime, minPtCrtTime_);
        DARABONBA_PTR_FROM_JSON(minimumPartitionList, minimumPartitionList_);
        DARABONBA_PTR_FROM_JSON(newAdded, newAdded_);
        DARABONBA_PTR_FROM_JSON(partitionFieldNameList, partitionFieldNameList_);
        DARABONBA_PTR_FROM_JSON(partitionNum, partitionNum_);
        DARABONBA_PTR_FROM_JSON(recordCount, recordCount_);
        DARABONBA_PTR_FROM_JSON(storageSize, storageSize_);
        DARABONBA_PTR_FROM_JSON(tableComment, tableComment_);
        DARABONBA_PTR_FROM_JSON(tableId, tableId_);
        DARABONBA_PTR_FROM_JSON(tableModTime, tableModTime_);
        DARABONBA_PTR_FROM_JSON(tableName, tableName_);
        DARABONBA_PTR_FROM_JSON(tableType, tableType_);
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
      virtual bool empty() const override { return this->averageFileSize_ == nullptr
        && this->averagePartitionSize_ == nullptr && this->created_ == nullptr && this->dbName_ == nullptr && this->ds_ == nullptr && this->engine_ == nullptr
        && this->fileNum_ == nullptr && this->isExternal_ == nullptr && this->isPtTable_ == nullptr && this->isTransactional_ == nullptr && this->lastAccessed_ == nullptr
        && this->lastModified_ == nullptr && this->maxPtCrtTime_ == nullptr && this->maximumPartitionList_ == nullptr && this->migrationProcess_ == nullptr && this->migrationStatus_ == nullptr
        && this->minPtCrtTime_ == nullptr && this->minimumPartitionList_ == nullptr && this->newAdded_ == nullptr && this->partitionFieldNameList_ == nullptr && this->partitionNum_ == nullptr
        && this->recordCount_ == nullptr && this->storageSize_ == nullptr && this->tableComment_ == nullptr && this->tableId_ == nullptr && this->tableModTime_ == nullptr
        && this->tableName_ == nullptr && this->tableType_ == nullptr; };
      // averageFileSize Field Functions 
      bool hasAverageFileSize() const { return this->averageFileSize_ != nullptr;};
      void deleteAverageFileSize() { this->averageFileSize_ = nullptr;};
      inline string getAverageFileSize() const { DARABONBA_PTR_GET_DEFAULT(averageFileSize_, "") };
      inline Data& setAverageFileSize(string averageFileSize) { DARABONBA_PTR_SET_VALUE(averageFileSize_, averageFileSize) };


      // averagePartitionSize Field Functions 
      bool hasAveragePartitionSize() const { return this->averagePartitionSize_ != nullptr;};
      void deleteAveragePartitionSize() { this->averagePartitionSize_ = nullptr;};
      inline string getAveragePartitionSize() const { DARABONBA_PTR_GET_DEFAULT(averagePartitionSize_, "") };
      inline Data& setAveragePartitionSize(string averagePartitionSize) { DARABONBA_PTR_SET_VALUE(averagePartitionSize_, averagePartitionSize) };


      // created Field Functions 
      bool hasCreated() const { return this->created_ != nullptr;};
      void deleteCreated() { this->created_ = nullptr;};
      inline string getCreated() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
      inline Data& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
      inline Data& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


      // ds Field Functions 
      bool hasDs() const { return this->ds_ != nullptr;};
      void deleteDs() { this->ds_ = nullptr;};
      inline string getDs() const { DARABONBA_PTR_GET_DEFAULT(ds_, "") };
      inline Data& setDs(string ds) { DARABONBA_PTR_SET_VALUE(ds_, ds) };


      // engine Field Functions 
      bool hasEngine() const { return this->engine_ != nullptr;};
      void deleteEngine() { this->engine_ = nullptr;};
      inline string getEngine() const { DARABONBA_PTR_GET_DEFAULT(engine_, "") };
      inline Data& setEngine(string engine) { DARABONBA_PTR_SET_VALUE(engine_, engine) };


      // fileNum Field Functions 
      bool hasFileNum() const { return this->fileNum_ != nullptr;};
      void deleteFileNum() { this->fileNum_ = nullptr;};
      inline int32_t getFileNum() const { DARABONBA_PTR_GET_DEFAULT(fileNum_, 0) };
      inline Data& setFileNum(int32_t fileNum) { DARABONBA_PTR_SET_VALUE(fileNum_, fileNum) };


      // isExternal Field Functions 
      bool hasIsExternal() const { return this->isExternal_ != nullptr;};
      void deleteIsExternal() { this->isExternal_ = nullptr;};
      inline int32_t getIsExternal() const { DARABONBA_PTR_GET_DEFAULT(isExternal_, 0) };
      inline Data& setIsExternal(int32_t isExternal) { DARABONBA_PTR_SET_VALUE(isExternal_, isExternal) };


      // isPtTable Field Functions 
      bool hasIsPtTable() const { return this->isPtTable_ != nullptr;};
      void deleteIsPtTable() { this->isPtTable_ = nullptr;};
      inline int32_t getIsPtTable() const { DARABONBA_PTR_GET_DEFAULT(isPtTable_, 0) };
      inline Data& setIsPtTable(int32_t isPtTable) { DARABONBA_PTR_SET_VALUE(isPtTable_, isPtTable) };


      // isTransactional Field Functions 
      bool hasIsTransactional() const { return this->isTransactional_ != nullptr;};
      void deleteIsTransactional() { this->isTransactional_ = nullptr;};
      inline int32_t getIsTransactional() const { DARABONBA_PTR_GET_DEFAULT(isTransactional_, 0) };
      inline Data& setIsTransactional(int32_t isTransactional) { DARABONBA_PTR_SET_VALUE(isTransactional_, isTransactional) };


      // lastAccessed Field Functions 
      bool hasLastAccessed() const { return this->lastAccessed_ != nullptr;};
      void deleteLastAccessed() { this->lastAccessed_ = nullptr;};
      inline string getLastAccessed() const { DARABONBA_PTR_GET_DEFAULT(lastAccessed_, "") };
      inline Data& setLastAccessed(string lastAccessed) { DARABONBA_PTR_SET_VALUE(lastAccessed_, lastAccessed) };


      // lastModified Field Functions 
      bool hasLastModified() const { return this->lastModified_ != nullptr;};
      void deleteLastModified() { this->lastModified_ = nullptr;};
      inline string getLastModified() const { DARABONBA_PTR_GET_DEFAULT(lastModified_, "") };
      inline Data& setLastModified(string lastModified) { DARABONBA_PTR_SET_VALUE(lastModified_, lastModified) };


      // maxPtCrtTime Field Functions 
      bool hasMaxPtCrtTime() const { return this->maxPtCrtTime_ != nullptr;};
      void deleteMaxPtCrtTime() { this->maxPtCrtTime_ = nullptr;};
      inline string getMaxPtCrtTime() const { DARABONBA_PTR_GET_DEFAULT(maxPtCrtTime_, "") };
      inline Data& setMaxPtCrtTime(string maxPtCrtTime) { DARABONBA_PTR_SET_VALUE(maxPtCrtTime_, maxPtCrtTime) };


      // maximumPartitionList Field Functions 
      bool hasMaximumPartitionList() const { return this->maximumPartitionList_ != nullptr;};
      void deleteMaximumPartitionList() { this->maximumPartitionList_ = nullptr;};
      inline const vector<string> & getMaximumPartitionList() const { DARABONBA_PTR_GET_CONST(maximumPartitionList_, vector<string>) };
      inline vector<string> getMaximumPartitionList() { DARABONBA_PTR_GET(maximumPartitionList_, vector<string>) };
      inline Data& setMaximumPartitionList(const vector<string> & maximumPartitionList) { DARABONBA_PTR_SET_VALUE(maximumPartitionList_, maximumPartitionList) };
      inline Data& setMaximumPartitionList(vector<string> && maximumPartitionList) { DARABONBA_PTR_SET_RVALUE(maximumPartitionList_, maximumPartitionList) };


      // migrationProcess Field Functions 
      bool hasMigrationProcess() const { return this->migrationProcess_ != nullptr;};
      void deleteMigrationProcess() { this->migrationProcess_ = nullptr;};
      inline double getMigrationProcess() const { DARABONBA_PTR_GET_DEFAULT(migrationProcess_, 0.0) };
      inline Data& setMigrationProcess(double migrationProcess) { DARABONBA_PTR_SET_VALUE(migrationProcess_, migrationProcess) };


      // migrationStatus Field Functions 
      bool hasMigrationStatus() const { return this->migrationStatus_ != nullptr;};
      void deleteMigrationStatus() { this->migrationStatus_ = nullptr;};
      inline string getMigrationStatus() const { DARABONBA_PTR_GET_DEFAULT(migrationStatus_, "") };
      inline Data& setMigrationStatus(string migrationStatus) { DARABONBA_PTR_SET_VALUE(migrationStatus_, migrationStatus) };


      // minPtCrtTime Field Functions 
      bool hasMinPtCrtTime() const { return this->minPtCrtTime_ != nullptr;};
      void deleteMinPtCrtTime() { this->minPtCrtTime_ = nullptr;};
      inline string getMinPtCrtTime() const { DARABONBA_PTR_GET_DEFAULT(minPtCrtTime_, "") };
      inline Data& setMinPtCrtTime(string minPtCrtTime) { DARABONBA_PTR_SET_VALUE(minPtCrtTime_, minPtCrtTime) };


      // minimumPartitionList Field Functions 
      bool hasMinimumPartitionList() const { return this->minimumPartitionList_ != nullptr;};
      void deleteMinimumPartitionList() { this->minimumPartitionList_ = nullptr;};
      inline const vector<string> & getMinimumPartitionList() const { DARABONBA_PTR_GET_CONST(minimumPartitionList_, vector<string>) };
      inline vector<string> getMinimumPartitionList() { DARABONBA_PTR_GET(minimumPartitionList_, vector<string>) };
      inline Data& setMinimumPartitionList(const vector<string> & minimumPartitionList) { DARABONBA_PTR_SET_VALUE(minimumPartitionList_, minimumPartitionList) };
      inline Data& setMinimumPartitionList(vector<string> && minimumPartitionList) { DARABONBA_PTR_SET_RVALUE(minimumPartitionList_, minimumPartitionList) };


      // newAdded Field Functions 
      bool hasNewAdded() const { return this->newAdded_ != nullptr;};
      void deleteNewAdded() { this->newAdded_ = nullptr;};
      inline int32_t getNewAdded() const { DARABONBA_PTR_GET_DEFAULT(newAdded_, 0) };
      inline Data& setNewAdded(int32_t newAdded) { DARABONBA_PTR_SET_VALUE(newAdded_, newAdded) };


      // partitionFieldNameList Field Functions 
      bool hasPartitionFieldNameList() const { return this->partitionFieldNameList_ != nullptr;};
      void deletePartitionFieldNameList() { this->partitionFieldNameList_ = nullptr;};
      inline const vector<string> & getPartitionFieldNameList() const { DARABONBA_PTR_GET_CONST(partitionFieldNameList_, vector<string>) };
      inline vector<string> getPartitionFieldNameList() { DARABONBA_PTR_GET(partitionFieldNameList_, vector<string>) };
      inline Data& setPartitionFieldNameList(const vector<string> & partitionFieldNameList) { DARABONBA_PTR_SET_VALUE(partitionFieldNameList_, partitionFieldNameList) };
      inline Data& setPartitionFieldNameList(vector<string> && partitionFieldNameList) { DARABONBA_PTR_SET_RVALUE(partitionFieldNameList_, partitionFieldNameList) };


      // partitionNum Field Functions 
      bool hasPartitionNum() const { return this->partitionNum_ != nullptr;};
      void deletePartitionNum() { this->partitionNum_ = nullptr;};
      inline int32_t getPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(partitionNum_, 0) };
      inline Data& setPartitionNum(int32_t partitionNum) { DARABONBA_PTR_SET_VALUE(partitionNum_, partitionNum) };


      // recordCount Field Functions 
      bool hasRecordCount() const { return this->recordCount_ != nullptr;};
      void deleteRecordCount() { this->recordCount_ = nullptr;};
      inline int64_t getRecordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
      inline Data& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


      // storageSize Field Functions 
      bool hasStorageSize() const { return this->storageSize_ != nullptr;};
      void deleteStorageSize() { this->storageSize_ = nullptr;};
      inline string getStorageSize() const { DARABONBA_PTR_GET_DEFAULT(storageSize_, "") };
      inline Data& setStorageSize(string storageSize) { DARABONBA_PTR_SET_VALUE(storageSize_, storageSize) };


      // tableComment Field Functions 
      bool hasTableComment() const { return this->tableComment_ != nullptr;};
      void deleteTableComment() { this->tableComment_ = nullptr;};
      inline string getTableComment() const { DARABONBA_PTR_GET_DEFAULT(tableComment_, "") };
      inline Data& setTableComment(string tableComment) { DARABONBA_PTR_SET_VALUE(tableComment_, tableComment) };


      // tableId Field Functions 
      bool hasTableId() const { return this->tableId_ != nullptr;};
      void deleteTableId() { this->tableId_ = nullptr;};
      inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
      inline Data& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


      // tableModTime Field Functions 
      bool hasTableModTime() const { return this->tableModTime_ != nullptr;};
      void deleteTableModTime() { this->tableModTime_ = nullptr;};
      inline string getTableModTime() const { DARABONBA_PTR_GET_DEFAULT(tableModTime_, "") };
      inline Data& setTableModTime(string tableModTime) { DARABONBA_PTR_SET_VALUE(tableModTime_, tableModTime) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Data& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // tableType Field Functions 
      bool hasTableType() const { return this->tableType_ != nullptr;};
      void deleteTableType() { this->tableType_ = nullptr;};
      inline string getTableType() const { DARABONBA_PTR_GET_DEFAULT(tableType_, "") };
      inline Data& setTableType(string tableType) { DARABONBA_PTR_SET_VALUE(tableType_, tableType) };


    protected:
      // The average file size.
      shared_ptr<string> averageFileSize_ {};
      // The average partition size.
      shared_ptr<string> averagePartitionSize_ {};
      // The creation time.
      shared_ptr<string> created_ {};
      // The name of the database, which is used to filter results by database.
      shared_ptr<string> dbName_ {};
      // The value of the data partition to which the table belongs, which identifies the partition to which this row of data belongs.
      shared_ptr<string> ds_ {};
      // The type of storage engine used by the table.
      shared_ptr<string> engine_ {};
      // The number of files.
      shared_ptr<int32_t> fileNum_ {};
      // Indicates whether the table is an external table.
      shared_ptr<int32_t> isExternal_ {};
      // Indicates whether the table is a partitioned table.
      shared_ptr<int32_t> isPtTable_ {};
      // Indicates whether the table is a transactional table.
      shared_ptr<int32_t> isTransactional_ {};
      // The last access time.
      shared_ptr<string> lastAccessed_ {};
      // The last modification time.
      shared_ptr<string> lastModified_ {};
      // The creation time of the largest partition.
      shared_ptr<string> maxPtCrtTime_ {};
      // The list of largest partitions.
      shared_ptr<vector<string>> maximumPartitionList_ {};
      // The migration progress percentage.
      shared_ptr<double> migrationProcess_ {};
      // The migration status, which is used to filter by migration progress or indicate the migration status of an object.
      shared_ptr<string> migrationStatus_ {};
      // The creation time of the smallest partition.
      shared_ptr<string> minPtCrtTime_ {};
      // The list of smallest partitions.
      shared_ptr<vector<string>> minimumPartitionList_ {};
      // Indicates whether the object is newly added.
      shared_ptr<int32_t> newAdded_ {};
      // The list of partition field names.
      shared_ptr<vector<string>> partitionFieldNameList_ {};
      // The number of partitions.
      shared_ptr<int32_t> partitionNum_ {};
      // The number of data rows.
      shared_ptr<int64_t> recordCount_ {};
      // The data storage size.
      shared_ptr<string> storageSize_ {};
      // The table comment or remark.
      shared_ptr<string> tableComment_ {};
      // The table ID.
      shared_ptr<string> tableId_ {};
      // The last modification time of the table schema.
      shared_ptr<string> tableModTime_ {};
      // The name of the table, which is used to filter results by table name.
      shared_ptr<string> tableName_ {};
      // The identifier of the table type, such as managed table (MANAGED_TABLE) or external table (EXTERNAL_TABLE).
      shared_ptr<string> tableType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->pageIndex_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListMetaProfilingResultTablePageResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListMetaProfilingResultTablePageResponseBody::Data>) };
    inline vector<ListMetaProfilingResultTablePageResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListMetaProfilingResultTablePageResponseBody::Data>) };
    inline ListMetaProfilingResultTablePageResponseBody& setData(const vector<ListMetaProfilingResultTablePageResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListMetaProfilingResultTablePageResponseBody& setData(vector<ListMetaProfilingResultTablePageResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline ListMetaProfilingResultTablePageResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline ListMetaProfilingResultTablePageResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t getPageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline ListMetaProfilingResultTablePageResponseBody& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListMetaProfilingResultTablePageResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMetaProfilingResultTablePageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListMetaProfilingResultTablePageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListMetaProfilingResultTablePageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of table profiling results. For the element structure, see the descriptions of the sub-fields.
    shared_ptr<vector<ListMetaProfilingResultTablePageResponseBody::Data>> data_ {};
    // The error code. This parameter is an empty string if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. This parameter is an empty string if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The current page number, starting from 1.
    shared_ptr<int32_t> pageIndex_ {};
    // The number of records to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is used to locate and troubleshoot issues of this call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. A value of true indicates success, and a value of false indicates failure. If the call fails, troubleshoot the issue based on errCode and errMessage.
    shared_ptr<bool> success_ {};
    // The total number of records that meet the conditions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
