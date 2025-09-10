// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResourceInstanceLabels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eas20210701
{
namespace Models
{
  class ResourceInstance : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResourceInstance& obj) { 
      DARABONBA_PTR_TO_JSON(Arch, arch_);
      DARABONBA_PTR_TO_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(InstanceCpuCount, instanceCpuCount_);
      DARABONBA_PTR_TO_JSON(InstanceGpuCount, instanceGpuCount_);
      DARABONBA_PTR_TO_JSON(InstanceGpuMemory, instanceGpuMemory_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(InstanceMemory, instanceMemory_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceSystemDiskSize, instanceSystemDiskSize_);
      DARABONBA_PTR_TO_JSON(InstanceTenantIp, instanceTenantIp_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceUsedCpu, instanceUsedCpu_);
      DARABONBA_PTR_TO_JSON(InstanceUsedGpu, instanceUsedGpu_);
      DARABONBA_PTR_TO_JSON(InstanceUsedGpuMemory, instanceUsedGpuMemory_);
      DARABONBA_PTR_TO_JSON(InstanceUsedMemory, instanceUsedMemory_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Zone, zone_);
    };
    friend void from_json(const Darabonba::Json& j, ResourceInstance& obj) { 
      DARABONBA_PTR_FROM_JSON(Arch, arch_);
      DARABONBA_PTR_FROM_JSON(AutoRenewal, autoRenewal_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(InstanceCpuCount, instanceCpuCount_);
      DARABONBA_PTR_FROM_JSON(InstanceGpuCount, instanceGpuCount_);
      DARABONBA_PTR_FROM_JSON(InstanceGpuMemory, instanceGpuMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(InstanceMemory, instanceMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceSystemDiskSize, instanceSystemDiskSize_);
      DARABONBA_PTR_FROM_JSON(InstanceTenantIp, instanceTenantIp_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedCpu, instanceUsedCpu_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedGpu, instanceUsedGpu_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedGpuMemory, instanceUsedGpuMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedMemory, instanceUsedMemory_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Zone, zone_);
    };
    ResourceInstance() = default ;
    ResourceInstance(const ResourceInstance &) = default ;
    ResourceInstance(ResourceInstance &&) = default ;
    ResourceInstance(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResourceInstance() = default ;
    ResourceInstance& operator=(const ResourceInstance &) = default ;
    ResourceInstance& operator=(ResourceInstance &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arch_ != nullptr
        && this->autoRenewal_ != nullptr && this->chargeType_ != nullptr && this->createTime_ != nullptr && this->expiredTime_ != nullptr && this->instanceCpuCount_ != nullptr
        && this->instanceGpuCount_ != nullptr && this->instanceGpuMemory_ != nullptr && this->instanceId_ != nullptr && this->instanceIp_ != nullptr && this->instanceMemory_ != nullptr
        && this->instanceName_ != nullptr && this->instanceStatus_ != nullptr && this->instanceSystemDiskSize_ != nullptr && this->instanceTenantIp_ != nullptr && this->instanceType_ != nullptr
        && this->instanceUsedCpu_ != nullptr && this->instanceUsedGpu_ != nullptr && this->instanceUsedGpuMemory_ != nullptr && this->instanceUsedMemory_ != nullptr && this->labels_ != nullptr
        && this->region_ != nullptr && this->resourceId_ != nullptr && this->zone_ != nullptr; };
    // arch Field Functions 
    bool hasArch() const { return this->arch_ != nullptr;};
    void deleteArch() { this->arch_ = nullptr;};
    inline string arch() const { DARABONBA_PTR_GET_DEFAULT(arch_, "") };
    inline ResourceInstance& setArch(string arch) { DARABONBA_PTR_SET_VALUE(arch_, arch) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool autoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline ResourceInstance& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ResourceInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ResourceInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ResourceInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceCpuCount Field Functions 
    bool hasInstanceCpuCount() const { return this->instanceCpuCount_ != nullptr;};
    void deleteInstanceCpuCount() { this->instanceCpuCount_ = nullptr;};
    inline int32_t instanceCpuCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCpuCount_, 0) };
    inline ResourceInstance& setInstanceCpuCount(int32_t instanceCpuCount) { DARABONBA_PTR_SET_VALUE(instanceCpuCount_, instanceCpuCount) };


    // instanceGpuCount Field Functions 
    bool hasInstanceGpuCount() const { return this->instanceGpuCount_ != nullptr;};
    void deleteInstanceGpuCount() { this->instanceGpuCount_ = nullptr;};
    inline int32_t instanceGpuCount() const { DARABONBA_PTR_GET_DEFAULT(instanceGpuCount_, 0) };
    inline ResourceInstance& setInstanceGpuCount(int32_t instanceGpuCount) { DARABONBA_PTR_SET_VALUE(instanceGpuCount_, instanceGpuCount) };


    // instanceGpuMemory Field Functions 
    bool hasInstanceGpuMemory() const { return this->instanceGpuMemory_ != nullptr;};
    void deleteInstanceGpuMemory() { this->instanceGpuMemory_ = nullptr;};
    inline string instanceGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceGpuMemory_, "") };
    inline ResourceInstance& setInstanceGpuMemory(string instanceGpuMemory) { DARABONBA_PTR_SET_VALUE(instanceGpuMemory_, instanceGpuMemory) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResourceInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string instanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline ResourceInstance& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instanceMemory Field Functions 
    bool hasInstanceMemory() const { return this->instanceMemory_ != nullptr;};
    void deleteInstanceMemory() { this->instanceMemory_ = nullptr;};
    inline string instanceMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceMemory_, "") };
    inline ResourceInstance& setInstanceMemory(string instanceMemory) { DARABONBA_PTR_SET_VALUE(instanceMemory_, instanceMemory) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ResourceInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ResourceInstance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceSystemDiskSize Field Functions 
    bool hasInstanceSystemDiskSize() const { return this->instanceSystemDiskSize_ != nullptr;};
    void deleteInstanceSystemDiskSize() { this->instanceSystemDiskSize_ = nullptr;};
    inline int32_t instanceSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSystemDiskSize_, 0) };
    inline ResourceInstance& setInstanceSystemDiskSize(int32_t instanceSystemDiskSize) { DARABONBA_PTR_SET_VALUE(instanceSystemDiskSize_, instanceSystemDiskSize) };


    // instanceTenantIp Field Functions 
    bool hasInstanceTenantIp() const { return this->instanceTenantIp_ != nullptr;};
    void deleteInstanceTenantIp() { this->instanceTenantIp_ = nullptr;};
    inline string instanceTenantIp() const { DARABONBA_PTR_GET_DEFAULT(instanceTenantIp_, "") };
    inline ResourceInstance& setInstanceTenantIp(string instanceTenantIp) { DARABONBA_PTR_SET_VALUE(instanceTenantIp_, instanceTenantIp) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ResourceInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceUsedCpu Field Functions 
    bool hasInstanceUsedCpu() const { return this->instanceUsedCpu_ != nullptr;};
    void deleteInstanceUsedCpu() { this->instanceUsedCpu_ = nullptr;};
    inline float instanceUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedCpu_, 0.0) };
    inline ResourceInstance& setInstanceUsedCpu(float instanceUsedCpu) { DARABONBA_PTR_SET_VALUE(instanceUsedCpu_, instanceUsedCpu) };


    // instanceUsedGpu Field Functions 
    bool hasInstanceUsedGpu() const { return this->instanceUsedGpu_ != nullptr;};
    void deleteInstanceUsedGpu() { this->instanceUsedGpu_ = nullptr;};
    inline float instanceUsedGpu() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedGpu_, 0.0) };
    inline ResourceInstance& setInstanceUsedGpu(float instanceUsedGpu) { DARABONBA_PTR_SET_VALUE(instanceUsedGpu_, instanceUsedGpu) };


    // instanceUsedGpuMemory Field Functions 
    bool hasInstanceUsedGpuMemory() const { return this->instanceUsedGpuMemory_ != nullptr;};
    void deleteInstanceUsedGpuMemory() { this->instanceUsedGpuMemory_ = nullptr;};
    inline string instanceUsedGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedGpuMemory_, "") };
    inline ResourceInstance& setInstanceUsedGpuMemory(string instanceUsedGpuMemory) { DARABONBA_PTR_SET_VALUE(instanceUsedGpuMemory_, instanceUsedGpuMemory) };


    // instanceUsedMemory Field Functions 
    bool hasInstanceUsedMemory() const { return this->instanceUsedMemory_ != nullptr;};
    void deleteInstanceUsedMemory() { this->instanceUsedMemory_ = nullptr;};
    inline string instanceUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedMemory_, "") };
    inline ResourceInstance& setInstanceUsedMemory(string instanceUsedMemory) { DARABONBA_PTR_SET_VALUE(instanceUsedMemory_, instanceUsedMemory) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ResourceInstanceLabels> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ResourceInstanceLabels>) };
    inline vector<ResourceInstanceLabels> labels() { DARABONBA_PTR_GET(labels_, vector<ResourceInstanceLabels>) };
    inline ResourceInstance& setLabels(const vector<ResourceInstanceLabels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ResourceInstance& setLabels(vector<ResourceInstanceLabels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ResourceInstance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ResourceInstance& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string zone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline ResourceInstance& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    std::shared_ptr<string> arch_ = nullptr;
    std::shared_ptr<bool> autoRenewal_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> expiredTime_ = nullptr;
    std::shared_ptr<int32_t> instanceCpuCount_ = nullptr;
    std::shared_ptr<int32_t> instanceGpuCount_ = nullptr;
    std::shared_ptr<string> instanceGpuMemory_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceIp_ = nullptr;
    std::shared_ptr<string> instanceMemory_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<int32_t> instanceSystemDiskSize_ = nullptr;
    std::shared_ptr<string> instanceTenantIp_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<float> instanceUsedCpu_ = nullptr;
    std::shared_ptr<float> instanceUsedGpu_ = nullptr;
    std::shared_ptr<string> instanceUsedGpuMemory_ = nullptr;
    std::shared_ptr<string> instanceUsedMemory_ = nullptr;
    std::shared_ptr<vector<ResourceInstanceLabels>> labels_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> zone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
