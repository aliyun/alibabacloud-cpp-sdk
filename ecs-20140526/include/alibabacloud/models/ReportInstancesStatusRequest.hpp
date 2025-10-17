// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPORTINSTANCESSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPORTINSTANCESSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ReportInstancesStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReportInstancesStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(DiskId, diskId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IssueCategory, issueCategory_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ReportInstancesStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(DiskId, diskId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IssueCategory, issueCategory_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ReportInstancesStatusRequest() = default ;
    ReportInstancesStatusRequest(const ReportInstancesStatusRequest &) = default ;
    ReportInstancesStatusRequest(ReportInstancesStatusRequest &&) = default ;
    ReportInstancesStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReportInstancesStatusRequest() = default ;
    ReportInstancesStatusRequest& operator=(const ReportInstancesStatusRequest &) = default ;
    ReportInstancesStatusRequest& operator=(ReportInstancesStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->device_ == nullptr && return this->diskId_ == nullptr && return this->endTime_ == nullptr && return this->instanceId_ == nullptr && return this->issueCategory_ == nullptr
        && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->reason_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr
        && return this->resourceOwnerId_ == nullptr && return this->startTime_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ReportInstancesStatusRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline const vector<string> & device() const { DARABONBA_PTR_GET_CONST(device_, vector<string>) };
    inline vector<string> device() { DARABONBA_PTR_GET(device_, vector<string>) };
    inline ReportInstancesStatusRequest& setDevice(const vector<string> & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
    inline ReportInstancesStatusRequest& setDevice(vector<string> && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


    // diskId Field Functions 
    bool hasDiskId() const { return this->diskId_ != nullptr;};
    void deleteDiskId() { this->diskId_ = nullptr;};
    inline const vector<string> & diskId() const { DARABONBA_PTR_GET_CONST(diskId_, vector<string>) };
    inline vector<string> diskId() { DARABONBA_PTR_GET(diskId_, vector<string>) };
    inline ReportInstancesStatusRequest& setDiskId(const vector<string> & diskId) { DARABONBA_PTR_SET_VALUE(diskId_, diskId) };
    inline ReportInstancesStatusRequest& setDiskId(vector<string> && diskId) { DARABONBA_PTR_SET_RVALUE(diskId_, diskId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ReportInstancesStatusRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline const vector<string> & instanceId() const { DARABONBA_PTR_GET_CONST(instanceId_, vector<string>) };
    inline vector<string> instanceId() { DARABONBA_PTR_GET(instanceId_, vector<string>) };
    inline ReportInstancesStatusRequest& setInstanceId(const vector<string> & instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };
    inline ReportInstancesStatusRequest& setInstanceId(vector<string> && instanceId) { DARABONBA_PTR_SET_RVALUE(instanceId_, instanceId) };


    // issueCategory Field Functions 
    bool hasIssueCategory() const { return this->issueCategory_ != nullptr;};
    void deleteIssueCategory() { this->issueCategory_ = nullptr;};
    inline string issueCategory() const { DARABONBA_PTR_GET_DEFAULT(issueCategory_, "") };
    inline ReportInstancesStatusRequest& setIssueCategory(string issueCategory) { DARABONBA_PTR_SET_VALUE(issueCategory_, issueCategory) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ReportInstancesStatusRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ReportInstancesStatusRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline ReportInstancesStatusRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReportInstancesStatusRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ReportInstancesStatusRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ReportInstancesStatusRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ReportInstancesStatusRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The description of the exception.
    // 
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // The device names of disks on an instance that have the exception. You can specify to 100 device names in a single request.
    // 
    // If you are using an ECS bare metal instance, enter the slot numbers of disks on the instance.
    // 
    // > For ECS bare metal instances, this parameter is required when the value of the `Reason` parameter is `abnormal-local-disk` or `abnormal-cloud-disk` or when the value of the `IssueCategory` parameter is `hardware-disk-error`.
    std::shared_ptr<vector<string>> device_ = nullptr;
    // The IDs of disks on an instance that have the exception. You can specify up to 100 disk IDs in a single request. If you are using an ECS bare metal instance, enter the serial numbers of disks on the instance.
    // 
    // > This parameter is required when the value of the `Reason` parameter is `abnormal-local-disk` or `abnormal-cloud-disk` or when the value of the `IssueCategory` parameter is `hardware-disk-error`.
    std::shared_ptr<vector<string>> diskId_ = nullptr;
    // The end time of the instance exception. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The IDs of instances. You can specify up to 100 instance IDs in a single request.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceId_ = nullptr;
    // The category of the exception. This parameter is applicable only to ECS bare metal instances. Valid values:
    // 
    // *   hardware-cpu-error: CPU failure
    // *   hardware-motherboard-error: motherboard failure
    // *   hardware-mem-error: memory failure
    // *   hardware-power-error: power failure
    // *   hardware-disk-error: disk failure
    // *   hardware-networkcard-error: network interface controller (NIC) failure
    // *   hardware-raidcard-error: SAS/RAID card failure
    // *   hardware-fan-error: fan failure
    // *   others: other failures
    std::shared_ptr<string> issueCategory_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The impact of the exception on the instance. Valid values:
    // 
    // *   instance-hang: The instance is unavailable or cannot be connected.
    // *   instance-stuck-in-status: The instance is stuck in a state such as Starting or Stopping.
    // *   abnormal-network: The instance has a network exception.
    // *   abnormal-local-disk: A local disk attached to the instance has an exception.
    // *   abnormal-cloud-disk: A disk or a Shared Block Storage device attached to the instance has an exception.
    // *   others: other exception types. If the impact is not of the preceding types, you can set `Reason` to others and specify the `Description` parameter.
    std::shared_ptr<string> reason_ = nullptr;
    // The region ID of the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The start time of the instance exception. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
