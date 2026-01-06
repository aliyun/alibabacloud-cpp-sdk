// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTOREJOBS2RESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeRestoreJobs2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreJobs2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreJobs, restoreJobs_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreJobs2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreJobs, restoreJobs_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeRestoreJobs2ResponseBody() = default ;
    DescribeRestoreJobs2ResponseBody(const DescribeRestoreJobs2ResponseBody &) = default ;
    DescribeRestoreJobs2ResponseBody(DescribeRestoreJobs2ResponseBody &&) = default ;
    DescribeRestoreJobs2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreJobs2ResponseBody() = default ;
    DescribeRestoreJobs2ResponseBody& operator=(const DescribeRestoreJobs2ResponseBody &) = default ;
    DescribeRestoreJobs2ResponseBody& operator=(DescribeRestoreJobs2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RestoreJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RestoreJobs& obj) { 
        DARABONBA_PTR_TO_JSON(RestoreJob, restoreJob_);
      };
      friend void from_json(const Darabonba::Json& j, RestoreJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(RestoreJob, restoreJob_);
      };
      RestoreJobs() = default ;
      RestoreJobs(const RestoreJobs &) = default ;
      RestoreJobs(RestoreJobs &&) = default ;
      RestoreJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RestoreJobs() = default ;
      RestoreJobs& operator=(const RestoreJobs &) = default ;
      RestoreJobs& operator=(RestoreJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RestoreJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RestoreJob& obj) { 
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
          DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
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
        friend void from_json(const Darabonba::Json& j, RestoreJob& obj) { 
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
          DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
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
        RestoreJob() = default ;
        RestoreJob(const RestoreJob &) = default ;
        RestoreJob(RestoreJob &&) = default ;
        RestoreJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RestoreJob() = default ;
        RestoreJob& operator=(const RestoreJob &) = default ;
        RestoreJob& operator=(RestoreJob &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Report : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Report& obj) { 
            DARABONBA_PTR_TO_JSON(FailedFiles, failedFiles_);
            DARABONBA_PTR_TO_JSON(ReportTaskStatus, reportTaskStatus_);
            DARABONBA_PTR_TO_JSON(SkippedFiles, skippedFiles_);
            DARABONBA_PTR_TO_JSON(SuccessFiles, successFiles_);
            DARABONBA_PTR_TO_JSON(TotalFiles, totalFiles_);
          };
          friend void from_json(const Darabonba::Json& j, Report& obj) { 
            DARABONBA_PTR_FROM_JSON(FailedFiles, failedFiles_);
            DARABONBA_PTR_FROM_JSON(ReportTaskStatus, reportTaskStatus_);
            DARABONBA_PTR_FROM_JSON(SkippedFiles, skippedFiles_);
            DARABONBA_PTR_FROM_JSON(SuccessFiles, successFiles_);
            DARABONBA_PTR_FROM_JSON(TotalFiles, totalFiles_);
          };
          Report() = default ;
          Report(const Report &) = default ;
          Report(Report &&) = default ;
          Report(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Report() = default ;
          Report& operator=(const Report &) = default ;
          Report& operator=(Report &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->failedFiles_ == nullptr
        && this->reportTaskStatus_ == nullptr && this->skippedFiles_ == nullptr && this->successFiles_ == nullptr && this->totalFiles_ == nullptr; };
          // failedFiles Field Functions 
          bool hasFailedFiles() const { return this->failedFiles_ != nullptr;};
          void deleteFailedFiles() { this->failedFiles_ = nullptr;};
          inline string getFailedFiles() const { DARABONBA_PTR_GET_DEFAULT(failedFiles_, "") };
          inline Report& setFailedFiles(string failedFiles) { DARABONBA_PTR_SET_VALUE(failedFiles_, failedFiles) };


          // reportTaskStatus Field Functions 
          bool hasReportTaskStatus() const { return this->reportTaskStatus_ != nullptr;};
          void deleteReportTaskStatus() { this->reportTaskStatus_ = nullptr;};
          inline string getReportTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(reportTaskStatus_, "") };
          inline Report& setReportTaskStatus(string reportTaskStatus) { DARABONBA_PTR_SET_VALUE(reportTaskStatus_, reportTaskStatus) };


          // skippedFiles Field Functions 
          bool hasSkippedFiles() const { return this->skippedFiles_ != nullptr;};
          void deleteSkippedFiles() { this->skippedFiles_ = nullptr;};
          inline string getSkippedFiles() const { DARABONBA_PTR_GET_DEFAULT(skippedFiles_, "") };
          inline Report& setSkippedFiles(string skippedFiles) { DARABONBA_PTR_SET_VALUE(skippedFiles_, skippedFiles) };


          // successFiles Field Functions 
          bool hasSuccessFiles() const { return this->successFiles_ != nullptr;};
          void deleteSuccessFiles() { this->successFiles_ = nullptr;};
          inline string getSuccessFiles() const { DARABONBA_PTR_GET_DEFAULT(successFiles_, "") };
          inline Report& setSuccessFiles(string successFiles) { DARABONBA_PTR_SET_VALUE(successFiles_, successFiles) };


          // totalFiles Field Functions 
          bool hasTotalFiles() const { return this->totalFiles_ != nullptr;};
          void deleteTotalFiles() { this->totalFiles_ = nullptr;};
          inline string getTotalFiles() const { DARABONBA_PTR_GET_DEFAULT(totalFiles_, "") };
          inline Report& setTotalFiles(string totalFiles) { DARABONBA_PTR_SET_VALUE(totalFiles_, totalFiles) };


        protected:
          // The files that failed to be executed.
          shared_ptr<string> failedFiles_ {};
          // The status of the report generation.
          shared_ptr<string> reportTaskStatus_ {};
          // The skipped files.
          shared_ptr<string> skippedFiles_ {};
          // The files that are successfully executed.
          shared_ptr<string> successFiles_ {};
          // The full files that are restored based on the file list.
          shared_ptr<string> totalFiles_ {};
        };

        class OtsDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OtsDetail& obj) { 
            DARABONBA_PTR_TO_JSON(BatchChannelCount, batchChannelCount_);
            DARABONBA_PTR_TO_JSON(OverwriteExisting, overwriteExisting_);
          };
          friend void from_json(const Darabonba::Json& j, OtsDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(BatchChannelCount, batchChannelCount_);
            DARABONBA_PTR_FROM_JSON(OverwriteExisting, overwriteExisting_);
          };
          OtsDetail() = default ;
          OtsDetail(const OtsDetail &) = default ;
          OtsDetail(OtsDetail &&) = default ;
          OtsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OtsDetail() = default ;
          OtsDetail& operator=(const OtsDetail &) = default ;
          OtsDetail& operator=(OtsDetail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->batchChannelCount_ == nullptr
        && this->overwriteExisting_ == nullptr; };
          // batchChannelCount Field Functions 
          bool hasBatchChannelCount() const { return this->batchChannelCount_ != nullptr;};
          void deleteBatchChannelCount() { this->batchChannelCount_ = nullptr;};
          inline int32_t getBatchChannelCount() const { DARABONBA_PTR_GET_DEFAULT(batchChannelCount_, 0) };
          inline OtsDetail& setBatchChannelCount(int32_t batchChannelCount) { DARABONBA_PTR_SET_VALUE(batchChannelCount_, batchChannelCount) };


          // overwriteExisting Field Functions 
          bool hasOverwriteExisting() const { return this->overwriteExisting_ != nullptr;};
          void deleteOverwriteExisting() { this->overwriteExisting_ = nullptr;};
          inline bool getOverwriteExisting() const { DARABONBA_PTR_GET_DEFAULT(overwriteExisting_, false) };
          inline OtsDetail& setOverwriteExisting(bool overwriteExisting) { DARABONBA_PTR_SET_VALUE(overwriteExisting_, overwriteExisting) };


        protected:
          // The number of channels processed by each Tablestore restore job.
          shared_ptr<int32_t> batchChannelCount_ {};
          // Indicates whether the existing Tablestore restore job was overwritten.
          shared_ptr<bool> overwriteExisting_ {};
        };

        virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->actualItems_ == nullptr && this->bytesDone_ == nullptr && this->bytesTotal_ == nullptr && this->clusterId_ == nullptr && this->completeTime_ == nullptr
        && this->createdTime_ == nullptr && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->errorFile_ == nullptr
        && this->errorMessage_ == nullptr && this->exclude_ == nullptr && this->expireTime_ == nullptr && this->failbackDetail_ == nullptr && this->include_ == nullptr
        && this->itemsDone_ == nullptr && this->itemsTotal_ == nullptr && this->meteringBytesDone_ == nullptr && this->meteringBytesTotal_ == nullptr && this->options_ == nullptr
        && this->otsDetail_ == nullptr && this->parentId_ == nullptr && this->progress_ == nullptr && this->report_ == nullptr && this->restoreId_ == nullptr
        && this->restoreType_ == nullptr && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceInstanceId_ == nullptr && this->sourceType_ == nullptr
        && this->speed_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->storageClass_ == nullptr && this->targetBucket_ == nullptr
        && this->targetClientId_ == nullptr && this->targetCreateTime_ == nullptr && this->targetDataSourceId_ == nullptr && this->targetFileSystemId_ == nullptr && this->targetInstanceId_ == nullptr
        && this->targetInstanceName_ == nullptr && this->targetPath_ == nullptr && this->targetPrefix_ == nullptr && this->targetTableName_ == nullptr && this->targetTime_ == nullptr
        && this->udmDetail_ == nullptr && this->updatedTime_ == nullptr && this->vaultId_ == nullptr; };
        // actualBytes Field Functions 
        bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
        void deleteActualBytes() { this->actualBytes_ = nullptr;};
        inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
        inline RestoreJob& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


        // actualItems Field Functions 
        bool hasActualItems() const { return this->actualItems_ != nullptr;};
        void deleteActualItems() { this->actualItems_ = nullptr;};
        inline int64_t getActualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
        inline RestoreJob& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


        // bytesDone Field Functions 
        bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
        void deleteBytesDone() { this->bytesDone_ = nullptr;};
        inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
        inline RestoreJob& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


        // bytesTotal Field Functions 
        bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
        void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
        inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
        inline RestoreJob& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


        // clusterId Field Functions 
        bool hasClusterId() const { return this->clusterId_ != nullptr;};
        void deleteClusterId() { this->clusterId_ = nullptr;};
        inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
        inline RestoreJob& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
        inline RestoreJob& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline RestoreJob& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // crossAccountRoleName Field Functions 
        bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
        void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
        inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
        inline RestoreJob& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


        // crossAccountType Field Functions 
        bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
        void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
        inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
        inline RestoreJob& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


        // crossAccountUserId Field Functions 
        bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
        void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
        inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
        inline RestoreJob& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


        // errorFile Field Functions 
        bool hasErrorFile() const { return this->errorFile_ != nullptr;};
        void deleteErrorFile() { this->errorFile_ = nullptr;};
        inline string getErrorFile() const { DARABONBA_PTR_GET_DEFAULT(errorFile_, "") };
        inline RestoreJob& setErrorFile(string errorFile) { DARABONBA_PTR_SET_VALUE(errorFile_, errorFile) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline RestoreJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // exclude Field Functions 
        bool hasExclude() const { return this->exclude_ != nullptr;};
        void deleteExclude() { this->exclude_ = nullptr;};
        inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
        inline RestoreJob& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


        // expireTime Field Functions 
        bool hasExpireTime() const { return this->expireTime_ != nullptr;};
        void deleteExpireTime() { this->expireTime_ = nullptr;};
        inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
        inline RestoreJob& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


        // failbackDetail Field Functions 
        bool hasFailbackDetail() const { return this->failbackDetail_ != nullptr;};
        void deleteFailbackDetail() { this->failbackDetail_ = nullptr;};
        inline string getFailbackDetail() const { DARABONBA_PTR_GET_DEFAULT(failbackDetail_, "") };
        inline RestoreJob& setFailbackDetail(string failbackDetail) { DARABONBA_PTR_SET_VALUE(failbackDetail_, failbackDetail) };


        // include Field Functions 
        bool hasInclude() const { return this->include_ != nullptr;};
        void deleteInclude() { this->include_ = nullptr;};
        inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
        inline RestoreJob& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


        // itemsDone Field Functions 
        bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
        void deleteItemsDone() { this->itemsDone_ = nullptr;};
        inline int64_t getItemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
        inline RestoreJob& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


        // itemsTotal Field Functions 
        bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
        void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
        inline int64_t getItemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
        inline RestoreJob& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


        // meteringBytesDone Field Functions 
        bool hasMeteringBytesDone() const { return this->meteringBytesDone_ != nullptr;};
        void deleteMeteringBytesDone() { this->meteringBytesDone_ = nullptr;};
        inline int64_t getMeteringBytesDone() const { DARABONBA_PTR_GET_DEFAULT(meteringBytesDone_, 0L) };
        inline RestoreJob& setMeteringBytesDone(int64_t meteringBytesDone) { DARABONBA_PTR_SET_VALUE(meteringBytesDone_, meteringBytesDone) };


        // meteringBytesTotal Field Functions 
        bool hasMeteringBytesTotal() const { return this->meteringBytesTotal_ != nullptr;};
        void deleteMeteringBytesTotal() { this->meteringBytesTotal_ = nullptr;};
        inline int64_t getMeteringBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(meteringBytesTotal_, 0L) };
        inline RestoreJob& setMeteringBytesTotal(int64_t meteringBytesTotal) { DARABONBA_PTR_SET_VALUE(meteringBytesTotal_, meteringBytesTotal) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
        inline RestoreJob& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


        // otsDetail Field Functions 
        bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
        void deleteOtsDetail() { this->otsDetail_ = nullptr;};
        inline const RestoreJob::OtsDetail & getOtsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, RestoreJob::OtsDetail) };
        inline RestoreJob::OtsDetail getOtsDetail() { DARABONBA_PTR_GET(otsDetail_, RestoreJob::OtsDetail) };
        inline RestoreJob& setOtsDetail(const RestoreJob::OtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
        inline RestoreJob& setOtsDetail(RestoreJob::OtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline string getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
        inline RestoreJob& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline RestoreJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // report Field Functions 
        bool hasReport() const { return this->report_ != nullptr;};
        void deleteReport() { this->report_ = nullptr;};
        inline const RestoreJob::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, RestoreJob::Report) };
        inline RestoreJob::Report getReport() { DARABONBA_PTR_GET(report_, RestoreJob::Report) };
        inline RestoreJob& setReport(const RestoreJob::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
        inline RestoreJob& setReport(RestoreJob::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


        // restoreId Field Functions 
        bool hasRestoreId() const { return this->restoreId_ != nullptr;};
        void deleteRestoreId() { this->restoreId_ = nullptr;};
        inline string getRestoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
        inline RestoreJob& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


        // restoreType Field Functions 
        bool hasRestoreType() const { return this->restoreType_ != nullptr;};
        void deleteRestoreType() { this->restoreType_ = nullptr;};
        inline string getRestoreType() const { DARABONBA_PTR_GET_DEFAULT(restoreType_, "") };
        inline RestoreJob& setRestoreType(string restoreType) { DARABONBA_PTR_SET_VALUE(restoreType_, restoreType) };


        // snapshotHash Field Functions 
        bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
        void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
        inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
        inline RestoreJob& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline RestoreJob& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // sourceInstanceId Field Functions 
        bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
        void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
        inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
        inline RestoreJob& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline RestoreJob& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // speed Field Functions 
        bool hasSpeed() const { return this->speed_ != nullptr;};
        void deleteSpeed() { this->speed_ = nullptr;};
        inline int64_t getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
        inline RestoreJob& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline RestoreJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline RestoreJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // storageClass Field Functions 
        bool hasStorageClass() const { return this->storageClass_ != nullptr;};
        void deleteStorageClass() { this->storageClass_ = nullptr;};
        inline string getStorageClass() const { DARABONBA_PTR_GET_DEFAULT(storageClass_, "") };
        inline RestoreJob& setStorageClass(string storageClass) { DARABONBA_PTR_SET_VALUE(storageClass_, storageClass) };


        // targetBucket Field Functions 
        bool hasTargetBucket() const { return this->targetBucket_ != nullptr;};
        void deleteTargetBucket() { this->targetBucket_ = nullptr;};
        inline string getTargetBucket() const { DARABONBA_PTR_GET_DEFAULT(targetBucket_, "") };
        inline RestoreJob& setTargetBucket(string targetBucket) { DARABONBA_PTR_SET_VALUE(targetBucket_, targetBucket) };


        // targetClientId Field Functions 
        bool hasTargetClientId() const { return this->targetClientId_ != nullptr;};
        void deleteTargetClientId() { this->targetClientId_ = nullptr;};
        inline string getTargetClientId() const { DARABONBA_PTR_GET_DEFAULT(targetClientId_, "") };
        inline RestoreJob& setTargetClientId(string targetClientId) { DARABONBA_PTR_SET_VALUE(targetClientId_, targetClientId) };


        // targetCreateTime Field Functions 
        bool hasTargetCreateTime() const { return this->targetCreateTime_ != nullptr;};
        void deleteTargetCreateTime() { this->targetCreateTime_ = nullptr;};
        inline int64_t getTargetCreateTime() const { DARABONBA_PTR_GET_DEFAULT(targetCreateTime_, 0L) };
        inline RestoreJob& setTargetCreateTime(int64_t targetCreateTime) { DARABONBA_PTR_SET_VALUE(targetCreateTime_, targetCreateTime) };


        // targetDataSourceId Field Functions 
        bool hasTargetDataSourceId() const { return this->targetDataSourceId_ != nullptr;};
        void deleteTargetDataSourceId() { this->targetDataSourceId_ = nullptr;};
        inline string getTargetDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(targetDataSourceId_, "") };
        inline RestoreJob& setTargetDataSourceId(string targetDataSourceId) { DARABONBA_PTR_SET_VALUE(targetDataSourceId_, targetDataSourceId) };


        // targetFileSystemId Field Functions 
        bool hasTargetFileSystemId() const { return this->targetFileSystemId_ != nullptr;};
        void deleteTargetFileSystemId() { this->targetFileSystemId_ = nullptr;};
        inline string getTargetFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(targetFileSystemId_, "") };
        inline RestoreJob& setTargetFileSystemId(string targetFileSystemId) { DARABONBA_PTR_SET_VALUE(targetFileSystemId_, targetFileSystemId) };


        // targetInstanceId Field Functions 
        bool hasTargetInstanceId() const { return this->targetInstanceId_ != nullptr;};
        void deleteTargetInstanceId() { this->targetInstanceId_ = nullptr;};
        inline string getTargetInstanceId() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceId_, "") };
        inline RestoreJob& setTargetInstanceId(string targetInstanceId) { DARABONBA_PTR_SET_VALUE(targetInstanceId_, targetInstanceId) };


        // targetInstanceName Field Functions 
        bool hasTargetInstanceName() const { return this->targetInstanceName_ != nullptr;};
        void deleteTargetInstanceName() { this->targetInstanceName_ = nullptr;};
        inline string getTargetInstanceName() const { DARABONBA_PTR_GET_DEFAULT(targetInstanceName_, "") };
        inline RestoreJob& setTargetInstanceName(string targetInstanceName) { DARABONBA_PTR_SET_VALUE(targetInstanceName_, targetInstanceName) };


        // targetPath Field Functions 
        bool hasTargetPath() const { return this->targetPath_ != nullptr;};
        void deleteTargetPath() { this->targetPath_ = nullptr;};
        inline string getTargetPath() const { DARABONBA_PTR_GET_DEFAULT(targetPath_, "") };
        inline RestoreJob& setTargetPath(string targetPath) { DARABONBA_PTR_SET_VALUE(targetPath_, targetPath) };


        // targetPrefix Field Functions 
        bool hasTargetPrefix() const { return this->targetPrefix_ != nullptr;};
        void deleteTargetPrefix() { this->targetPrefix_ = nullptr;};
        inline string getTargetPrefix() const { DARABONBA_PTR_GET_DEFAULT(targetPrefix_, "") };
        inline RestoreJob& setTargetPrefix(string targetPrefix) { DARABONBA_PTR_SET_VALUE(targetPrefix_, targetPrefix) };


        // targetTableName Field Functions 
        bool hasTargetTableName() const { return this->targetTableName_ != nullptr;};
        void deleteTargetTableName() { this->targetTableName_ = nullptr;};
        inline string getTargetTableName() const { DARABONBA_PTR_GET_DEFAULT(targetTableName_, "") };
        inline RestoreJob& setTargetTableName(string targetTableName) { DARABONBA_PTR_SET_VALUE(targetTableName_, targetTableName) };


        // targetTime Field Functions 
        bool hasTargetTime() const { return this->targetTime_ != nullptr;};
        void deleteTargetTime() { this->targetTime_ = nullptr;};
        inline int64_t getTargetTime() const { DARABONBA_PTR_GET_DEFAULT(targetTime_, 0L) };
        inline RestoreJob& setTargetTime(int64_t targetTime) { DARABONBA_PTR_SET_VALUE(targetTime_, targetTime) };


        // udmDetail Field Functions 
        bool hasUdmDetail() const { return this->udmDetail_ != nullptr;};
        void deleteUdmDetail() { this->udmDetail_ = nullptr;};
        inline string getUdmDetail() const { DARABONBA_PTR_GET_DEFAULT(udmDetail_, "") };
        inline RestoreJob& setUdmDetail(string udmDetail) { DARABONBA_PTR_SET_VALUE(udmDetail_, udmDetail) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline RestoreJob& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline RestoreJob& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // The actual amount of data that is restored after duplicates are removed. Unit: bytes.
        shared_ptr<int64_t> actualBytes_ {};
        // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the actual number of objects that are restored by the restore job.
        shared_ptr<int64_t> actualItems_ {};
        // The amount of data that was restored. Unit: bytes.
        shared_ptr<int64_t> bytesDone_ {};
        // The total amount of data that was backed up from the data source. Unit: bytes.
        shared_ptr<int64_t> bytesTotal_ {};
        // The ID of the client group used for restoration.
        shared_ptr<string> clusterId_ {};
        // The time when the restore job was completed. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> completeTime_ {};
        // The time when the restore job was created. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createdTime_ {};
        // The name of the Resource Access Management (RAM) role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountRoleName_ {};
        // Indicates whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
        // 
        // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
        // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountType_ {};
        // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<int64_t> crossAccountUserId_ {};
        // The files that failed to be restored.
        shared_ptr<string> errorFile_ {};
        // The error message that is returned for the restore job.
        shared_ptr<string> errorMessage_ {};
        // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the paths to the files that are excluded from the restore job. The value can be up to 255 characters in length.
        shared_ptr<string> exclude_ {};
        // The time when the restore job expires.
        shared_ptr<int64_t> expireTime_ {};
        // The details about the VMware failback task.
        shared_ptr<string> failbackDetail_ {};
        // The paths to the files that are included in the restore job.
        shared_ptr<string> include_ {};
        // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the number of restored objects.
        shared_ptr<int64_t> itemsDone_ {};
        // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the total number of objects in the data source.
        shared_ptr<int64_t> itemsTotal_ {};
        // The amount of data that was restored. Unit: bytes. This parameter is valid only if the StorageClass parameter is set to ARCHIVE. The minimum billable size of the data stored at the Archive tier is 1 MB.
        shared_ptr<int64_t> meteringBytesDone_ {};
        // The total amount of data that was backed up from the data source. Unit: bytes. This parameter is valid only if the StorageClass parameter is set to ARCHIVE. The minimum billable size of the data stored at the Archive tier is 1 MB.
        shared_ptr<int64_t> meteringBytesTotal_ {};
        // This parameter is valid only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates whether Windows Volume Shadow Copy Service (VSS) is used to define a restoration path.
        // 
        // *   This parameter is available only for Windows ECS instances.
        // *   If data changes occur in the backup source, the source data must be the same as the data to be backed up before you can set this parameter to `["UseVSS":true]`.
        // *   If you use VSS, you cannot restore data from multiple directories.
        shared_ptr<string> options_ {};
        // The details about the Tablestore instance.
        shared_ptr<RestoreJob::OtsDetail> otsDetail_ {};
        // The ID of the parent job.
        shared_ptr<string> parentId_ {};
        // The progress of the restore job. Valid values: [0,10000]. For example, 10000 indicates that the progress is 100%.
        shared_ptr<int32_t> progress_ {};
        // The report of the restore job.
        shared_ptr<RestoreJob::Report> report_ {};
        // The ID of the restore job.
        shared_ptr<string> restoreId_ {};
        // The type of the restore job.
        shared_ptr<string> restoreType_ {};
        // The hash value of the backup snapshot.
        shared_ptr<string> snapshotHash_ {};
        // The ID of the snapshot used for restoration.
        shared_ptr<string> snapshotId_ {};
        shared_ptr<string> sourceInstanceId_ {};
        // The type of the data source. Valid values:
        // 
        // *   **ECS_FILE**: ECS files
        // *   **OSS**: Object Storage Service (OSS) buckets
        // *   **NAS**: Apsara File Storage NAS (NAS) file systems
        // *   **OTS_TABLE**: Tablestore instances
        // *   **UDM_ECS**: ECS instances
        shared_ptr<string> sourceType_ {};
        // The average speed at which data is backed up. Unit: KB/s.
        shared_ptr<int64_t> speed_ {};
        // The time when the restore job started. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> startTime_ {};
        // The status of the restore job. Valid values:
        // 
        // *   **COMPLETE**: The job is completed.
        // *   **PARTIAL_COMPLETE**: The job is partially completed.
        // *   **FAILED**: The job failed.
        shared_ptr<string> status_ {};
        // The storage class of the backup data. Valid values:
        // 
        // *   **STANDARD**
        // *   **ARCHIVE**
        shared_ptr<string> storageClass_ {};
        // The name of the destination OSS bucket. This parameter is returned only for OSS buckets.
        shared_ptr<string> targetBucket_ {};
        // The ID of the destination client.
        shared_ptr<string> targetClientId_ {};
        // The time when the file system was created. This parameter is returned only for NAS file systems.
        shared_ptr<int64_t> targetCreateTime_ {};
        // The ID of the destination data source.
        shared_ptr<string> targetDataSourceId_ {};
        // The ID of the destination NAS file system. This parameter is returned only for NAS file systems.
        shared_ptr<string> targetFileSystemId_ {};
        // The ID of the destination instance for the restore job.
        shared_ptr<string> targetInstanceId_ {};
        // The name of the destination Tablestore instance.
        shared_ptr<string> targetInstanceName_ {};
        // The destination file path of the restore job.
        shared_ptr<string> targetPath_ {};
        // The prefix of the objects that are restored. This parameter is returned only for OSS buckets.
        shared_ptr<string> targetPrefix_ {};
        // The name of the destination table in the Tablestore instance.
        shared_ptr<string> targetTableName_ {};
        // The time when the Tablestore instance was backed up. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> targetTime_ {};
        // The details about Elastic Compute Service (ECS) instance backup.
        shared_ptr<string> udmDetail_ {};
        // The time when the restore job was updated. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> updatedTime_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->restoreJob_ == nullptr; };
      // restoreJob Field Functions 
      bool hasRestoreJob() const { return this->restoreJob_ != nullptr;};
      void deleteRestoreJob() { this->restoreJob_ = nullptr;};
      inline const vector<RestoreJobs::RestoreJob> & getRestoreJob() const { DARABONBA_PTR_GET_CONST(restoreJob_, vector<RestoreJobs::RestoreJob>) };
      inline vector<RestoreJobs::RestoreJob> getRestoreJob() { DARABONBA_PTR_GET(restoreJob_, vector<RestoreJobs::RestoreJob>) };
      inline RestoreJobs& setRestoreJob(const vector<RestoreJobs::RestoreJob> & restoreJob) { DARABONBA_PTR_SET_VALUE(restoreJob_, restoreJob) };
      inline RestoreJobs& setRestoreJob(vector<RestoreJobs::RestoreJob> && restoreJob) { DARABONBA_PTR_SET_RVALUE(restoreJob_, restoreJob) };


    protected:
      shared_ptr<vector<RestoreJobs::RestoreJob>> restoreJob_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->restoreJobs_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeRestoreJobs2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeRestoreJobs2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeRestoreJobs2ResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeRestoreJobs2ResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRestoreJobs2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreJobs Field Functions 
    bool hasRestoreJobs() const { return this->restoreJobs_ != nullptr;};
    void deleteRestoreJobs() { this->restoreJobs_ = nullptr;};
    inline const DescribeRestoreJobs2ResponseBody::RestoreJobs & getRestoreJobs() const { DARABONBA_PTR_GET_CONST(restoreJobs_, DescribeRestoreJobs2ResponseBody::RestoreJobs) };
    inline DescribeRestoreJobs2ResponseBody::RestoreJobs getRestoreJobs() { DARABONBA_PTR_GET(restoreJobs_, DescribeRestoreJobs2ResponseBody::RestoreJobs) };
    inline DescribeRestoreJobs2ResponseBody& setRestoreJobs(const DescribeRestoreJobs2ResponseBody::RestoreJobs & restoreJobs) { DARABONBA_PTR_SET_VALUE(restoreJobs_, restoreJobs) };
    inline DescribeRestoreJobs2ResponseBody& setRestoreJobs(DescribeRestoreJobs2ResponseBody::RestoreJobs && restoreJobs) { DARABONBA_PTR_SET_RVALUE(restoreJobs_, restoreJobs) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeRestoreJobs2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeRestoreJobs2ResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The response status code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The response message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried restore jobs.
    shared_ptr<DescribeRestoreJobs2ResponseBody::RestoreJobs> restoreJobs_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
