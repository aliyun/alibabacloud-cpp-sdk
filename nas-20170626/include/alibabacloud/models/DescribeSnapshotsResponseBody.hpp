// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESNAPSHOTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeSnapshotsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSnapshotsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Snapshots, snapshots_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody(DescribeSnapshotsResponseBody &&) = default ;
    DescribeSnapshotsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSnapshotsResponseBody() = default ;
    DescribeSnapshotsResponseBody& operator=(const DescribeSnapshotsResponseBody &) = default ;
    DescribeSnapshotsResponseBody& operator=(DescribeSnapshotsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Snapshots : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Snapshots& obj) { 
        DARABONBA_PTR_TO_JSON(Snapshot, snapshot_);
      };
      friend void from_json(const Darabonba::Json& j, Snapshots& obj) { 
        DARABONBA_PTR_FROM_JSON(Snapshot, snapshot_);
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
      class Snapshot : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Snapshot& obj) { 
          DARABONBA_PTR_TO_JSON(CompletedTime, completedTime_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
          DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_TO_JSON(SnapshotName, snapshotName_);
          DARABONBA_PTR_TO_JSON(SnapshotType, snapshotType_);
          DARABONBA_PTR_TO_JSON(SourceFileSystemId, sourceFileSystemId_);
          DARABONBA_PTR_TO_JSON(SourceFileSystemSize, sourceFileSystemSize_);
          DARABONBA_PTR_TO_JSON(SourceFileSystemVersion, sourceFileSystemVersion_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Snapshot& obj) { 
          DARABONBA_PTR_FROM_JSON(CompletedTime, completedTime_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
          DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
          DARABONBA_PTR_FROM_JSON(SnapshotName, snapshotName_);
          DARABONBA_PTR_FROM_JSON(SnapshotType, snapshotType_);
          DARABONBA_PTR_FROM_JSON(SourceFileSystemId, sourceFileSystemId_);
          DARABONBA_PTR_FROM_JSON(SourceFileSystemSize, sourceFileSystemSize_);
          DARABONBA_PTR_FROM_JSON(SourceFileSystemVersion, sourceFileSystemVersion_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Snapshot() = default ;
        Snapshot(const Snapshot &) = default ;
        Snapshot(Snapshot &&) = default ;
        Snapshot(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Snapshot() = default ;
        Snapshot& operator=(const Snapshot &) = default ;
        Snapshot& operator=(Snapshot &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->completedTime_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->encryptType_ == nullptr && this->fileSystemType_ == nullptr && this->progress_ == nullptr
        && this->remainTime_ == nullptr && this->retentionDays_ == nullptr && this->snapshotId_ == nullptr && this->snapshotName_ == nullptr && this->snapshotType_ == nullptr
        && this->sourceFileSystemId_ == nullptr && this->sourceFileSystemSize_ == nullptr && this->sourceFileSystemVersion_ == nullptr && this->status_ == nullptr; };
        // completedTime Field Functions 
        bool hasCompletedTime() const { return this->completedTime_ != nullptr;};
        void deleteCompletedTime() { this->completedTime_ = nullptr;};
        inline string getCompletedTime() const { DARABONBA_PTR_GET_DEFAULT(completedTime_, "") };
        inline Snapshot& setCompletedTime(string completedTime) { DARABONBA_PTR_SET_VALUE(completedTime_, completedTime) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Snapshot& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Snapshot& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // encryptType Field Functions 
        bool hasEncryptType() const { return this->encryptType_ != nullptr;};
        void deleteEncryptType() { this->encryptType_ = nullptr;};
        inline int32_t getEncryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, 0) };
        inline Snapshot& setEncryptType(int32_t encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


        // fileSystemType Field Functions 
        bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
        void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
        inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
        inline Snapshot& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline string getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
        inline Snapshot& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // remainTime Field Functions 
        bool hasRemainTime() const { return this->remainTime_ != nullptr;};
        void deleteRemainTime() { this->remainTime_ = nullptr;};
        inline int32_t getRemainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0) };
        inline Snapshot& setRemainTime(int32_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


        // retentionDays Field Functions 
        bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
        void deleteRetentionDays() { this->retentionDays_ = nullptr;};
        inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
        inline Snapshot& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline Snapshot& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


        // snapshotName Field Functions 
        bool hasSnapshotName() const { return this->snapshotName_ != nullptr;};
        void deleteSnapshotName() { this->snapshotName_ = nullptr;};
        inline string getSnapshotName() const { DARABONBA_PTR_GET_DEFAULT(snapshotName_, "") };
        inline Snapshot& setSnapshotName(string snapshotName) { DARABONBA_PTR_SET_VALUE(snapshotName_, snapshotName) };


        // snapshotType Field Functions 
        bool hasSnapshotType() const { return this->snapshotType_ != nullptr;};
        void deleteSnapshotType() { this->snapshotType_ = nullptr;};
        inline string getSnapshotType() const { DARABONBA_PTR_GET_DEFAULT(snapshotType_, "") };
        inline Snapshot& setSnapshotType(string snapshotType) { DARABONBA_PTR_SET_VALUE(snapshotType_, snapshotType) };


        // sourceFileSystemId Field Functions 
        bool hasSourceFileSystemId() const { return this->sourceFileSystemId_ != nullptr;};
        void deleteSourceFileSystemId() { this->sourceFileSystemId_ = nullptr;};
        inline string getSourceFileSystemId() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemId_, "") };
        inline Snapshot& setSourceFileSystemId(string sourceFileSystemId) { DARABONBA_PTR_SET_VALUE(sourceFileSystemId_, sourceFileSystemId) };


        // sourceFileSystemSize Field Functions 
        bool hasSourceFileSystemSize() const { return this->sourceFileSystemSize_ != nullptr;};
        void deleteSourceFileSystemSize() { this->sourceFileSystemSize_ = nullptr;};
        inline int64_t getSourceFileSystemSize() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemSize_, 0L) };
        inline Snapshot& setSourceFileSystemSize(int64_t sourceFileSystemSize) { DARABONBA_PTR_SET_VALUE(sourceFileSystemSize_, sourceFileSystemSize) };


        // sourceFileSystemVersion Field Functions 
        bool hasSourceFileSystemVersion() const { return this->sourceFileSystemVersion_ != nullptr;};
        void deleteSourceFileSystemVersion() { this->sourceFileSystemVersion_ = nullptr;};
        inline string getSourceFileSystemVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceFileSystemVersion_, "") };
        inline Snapshot& setSourceFileSystemVersion(string sourceFileSystemVersion) { DARABONBA_PTR_SET_VALUE(sourceFileSystemVersion_, sourceFileSystemVersion) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Snapshot& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when snapshot creation was complete.
        // 
        // The time follows the [ISO 8601](https://www.iso.org/iso-8601-date-and-time-format.html) standard in UTC. The time is displayed in the `yyyy-MM-ddThh:mmZ` format.
        // 
        // >  This parameter is valid only when the snapshot is created. During snapshot creation, the value of this parameter is the same as that of CreateTime.
        shared_ptr<string> completedTime_ {};
        // The time when the snapshot was created.
        // 
        // The time follows the [ISO 8601](https://www.iso.org/iso-8601-date-and-time-format.html) standard in UTC. The time is displayed in the `yyyy-MM-ddThh:mmZ` format.
        shared_ptr<string> createTime_ {};
        // The description of the snapshot.
        shared_ptr<string> description_ {};
        // Indicates whether the snapshot is encrypted.
        // 
        // Valid values:
        // 
        // *   0: The snapshot is not encrypted.
        // *   1: The snapshot is encrypted.
        shared_ptr<int32_t> encryptType_ {};
        // The type of the file system.
        shared_ptr<string> fileSystemType_ {};
        // The progress of the snapshot creation. The value of this parameter is expressed as a percentage.
        shared_ptr<string> progress_ {};
        // The remaining time that is required to create the snapshot.
        // 
        // Unit: seconds.
        shared_ptr<int32_t> remainTime_ {};
        // The retention period of the auto snapshot.
        // 
        // Unit: days.
        // 
        // Valid values:
        // 
        // *   \\-1: Auto snapshots are permanently retained. After the number of auto snapshots exceeds the upper limit, the earliest auto snapshot is automatically deleted.
        // *   1 to 65536: Auto snapshots are retained for the specified days. After the retention period of auto snapshots expires, the auto snapshots are automatically deleted.
        shared_ptr<int32_t> retentionDays_ {};
        // The snapshot ID.
        shared_ptr<string> snapshotId_ {};
        // The snapshot name.
        // 
        // If you specify a name to create a snapshot, the name of the snapshot is returned. Otherwise, no value is returned for this parameter.
        shared_ptr<string> snapshotName_ {};
        // The snapshot type. Valid values:
        // 
        // *   auto: automatically created snapshots
        // *   user: manually created snapshots
        shared_ptr<string> snapshotType_ {};
        // The ID of the source file system.
        // 
        // This parameter is retained even if the source file system of the snapshot is deleted.
        shared_ptr<string> sourceFileSystemId_ {};
        // The capacity of the source file system.
        // 
        // Unit: GiB.
        shared_ptr<int64_t> sourceFileSystemSize_ {};
        // The version of the source file system.
        shared_ptr<string> sourceFileSystemVersion_ {};
        // The status of the snapshot.
        // 
        // Valid values:
        // 
        // *   progressing: The snapshot is being created.
        // *   accomplished: The snapshot is created.
        // *   failed: The snapshot fails to be created.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->snapshot_ == nullptr; };
      // snapshot Field Functions 
      bool hasSnapshot() const { return this->snapshot_ != nullptr;};
      void deleteSnapshot() { this->snapshot_ = nullptr;};
      inline const vector<Snapshots::Snapshot> & getSnapshot() const { DARABONBA_PTR_GET_CONST(snapshot_, vector<Snapshots::Snapshot>) };
      inline vector<Snapshots::Snapshot> getSnapshot() { DARABONBA_PTR_GET(snapshot_, vector<Snapshots::Snapshot>) };
      inline Snapshots& setSnapshot(const vector<Snapshots::Snapshot> & snapshot) { DARABONBA_PTR_SET_VALUE(snapshot_, snapshot) };
      inline Snapshots& setSnapshot(vector<Snapshots::Snapshot> && snapshot) { DARABONBA_PTR_SET_RVALUE(snapshot_, snapshot) };


    protected:
      shared_ptr<vector<Snapshots::Snapshot>> snapshot_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->snapshots_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeSnapshotsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeSnapshotsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSnapshotsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshots Field Functions 
    bool hasSnapshots() const { return this->snapshots_ != nullptr;};
    void deleteSnapshots() { this->snapshots_ = nullptr;};
    inline const DescribeSnapshotsResponseBody::Snapshots & getSnapshots() const { DARABONBA_PTR_GET_CONST(snapshots_, DescribeSnapshotsResponseBody::Snapshots) };
    inline DescribeSnapshotsResponseBody::Snapshots getSnapshots() { DARABONBA_PTR_GET(snapshots_, DescribeSnapshotsResponseBody::Snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(const DescribeSnapshotsResponseBody::Snapshots & snapshots) { DARABONBA_PTR_SET_VALUE(snapshots_, snapshots) };
    inline DescribeSnapshotsResponseBody& setSnapshots(DescribeSnapshotsResponseBody::Snapshots && snapshots) { DARABONBA_PTR_SET_RVALUE(snapshots_, snapshots) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeSnapshotsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details about snapshots.
    shared_ptr<DescribeSnapshotsResponseBody::Snapshots> snapshots_ {};
    // The total number of snapshots returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
