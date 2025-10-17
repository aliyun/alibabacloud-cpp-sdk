// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDEDICATEDCLUSTERMONITORRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDEDICATEDCLUSTERMONITORRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class CreateDedicatedClusterMonitorRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDedicatedClusterMonitorRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuAlarmThreshold, cpuAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DiskAlarmThreshold, diskAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(DuAlarmThreshold, duAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MemAlarmThreshold, memAlarmThreshold_);
      DARABONBA_PTR_TO_JSON(NoticeSwitch, noticeSwitch_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Phones, phones_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDedicatedClusterMonitorRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuAlarmThreshold, cpuAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DiskAlarmThreshold, diskAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(DuAlarmThreshold, duAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MemAlarmThreshold, memAlarmThreshold_);
      DARABONBA_PTR_FROM_JSON(NoticeSwitch, noticeSwitch_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Phones, phones_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateDedicatedClusterMonitorRuleRequest() = default ;
    CreateDedicatedClusterMonitorRuleRequest(const CreateDedicatedClusterMonitorRuleRequest &) = default ;
    CreateDedicatedClusterMonitorRuleRequest(CreateDedicatedClusterMonitorRuleRequest &&) = default ;
    CreateDedicatedClusterMonitorRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDedicatedClusterMonitorRuleRequest() = default ;
    CreateDedicatedClusterMonitorRuleRequest& operator=(const CreateDedicatedClusterMonitorRuleRequest &) = default ;
    CreateDedicatedClusterMonitorRuleRequest& operator=(CreateDedicatedClusterMonitorRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuAlarmThreshold_ == nullptr
        && return this->dedicatedClusterId_ == nullptr && return this->diskAlarmThreshold_ == nullptr && return this->duAlarmThreshold_ == nullptr && return this->instanceId_ == nullptr && return this->memAlarmThreshold_ == nullptr
        && return this->noticeSwitch_ == nullptr && return this->ownerId_ == nullptr && return this->phones_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr; };
    // cpuAlarmThreshold Field Functions 
    bool hasCpuAlarmThreshold() const { return this->cpuAlarmThreshold_ != nullptr;};
    void deleteCpuAlarmThreshold() { this->cpuAlarmThreshold_ = nullptr;};
    inline int64_t cpuAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(cpuAlarmThreshold_, 0L) };
    inline CreateDedicatedClusterMonitorRuleRequest& setCpuAlarmThreshold(int64_t cpuAlarmThreshold) { DARABONBA_PTR_SET_VALUE(cpuAlarmThreshold_, cpuAlarmThreshold) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline CreateDedicatedClusterMonitorRuleRequest& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // diskAlarmThreshold Field Functions 
    bool hasDiskAlarmThreshold() const { return this->diskAlarmThreshold_ != nullptr;};
    void deleteDiskAlarmThreshold() { this->diskAlarmThreshold_ = nullptr;};
    inline int64_t diskAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(diskAlarmThreshold_, 0L) };
    inline CreateDedicatedClusterMonitorRuleRequest& setDiskAlarmThreshold(int64_t diskAlarmThreshold) { DARABONBA_PTR_SET_VALUE(diskAlarmThreshold_, diskAlarmThreshold) };


    // duAlarmThreshold Field Functions 
    bool hasDuAlarmThreshold() const { return this->duAlarmThreshold_ != nullptr;};
    void deleteDuAlarmThreshold() { this->duAlarmThreshold_ = nullptr;};
    inline int64_t duAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(duAlarmThreshold_, 0L) };
    inline CreateDedicatedClusterMonitorRuleRequest& setDuAlarmThreshold(int64_t duAlarmThreshold) { DARABONBA_PTR_SET_VALUE(duAlarmThreshold_, duAlarmThreshold) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDedicatedClusterMonitorRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // memAlarmThreshold Field Functions 
    bool hasMemAlarmThreshold() const { return this->memAlarmThreshold_ != nullptr;};
    void deleteMemAlarmThreshold() { this->memAlarmThreshold_ = nullptr;};
    inline int64_t memAlarmThreshold() const { DARABONBA_PTR_GET_DEFAULT(memAlarmThreshold_, 0L) };
    inline CreateDedicatedClusterMonitorRuleRequest& setMemAlarmThreshold(int64_t memAlarmThreshold) { DARABONBA_PTR_SET_VALUE(memAlarmThreshold_, memAlarmThreshold) };


    // noticeSwitch Field Functions 
    bool hasNoticeSwitch() const { return this->noticeSwitch_ != nullptr;};
    void deleteNoticeSwitch() { this->noticeSwitch_ = nullptr;};
    inline int64_t noticeSwitch() const { DARABONBA_PTR_GET_DEFAULT(noticeSwitch_, 0L) };
    inline CreateDedicatedClusterMonitorRuleRequest& setNoticeSwitch(int64_t noticeSwitch) { DARABONBA_PTR_SET_VALUE(noticeSwitch_, noticeSwitch) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline CreateDedicatedClusterMonitorRuleRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // phones Field Functions 
    bool hasPhones() const { return this->phones_ != nullptr;};
    void deletePhones() { this->phones_ = nullptr;};
    inline string phones() const { DARABONBA_PTR_GET_DEFAULT(phones_, "") };
    inline CreateDedicatedClusterMonitorRuleRequest& setPhones(string phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDedicatedClusterMonitorRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateDedicatedClusterMonitorRuleRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The alert threshold for CPU utilization. Unit: percentage.
    std::shared_ptr<int64_t> cpuAlarmThreshold_ = nullptr;
    // The ID of the cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The alert threshold for disk usage. Unit: percentage.
    std::shared_ptr<int64_t> diskAlarmThreshold_ = nullptr;
    // The alert threshold for DTS Unit (DU) usage. Unit: percentage.
    std::shared_ptr<int64_t> duAlarmThreshold_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The alert threshold for memory usage. Unit: percentage.
    std::shared_ptr<int64_t> memAlarmThreshold_ = nullptr;
    // Specifies whether to enable the alert feature. Valid values:
    // 
    // *   **1**: enables the alert feature.
    // *   **0**: disables the alert feature.
    std::shared_ptr<int64_t> noticeSwitch_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    // The mobile phone number to which alerts are sent. Separate multiple mobile phone numbers with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> phones_ = nullptr;
    // The ID of the region in which the Data Transmission Service (DTS) instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID. This parameter is a global parameter and not required.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
