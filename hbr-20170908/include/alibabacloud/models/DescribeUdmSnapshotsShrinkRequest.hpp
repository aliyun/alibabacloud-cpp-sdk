// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUDMSNAPSHOTSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeUdmSnapshotsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUdmSnapshotsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(SnapshotIds, snapshotIdsShrink_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UdmRegionId, udmRegionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUdmSnapshotsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(SnapshotIds, snapshotIdsShrink_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UdmRegionId, udmRegionId_);
    };
    DescribeUdmSnapshotsShrinkRequest() = default ;
    DescribeUdmSnapshotsShrinkRequest(const DescribeUdmSnapshotsShrinkRequest &) = default ;
    DescribeUdmSnapshotsShrinkRequest(DescribeUdmSnapshotsShrinkRequest &&) = default ;
    DescribeUdmSnapshotsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUdmSnapshotsShrinkRequest() = default ;
    DescribeUdmSnapshotsShrinkRequest& operator=(const DescribeUdmSnapshotsShrinkRequest &) = default ;
    DescribeUdmSnapshotsShrinkRequest& operator=(DescribeUdmSnapshotsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diskId_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->snapshotIdsShrink_ != nullptr && this->sourceType_ != nullptr
        && this->startTime_ != nullptr && this->udmRegionId_ != nullptr; };
    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline string diskId() const { DARABONBA_PTR_GET_DEFAULT(diskId_, "") };
    inline DescribeUdmSnapshotsShrinkRequest& setDiskId(string diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeUdmSnapshotsShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeUdmSnapshotsShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeUdmSnapshotsShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // snapshotIdsShrink Field Functions 
    bool hasSnapshotIdsShrink() const { return this->snapshotIdsShrink_ != nullptr;};
    void deleteSnapshotIdsShrink() { this->snapshotIdsShrink_ = nullptr;};
    inline string snapshotIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(snapshotIdsShrink_, "") };
    inline DescribeUdmSnapshotsShrinkRequest& setSnapshotIdsShrink(string snapshotIdsShrink) { DARABONBA_PTR_SET_VALUE(snapshotIdsShrink_, snapshotIdsShrink) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribeUdmSnapshotsShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeUdmSnapshotsShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // udmRegionId Field Functions 
    bool hasUdmRegionId() const { return this->udmRegionId_ != nullptr;};
    void deleteUdmRegionId() { this->udmRegionId_ = nullptr;};
    inline string udmRegionId() const { DARABONBA_PTR_GET_DEFAULT(udmRegionId_, "") };
    inline DescribeUdmSnapshotsShrinkRequest& setUdmRegionId(string udmRegionId) { DARABONBA_PTR_SET_VALUE(udmRegionId_, udmRegionId) };


  protected:
    // The ID of the disk.
    std::shared_ptr<string> diskId_ = nullptr;
    // The end of the time range to query. The value must be a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the backup job.
    std::shared_ptr<string> jobId_ = nullptr;
    // The list of backup snapshots.
    std::shared_ptr<string> snapshotIdsShrink_ = nullptr;
    // The type of the data source. Valid values:
    // 
    // *   **UDM_ECS**: ECS instance backup
    // *   **UDM_ECS_DISK**: disk backup subtask of ECS instance backup
    // *   **UDM_DISK**: disk backup
    // 
    // This parameter is required.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The beginning of the time range to query. The value must be a UNIX timestamp. Unit: seconds.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The ID of the region where the ECS instance resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> udmRegionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
