// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPFILESRESPONSEBODYDATA_HPP_
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
  class DescribeBackupFilesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupFilesResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBackupFilesResponseBodyData& obj) { 
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
    DescribeBackupFilesResponseBodyData() = default ;
    DescribeBackupFilesResponseBodyData(const DescribeBackupFilesResponseBodyData &) = default ;
    DescribeBackupFilesResponseBodyData(DescribeBackupFilesResponseBodyData &&) = default ;
    DescribeBackupFilesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupFilesResponseBodyData() = default ;
    DescribeBackupFilesResponseBodyData& operator=(const DescribeBackupFilesResponseBodyData &) = default ;
    DescribeBackupFilesResponseBodyData& operator=(DescribeBackupFilesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->androidInstanceId_ == nullptr
        && return this->androidInstanceName_ == nullptr && return this->backupAll_ == nullptr && return this->backupFileId_ == nullptr && return this->backupFileName_ == nullptr && return this->backupFilePath_ == nullptr
        && return this->description_ == nullptr && return this->endUserId_ == nullptr && return this->fileSize_ == nullptr && return this->gmtCreated_ == nullptr && return this->gmtModified_ == nullptr
        && return this->instanceGroupId_ == nullptr && return this->regionId_ == nullptr && return this->sourceAppInfoList_ == nullptr && return this->sourceFilePathList_ == nullptr && return this->status_ == nullptr
        && return this->systemVersion_ == nullptr && return this->taskId_ == nullptr && return this->uploadEndpoint_ == nullptr && return this->uploadType_ == nullptr; };
    // androidInstanceId Field Functions 
    bool hasAndroidInstanceId() const { return this->androidInstanceId_ != nullptr;};
    void deleteAndroidInstanceId() { this->androidInstanceId_ = nullptr;};
    inline string androidInstanceId() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceId_, "") };
    inline DescribeBackupFilesResponseBodyData& setAndroidInstanceId(string androidInstanceId) { DARABONBA_PTR_SET_VALUE(androidInstanceId_, androidInstanceId) };


    // androidInstanceName Field Functions 
    bool hasAndroidInstanceName() const { return this->androidInstanceName_ != nullptr;};
    void deleteAndroidInstanceName() { this->androidInstanceName_ = nullptr;};
    inline string androidInstanceName() const { DARABONBA_PTR_GET_DEFAULT(androidInstanceName_, "") };
    inline DescribeBackupFilesResponseBodyData& setAndroidInstanceName(string androidInstanceName) { DARABONBA_PTR_SET_VALUE(androidInstanceName_, androidInstanceName) };


    // backupAll Field Functions 
    bool hasBackupAll() const { return this->backupAll_ != nullptr;};
    void deleteBackupAll() { this->backupAll_ = nullptr;};
    inline bool backupAll() const { DARABONBA_PTR_GET_DEFAULT(backupAll_, false) };
    inline DescribeBackupFilesResponseBodyData& setBackupAll(bool backupAll) { DARABONBA_PTR_SET_VALUE(backupAll_, backupAll) };


    // backupFileId Field Functions 
    bool hasBackupFileId() const { return this->backupFileId_ != nullptr;};
    void deleteBackupFileId() { this->backupFileId_ = nullptr;};
    inline string backupFileId() const { DARABONBA_PTR_GET_DEFAULT(backupFileId_, "") };
    inline DescribeBackupFilesResponseBodyData& setBackupFileId(string backupFileId) { DARABONBA_PTR_SET_VALUE(backupFileId_, backupFileId) };


    // backupFileName Field Functions 
    bool hasBackupFileName() const { return this->backupFileName_ != nullptr;};
    void deleteBackupFileName() { this->backupFileName_ = nullptr;};
    inline string backupFileName() const { DARABONBA_PTR_GET_DEFAULT(backupFileName_, "") };
    inline DescribeBackupFilesResponseBodyData& setBackupFileName(string backupFileName) { DARABONBA_PTR_SET_VALUE(backupFileName_, backupFileName) };


    // backupFilePath Field Functions 
    bool hasBackupFilePath() const { return this->backupFilePath_ != nullptr;};
    void deleteBackupFilePath() { this->backupFilePath_ = nullptr;};
    inline string backupFilePath() const { DARABONBA_PTR_GET_DEFAULT(backupFilePath_, "") };
    inline DescribeBackupFilesResponseBodyData& setBackupFilePath(string backupFilePath) { DARABONBA_PTR_SET_VALUE(backupFilePath_, backupFilePath) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBackupFilesResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline DescribeBackupFilesResponseBodyData& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline DescribeBackupFilesResponseBodyData& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeBackupFilesResponseBodyData& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeBackupFilesResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceGroupId Field Functions 
    bool hasInstanceGroupId() const { return this->instanceGroupId_ != nullptr;};
    void deleteInstanceGroupId() { this->instanceGroupId_ = nullptr;};
    inline string instanceGroupId() const { DARABONBA_PTR_GET_DEFAULT(instanceGroupId_, "") };
    inline DescribeBackupFilesResponseBodyData& setInstanceGroupId(string instanceGroupId) { DARABONBA_PTR_SET_VALUE(instanceGroupId_, instanceGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBackupFilesResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceAppInfoList Field Functions 
    bool hasSourceAppInfoList() const { return this->sourceAppInfoList_ != nullptr;};
    void deleteSourceAppInfoList() { this->sourceAppInfoList_ = nullptr;};
    inline const vector<string> & sourceAppInfoList() const { DARABONBA_PTR_GET_CONST(sourceAppInfoList_, vector<string>) };
    inline vector<string> sourceAppInfoList() { DARABONBA_PTR_GET(sourceAppInfoList_, vector<string>) };
    inline DescribeBackupFilesResponseBodyData& setSourceAppInfoList(const vector<string> & sourceAppInfoList) { DARABONBA_PTR_SET_VALUE(sourceAppInfoList_, sourceAppInfoList) };
    inline DescribeBackupFilesResponseBodyData& setSourceAppInfoList(vector<string> && sourceAppInfoList) { DARABONBA_PTR_SET_RVALUE(sourceAppInfoList_, sourceAppInfoList) };


    // sourceFilePathList Field Functions 
    bool hasSourceFilePathList() const { return this->sourceFilePathList_ != nullptr;};
    void deleteSourceFilePathList() { this->sourceFilePathList_ = nullptr;};
    inline const vector<string> & sourceFilePathList() const { DARABONBA_PTR_GET_CONST(sourceFilePathList_, vector<string>) };
    inline vector<string> sourceFilePathList() { DARABONBA_PTR_GET(sourceFilePathList_, vector<string>) };
    inline DescribeBackupFilesResponseBodyData& setSourceFilePathList(const vector<string> & sourceFilePathList) { DARABONBA_PTR_SET_VALUE(sourceFilePathList_, sourceFilePathList) };
    inline DescribeBackupFilesResponseBodyData& setSourceFilePathList(vector<string> && sourceFilePathList) { DARABONBA_PTR_SET_RVALUE(sourceFilePathList_, sourceFilePathList) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackupFilesResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // systemVersion Field Functions 
    bool hasSystemVersion() const { return this->systemVersion_ != nullptr;};
    void deleteSystemVersion() { this->systemVersion_ = nullptr;};
    inline string systemVersion() const { DARABONBA_PTR_GET_DEFAULT(systemVersion_, "") };
    inline DescribeBackupFilesResponseBodyData& setSystemVersion(string systemVersion) { DARABONBA_PTR_SET_VALUE(systemVersion_, systemVersion) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline DescribeBackupFilesResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uploadEndpoint Field Functions 
    bool hasUploadEndpoint() const { return this->uploadEndpoint_ != nullptr;};
    void deleteUploadEndpoint() { this->uploadEndpoint_ = nullptr;};
    inline string uploadEndpoint() const { DARABONBA_PTR_GET_DEFAULT(uploadEndpoint_, "") };
    inline DescribeBackupFilesResponseBodyData& setUploadEndpoint(string uploadEndpoint) { DARABONBA_PTR_SET_VALUE(uploadEndpoint_, uploadEndpoint) };


    // uploadType Field Functions 
    bool hasUploadType() const { return this->uploadType_ != nullptr;};
    void deleteUploadType() { this->uploadType_ = nullptr;};
    inline string uploadType() const { DARABONBA_PTR_GET_DEFAULT(uploadType_, "") };
    inline DescribeBackupFilesResponseBodyData& setUploadType(string uploadType) { DARABONBA_PTR_SET_VALUE(uploadType_, uploadType) };


  protected:
    // The ID of the instance.
    std::shared_ptr<string> androidInstanceId_ = nullptr;
    // The name of the instance.
    std::shared_ptr<string> androidInstanceName_ = nullptr;
    // Indicates whether the whole instance is backed up.
    std::shared_ptr<bool> backupAll_ = nullptr;
    // The ID of the backup file.
    std::shared_ptr<string> backupFileId_ = nullptr;
    // The name of the backup file.
    std::shared_ptr<string> backupFileName_ = nullptr;
    // The directory in which the backup file is stored.
    std::shared_ptr<string> backupFilePath_ = nullptr;
    // The description of the backup file.
    std::shared_ptr<string> description_ = nullptr;
    // The owner of the backup file.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The total size of the source files.
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    // The time when the backup file was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the backup file was last updated.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the instance group.
    std::shared_ptr<string> instanceGroupId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The names of the application packages that are backed up.
    std::shared_ptr<vector<string>> sourceAppInfoList_ = nullptr;
    // The directories of the source files.
    std::shared_ptr<vector<string>> sourceFilePathList_ = nullptr;
    // The status of the backup file.
    // 
    // Valid values:
    // 
    // *   AVAILABLE
    // *   RECOVERING
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> systemVersion_ = nullptr;
    // The task ID.
    std::shared_ptr<string> taskId_ = nullptr;
    // The endpoint of the OSS bucket that stores the backup file.
    std::shared_ptr<string> uploadEndpoint_ = nullptr;
    // The type of the backup.
    // 
    // Valid values:
    // 
    // *   OSS: backup files are stored in OSS buckets. .
    std::shared_ptr<string> uploadType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
