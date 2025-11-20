// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODYBACKUPJOBSBACKUPJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail.hpp>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail.hpp>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths.hpp>
#include <alibabacloud/models/DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeBackupJobs2ResponseBodyBackupJobsBackupJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(ActualFiles, actualFiles_);
      DARABONBA_PTR_TO_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_TO_JSON(BackupType, backupType_);
      DARABONBA_PTR_TO_JSON(Bucket, bucket_);
      DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(DestDataSourceDetail, destDataSourceDetail_);
      DARABONBA_PTR_TO_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_TO_JSON(DestSourceType, destSourceType_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_TO_JSON(FilesDone, filesDone_);
      DARABONBA_PTR_TO_JSON(FilesTotal, filesTotal_);
      DARABONBA_PTR_TO_JSON(Identifier, identifier_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_TO_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_TO_JSON(Paths, paths_);
      DARABONBA_PTR_TO_JSON(PlanId, planId_);
      DARABONBA_PTR_TO_JSON(Prefix, prefix_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Report, report_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(ActualFiles, actualFiles_);
      DARABONBA_PTR_FROM_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
      DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
      DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(ChangeListPath, changeListPath_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceDetail, destDataSourceDetail_);
      DARABONBA_PTR_FROM_JSON(DestDataSourceId, destDataSourceId_);
      DARABONBA_PTR_FROM_JSON(DestSourceType, destSourceType_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(FileSystemId, fileSystemId_);
      DARABONBA_PTR_FROM_JSON(FilesDone, filesDone_);
      DARABONBA_PTR_FROM_JSON(FilesTotal, filesTotal_);
      DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_FROM_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_FROM_JSON(Paths, paths_);
      DARABONBA_PTR_FROM_JSON(PlanId, planId_);
      DARABONBA_PTR_FROM_JSON(Prefix, prefix_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Report, report_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(SpeedLimit, speedLimit_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJob() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJob(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJob &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJob(DescribeBackupJobs2ResponseBodyBackupJobsBackupJob &&) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBodyBackupJobsBackupJob() = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& operator=(const DescribeBackupJobs2ResponseBodyBackupJobsBackupJob &) = default ;
    DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& operator=(DescribeBackupJobs2ResponseBodyBackupJobsBackupJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualBytes_ == nullptr
        && return this->actualFiles_ == nullptr && return this->actualItems_ == nullptr && return this->backupType_ == nullptr && return this->bucket_ == nullptr && return this->bytesDone_ == nullptr
        && return this->bytesTotal_ == nullptr && return this->changeListPath_ == nullptr && return this->clientId_ == nullptr && return this->completeTime_ == nullptr && return this->createTime_ == nullptr
        && return this->createdTime_ == nullptr && return this->crossAccountRoleName_ == nullptr && return this->crossAccountType_ == nullptr && return this->crossAccountUserId_ == nullptr && return this->destDataSourceDetail_ == nullptr
        && return this->destDataSourceId_ == nullptr && return this->destSourceType_ == nullptr && return this->detail_ == nullptr && return this->errorMessage_ == nullptr && return this->exclude_ == nullptr
        && return this->fileSystemId_ == nullptr && return this->filesDone_ == nullptr && return this->filesTotal_ == nullptr && return this->identifier_ == nullptr && return this->include_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->itemsDone_ == nullptr && return this->itemsTotal_ == nullptr && return this->jobId_ == nullptr
        && return this->jobName_ == nullptr && return this->options_ == nullptr && return this->otsDetail_ == nullptr && return this->paths_ == nullptr && return this->planId_ == nullptr
        && return this->prefix_ == nullptr && return this->progress_ == nullptr && return this->report_ == nullptr && return this->sourceType_ == nullptr && return this->speed_ == nullptr
        && return this->speedLimit_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->tableName_ == nullptr && return this->updatedTime_ == nullptr
        && return this->vaultId_ == nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline int64_t actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // actualFiles Field Functions 
    bool hasActualFiles() const { return this->actualFiles_ != nullptr;};
    void deleteActualFiles() { this->actualFiles_ = nullptr;};
    inline int64_t actualFiles() const { DARABONBA_PTR_GET_DEFAULT(actualFiles_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setActualFiles(int64_t actualFiles) { DARABONBA_PTR_SET_VALUE(actualFiles_, actualFiles) };


    // actualItems Field Functions 
    bool hasActualItems() const { return this->actualItems_ != nullptr;};
    void deleteActualItems() { this->actualItems_ = nullptr;};
    inline int64_t actualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


    // backupType Field Functions 
    bool hasBackupType() const { return this->backupType_ != nullptr;};
    void deleteBackupType() { this->backupType_ = nullptr;};
    inline string backupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


    // bucket Field Functions 
    bool hasBucket() const { return this->bucket_ != nullptr;};
    void deleteBucket() { this->bucket_ = nullptr;};
    inline string bucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // changeListPath Field Functions 
    bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
    void deleteChangeListPath() { this->changeListPath_ = nullptr;};
    inline string changeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // destDataSourceDetail Field Functions 
    bool hasDestDataSourceDetail() const { return this->destDataSourceDetail_ != nullptr;};
    void deleteDestDataSourceDetail() { this->destDataSourceDetail_ = nullptr;};
    inline string destDataSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceDetail_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setDestDataSourceDetail(string destDataSourceDetail) { DARABONBA_PTR_SET_VALUE(destDataSourceDetail_, destDataSourceDetail) };


    // destDataSourceId Field Functions 
    bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
    void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
    inline string destDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


    // destSourceType Field Functions 
    bool hasDestSourceType() const { return this->destSourceType_ != nullptr;};
    void deleteDestSourceType() { this->destSourceType_ = nullptr;};
    inline string destSourceType() const { DARABONBA_PTR_GET_DEFAULT(destSourceType_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setDestSourceType(string destSourceType) { DARABONBA_PTR_SET_VALUE(destSourceType_, destSourceType) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail & detail() const { DARABONBA_PTR_GET_CONST(detail_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail) };
    inline Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail detail() { DARABONBA_PTR_GET(detail_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setDetail(const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setDetail(Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // fileSystemId Field Functions 
    bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
    void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
    inline string fileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


    // filesDone Field Functions 
    bool hasFilesDone() const { return this->filesDone_ != nullptr;};
    void deleteFilesDone() { this->filesDone_ = nullptr;};
    inline int64_t filesDone() const { DARABONBA_PTR_GET_DEFAULT(filesDone_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setFilesDone(int64_t filesDone) { DARABONBA_PTR_SET_VALUE(filesDone_, filesDone) };


    // filesTotal Field Functions 
    bool hasFilesTotal() const { return this->filesTotal_ != nullptr;};
    void deleteFilesTotal() { this->filesTotal_ = nullptr;};
    inline int64_t filesTotal() const { DARABONBA_PTR_GET_DEFAULT(filesTotal_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setFilesTotal(int64_t filesTotal) { DARABONBA_PTR_SET_VALUE(filesTotal_, filesTotal) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // itemsDone Field Functions 
    bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
    void deleteItemsDone() { this->itemsDone_ = nullptr;};
    inline int64_t itemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


    // itemsTotal Field Functions 
    bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
    void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
    inline int64_t itemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail & otsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail) };
    inline Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail otsDetail() { DARABONBA_PTR_GET(otsDetail_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setOtsDetail(const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setOtsDetail(Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // paths Field Functions 
    bool hasPaths() const { return this->paths_ != nullptr;};
    void deletePaths() { this->paths_ = nullptr;};
    inline const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths & paths() const { DARABONBA_PTR_GET_CONST(paths_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths) };
    inline Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths paths() { DARABONBA_PTR_GET(paths_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setPaths(const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setPaths(Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string planId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // prefix Field Functions 
    bool hasPrefix() const { return this->prefix_ != nullptr;};
    void deletePrefix() { this->prefix_ = nullptr;};
    inline string prefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport & report() const { DARABONBA_PTR_GET_CONST(report_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport) };
    inline Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport report() { DARABONBA_PTR_GET(report_, Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setReport(const Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setReport(Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int64_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // speedLimit Field Functions 
    bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
    void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
    inline string speedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string tableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeBackupJobs2ResponseBodyBackupJobsBackupJob& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The actual amount of data that is backed up after duplicates are removed. Unit: bytes.
    std::shared_ptr<int64_t> actualBytes_ = nullptr;
    // The number of files that are actually processed.
    std::shared_ptr<int64_t> actualFiles_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the actual number of objects that are backed up by the backup job.
    std::shared_ptr<int64_t> actualItems_ = nullptr;
    // The backup type. Valid value: **COMPLETE**, which indicates full backup.
    std::shared_ptr<string> backupType_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the name of the OSS bucket that is backed up.
    std::shared_ptr<string> bucket_ = nullptr;
    // The actual amount of data that is generated by incremental backups. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The total amount of data that is backed up from the data source. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // The data source details at the destination. Thisparameter is returned only for data synchronization.
    std::shared_ptr<string> changeListPath_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the ID of the backup client.
    std::shared_ptr<string> clientId_ = nullptr;
    // The time when the backup job was completed. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the time when the file system was created. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The time when the backup job was created. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // Destination data source details. (Required only for synchronization)
    std::shared_ptr<string> destDataSourceDetail_ = nullptr;
    // Destination data source ID. (Required only for synchronization)
    std::shared_ptr<string> destDataSourceId_ = nullptr;
    // Destination data source type. (Required only for synchronization)
    std::shared_ptr<string> destSourceType_ = nullptr;
    // The udm backup job detail.
    std::shared_ptr<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobDetail> detail_ = nullptr;
    // The error message that is returned for the backup job.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the paths to the files that are excluded from the backup job. The value must be 1 to 255 characters in length.
    std::shared_ptr<string> exclude_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the ID of the NAS file system.
    std::shared_ptr<string> fileSystemId_ = nullptr;
    // The number of files that have been processed.
    std::shared_ptr<int64_t> filesDone_ = nullptr;
    // The total number of files to be processed.
    std::shared_ptr<int64_t> filesTotal_ = nullptr;
    // The identifier of the container cluster. For a Container Service for Kubernetes (ACK) cluster, specify the cluster ID.
    std::shared_ptr<string> identifier_ = nullptr;
    // The paths to the files that are included in the backup job.
    std::shared_ptr<string> include_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the Tablestore instance.
    std::shared_ptr<string> instanceName_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the number of objects that are backed up.
    std::shared_ptr<int64_t> itemsDone_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the total number of objects in the data source.
    std::shared_ptr<int64_t> itemsTotal_ = nullptr;
    // The ID of the backup job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The name of the backup job.
    std::shared_ptr<string> jobName_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates whether Windows VSS is used to define a backup path.
    // 
    // *   This parameter is available only for Windows ECS instances.
    // *   If data changes occur in the backup source, the source data must be the same as the data to be backed up before the system sets this parameter to `["UseVSS":true]`.
    // *   If you use VSS, you cannot back up data from multiple directories.
    std::shared_ptr<string> options_ = nullptr;
    // The details about the Tablestore instance.
    std::shared_ptr<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobOtsDetail> otsDetail_ = nullptr;
    // The backup paths.
    std::shared_ptr<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobPaths> paths_ = nullptr;
    // The ID of the backup plan.
    std::shared_ptr<string> planId_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the prefix of objects that are backed up.
    std::shared_ptr<string> prefix_ = nullptr;
    // The backup progress. For example, 10000 indicates that the progress is 100%.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // Task Report
    std::shared_ptr<Models::DescribeBackupJobs2ResponseBodyBackupJobsBackupJobReport> report_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: ECS files
    // *   **OSS**: OSS buckets
    // *   **NAS**: NAS file systems
    std::shared_ptr<string> sourceType_ = nullptr;
    // The average speed at which data is backed up. Unit: KB/s.
    std::shared_ptr<int64_t> speed_ = nullptr;
    // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the throttling rules. Format: `{start}{end}{bandwidth}`. Multiple throttling rules are separated with vertical bars (`{start}|{end}|{bandwidth}`). A specified time range cannot overlap with another one.
    // 
    // *   **start**: the start hour
    // *   **end**: the end hour
    // *   **bandwidth**: the bandwidth. Unit: KB/s.
    std::shared_ptr<string> speedLimit_ = nullptr;
    // The time when the backup job started. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the backup job. Valid values:
    // 
    // *   **COMPLETE**: The backup job is completed.
    // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
    // *   **FAILED**: The restore job has failed.
    std::shared_ptr<string> status_ = nullptr;
    // The name of a destination table in the Tablestore instance.
    std::shared_ptr<string> tableName_ = nullptr;
    // The time when the backup job was updated. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
