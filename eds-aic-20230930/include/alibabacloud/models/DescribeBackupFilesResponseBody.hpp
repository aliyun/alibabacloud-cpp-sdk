// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeBackupFilesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupFilesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupFilesResponseBody() = default ;
    DescribeBackupFilesResponseBody(const DescribeBackupFilesResponseBody &) = default ;
    DescribeBackupFilesResponseBody(DescribeBackupFilesResponseBody &&) = default ;
    DescribeBackupFilesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupFilesResponseBody() = default ;
    DescribeBackupFilesResponseBody& operator=(const DescribeBackupFilesResponseBody &) = default ;
    DescribeBackupFilesResponseBody& operator=(DescribeBackupFilesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_TO_JSON(AndroidInstanceName, androidInstanceName_);
        DARABONBA_PTR_TO_JSON(BackupAll, backupAll_);
        DARABONBA_PTR_TO_JSON(BackupFileId, backupFileId_);
        DARABONBA_PTR_TO_JSON(BackupFileName, backupFileName_);
        DARABONBA_PTR_TO_JSON(BackupFilePath, backupFilePath_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
        DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(InstanceGroupId, instanceGroupId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(SourceAppInfoList, sourceAppInfoList_);
        DARABONBA_PTR_TO_JSON(SourceFilePathList, sourceFilePathList_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SystemVersion, systemVersion_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UploadEndpoint, uploadEndpoint_);
        DARABONBA_PTR_TO_JSON(UploadType, uploadType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AndroidInstanceId, androidInstanceId_);
        DARABONBA_PTR_FROM_JSON(AndroidInstanceName, androidInstanceName_);
        DARABONBA_PTR_FROM_JSON(BackupAll, backupAll_);
        DARABONBA_PTR_FROM_JSON(BackupFileId, backupFileId_);
        DARABONBA_PTR_FROM_JSON(BackupFileName, backupFileName_);
        DARABONBA_PTR_FROM_JSON(BackupFilePath, backupFilePath_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
        DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
        DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(InstanceGroupId, instanceGroupId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(SourceAppInfoList, sourceAppInfoList_);
        DARABONBA_PTR_FROM_JSON(SourceFilePathList, sourceFilePathList_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SystemVersion, systemVersion_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UploadEndpoint, uploadEndpoint_);
        DARABONBA_PTR_FROM_JSON(UploadType, uploadType_);
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
      virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && this->androidInstanceName_ == nullptr && this->backupAll_ == nullptr && this->backupFileId_ == nullptr && this->backupFileName_ == nullptr && this->backupFilePath_ == nullptr
        && this->description_ == nullptr && this->endUserId_ == nullptr && this->fileSize_ == nullptr && this->gmtCreated_ == nullptr && this->gmtModified_ == nullptr
        && this->instanceGroupId_ == nullptr && this->regionId_ == nullptr && this->sourceAppInfoList_ == nullptr && this->sourceFilePathList_ == nullptr && this->status_ == nullptr
        && this->systemVersion_ == nullptr && this->taskId_ == nullptr && this->uploadEndpoint_ == nullptr && this->uploadType_ == nullptr; };
      // androidInstanceId Field Functions 
      bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
      void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
      inline string getAndroidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
      inline Data& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


      // androidInstanceName Field Functions 
      bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
      void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
      inline string getAndroidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
      inline Data& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


      // backupAll Field Functions 
      bool hasBackupAll() const { return this->backupAll_ != nullptr;};
      void deleteBackupAll() { this->backupAll_ = nullptr;};
      inline bool getBackupAll() const { DARABONBA_PTR_GET_DEFAULT(backupAll_, false) };
      inline Data& setBackupAll(bool backupAll) { DARABONBA_PTR_SET_VALUE(backupAll_, backupAll) };


      // backupFileId Field Functions 
      bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
      void deleteBackupFileId() { this->backupFileId_ = nullptr;};
      inline string getBackupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
      inline Data& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


      // backupFileName Field Functions 
      bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
      void deleteBackupFileName() { this->backupFileName_ = nullptr;};
      inline string getBackupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
      inline Data& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


      // backupFilePath Field Functions 
      bool hasBackupFilePath() const { return this->backupFilePath_ != nullptr;};
      void deleteBackupFilePath() { this->backupFilePath_ = nullptr;};
      inline string getBackupFilePath() const { DARABONBA_PTR_GET_DEFAULT(backupFilePath_, "") };
      inline Data& setBackupFilePath(string backupFilePath) { DARABONBA_PTR_SET_VALUE(backupFilePath_, backupFilePath) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // endUserId Field Functions 
      bool hasEndUserId() const { return this->endUserId_ != nullptr;};
      void deleteEndUserId() { this->endUserId_ = nullptr;};
      inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
      inline Data& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


      // fileSize Field Functions 
      bool hasFileSize() const { return this->fileSize_ != nullptr;};
      void deleteFileSize() { this->fileSize_ = nullptr;};
      inline int64_t getFileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
      inline Data& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


      // gmtCreated Field Functions 
      bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
      void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
      inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
      inline Data& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // instanceGroupId Field Functions 
      bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
      void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
      inline string getInstanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
      inline Data& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // sourceAppInfoList Field Functions 
      bool hasSourceAppInfoList() const { return this->sourceAppInfoList_ != nullptr;};
      void deleteSourceAppInfoList() { this->sourceAppInfoList_ = nullptr;};
      inline const vector<string> & getSourceAppInfoList() const { DARABONBA_PTR_GET_CONST(sourceAppInfoList_, vector<string>) };
      inline vector<string> getSourceAppInfoList() { DARABONBA_PTR_GET(sourceAppInfoList_, vector<string>) };
      inline Data& setSourceAppInfoList(const vector<string> & sourceAppInfoList) { DARABONBA_PTR_SET_VALUE(sourceAppInfoList_, sourceAppInfoList) };
      inline Data& setSourceAppInfoList(vector<string> && sourceAppInfoList) { DARABONBA_PTR_SET_RVALUE(sourceAppInfoList_, sourceAppInfoList) };


      // sourceFilePathList Field Functions 
      bool hasSourceFilePathList() const { return this->sourceFilePathList_ != nullptr;};
      void deleteSourceFilePathList() { this->sourceFilePathList_ = nullptr;};
      inline const vector<string> & getSourceFilePathList() const { DARABONBA_PTR_GET_CONST(sourceFilePathList_, vector<string>) };
      inline vector<string> getSourceFilePathList() { DARABONBA_PTR_GET(sourceFilePathList_, vector<string>) };
      inline Data& setSourceFilePathList(const vector<string> & sourceFilePathList) { DARABONBA_PTR_SET_VALUE(sourceFilePathList_, sourceFilePathList) };
      inline Data& setSourceFilePathList(vector<string> && sourceFilePathList) { DARABONBA_PTR_SET_RVALUE(sourceFilePathList_, sourceFilePathList) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // systemVersion Field Functions 
      bool hasSystemVersion() const { return this->systemVersion_ != nullptr;};
      void deleteSystemVersion() { this->systemVersion_ = nullptr;};
      inline string getSystemVersion() const { DARABONBA_PTR_GET_DEFAULT(systemVersion_, "") };
      inline Data& setSystemVersion(string systemVersion) { DARABONBA_PTR_SET_VALUE(systemVersion_, systemVersion) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline Data& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // uploadEndpoint Field Functions 
      bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
      void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
      inline string getUploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
      inline Data& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


      // uploadType Field Functions 
      bool hasUploadType() const { return this->uploadType_ != nullptr;};
      void deleteUploadType() { this->uploadType_ = nullptr;};
      inline string getUploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
      inline Data& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


    protected:
      // The ID of the instance.
      shared_ptr<string> androidInstanceId_ {};
      // The name of the instance.
      shared_ptr<string> androidInstanceName_ {};
      // Indicates whether the whole instance is backed up.
      shared_ptr<bool> backupAll_ {};
      // The ID of the backup file.
      shared_ptr<string> backupFileId_ {};
      // The name of the backup file.
      shared_ptr<string> backupFileName_ {};
      // The directory in which the backup file is stored.
      shared_ptr<string> backupFilePath_ {};
      // The description of the backup file.
      shared_ptr<string> description_ {};
      // The owner of the backup file.
      shared_ptr<string> endUserId_ {};
      // The total size of the source files.
      shared_ptr<int64_t> fileSize_ {};
      // The time when the backup file was created.
      shared_ptr<string> gmtCreated_ {};
      // The time when the backup file was last updated.
      shared_ptr<string> gmtModified_ {};
      // The ID of the instance group.
      shared_ptr<string> instanceGroupId_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The names of the application packages that are backed up.
      shared_ptr<vector<string>> sourceAppInfoList_ {};
      // The directories of the source files.
      shared_ptr<vector<string>> sourceFilePathList_ {};
      // The status of the backup file.
      // 
      // Valid values:
      // 
      // *   AVAILABLE
      // *   RECOVERING
      shared_ptr<string> status_ {};
      shared_ptr<string> systemVersion_ {};
      // The task ID.
      shared_ptr<string> taskId_ {};
      // The endpoint of the OSS bucket that stores the backup file.
      shared_ptr<string> uploadEndpoint_ {};
      // The type of the backup.
      // 
      // Valid values:
      // 
      // *   OSS: backup files are stored in OSS buckets. .
      shared_ptr<string> uploadType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeBackupFilesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeBackupFilesResponseBody::Data>) };
    inline vector<DescribeBackupFilesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeBackupFilesResponseBody::Data>) };
    inline DescribeBackupFilesResponseBody& setData(const vector<DescribeBackupFilesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeBackupFilesResponseBody& setData(vector<DescribeBackupFilesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline DescribeBackupFilesResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeBackupFilesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupFilesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBackupFilesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The backup files that are returned.
    shared_ptr<vector<DescribeBackupFilesResponseBody::Data>> data_ {};
    // The total number of entries returned.
    shared_ptr<string> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results. If NextToken is empty, no next page exists.
    shared_ptr<string> nextToken_ {};
    // The ID of the request. If the request fails, provide this ID to technical support to assist in diagnosing the issue.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
