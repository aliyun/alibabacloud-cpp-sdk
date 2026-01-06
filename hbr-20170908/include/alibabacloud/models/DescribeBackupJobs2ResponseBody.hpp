// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPJOBS2RESPONSEBODY_HPP_
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
  class DescribeBackupJobs2ResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupJobs2ResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobs, backupJobs_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupJobs2ResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobs, backupJobs_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBackupJobs2ResponseBody() = default ;
    DescribeBackupJobs2ResponseBody(const DescribeBackupJobs2ResponseBody &) = default ;
    DescribeBackupJobs2ResponseBody(DescribeBackupJobs2ResponseBody &&) = default ;
    DescribeBackupJobs2ResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupJobs2ResponseBody() = default ;
    DescribeBackupJobs2ResponseBody& operator=(const DescribeBackupJobs2ResponseBody &) = default ;
    DescribeBackupJobs2ResponseBody& operator=(DescribeBackupJobs2ResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupJobs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupJobs& obj) { 
        DARABONBA_PTR_TO_JSON(BackupJob, backupJob_);
      };
      friend void from_json(const Darabonba::Json& j, BackupJobs& obj) { 
        DARABONBA_PTR_FROM_JSON(BackupJob, backupJob_);
      };
      BackupJobs() = default ;
      BackupJobs(const BackupJobs &) = default ;
      BackupJobs(BackupJobs &&) = default ;
      BackupJobs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupJobs() = default ;
      BackupJobs& operator=(const BackupJobs &) = default ;
      BackupJobs& operator=(BackupJobs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BackupJob : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BackupJob& obj) { 
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
        friend void from_json(const Darabonba::Json& j, BackupJob& obj) { 
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
        BackupJob() = default ;
        BackupJob(const BackupJob &) = default ;
        BackupJob(BackupJob &&) = default ;
        BackupJob(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BackupJob() = default ;
        BackupJob& operator=(const BackupJob &) = default ;
        BackupJob& operator=(BackupJob &&) = default ;
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
          // List of failed files
          shared_ptr<string> failedFiles_ {};
          // Report generation status.
          shared_ptr<string> reportTaskStatus_ {};
          // List of skipped files
          shared_ptr<string> skippedFiles_ {};
          // List of successful files.
          shared_ptr<string> successFiles_ {};
          // List of all files. (This field is not returned for data synchronization)
          shared_ptr<string> totalFiles_ {};
        };

        class Paths : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Paths& obj) { 
            DARABONBA_PTR_TO_JSON(Path, path_);
          };
          friend void from_json(const Darabonba::Json& j, Paths& obj) { 
            DARABONBA_PTR_FROM_JSON(Path, path_);
          };
          Paths() = default ;
          Paths(const Paths &) = default ;
          Paths(Paths &&) = default ;
          Paths(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Paths() = default ;
          Paths& operator=(const Paths &) = default ;
          Paths& operator=(Paths &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->path_ == nullptr; };
          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
          inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
          inline Paths& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
          inline Paths& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


        protected:
          shared_ptr<vector<string>> path_ {};
        };

        class OtsDetail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OtsDetail& obj) { 
            DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
          };
          friend void from_json(const Darabonba::Json& j, OtsDetail& obj) { 
            DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
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
          class TableNames : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TableNames& obj) { 
              DARABONBA_PTR_TO_JSON(TableName, tableName_);
            };
            friend void from_json(const Darabonba::Json& j, TableNames& obj) { 
              DARABONBA_PTR_FROM_JSON(TableName, tableName_);
            };
            TableNames() = default ;
            TableNames(const TableNames &) = default ;
            TableNames(TableNames &&) = default ;
            TableNames(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TableNames() = default ;
            TableNames& operator=(const TableNames &) = default ;
            TableNames& operator=(TableNames &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tableName_ == nullptr; };
            // tableName Field Functions 
            bool hasTableName() const { return this->tableName_ != nullptr;};
            void deleteTableName() { this->tableName_ = nullptr;};
            inline const vector<string> & getTableName() const { DARABONBA_PTR_GET_CONST(tableName_, vector<string>) };
            inline vector<string> getTableName() { DARABONBA_PTR_GET(tableName_, vector<string>) };
            inline TableNames& setTableName(const vector<string> & tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };
            inline TableNames& setTableName(vector<string> && tableName) { DARABONBA_PTR_SET_RVALUE(tableName_, tableName) };


          protected:
            shared_ptr<vector<string>> tableName_ {};
          };

          virtual bool empty() const override { return this->tableNames_ == nullptr; };
          // tableNames Field Functions 
          bool hasTableNames() const { return this->tableNames_ != nullptr;};
          void deleteTableNames() { this->tableNames_ = nullptr;};
          inline const OtsDetail::TableNames & getTableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, OtsDetail::TableNames) };
          inline OtsDetail::TableNames getTableNames() { DARABONBA_PTR_GET(tableNames_, OtsDetail::TableNames) };
          inline OtsDetail& setTableNames(const OtsDetail::TableNames & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
          inline OtsDetail& setTableNames(OtsDetail::TableNames && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


        protected:
          // The names of the destination tables in the Tablestore instance.
          shared_ptr<OtsDetail::TableNames> tableNames_ {};
        };

        class Detail : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Detail& obj) { 
            DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotErrorMessage, destinationNativeSnapshotErrorMessage_);
            DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotId, destinationNativeSnapshotId_);
            DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotProgress, destinationNativeSnapshotProgress_);
            DARABONBA_PTR_TO_JSON(DestinationNativeSnapshotStatus, destinationNativeSnapshotStatus_);
            DARABONBA_PTR_TO_JSON(DestinationRetention, destinationRetention_);
            DARABONBA_PTR_TO_JSON(DestinationSnapshotId, destinationSnapshotId_);
            DARABONBA_PTR_TO_JSON(DiskNativeSnapshotIdList, diskNativeSnapshotIdList_);
            DARABONBA_PTR_TO_JSON(DoCopy, doCopy_);
            DARABONBA_ANY_TO_JSON(InstanceInfos, instanceInfos_);
            DARABONBA_PTR_TO_JSON(NativeSnapshotId, nativeSnapshotId_);
          };
          friend void from_json(const Darabonba::Json& j, Detail& obj) { 
            DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotErrorMessage, destinationNativeSnapshotErrorMessage_);
            DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotId, destinationNativeSnapshotId_);
            DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotProgress, destinationNativeSnapshotProgress_);
            DARABONBA_PTR_FROM_JSON(DestinationNativeSnapshotStatus, destinationNativeSnapshotStatus_);
            DARABONBA_PTR_FROM_JSON(DestinationRetention, destinationRetention_);
            DARABONBA_PTR_FROM_JSON(DestinationSnapshotId, destinationSnapshotId_);
            DARABONBA_PTR_FROM_JSON(DiskNativeSnapshotIdList, diskNativeSnapshotIdList_);
            DARABONBA_PTR_FROM_JSON(DoCopy, doCopy_);
            DARABONBA_ANY_FROM_JSON(InstanceInfos, instanceInfos_);
            DARABONBA_PTR_FROM_JSON(NativeSnapshotId, nativeSnapshotId_);
          };
          Detail() = default ;
          Detail(const Detail &) = default ;
          Detail(Detail &&) = default ;
          Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Detail() = default ;
          Detail& operator=(const Detail &) = default ;
          Detail& operator=(Detail &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DiskNativeSnapshotIdList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DiskNativeSnapshotIdList& obj) { 
              DARABONBA_PTR_TO_JSON(DiskNativeSnapshotId, diskNativeSnapshotId_);
            };
            friend void from_json(const Darabonba::Json& j, DiskNativeSnapshotIdList& obj) { 
              DARABONBA_PTR_FROM_JSON(DiskNativeSnapshotId, diskNativeSnapshotId_);
            };
            DiskNativeSnapshotIdList() = default ;
            DiskNativeSnapshotIdList(const DiskNativeSnapshotIdList &) = default ;
            DiskNativeSnapshotIdList(DiskNativeSnapshotIdList &&) = default ;
            DiskNativeSnapshotIdList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DiskNativeSnapshotIdList() = default ;
            DiskNativeSnapshotIdList& operator=(const DiskNativeSnapshotIdList &) = default ;
            DiskNativeSnapshotIdList& operator=(DiskNativeSnapshotIdList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->diskNativeSnapshotId_ == nullptr; };
            // diskNativeSnapshotId Field Functions 
            bool hasDiskNativeSnapshotId() const { return this->diskNativeSnapshotId_ != nullptr;};
            void deleteDiskNativeSnapshotId() { this->diskNativeSnapshotId_ = nullptr;};
            inline const vector<string> & getDiskNativeSnapshotId() const { DARABONBA_PTR_GET_CONST(diskNativeSnapshotId_, vector<string>) };
            inline vector<string> getDiskNativeSnapshotId() { DARABONBA_PTR_GET(diskNativeSnapshotId_, vector<string>) };
            inline DiskNativeSnapshotIdList& setDiskNativeSnapshotId(const vector<string> & diskNativeSnapshotId) { DARABONBA_PTR_SET_VALUE(diskNativeSnapshotId_, diskNativeSnapshotId) };
            inline DiskNativeSnapshotIdList& setDiskNativeSnapshotId(vector<string> && diskNativeSnapshotId) { DARABONBA_PTR_SET_RVALUE(diskNativeSnapshotId_, diskNativeSnapshotId) };


          protected:
            shared_ptr<vector<string>> diskNativeSnapshotId_ {};
          };

          virtual bool empty() const override { return this->destinationNativeSnapshotErrorMessage_ == nullptr
        && this->destinationNativeSnapshotId_ == nullptr && this->destinationNativeSnapshotProgress_ == nullptr && this->destinationNativeSnapshotStatus_ == nullptr && this->destinationRetention_ == nullptr && this->destinationSnapshotId_ == nullptr
        && this->diskNativeSnapshotIdList_ == nullptr && this->doCopy_ == nullptr && this->instanceInfos_ == nullptr && this->nativeSnapshotId_ == nullptr; };
          // destinationNativeSnapshotErrorMessage Field Functions 
          bool hasDestinationNativeSnapshotErrorMessage() const { return this->destinationNativeSnapshotErrorMessage_ != nullptr;};
          void deleteDestinationNativeSnapshotErrorMessage() { this->destinationNativeSnapshotErrorMessage_ = nullptr;};
          inline string getDestinationNativeSnapshotErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotErrorMessage_, "") };
          inline Detail& setDestinationNativeSnapshotErrorMessage(string destinationNativeSnapshotErrorMessage) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotErrorMessage_, destinationNativeSnapshotErrorMessage) };


          // destinationNativeSnapshotId Field Functions 
          bool hasDestinationNativeSnapshotId() const { return this->destinationNativeSnapshotId_ != nullptr;};
          void deleteDestinationNativeSnapshotId() { this->destinationNativeSnapshotId_ = nullptr;};
          inline string getDestinationNativeSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotId_, "") };
          inline Detail& setDestinationNativeSnapshotId(string destinationNativeSnapshotId) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotId_, destinationNativeSnapshotId) };


          // destinationNativeSnapshotProgress Field Functions 
          bool hasDestinationNativeSnapshotProgress() const { return this->destinationNativeSnapshotProgress_ != nullptr;};
          void deleteDestinationNativeSnapshotProgress() { this->destinationNativeSnapshotProgress_ = nullptr;};
          inline int32_t getDestinationNativeSnapshotProgress() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotProgress_, 0) };
          inline Detail& setDestinationNativeSnapshotProgress(int32_t destinationNativeSnapshotProgress) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotProgress_, destinationNativeSnapshotProgress) };


          // destinationNativeSnapshotStatus Field Functions 
          bool hasDestinationNativeSnapshotStatus() const { return this->destinationNativeSnapshotStatus_ != nullptr;};
          void deleteDestinationNativeSnapshotStatus() { this->destinationNativeSnapshotStatus_ = nullptr;};
          inline string getDestinationNativeSnapshotStatus() const { DARABONBA_PTR_GET_DEFAULT(destinationNativeSnapshotStatus_, "") };
          inline Detail& setDestinationNativeSnapshotStatus(string destinationNativeSnapshotStatus) { DARABONBA_PTR_SET_VALUE(destinationNativeSnapshotStatus_, destinationNativeSnapshotStatus) };


          // destinationRetention Field Functions 
          bool hasDestinationRetention() const { return this->destinationRetention_ != nullptr;};
          void deleteDestinationRetention() { this->destinationRetention_ = nullptr;};
          inline int64_t getDestinationRetention() const { DARABONBA_PTR_GET_DEFAULT(destinationRetention_, 0L) };
          inline Detail& setDestinationRetention(int64_t destinationRetention) { DARABONBA_PTR_SET_VALUE(destinationRetention_, destinationRetention) };


          // destinationSnapshotId Field Functions 
          bool hasDestinationSnapshotId() const { return this->destinationSnapshotId_ != nullptr;};
          void deleteDestinationSnapshotId() { this->destinationSnapshotId_ = nullptr;};
          inline string getDestinationSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(destinationSnapshotId_, "") };
          inline Detail& setDestinationSnapshotId(string destinationSnapshotId) { DARABONBA_PTR_SET_VALUE(destinationSnapshotId_, destinationSnapshotId) };


          // diskNativeSnapshotIdList Field Functions 
          bool hasDiskNativeSnapshotIdList() const { return this->diskNativeSnapshotIdList_ != nullptr;};
          void deleteDiskNativeSnapshotIdList() { this->diskNativeSnapshotIdList_ = nullptr;};
          inline const Detail::DiskNativeSnapshotIdList & getDiskNativeSnapshotIdList() const { DARABONBA_PTR_GET_CONST(diskNativeSnapshotIdList_, Detail::DiskNativeSnapshotIdList) };
          inline Detail::DiskNativeSnapshotIdList getDiskNativeSnapshotIdList() { DARABONBA_PTR_GET(diskNativeSnapshotIdList_, Detail::DiskNativeSnapshotIdList) };
          inline Detail& setDiskNativeSnapshotIdList(const Detail::DiskNativeSnapshotIdList & diskNativeSnapshotIdList) { DARABONBA_PTR_SET_VALUE(diskNativeSnapshotIdList_, diskNativeSnapshotIdList) };
          inline Detail& setDiskNativeSnapshotIdList(Detail::DiskNativeSnapshotIdList && diskNativeSnapshotIdList) { DARABONBA_PTR_SET_RVALUE(diskNativeSnapshotIdList_, diskNativeSnapshotIdList) };


          // doCopy Field Functions 
          bool hasDoCopy() const { return this->doCopy_ != nullptr;};
          void deleteDoCopy() { this->doCopy_ = nullptr;};
          inline bool getDoCopy() const { DARABONBA_PTR_GET_DEFAULT(doCopy_, false) };
          inline Detail& setDoCopy(bool doCopy) { DARABONBA_PTR_SET_VALUE(doCopy_, doCopy) };


          // instanceInfos Field Functions 
          bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
          void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
          inline           const Darabonba::Json & getInstanceInfos() const { DARABONBA_GET(instanceInfos_) };
          Darabonba::Json & getInstanceInfos() { DARABONBA_GET(instanceInfos_) };
          inline Detail& setInstanceInfos(const Darabonba::Json & instanceInfos) { DARABONBA_SET_VALUE(instanceInfos_, instanceInfos) };
          inline Detail& setInstanceInfos(Darabonba::Json && instanceInfos) { DARABONBA_SET_RVALUE(instanceInfos_, instanceInfos) };


          // nativeSnapshotId Field Functions 
          bool hasNativeSnapshotId() const { return this->nativeSnapshotId_ != nullptr;};
          void deleteNativeSnapshotId() { this->nativeSnapshotId_ = nullptr;};
          inline string getNativeSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(nativeSnapshotId_, "") };
          inline Detail& setNativeSnapshotId(string nativeSnapshotId) { DARABONBA_PTR_SET_VALUE(nativeSnapshotId_, nativeSnapshotId) };


        protected:
          // The information about the remote replication failure.
          shared_ptr<string> destinationNativeSnapshotErrorMessage_ {};
          // The ID of the remote replication snapshot.
          shared_ptr<string> destinationNativeSnapshotId_ {};
          // The progress of the remote replication.
          shared_ptr<int32_t> destinationNativeSnapshotProgress_ {};
          // The state of the remote replication.
          shared_ptr<string> destinationNativeSnapshotStatus_ {};
          // The retention period of the remote replication backup.
          shared_ptr<int64_t> destinationRetention_ {};
          // The ID of the remote replication backup.
          shared_ptr<string> destinationSnapshotId_ {};
          // The mapping between snapshots and disks.
          shared_ptr<Detail::DiskNativeSnapshotIdList> diskNativeSnapshotIdList_ {};
          // Indicates whether remote replication is enabled.
          shared_ptr<bool> doCopy_ {};
          // The ecs instance infos.
          Darabonba::Json instanceInfos_ {};
          // The ID of the backup snapshot.
          shared_ptr<string> nativeSnapshotId_ {};
        };

        virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->actualFiles_ == nullptr && this->actualItems_ == nullptr && this->backupType_ == nullptr && this->bucket_ == nullptr && this->bytesDone_ == nullptr
        && this->bytesTotal_ == nullptr && this->changeListPath_ == nullptr && this->clientId_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr
        && this->createdTime_ == nullptr && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->destDataSourceDetail_ == nullptr
        && this->destDataSourceId_ == nullptr && this->destSourceType_ == nullptr && this->detail_ == nullptr && this->errorMessage_ == nullptr && this->exclude_ == nullptr
        && this->fileSystemId_ == nullptr && this->filesDone_ == nullptr && this->filesTotal_ == nullptr && this->identifier_ == nullptr && this->include_ == nullptr
        && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->itemsDone_ == nullptr && this->itemsTotal_ == nullptr && this->jobId_ == nullptr
        && this->jobName_ == nullptr && this->options_ == nullptr && this->otsDetail_ == nullptr && this->paths_ == nullptr && this->planId_ == nullptr
        && this->prefix_ == nullptr && this->progress_ == nullptr && this->report_ == nullptr && this->sourceType_ == nullptr && this->speed_ == nullptr
        && this->speedLimit_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->tableName_ == nullptr && this->updatedTime_ == nullptr
        && this->vaultId_ == nullptr; };
        // actualBytes Field Functions 
        bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
        void deleteActualBytes() { this->actualBytes_ = nullptr;};
        inline int64_t getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
        inline BackupJob& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


        // actualFiles Field Functions 
        bool hasActualFiles() const { return this->actualFiles_ != nullptr;};
        void deleteActualFiles() { this->actualFiles_ = nullptr;};
        inline int64_t getActualFiles() const { DARABONBA_PTR_GET_DEFAULT(actualFiles_, 0L) };
        inline BackupJob& setActualFiles(int64_t actualFiles) { DARABONBA_PTR_SET_VALUE(actualFiles_, actualFiles) };


        // actualItems Field Functions 
        bool hasActualItems() const { return this->actualItems_ != nullptr;};
        void deleteActualItems() { this->actualItems_ = nullptr;};
        inline int64_t getActualItems() const { DARABONBA_PTR_GET_DEFAULT(actualItems_, 0L) };
        inline BackupJob& setActualItems(int64_t actualItems) { DARABONBA_PTR_SET_VALUE(actualItems_, actualItems) };


        // backupType Field Functions 
        bool hasBackupType() const { return this->backupType_ != nullptr;};
        void deleteBackupType() { this->backupType_ = nullptr;};
        inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
        inline BackupJob& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline BackupJob& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // bytesDone Field Functions 
        bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
        void deleteBytesDone() { this->bytesDone_ = nullptr;};
        inline int64_t getBytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
        inline BackupJob& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


        // bytesTotal Field Functions 
        bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
        void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
        inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
        inline BackupJob& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


        // changeListPath Field Functions 
        bool hasChangeListPath() const { return this->changeListPath_ != nullptr;};
        void deleteChangeListPath() { this->changeListPath_ = nullptr;};
        inline string getChangeListPath() const { DARABONBA_PTR_GET_DEFAULT(changeListPath_, "") };
        inline BackupJob& setChangeListPath(string changeListPath) { DARABONBA_PTR_SET_VALUE(changeListPath_, changeListPath) };


        // clientId Field Functions 
        bool hasClientId() const { return this->clientId_ != nullptr;};
        void deleteClientId() { this->clientId_ = nullptr;};
        inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
        inline BackupJob& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


        // completeTime Field Functions 
        bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
        void deleteCompleteTime() { this->completeTime_ = nullptr;};
        inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
        inline BackupJob& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline BackupJob& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline BackupJob& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // crossAccountRoleName Field Functions 
        bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
        void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
        inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
        inline BackupJob& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


        // crossAccountType Field Functions 
        bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
        void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
        inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
        inline BackupJob& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


        // crossAccountUserId Field Functions 
        bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
        void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
        inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
        inline BackupJob& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


        // destDataSourceDetail Field Functions 
        bool hasDestDataSourceDetail() const { return this->destDataSourceDetail_ != nullptr;};
        void deleteDestDataSourceDetail() { this->destDataSourceDetail_ = nullptr;};
        inline string getDestDataSourceDetail() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceDetail_, "") };
        inline BackupJob& setDestDataSourceDetail(string destDataSourceDetail) { DARABONBA_PTR_SET_VALUE(destDataSourceDetail_, destDataSourceDetail) };


        // destDataSourceId Field Functions 
        bool hasDestDataSourceId() const { return this->destDataSourceId_ != nullptr;};
        void deleteDestDataSourceId() { this->destDataSourceId_ = nullptr;};
        inline string getDestDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(destDataSourceId_, "") };
        inline BackupJob& setDestDataSourceId(string destDataSourceId) { DARABONBA_PTR_SET_VALUE(destDataSourceId_, destDataSourceId) };


        // destSourceType Field Functions 
        bool hasDestSourceType() const { return this->destSourceType_ != nullptr;};
        void deleteDestSourceType() { this->destSourceType_ = nullptr;};
        inline string getDestSourceType() const { DARABONBA_PTR_GET_DEFAULT(destSourceType_, "") };
        inline BackupJob& setDestSourceType(string destSourceType) { DARABONBA_PTR_SET_VALUE(destSourceType_, destSourceType) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline const BackupJob::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, BackupJob::Detail) };
        inline BackupJob::Detail getDetail() { DARABONBA_PTR_GET(detail_, BackupJob::Detail) };
        inline BackupJob& setDetail(const BackupJob::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
        inline BackupJob& setDetail(BackupJob::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline BackupJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // exclude Field Functions 
        bool hasExclude() const { return this->exclude_ != nullptr;};
        void deleteExclude() { this->exclude_ = nullptr;};
        inline string getExclude() const { DARABONBA_PTR_GET_DEFAULT(exclude_, "") };
        inline BackupJob& setExclude(string exclude) { DARABONBA_PTR_SET_VALUE(exclude_, exclude) };


        // fileSystemId Field Functions 
        bool hasFileSystemId() const { return this->fileSystemId_ != nullptr;};
        void deleteFileSystemId() { this->fileSystemId_ = nullptr;};
        inline string getFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(fileSystemId_, "") };
        inline BackupJob& setFileSystemId(string fileSystemId) { DARABONBA_PTR_SET_VALUE(fileSystemId_, fileSystemId) };


        // filesDone Field Functions 
        bool hasFilesDone() const { return this->filesDone_ != nullptr;};
        void deleteFilesDone() { this->filesDone_ = nullptr;};
        inline int64_t getFilesDone() const { DARABONBA_PTR_GET_DEFAULT(filesDone_, 0L) };
        inline BackupJob& setFilesDone(int64_t filesDone) { DARABONBA_PTR_SET_VALUE(filesDone_, filesDone) };


        // filesTotal Field Functions 
        bool hasFilesTotal() const { return this->filesTotal_ != nullptr;};
        void deleteFilesTotal() { this->filesTotal_ = nullptr;};
        inline int64_t getFilesTotal() const { DARABONBA_PTR_GET_DEFAULT(filesTotal_, 0L) };
        inline BackupJob& setFilesTotal(int64_t filesTotal) { DARABONBA_PTR_SET_VALUE(filesTotal_, filesTotal) };


        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline BackupJob& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // include Field Functions 
        bool hasInclude() const { return this->include_ != nullptr;};
        void deleteInclude() { this->include_ = nullptr;};
        inline string getInclude() const { DARABONBA_PTR_GET_DEFAULT(include_, "") };
        inline BackupJob& setInclude(string include) { DARABONBA_PTR_SET_VALUE(include_, include) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline BackupJob& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline BackupJob& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // itemsDone Field Functions 
        bool hasItemsDone() const { return this->itemsDone_ != nullptr;};
        void deleteItemsDone() { this->itemsDone_ = nullptr;};
        inline int64_t getItemsDone() const { DARABONBA_PTR_GET_DEFAULT(itemsDone_, 0L) };
        inline BackupJob& setItemsDone(int64_t itemsDone) { DARABONBA_PTR_SET_VALUE(itemsDone_, itemsDone) };


        // itemsTotal Field Functions 
        bool hasItemsTotal() const { return this->itemsTotal_ != nullptr;};
        void deleteItemsTotal() { this->itemsTotal_ = nullptr;};
        inline int64_t getItemsTotal() const { DARABONBA_PTR_GET_DEFAULT(itemsTotal_, 0L) };
        inline BackupJob& setItemsTotal(int64_t itemsTotal) { DARABONBA_PTR_SET_VALUE(itemsTotal_, itemsTotal) };


        // jobId Field Functions 
        bool hasJobId() const { return this->jobId_ != nullptr;};
        void deleteJobId() { this->jobId_ = nullptr;};
        inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
        inline BackupJob& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


        // jobName Field Functions 
        bool hasJobName() const { return this->jobName_ != nullptr;};
        void deleteJobName() { this->jobName_ = nullptr;};
        inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
        inline BackupJob& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


        // options Field Functions 
        bool hasOptions() const { return this->options_ != nullptr;};
        void deleteOptions() { this->options_ = nullptr;};
        inline string getOptions() const { DARABONBA_PTR_GET_DEFAULT(options_, "") };
        inline BackupJob& setOptions(string options) { DARABONBA_PTR_SET_VALUE(options_, options) };


        // otsDetail Field Functions 
        bool hasOtsDetail() const { return this->otsDetail_ != nullptr;};
        void deleteOtsDetail() { this->otsDetail_ = nullptr;};
        inline const BackupJob::OtsDetail & getOtsDetail() const { DARABONBA_PTR_GET_CONST(otsDetail_, BackupJob::OtsDetail) };
        inline BackupJob::OtsDetail getOtsDetail() { DARABONBA_PTR_GET(otsDetail_, BackupJob::OtsDetail) };
        inline BackupJob& setOtsDetail(const BackupJob::OtsDetail & otsDetail) { DARABONBA_PTR_SET_VALUE(otsDetail_, otsDetail) };
        inline BackupJob& setOtsDetail(BackupJob::OtsDetail && otsDetail) { DARABONBA_PTR_SET_RVALUE(otsDetail_, otsDetail) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const BackupJob::Paths & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, BackupJob::Paths) };
        inline BackupJob::Paths getPaths() { DARABONBA_PTR_GET(paths_, BackupJob::Paths) };
        inline BackupJob& setPaths(const BackupJob::Paths & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline BackupJob& setPaths(BackupJob::Paths && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // planId Field Functions 
        bool hasPlanId() const { return this->planId_ != nullptr;};
        void deletePlanId() { this->planId_ = nullptr;};
        inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
        inline BackupJob& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


        // prefix Field Functions 
        bool hasPrefix() const { return this->prefix_ != nullptr;};
        void deletePrefix() { this->prefix_ = nullptr;};
        inline string getPrefix() const { DARABONBA_PTR_GET_DEFAULT(prefix_, "") };
        inline BackupJob& setPrefix(string prefix) { DARABONBA_PTR_SET_VALUE(prefix_, prefix) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline BackupJob& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // report Field Functions 
        bool hasReport() const { return this->report_ != nullptr;};
        void deleteReport() { this->report_ = nullptr;};
        inline const BackupJob::Report & getReport() const { DARABONBA_PTR_GET_CONST(report_, BackupJob::Report) };
        inline BackupJob::Report getReport() { DARABONBA_PTR_GET(report_, BackupJob::Report) };
        inline BackupJob& setReport(const BackupJob::Report & report) { DARABONBA_PTR_SET_VALUE(report_, report) };
        inline BackupJob& setReport(BackupJob::Report && report) { DARABONBA_PTR_SET_RVALUE(report_, report) };


        // sourceType Field Functions 
        bool hasSourceType() const { return this->sourceType_ != nullptr;};
        void deleteSourceType() { this->sourceType_ = nullptr;};
        inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
        inline BackupJob& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


        // speed Field Functions 
        bool hasSpeed() const { return this->speed_ != nullptr;};
        void deleteSpeed() { this->speed_ = nullptr;};
        inline int64_t getSpeed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
        inline BackupJob& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


        // speedLimit Field Functions 
        bool hasSpeedLimit() const { return this->speedLimit_ != nullptr;};
        void deleteSpeedLimit() { this->speedLimit_ = nullptr;};
        inline string getSpeedLimit() const { DARABONBA_PTR_GET_DEFAULT(speedLimit_, "") };
        inline BackupJob& setSpeedLimit(string speedLimit) { DARABONBA_PTR_SET_VALUE(speedLimit_, speedLimit) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline BackupJob& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BackupJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline BackupJob& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline BackupJob& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


        // vaultId Field Functions 
        bool hasVaultId() const { return this->vaultId_ != nullptr;};
        void deleteVaultId() { this->vaultId_ = nullptr;};
        inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
        inline BackupJob& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


      protected:
        // The actual amount of data that is backed up after duplicates are removed. Unit: bytes.
        shared_ptr<int64_t> actualBytes_ {};
        // The number of files that are actually processed.
        shared_ptr<int64_t> actualFiles_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the actual number of objects that are backed up by the backup job.
        shared_ptr<int64_t> actualItems_ {};
        // The backup type. Valid value: **COMPLETE**, which indicates full backup.
        shared_ptr<string> backupType_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the name of the OSS bucket that is backed up.
        shared_ptr<string> bucket_ {};
        // The actual amount of data that is generated by incremental backups. Unit: bytes.
        shared_ptr<int64_t> bytesDone_ {};
        // The total amount of data that is backed up from the data source. Unit: bytes.
        shared_ptr<int64_t> bytesTotal_ {};
        // The data source details at the destination. Thisparameter is returned only for data synchronization.
        shared_ptr<string> changeListPath_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the ID of the backup client.
        shared_ptr<string> clientId_ {};
        // The time when the backup job was completed. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> completeTime_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the time when the file system was created. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createTime_ {};
        // The time when the backup job was created. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createdTime_ {};
        // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountRoleName_ {};
        // Specifies whether data is backed up within the same Alibaba Cloud account or across Alibaba Cloud accounts. Valid values:
        // 
        // *   SELF_ACCOUNT: Data is backed up within the same Alibaba Cloud account.
        // *   CROSS_ACCOUNT: Data is backed up across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountType_ {};
        // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<int64_t> crossAccountUserId_ {};
        // Destination data source details. (Required only for synchronization)
        shared_ptr<string> destDataSourceDetail_ {};
        // Destination data source ID. (Required only for synchronization)
        shared_ptr<string> destDataSourceId_ {};
        // Destination data source type. (Required only for synchronization)
        shared_ptr<string> destSourceType_ {};
        // The udm backup job detail.
        shared_ptr<BackupJob::Detail> detail_ {};
        // The error message that is returned for the backup job.
        shared_ptr<string> errorMessage_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the paths to the files that are excluded from the backup job. The value must be 1 to 255 characters in length.
        shared_ptr<string> exclude_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the ID of the NAS file system.
        shared_ptr<string> fileSystemId_ {};
        // The number of files that have been processed.
        shared_ptr<int64_t> filesDone_ {};
        // The total number of files to be processed.
        shared_ptr<int64_t> filesTotal_ {};
        // The identifier of the container cluster. For a Container Service for Kubernetes (ACK) cluster, specify the cluster ID.
        shared_ptr<string> identifier_ {};
        // The paths to the files that are included in the backup job.
        shared_ptr<string> include_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **NAS**. This parameter indicates the ID of the ECS instance.
        shared_ptr<string> instanceId_ {};
        // The name of the Tablestore instance.
        shared_ptr<string> instanceName_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the number of objects that are backed up.
        shared_ptr<int64_t> itemsDone_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the total number of objects in the data source.
        shared_ptr<int64_t> itemsTotal_ {};
        // The ID of the backup job.
        shared_ptr<string> jobId_ {};
        // The name of the backup job.
        shared_ptr<string> jobName_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates whether Windows VSS is used to define a backup path.
        // 
        // *   This parameter is available only for Windows ECS instances.
        // *   If data changes occur in the backup source, the source data must be the same as the data to be backed up before the system sets this parameter to `["UseVSS":true]`.
        // *   If you use VSS, you cannot back up data from multiple directories.
        shared_ptr<string> options_ {};
        // The details about the Tablestore instance.
        shared_ptr<BackupJob::OtsDetail> otsDetail_ {};
        // The backup paths.
        shared_ptr<BackupJob::Paths> paths_ {};
        // The ID of the backup plan.
        shared_ptr<string> planId_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **OSS**. This parameter indicates the prefix of objects that are backed up.
        shared_ptr<string> prefix_ {};
        // The backup progress. For example, 10000 indicates that the progress is 100%.
        shared_ptr<int32_t> progress_ {};
        // Task Report
        shared_ptr<BackupJob::Report> report_ {};
        // The type of the data source. Valid values:
        // 
        // *   **ECS_FILE**: ECS files
        // *   **OSS**: OSS buckets
        // *   **NAS**: NAS file systems
        shared_ptr<string> sourceType_ {};
        // The average speed at which data is backed up. Unit: KB/s.
        shared_ptr<int64_t> speed_ {};
        // This parameter is returned only if the **SourceType** parameter is set to **ECS_FILE**. This parameter indicates the throttling rules. Format: `{start}{end}{bandwidth}`. Multiple throttling rules are separated with vertical bars (`{start}|{end}|{bandwidth}`). A specified time range cannot overlap with another one.
        // 
        // *   **start**: the start hour
        // *   **end**: the end hour
        // *   **bandwidth**: the bandwidth. Unit: KB/s.
        shared_ptr<string> speedLimit_ {};
        // The time when the backup job started. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> startTime_ {};
        // The status of the backup job. Valid values:
        // 
        // *   **COMPLETE**: The backup job is completed.
        // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
        // *   **FAILED**: The restore job has failed.
        shared_ptr<string> status_ {};
        // The name of a destination table in the Tablestore instance.
        shared_ptr<string> tableName_ {};
        // The time when the backup job was updated. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> updatedTime_ {};
        // The ID of the backup vault.
        shared_ptr<string> vaultId_ {};
      };

      virtual bool empty() const override { return this->backupJob_ == nullptr; };
      // backupJob Field Functions 
      bool hasBackupJob() const { return this->backupJob_ != nullptr;};
      void deleteBackupJob() { this->backupJob_ = nullptr;};
      inline const vector<BackupJobs::BackupJob> & getBackupJob() const { DARABONBA_PTR_GET_CONST(backupJob_, vector<BackupJobs::BackupJob>) };
      inline vector<BackupJobs::BackupJob> getBackupJob() { DARABONBA_PTR_GET(backupJob_, vector<BackupJobs::BackupJob>) };
      inline BackupJobs& setBackupJob(const vector<BackupJobs::BackupJob> & backupJob) { DARABONBA_PTR_SET_VALUE(backupJob_, backupJob) };
      inline BackupJobs& setBackupJob(vector<BackupJobs::BackupJob> && backupJob) { DARABONBA_PTR_SET_RVALUE(backupJob_, backupJob) };


    protected:
      shared_ptr<vector<BackupJobs::BackupJob>> backupJob_ {};
    };

    virtual bool empty() const override { return this->backupJobs_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // backupJobs Field Functions 
    bool hasBackupJobs() const { return this->backupJobs_ != nullptr;};
    void deleteBackupJobs() { this->backupJobs_ = nullptr;};
    inline const DescribeBackupJobs2ResponseBody::BackupJobs & getBackupJobs() const { DARABONBA_PTR_GET_CONST(backupJobs_, DescribeBackupJobs2ResponseBody::BackupJobs) };
    inline DescribeBackupJobs2ResponseBody::BackupJobs getBackupJobs() { DARABONBA_PTR_GET(backupJobs_, DescribeBackupJobs2ResponseBody::BackupJobs) };
    inline DescribeBackupJobs2ResponseBody& setBackupJobs(const DescribeBackupJobs2ResponseBody::BackupJobs & backupJobs) { DARABONBA_PTR_SET_VALUE(backupJobs_, backupJobs) };
    inline DescribeBackupJobs2ResponseBody& setBackupJobs(DescribeBackupJobs2ResponseBody::BackupJobs && backupJobs) { DARABONBA_PTR_SET_RVALUE(backupJobs_, backupJobs) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeBackupJobs2ResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeBackupJobs2ResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBackupJobs2ResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBackupJobs2ResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBackupJobs2ResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeBackupJobs2ResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeBackupJobs2ResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The returned backup jobs that meet the specified conditions.
    shared_ptr<DescribeBackupJobs2ResponseBody::BackupJobs> backupJobs_ {};
    // The HTTP status code. The status code 200 indicates that the call is successful.
    shared_ptr<string> code_ {};
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number of the returned page. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful.
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    shared_ptr<bool> success_ {};
    // The total number of returned backup jobs that meet the specified conditions.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
