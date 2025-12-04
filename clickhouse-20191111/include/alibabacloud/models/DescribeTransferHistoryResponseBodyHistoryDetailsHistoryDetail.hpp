// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODYHISTORYDETAILSHISTORYDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRANSFERHISTORYRESPONSEBODYHISTORYDETAILSHISTORYDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& obj) { 
      DARABONBA_PTR_TO_JSON(BytesPerMinute, bytesPerMinute_);
      DARABONBA_PTR_TO_JSON(DisableWriteWindows, disableWriteWindows_);
      DARABONBA_PTR_TO_JSON(PartsPerMinute, partsPerMinute_);
      DARABONBA_PTR_TO_JSON(Progress, progress_);
      DARABONBA_PTR_TO_JSON(SourceControlVersion, sourceControlVersion_);
      DARABONBA_PTR_TO_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubJob, subJob_);
      DARABONBA_PTR_TO_JSON(SubJobStatus, subJobStatus_);
      DARABONBA_PTR_TO_JSON(TargetControlVersion, targetControlVersion_);
      DARABONBA_PTR_TO_JSON(TargetDBCluster, targetDBCluster_);
      DARABONBA_PTR_TO_JSON(UnsyncedBytes, unsyncedBytes_);
      DARABONBA_PTR_TO_JSON(UnsyncedParts, unsyncedParts_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(BytesPerMinute, bytesPerMinute_);
      DARABONBA_PTR_FROM_JSON(DisableWriteWindows, disableWriteWindows_);
      DARABONBA_PTR_FROM_JSON(PartsPerMinute, partsPerMinute_);
      DARABONBA_PTR_FROM_JSON(Progress, progress_);
      DARABONBA_PTR_FROM_JSON(SourceControlVersion, sourceControlVersion_);
      DARABONBA_PTR_FROM_JSON(SourceDBCluster, sourceDBCluster_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubJob, subJob_);
      DARABONBA_PTR_FROM_JSON(SubJobStatus, subJobStatus_);
      DARABONBA_PTR_FROM_JSON(TargetControlVersion, targetControlVersion_);
      DARABONBA_PTR_FROM_JSON(TargetDBCluster, targetDBCluster_);
      DARABONBA_PTR_FROM_JSON(UnsyncedBytes, unsyncedBytes_);
      DARABONBA_PTR_FROM_JSON(UnsyncedParts, unsyncedParts_);
    };
    DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail() = default ;
    DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail(const DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail &) = default ;
    DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail(DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail &&) = default ;
    DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail() = default ;
    DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& operator=(const DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail &) = default ;
    DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& operator=(DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bytesPerMinute_ == nullptr
        && return this->disableWriteWindows_ == nullptr && return this->partsPerMinute_ == nullptr && return this->progress_ == nullptr && return this->sourceControlVersion_ == nullptr && return this->sourceDBCluster_ == nullptr
        && return this->status_ == nullptr && return this->subJob_ == nullptr && return this->subJobStatus_ == nullptr && return this->targetControlVersion_ == nullptr && return this->targetDBCluster_ == nullptr
        && return this->unsyncedBytes_ == nullptr && return this->unsyncedParts_ == nullptr; };
    // bytesPerMinute Field Functions 
    bool hasBytesPerMinute() const { return this->bytesPerMinute_ != nullptr;};
    void deleteBytesPerMinute() { this->bytesPerMinute_ = nullptr;};
    inline int64_t bytesPerMinute() const { DARABONBA_PTR_GET_DEFAULT(bytesPerMinute_, 0L) };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setBytesPerMinute(int64_t bytesPerMinute) { DARABONBA_PTR_SET_VALUE(bytesPerMinute_, bytesPerMinute) };


    // disableWriteWindows Field Functions 
    bool hasDisableWriteWindows() const { return this->disableWriteWindows_ != nullptr;};
    void deleteDisableWriteWindows() { this->disableWriteWindows_ = nullptr;};
    inline string disableWriteWindows() const { DARABONBA_PTR_GET_DEFAULT(disableWriteWindows_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setDisableWriteWindows(string disableWriteWindows) { DARABONBA_PTR_SET_VALUE(disableWriteWindows_, disableWriteWindows) };


    // partsPerMinute Field Functions 
    bool hasPartsPerMinute() const { return this->partsPerMinute_ != nullptr;};
    void deletePartsPerMinute() { this->partsPerMinute_ = nullptr;};
    inline double partsPerMinute() const { DARABONBA_PTR_GET_DEFAULT(partsPerMinute_, 0.0) };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setPartsPerMinute(double partsPerMinute) { DARABONBA_PTR_SET_VALUE(partsPerMinute_, partsPerMinute) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline string progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setProgress(string progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // sourceControlVersion Field Functions 
    bool hasSourceControlVersion() const { return this->sourceControlVersion_ != nullptr;};
    void deleteSourceControlVersion() { this->sourceControlVersion_ = nullptr;};
    inline string sourceControlVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceControlVersion_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setSourceControlVersion(string sourceControlVersion) { DARABONBA_PTR_SET_VALUE(sourceControlVersion_, sourceControlVersion) };


    // sourceDBCluster Field Functions 
    bool hasSourceDBCluster() const { return this->sourceDBCluster_ != nullptr;};
    void deleteSourceDBCluster() { this->sourceDBCluster_ = nullptr;};
    inline string sourceDBCluster() const { DARABONBA_PTR_GET_DEFAULT(sourceDBCluster_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setSourceDBCluster(string sourceDBCluster) { DARABONBA_PTR_SET_VALUE(sourceDBCluster_, sourceDBCluster) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subJob Field Functions 
    bool hasSubJob() const { return this->subJob_ != nullptr;};
    void deleteSubJob() { this->subJob_ = nullptr;};
    inline string subJob() const { DARABONBA_PTR_GET_DEFAULT(subJob_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setSubJob(string subJob) { DARABONBA_PTR_SET_VALUE(subJob_, subJob) };


    // subJobStatus Field Functions 
    bool hasSubJobStatus() const { return this->subJobStatus_ != nullptr;};
    void deleteSubJobStatus() { this->subJobStatus_ = nullptr;};
    inline string subJobStatus() const { DARABONBA_PTR_GET_DEFAULT(subJobStatus_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setSubJobStatus(string subJobStatus) { DARABONBA_PTR_SET_VALUE(subJobStatus_, subJobStatus) };


    // targetControlVersion Field Functions 
    bool hasTargetControlVersion() const { return this->targetControlVersion_ != nullptr;};
    void deleteTargetControlVersion() { this->targetControlVersion_ = nullptr;};
    inline string targetControlVersion() const { DARABONBA_PTR_GET_DEFAULT(targetControlVersion_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setTargetControlVersion(string targetControlVersion) { DARABONBA_PTR_SET_VALUE(targetControlVersion_, targetControlVersion) };


    // targetDBCluster Field Functions 
    bool hasTargetDBCluster() const { return this->targetDBCluster_ != nullptr;};
    void deleteTargetDBCluster() { this->targetDBCluster_ = nullptr;};
    inline string targetDBCluster() const { DARABONBA_PTR_GET_DEFAULT(targetDBCluster_, "") };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setTargetDBCluster(string targetDBCluster) { DARABONBA_PTR_SET_VALUE(targetDBCluster_, targetDBCluster) };


    // unsyncedBytes Field Functions 
    bool hasUnsyncedBytes() const { return this->unsyncedBytes_ != nullptr;};
    void deleteUnsyncedBytes() { this->unsyncedBytes_ = nullptr;};
    inline int64_t unsyncedBytes() const { DARABONBA_PTR_GET_DEFAULT(unsyncedBytes_, 0L) };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setUnsyncedBytes(int64_t unsyncedBytes) { DARABONBA_PTR_SET_VALUE(unsyncedBytes_, unsyncedBytes) };


    // unsyncedParts Field Functions 
    bool hasUnsyncedParts() const { return this->unsyncedParts_ != nullptr;};
    void deleteUnsyncedParts() { this->unsyncedParts_ = nullptr;};
    inline int64_t unsyncedParts() const { DARABONBA_PTR_GET_DEFAULT(unsyncedParts_, 0L) };
    inline DescribeTransferHistoryResponseBodyHistoryDetailsHistoryDetail& setUnsyncedParts(int64_t unsyncedParts) { DARABONBA_PTR_SET_VALUE(unsyncedParts_, unsyncedParts) };


  protected:
    // The amount of data that is migrated per minute.
    std::shared_ptr<int64_t> bytesPerMinute_ = nullptr;
    // The time window during which write operations are stopped.
    std::shared_ptr<string> disableWriteWindows_ = nullptr;
    // The number of parts that are migrated per minute.
    std::shared_ptr<double> partsPerMinute_ = nullptr;
    // The progress of the data migration.
    std::shared_ptr<string> progress_ = nullptr;
    // The control version of the source cluster.
    std::shared_ptr<string> sourceControlVersion_ = nullptr;
    // The ID of the source cluster.
    std::shared_ptr<string> sourceDBCluster_ = nullptr;
    // The status of the data migration task. Valid values:
    // 
    // *   **Finished**: The data migration task is complete.
    // *   **Processing**: The data migration task is in progress.
    std::shared_ptr<string> status_ = nullptr;
    // The running subtask.
    std::shared_ptr<string> subJob_ = nullptr;
    // The subtask status.
    std::shared_ptr<string> subJobStatus_ = nullptr;
    // The control version of the destination cluster.
    std::shared_ptr<string> targetControlVersion_ = nullptr;
    // The ID of the destination cluster.
    std::shared_ptr<string> targetDBCluster_ = nullptr;
    // The amount of data that is not migrated.
    std::shared_ptr<int64_t> unsyncedBytes_ = nullptr;
    // The number of parts that are not migrated.
    std::shared_ptr<int64_t> unsyncedParts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
