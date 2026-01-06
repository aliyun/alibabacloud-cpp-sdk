// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOTSTABLESNAPSHOTSRESPONSEBODY_HPP_
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
  class DescribeOtsTableSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOtsTableSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOtsTableSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeOtsTableSnapshotsResponseBody() = default ;
    DescribeOtsTableSnapshotsResponseBody(const DescribeOtsTableSnapshotsResponseBody &) = default ;
    DescribeOtsTableSnapshotsResponseBody(DescribeOtsTableSnapshotsResponseBody &&) = default ;
    DescribeOtsTableSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOtsTableSnapshotsResponseBody() = default ;
    DescribeOtsTableSnapshotsResponseBody& operator=(const DescribeOtsTableSnapshotsResponseBody &) = default ;
    DescribeOtsTableSnapshotsResponseBody& operator=(DescribeOtsTableSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
        DARABONBA_PTR_TO_JSON(BackupType, backupType_);
        DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
        DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(JobId, jobId_);
        DARABONBA_PTR_TO_JSON(ParentSnapshotHash, parentSnapshotHash_);
        DARABONBA_PTR_TO_JSON(RangeEnd, rangeEnd_);
        DARABONBA_PTR_TO_JSON(RangeStart, rangeStart_);
        DARABONBA_PTR_TO_JSON(Retention, retention_);
        DARABONBA_PTR_TO_JSON(SnapshotHash, snapshotHash_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
        DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
        DARABONBA_PTR_FROM_JSON(BackupType, backupType_);
        DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
        DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(JobId, jobId_);
        DARABONBA_PTR_FROM_JSON(ParentSnapshotHash, parentSnapshotHash_);
        DARABONBA_PTR_FROM_JSON(RangeEnd, rangeEnd_);
        DARABONBA_PTR_FROM_JSON(RangeStart, rangeStart_);
        DARABONBA_PTR_FROM_JSON(Retention, retention_);
        DARABONBA_PTR_FROM_JSON(SnapshotHash, snapshotHash_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
      };
      Snapshots() = default ;
      Snapshots(const Snapshots &) = default ;
      Snapshots(Snapshots &&) = default ;
      Snapshots(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Snapshots() = default ;
      Snapshots& operator=(const Snapshots &) = default ;
      Snapshots& operator=(Snapshots &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actualBytes_ == nullptr
        && this->backupType_ == nullptr && this->bytesTotal_ == nullptr && this->completeTime_ == nullptr && this->createTime_ == nullptr && this->createdTime_ == nullptr
        && this->instanceName_ == nullptr && this->jobId_ == nullptr && this->parentSnapshotHash_ == nullptr && this->rangeEnd_ == nullptr && this->rangeStart_ == nullptr
        && this->retention_ == nullptr && this->snapshotHash_ == nullptr && this->snapshotId_ == nullptr && this->sourceType_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr && this->tableName_ == nullptr && this->updatedTime_ == nullptr && this->vaultId_ == nullptr; };
      // actualBytes Field Functions 
      bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
      void deleteActualBytes() { this->actualBytes_ = nullptr;};
      inline string getActualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, "") };
      inline Snapshots& setActualBytes(string actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


      // backupType Field Functions 
      bool hasBackupType() const { return this->backupType_ != nullptr;};
      void deleteBackupType() { this->backupType_ = nullptr;};
      inline string getBackupType() const { DARABONBA_PTR_GET_DEFAULT(backupType_, "") };
      inline Snapshots& setBackupType(string backupType) { DARABONBA_PTR_SET_VALUE(backupType_, backupType) };


      // bytesTotal Field Functions 
      bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
      void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
      inline int64_t getBytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
      inline Snapshots& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


      // completeTime Field Functions 
      bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
      void deleteCompleteTime() { this->completeTime_ = nullptr;};
      inline int64_t getCompleteTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, 0L) };
      inline Snapshots& setCompleteTime(int64_t completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Snapshots& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createdTime Field Functions 
      bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
      void deleteCreatedTime() { this->createdTime_ = nullptr;};
      inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
      inline Snapshots& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline Snapshots& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // jobId Field Functions 
      bool hasJobId() const { return this->jobId_ != nullptr;};
      void deleteJobId() { this->jobId_ = nullptr;};
      inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
      inline Snapshots& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


      // parentSnapshotHash Field Functions 
      bool hasParentSnapshotHash() const { return this->parentSnapshotHash_ != nullptr;};
      void deleteParentSnapshotHash() { this->parentSnapshotHash_ = nullptr;};
      inline string getParentSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(parentSnapshotHash_, "") };
      inline Snapshots& setParentSnapshotHash(string parentSnapshotHash) { DARABONBA_PTR_SET_VALUE(parentSnapshotHash_, parentSnapshotHash) };


      // rangeEnd Field Functions 
      bool hasRangeEnd() const { return this->rangeEnd_ != nullptr;};
      void deleteRangeEnd() { this->rangeEnd_ = nullptr;};
      inline int64_t getRangeEnd() const { DARABONBA_PTR_GET_DEFAULT(rangeEnd_, 0L) };
      inline Snapshots& setRangeEnd(int64_t rangeEnd) { DARABONBA_PTR_SET_VALUE(rangeEnd_, rangeEnd) };


      // rangeStart Field Functions 
      bool hasRangeStart() const { return this->rangeStart_ != nullptr;};
      void deleteRangeStart() { this->rangeStart_ = nullptr;};
      inline int64_t getRangeStart() const { DARABONBA_PTR_GET_DEFAULT(rangeStart_, 0L) };
      inline Snapshots& setRangeStart(int64_t rangeStart) { DARABONBA_PTR_SET_VALUE(rangeStart_, rangeStart) };


      // retention Field Functions 
      bool hasRetention() const { return this->retention_ != nullptr;};
      void deleteRetention() { this->retention_ = nullptr;};
      inline int64_t getRetention() const { DARABONBA_PTR_GET_DEFAULT(retention_, 0L) };
      inline Snapshots& setRetention(int64_t retention) { DARABONBA_PTR_SET_VALUE(retention_, retention) };


      // snapshotHash Field Functions 
      bool hasSnapshotHash() const { return this->snapshotHash_ != nullptr;};
      void deleteSnapshotHash() { this->snapshotHash_ = nullptr;};
      inline string getSnapshotHash() const { DARABONBA_PTR_GET_DEFAULT(snapshotHash_, "") };
      inline Snapshots& setSnapshotHash(string snapshotHash) { DARABONBA_PTR_SET_VALUE(snapshotHash_, snapshotHash) };


      // snapshotId Field Functions 
      bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
      void deleteSnapshotId() { this->snapshotId_ = nullptr;};
      inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
      inline Snapshots& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline Snapshots& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Snapshots& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Snapshots& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline Snapshots& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      // updatedTime Field Functions 
      bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
      void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
      inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
      inline Snapshots& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      // vaultId Field Functions 
      bool hasVaultId() const { return this->vaultId_ != nullptr;};
      void deleteVaultId() { this->vaultId_ = nullptr;};
      inline string getVaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
      inline Snapshots& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


    protected:
      // The actual data amount of backup snapshots after duplicates are removed. Unit: bytes.
      shared_ptr<string> actualBytes_ {};
      // The backup type. Valid value: **COMPLETE**, which indicates full backup.
      shared_ptr<string> backupType_ {};
      // The total amount of data. Unit: bytes.
      shared_ptr<int64_t> bytesTotal_ {};
      // The time when the backup snapshot was completed. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> completeTime_ {};
      // The time when the Tablestore instance was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createTime_ {};
      // The time when the backup snapshot was created. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> createdTime_ {};
      // The name of the Tablestore instance.
      shared_ptr<string> instanceName_ {};
      // The ID of the backup job.
      shared_ptr<string> jobId_ {};
      // The hash value of the parent backup snapshot.
      shared_ptr<string> parentSnapshotHash_ {};
      // The time when the backup job ended. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> rangeEnd_ {};
      // The time when the backup job started. The value is a UNIX timestamp. Unit: milliseconds.
      shared_ptr<int64_t> rangeStart_ {};
      // The retention period of the backup snapshot. Unit: days.
      shared_ptr<int64_t> retention_ {};
      // The hash value of the backup snapshot.
      shared_ptr<string> snapshotHash_ {};
      // The ID of the backup snapshot.
      shared_ptr<string> snapshotId_ {};
      // The type of the data source. Valid values:
      // 
      // *   **ECS_FILE**: backup snapshots for Elastic Compute Service (ECS) files
      // *   **OSS**: backup snapshots for Object Storage Service (OSS) buckets
      // *   **NAS**: backup snapshots for Apsara File Storage NAS file systems
      // *   **OTS_TABLE**: backup snapshots for Tablestore instances
      shared_ptr<string> sourceType_ {};
      // The time when the backup snapshot started. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> startTime_ {};
      // The status of the backup job. Valid values:
      // 
      // *   **COMPLETE**: The backup job is completed.
      // *   **PARTIAL_COMPLETE**: The backup job is partially completed.
      // *   **FAILED**: The backup job has failed.
      shared_ptr<string> status_ {};
      // The name of the table in the Tablestore instance.
      shared_ptr<string> tableName_ {};
      // The time when the backup snapshot was updated. The value is a UNIX timestamp. Unit: seconds.
      shared_ptr<int64_t> updatedTime_ {};
      // The ID of the backup vault that stores the backup snapshot.
      shared_ptr<string> vaultId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->limit_ == nullptr && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr
        && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
    inline DescribeOtsTableSnapshotsResponseBody& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOtsTableSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const vector<DescribeOtsTableSnapshotsResponseBody::Snapshots> & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, vector<DescribeOtsTableSnapshotsResponseBody::Snapshots>) };
    inline vector<DescribeOtsTableSnapshotsResponseBody::Snapshots> getSnapshots() { DARABONBA_PTR_GET(snapshots_, vector<DescribeOtsTableSnapshotsResponseBody::Snapshots>) };
    inline DescribeOtsTableSnapshotsResponseBody& setSnapshots(const vector<DescribeOtsTableSnapshotsResponseBody::Snapshots> & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeOtsTableSnapshotsResponseBody& setSnapshots(vector<DescribeOtsTableSnapshotsResponseBody::Snapshots> && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeOtsTableSnapshotsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The number of backup snapshots that are displayed on the current page.
    shared_ptr<int32_t> limit_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The token that is required to obtain the next page of backup snapshots.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The backup snapshots.
    shared_ptr<vector<DescribeOtsTableSnapshotsResponseBody::Snapshots>> snapshots_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
