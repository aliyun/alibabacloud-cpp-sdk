// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBSRESTOREJOB_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODYRESTOREJOBSRESTOREJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail.hpp>
#include <alibabacloud/models/DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_TO_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Exclude, exclude_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FailbackDetail, failbackDetail_);
      DARABONBA_PTR_TO_JSON(Include, include_);
      DARABONBA_PTR_TO_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_TO_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_TO_JSON(MeteringBytesDone, meteringBytesDone_);
      DARABONBA_PTR_TO_JSON(MeteringBytesTotal, meteringBytesTotal_);
      DARABONBA_PTR_TO_JSON(Options, options_);
      DARABONBA_PTR_TO_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(Report, report_);
      DARABONBA_PTR_TO_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_TO_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Speed, speed_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_TO_JSON(TargetBucket, targetBucket_);
      DARABONBA_PTR_TO_JSON(TargetClientId, targetClientId_);
      DARABONBA_PTR_TO_JSON(TargetCreateTime, targetCreateTime_);
      DARABONBA_PTR_TO_JSON(TargetDataSourceId, targetDataSourceId_);
      DARABONBA_PTR_TO_JSON(TargetFileSystemId, targetFileSystemId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_TO_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_TO_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_TO_JSON(TargetPrefix, targetPrefix_);
      DARABONBA_PTR_TO_JSON(TargetTableName, targetTableName_);
      DARABONBA_PTR_TO_JSON(TargetTime, targetTime_);
      DARABONBA_PTR_TO_JSON(UdmDetail, udmDetail_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(ActualItems, actualItems_);
      DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
      DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
      DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
      DARABONBA_PTR_FROM_JSON(ErrorFile, errorFile_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Exclude, exclude_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FailbackDetail, failbackDetail_);
      DARABONBA_PTR_FROM_JSON(Include, include_);
      DARABONBA_PTR_FROM_JSON(ItemsDone, itemsDone_);
      DARABONBA_PTR_FROM_JSON(ItemsTotal, itemsTotal_);
      DARABONBA_PTR_FROM_JSON(MeteringBytesDone, meteringBytesDone_);
      DARABONBA_PTR_FROM_JSON(MeteringBytesTotal, meteringBytesTotal_);
      DARABONBA_PTR_FROM_JSON(Options, options_);
      DARABONBA_PTR_FROM_JSON(OtsDetail, otsDetail_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(Report, report_);
      DARABONBA_PTR_FROM_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_FROM_JSON(RestoreType, restoreType_);
      DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
      DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Speed, speed_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageClass, storageClass_);
      DARABONBA_PTR_FROM_JSON(TargetBucket, targetBucket_);
      DARABONBA_PTR_FROM_JSON(TargetClientId, targetClientId_);
      DARABONBA_PTR_FROM_JSON(TargetCreateTime, targetCreateTime_);
      DARABONBA_PTR_FROM_JSON(TargetDataSourceId, targetDataSourceId_);
      DARABONBA_PTR_FROM_JSON(TargetFileSystemId, targetFileSystemId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceId, targetInstanceId_);
      DARABONBA_PTR_FROM_JSON(TargetInstanceName, targetInstanceName_);
      DARABONBA_PTR_FROM_JSON(TargetPath, targetPath_);
      DARABONBA_PTR_FROM_JSON(TargetPrefix, targetPrefix_);
      DARABONBA_PTR_FROM_JSON(TargetTableName, targetTableName_);
      DARABONBA_PTR_FROM_JSON(TargetTime, targetTime_);
      DARABONBA_PTR_FROM_JSON(UdmDetail, udmDetail_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob(const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob(DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob &&) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob() = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& operator=(const DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob &) = default ;
    DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& operator=(DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actualBytes_ != nullptr
        && this->actualItems_ != nullptr && this->bytesDone_ != nullptr && this->bytesTotal_ != nullptr && this->clusterId_ != nullptr && this->completeTime_ != nullptr
        && this->createdTime_ != nullptr && this->crossAccountRoleName_ != nullptr && this->crossAccountType_ != nullptr && this->crossAccountUserId_ != nullptr && this->errorFile_ != nullptr
        && this->errorMessage_ != nullptr && this->exclude_ != nullptr && this->expireTime_ != nullptr && this->failbackDetail_ != nullptr && this->include_ != nullptr
        && this->itemsDone_ != nullptr && this->itemsTotal_ != nullptr && this->meteringBytesDone_ != nullptr && this->meteringBytesTotal_ != nullptr && this->options_ != nullptr
        && this->otsDetail_ != nullptr && this->parentId_ != nullptr && this->progress_ != nullptr && this->report_ != nullptr && this->restoreId_ != nullptr
        && this->restoreType_ != nullptr && this->snapshotHash_ != nullptr && this->snapshotId_ != nullptr && this->sourceType_ != nullptr && this->speed_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr && this->storageClass_ != nullptr && this->targetBucket_ != nullptr && this->targetClientId_ != nullptr
        && this->targetCreateTime_ != nullptr && this->targetDataSourceId_ != nullptr && this->targetFileSystemId_ != nullptr && this->targetInstanceId_ != nullptr && this->targetInstanceName_ != nullptr
        && this->targetPath_ != nullptr && this->targetPrefix_ != nullptr && this->targetTableName_ != nullptr && this->targetTime_ != nullptr && this->udmDetail_ != nullptr
        && this->updatedTime_ != nullptr && this->vaultId_ != nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline int64_t actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // actualItems Field Functions 
    bool hasActualItems() const { return this->actualItems_ != nullptr;};
    void deleteActualItems() { this->actualItems_ = nullptr;};
    inline int64_t actualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline int64_t completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // crossAccountRoleName Field Functions 
    bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
    void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
    inline string crossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


    // crossAccountType Field Functions 
    bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
    void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
    inline string crossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


    // crossAccountUserId Field Functions 
    bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
    void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
    inline int64_t crossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


    // errorFile Field Functions 
    bool hasErrorFile() const { return this->errorFile_ != nullptr;};
    void deleteErrorFile() { this->errorFile_ = nullptr;};
    inline string errorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // exclude Field Functions 
    bool hasExclude() const { return this->exclude_ != nullptr;};
    void deleteExclude() { this->exclude_ = nullptr;};
    inline string exclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // failbackDetail Field Functions 
    bool hasFailbackDetail() const { return this->failbackDetail_ != nullptr;};
    void deleteFailbackDetail() { this->failbackDetail_ = nullptr;};
    inline string failbackDetail() const { DARABONBA_PTR_GET_DEFAULT(failbackDetail_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setFailbackDetail(string failbackDetail) { DARABONBA_PTR_SET_VALUE(failbackDetail_, failbackDetail) };


    // include Field Functions 
    bool hasInclude() const { return this->include_ != nullptr;};
    void deleteInclude() { this->include_ = nullptr;};
    inline string include() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


    // itemsDone Field Functions 
    bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
    void deleteItemsDone() { this->itemsDone_ = nullptr;};
    inline int64_t itemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


    // itemsTotal Field Functions 
    bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
    void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
    inline int64_t itemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


    // meteringBytesDone Field Functions 
    bool hasMeteringBytesDone() const { return this->meteringBytesDone_ != nullptr;};
    void deleteMeteringBytesDone() { this->meteringBytesDone_ = nullptr;};
    inline int64_t meteringBytesDone() const { DARABONBA_PTR_GET_DEFAULT(meteringBytesDone_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setMeteringBytesDone(int64_t meteringBytesDone) { DARABONBA_PTR_SET_VALUE(meteringBytesDone_, meteringBytesDone) };


    // meteringBytesTotal Field Functions 
    bool hasMeteringBytesTotal() const { return this->meteringBytesTotal_ != nullptr;};
    void deleteMeteringBytesTotal() { this->meteringBytesTotal_ = nullptr;};
    inline int64_t meteringBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(meteringBytesTotal_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setMeteringBytesTotal(int64_t meteringBytesTotal) { DARABONBA_PTR_SET_VALUE(meteringBytesTotal_, meteringBytesTotal) };


    // options Field Functions 
    bool hasOptions() const { return this->options_ != nullptr;};
    void deleteOptions() { this->options_ = nullptr;};
    inline string options() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


    // otsDetail Field Functions 
    bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
    void deleteOtsDetail() { this->otsDetail_ = nullptr;};
    inline const Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail & otsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail) };
    inline Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail otsDetail() { DARABONBA_PTR_GET(otsDetail_, Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setOtsDetail(const Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setOtsDetail(Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline int32_t progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // report Field Functions 
    bool hasReport() const { return this->report_ != nullptr;};
    void deleteReport() { this->report_ = nullptr;};
    inline const Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport & report() const { DARABONBA_PTR_GET_CONST(report_, Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport) };
    inline Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport report() { DARABONBA_PTR_GET(report_, Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setReport(const Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setReport(Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


    // restoreId Field Functions 
    bool hasRestoreId() const { return this->restoreId_ != nullptr;};
    void deleteRestoreId() { this->restoreId_ = nullptr;};
    inline string restoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


    // restoreType Field Functions 
    bool hasRestoreType() const { return this->restoreType_ != nullptr;};
    void deleteRestoreType() { this->restoreType_ = nullptr;};
    inline string restoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


    // snapshotHash Field Functions 
    bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
    void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
    inline string snapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


    // snapshotId Field Functions 
    bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
    void deleteSnapshotId() { this->snapshotId_ = nullptr;};
    inline string snapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int64_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageClass Field Functions 
    bool hasStorageClass() const { return this->storageClass_ != nullptr;};
    void deleteStorageClass() { this->storageClass_ = nullptr;};
    inline string storageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


    // targetBucket Field Functions 
    bool hasTargetBucket() const { return this->targetBucket_ != nullptr;};
    void deleteTargetBucket() { this->targetBucket_ = nullptr;};
    inline string targetBucket() const { DARABONBA_PTR_GET_DEFAULT(targetBucket_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetBucket(string targetBucket) { DARABONBA_PTR_SET_VALUE(targetBucket_, targetBucket) };


    // targetClientId Field Functions 
    bool hasTargetClientId() const { return this->targetClientId_ != nullptr;};
    void deleteTargetClientId() { this->targetClientId_ = nullptr;};
    inline string targetClientId() const { DARABONBA_PTR_GET_DEFAULT(targetClientId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetClientId(string targetClientId) { DARABONBA_PTR_SET_VALUE(targetClientId_, targetClientId) };


    // targetCreateTime Field Functions 
    bool hasTargetCreateTime() const { return this->targetCreateTime_ != nullptr;};
    void deleteTargetCreateTime() { this->targetCreateTime_ = nullptr;};
    inline int64_t targetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(targetCreateTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetCreateTime(int64_t targetCreateTime) { DARABONBA_PTR_SET_VALUE(targetCreateTime_, targetCreateTime) };


    // targetDataSourceId Field Functions 
    bool hasTargetDataSourceId() const { return this->targetDataSourceId_ != nullptr;};
    void deleteTargetDataSourceId() { this->targetDataSourceId_ = nullptr;};
    inline string targetDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(targetDataSourceId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetDataSourceId(string targetDataSourceId) { DARABONBA_PTR_SET_VALUE(targetDataSourceId_, targetDataSourceId) };


    // targetFileSystemId Field Functions 
    bool hasTargetFileSystemId() const { return this->targetFileSystemId_ != nullptr;};
    void deleteTargetFileSystemId() { this->targetFileSystemId_ = nullptr;};
    inline string targetFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(targetFileSystemId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetFileSystemId(string targetFileSystemId) { DARABONBA_PTR_SET_VALUE(targetFileSystemId_, targetFileSystemId) };


    // targetInstanceId Field Functions 
    bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
    void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
    inline string targetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


    // targetInstanceName Field Functions 
    bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
    void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
    inline string targetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


    // targetPath Field Functions 
    bool hasTargetPath() const { return this->targetPath_ != nullptr;};
    void deleteTargetPath() { this->targetPath_ = nullptr;};
    inline string targetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


    // targetPrefix Field Functions 
    bool hasTargetPrefix() const { return this->targetPrefix_ != nullptr;};
    void deleteTargetPrefix() { this->targetPrefix_ = nullptr;};
    inline string targetPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetPrefix_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetPrefix(string targetPrefix) { DARABONBA_PTR_SET_VALUE(targetPrefix_, targetPrefix) };


    // targetTableName Field Functions 
    bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
    void deleteTargetTableName() { this->targetTableName_ = nullptr;};
    inline string targetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


    // targetTime Field Functions 
    bool hasTargetTime() const { return this->targetTime_ != nullptr;};
    void deleteTargetTime() { this->targetTime_ = nullptr;};
    inline int64_t targetTime() const { DARABONBA_PTR_GET_DEFAULT(targetTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setTargetTime(int64_t targetTime) { DARABONBA_PTR_SET_VALUE(targetTime_, targetTime) };


    // udmDetail Field Functions 
    bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
    void deleteUdmDetail() { this->udmDetail_ = nullptr;};
    inline string udmDetail() const { DARABONBA_PTR_GET_DEFAULT(udmDetail_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setUdmDetail(string udmDetail) { DARABONBA_PTR_SET_VALUE(udmDetail_, udmDetail) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJob& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    // The actual amount of data that is restored after duplicates are removed. Unit: bytes.
    std::shared_ptr<int64_t> actualBytes_ = nullptr;
    // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the actual number of objects that are restored by the restore job.
    std::shared_ptr<int64_t> actualItems_ = nullptr;
    // The amount of data that was restored. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The total amount of data that was backed up from the data source. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // The ID of the client group used for restoration.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The time when the restore job was completed. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> completeTime_ = nullptr;
    // The time when the restore job was created. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountRoleName_ = nullptr;
    // Indicates whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
    // 
    // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
    // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
    std::shared_ptr<string> crossAccountType_ = nullptr;
    // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
    std::shared_ptr<int64_t> crossAccountUserId_ = nullptr;
    // The files that failed to be restored.
    std::shared_ptr<string> errorFile_ = nullptr;
    // The error message that is returned for the restore job.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the paths to the files that are excluded from the restore job. The value can be up to 255 characters in length.
    std::shared_ptr<string> exclude_ = nullptr;
    // The time when the restore job expires.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The details about the VMware failback task.
    std::shared_ptr<string> failbackDetail_ = nullptr;
    // The paths to the files that are included in the restore job.
    std::shared_ptr<string> include_ = nullptr;
    // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the number of restored objects.
    std::shared_ptr<int64_t> itemsDone_ = nullptr;
    // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the total number of objects in the data source.
    std::shared_ptr<int64_t> itemsTotal_ = nullptr;
    // The amount of data that was restored. Unit: bytes. This parameter is valid only if the StorageClass parameter is set to ARCHIVE. The minimum billable size of the data stored at the Archive tier is 1 MB.
    std::shared_ptr<int64_t> meteringBytesDone_ = nullptr;
    // The total amount of data that was backed up from the data source. Unit: bytes. This parameter is valid only if the StorageClass parameter is set to ARCHIVE. The minimum billable size of the data stored at the Archive tier is 1 MB.
    std::shared_ptr<int64_t> meteringBytesTotal_ = nullptr;
    // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates whether Windows Volume Shadow Copy Service (VSS) is used to define a restoration path.
    // 
    // *   This parameter is available only for Windows ECS instances.
    // *   If data changes occur in the backup source, the source data must be the same as the data to be backed up before you can set this parameter to `["UseVSS":true]`.
    // *   If you use VSS, you cannot restore data from multiple directories.
    std::shared_ptr<string> options_ = nullptr;
    // The details about the Tablestore instance.
    std::shared_ptr<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobOtsDetail> otsDetail_ = nullptr;
    // The ID of the parent job.
    std::shared_ptr<string> parentId_ = nullptr;
    // The progress of the restore job. Valid values: [0,10000]. For example, 10000 indicates that the progress is 100%.
    std::shared_ptr<int32_t> progress_ = nullptr;
    // The report of the restore job.
    std::shared_ptr<Models::DescribeRestoreJobs2ResponseBodyRestoreJobsRestoreJobReport> report_ = nullptr;
    // The ID of the restore job.
    std::shared_ptr<string> restoreId_ = nullptr;
    // The type of the restore job.
    std::shared_ptr<string> restoreType_ = nullptr;
    // The hash value of the backup snapshot.
    std::shared_ptr<string> snapshotHash_ = nullptr;
    // The ID of the snapshot used for restoration.
    std::shared_ptr<string> snapshotId_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **ECS_FILE**: ECS files
    // *   **OSS**: Object Storage Service (OSS) buckets
    // *   **NAS**: Apsara File Storage NAS (NAS) file systems
    // *   **OTS_TABLE**: Tablestore instances
    // *   **UDM_ECS**: ECS instances
    std::shared_ptr<string> sourceType_ = nullptr;
    // The average speed at which data is backed up. Unit: KB/s.
    std::shared_ptr<int64_t> speed_ = nullptr;
    // The time when the restore job started. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the restore job. Valid values:
    // 
    // *   **COMPLETE**: The job is completed.
    // *   **PARTIAL_COMPLETE**: The job is partially completed.
    // *   **FAILED**: The job failed.
    std::shared_ptr<string> status_ = nullptr;
    // The storage class of the backup data. Valid values:
    // 
    // *   **STANDARD**
    // *   **ARCHIVE**
    std::shared_ptr<string> storageClass_ = nullptr;
    // The name of the destination OSS bucket. This parameter is returned only for OSS buckets.
    std::shared_ptr<string> targetBucket_ = nullptr;
    // The ID of the destination client.
    std::shared_ptr<string> targetClientId_ = nullptr;
    // The time when the file system was created. This parameter is returned only for NAS file systems.
    std::shared_ptr<int64_t> targetCreateTime_ = nullptr;
    // The ID of the destination data source.
    std::shared_ptr<string> targetDataSourceId_ = nullptr;
    // The ID of the destination NAS file system. This parameter is returned only for NAS file systems.
    std::shared_ptr<string> targetFileSystemId_ = nullptr;
    // The ID of the destination instance for the restore job.
    std::shared_ptr<string> targetInstanceId_ = nullptr;
    // The name of the destination Tablestore instance.
    std::shared_ptr<string> targetInstanceName_ = nullptr;
    // The destination file path of the restore job.
    std::shared_ptr<string> targetPath_ = nullptr;
    // The prefix of the objects that are restored. This parameter is returned only for OSS buckets.
    std::shared_ptr<string> targetPrefix_ = nullptr;
    // The name of the destination table in the Tablestore instance.
    std::shared_ptr<string> targetTableName_ = nullptr;
    // The time when the Tablestore instance was backed up. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> targetTime_ = nullptr;
    // The details about Elastic Compute Service (ECS) instance backup.
    std::shared_ptr<string> udmDetail_ = nullptr;
    // The time when the restore job was updated. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
