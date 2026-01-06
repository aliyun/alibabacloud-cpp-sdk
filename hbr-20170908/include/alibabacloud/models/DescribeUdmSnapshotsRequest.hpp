// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeUdmSnapshotsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdmSnapshotsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_ANY_TO_JSON(SnapshotIds, snapshotIds_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UdmRegionId, udmRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdmSnapshotsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_ANY_FROM_JSON(SnapshotIds, snapshotIds_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UdmRegionId, udmRegionId_);
    };
    DescribeUdmSnapshotsRequest() = default ;
    DescribeUdmSnapshotsRequest(const DescribeUdmSnapshotsRequest &) = default ;
    DescribeUdmSnapshotsRequest(DescribeUdmSnapshotsRequest &&) = default ;
    DescribeUdmSnapshotsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdmSnapshotsRequest() = default ;
    DescribeUdmSnapshotsRequest& operator=(const DescribeUdmSnapshotsRequest &) = default ;
    DescribeUdmSnapshotsRequest& operator=(DescribeUdmSnapshotsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->diskId_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->jobId_ == nullptr && this->snapshotIds_ == nullptr && this->sourceType_ == nullptr
        && this->startTime_ == nullptr && this->udmRegionId_ == nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string getDiskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeUdmSnapshotsRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeUdmSnapshotsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUdmSnapshotsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeUdmSnapshotsRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // snapshotIds Field Functions 
    bool hasSnapshotIds() const { return this->snapshotIds_ != nullptr;};
    void deleteSnapshotIds() { this->snapshotIds_ = nullptr;};
    inline     const Darabonba::Json & getSnapshotIds() const { DARABONBA_GET(snapshotIds_) };
    Darabonba::Json & getSnapshotIds() { DARABONBA_GET(snapshotIds_) };
    inline DescribeUdmSnapshotsRequest& setSnapshotIds(const Darabonba::Json & snapshotIds) { DARABONBA_SET_VALUE(snapshotIds_, snapshotIds) };
    inline DescribeUdmSnapshotsRequest& setSnapshotIds(Darabonba::Json && snapshotIds) { DARABONBA_SET_RVALUE(snapshotIds_, snapshotIds) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeUdmSnapshotsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUdmSnapshotsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // udmRegionId Field Functions 
    bool hasUdmRegionId() const { return this->udmRegionId_ != nullptr;};
    void deleteUdmRegionId() { this->udmRegionId_ = nullptr;};
    inline string getUdmRegionId() const { DARABONBA_PTR_GET_DEFAULT(udmRegionId_, "") };
    inline DescribeUdmSnapshotsRequest& setUdmRegionId(string udmRegionId) { DARABONBA_PTR_SET_VALUE(udmRegionId_, udmRegionId) };


  protected:
    // The ID of the disk.
    shared_ptr<string> diskId_ {};
    // The end of the time range to query. The value must be a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the ECS instance.
    shared_ptr<string> instanceId_ {};
    // The ID of the backup job.
    shared_ptr<string> jobId_ {};
    // The list of backup snapshots.
    Darabonba::Json snapshotIds_ {};
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance backup
    // *   **UDM_ECS_DISK**: disk backup subtask of ECS instance backup
    // *   **UDM_DISK**: disk backup
    // 
    // This parameter is required.
    shared_ptr<string> sourceType_ {};
    // The beginning of the time range to query. The value must be a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> startTime_ {};
    // The ID of the region where the ECS instance resides.
    // 
    // This parameter is required.
    shared_ptr<string> udmRegionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
