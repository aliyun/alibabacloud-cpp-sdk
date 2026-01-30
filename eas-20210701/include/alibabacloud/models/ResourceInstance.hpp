// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESOURCEINSTANCE_HPP_
#define ALIBABACLOUD_MODELS_RESOURCEINSTANCE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(InstancePhase, instancePhase_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(InstanceSystemDiskSize, instanceSystemDiskSize_);
      DARABONBA_PTR_TO_JSON(InstanceTenantIp, instanceTenantIp_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceUsedCpu, instanceUsedCpu_);
      DARABONBA_PTR_TO_JSON(InstanceUsedGpu, instanceUsedGpu_);
      DARABONBA_PTR_TO_JSON(InstanceUsedGpuMemory, instanceUsedGpuMemory_);
      DARABONBA_PTR_TO_JSON(InstanceUsedMemory, instanceUsedMemory_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LastCordonOperator, lastCordonOperator_);
      DARABONBA_PTR_TO_JSON(LastCordonReason, lastCordonReason_);
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
      DARABONBA_PTR_FROM_JSON(InstancePhase, instancePhase_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceSystemDiskSize, instanceSystemDiskSize_);
      DARABONBA_PTR_FROM_JSON(InstanceTenantIp, instanceTenantIp_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedCpu, instanceUsedCpu_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedGpu, instanceUsedGpu_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedGpuMemory, instanceUsedGpuMemory_);
      DARABONBA_PTR_FROM_JSON(InstanceUsedMemory, instanceUsedMemory_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LastCordonOperator, lastCordonOperator_);
      DARABONBA_PTR_FROM_JSON(LastCordonReason, lastCordonReason_);
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
    class Labels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Labels& obj) { 
        DARABONBA_PTR_TO_JSON(LabelKey, labelKey_);
        DARABONBA_PTR_TO_JSON(LabelValue, labelValue_);
      };
      friend void from_json(const Darabonba::Json& j, Labels& obj) { 
        DARABONBA_PTR_FROM_JSON(LabelKey, labelKey_);
        DARABONBA_PTR_FROM_JSON(LabelValue, labelValue_);
      };
      Labels() = default ;
      Labels(const Labels &) = default ;
      Labels(Labels &&) = default ;
      Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Labels() = default ;
      Labels& operator=(const Labels &) = default ;
      Labels& operator=(Labels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->labelKey_ == nullptr
        && this->labelValue_ == nullptr; };
      // labelKey Field Functions 
      bool hasLabelKey() const { return this->labelKey_ != nullptr;};
      void deleteLabelKey() { this->labelKey_ = nullptr;};
      inline string getLabelKey() const { DARABONBA_PTR_GET_DEFAULT(labelKey_, "") };
      inline Labels& setLabelKey(string labelKey) { DARABONBA_PTR_SET_VALUE(labelKey_, labelKey) };


      // labelValue Field Functions 
      bool hasLabelValue() const { return this->labelValue_ != nullptr;};
      void deleteLabelValue() { this->labelValue_ = nullptr;};
      inline string getLabelValue() const { DARABONBA_PTR_GET_DEFAULT(labelValue_, "") };
      inline Labels& setLabelValue(string labelValue) { DARABONBA_PTR_SET_VALUE(labelValue_, labelValue) };


    protected:
      shared_ptr<string> labelKey_ {};
      shared_ptr<string> labelValue_ {};
    };

    virtual bool empty() const override { return this->arch_ == nullptr
        && this->autoRenewal_ == nullptr && this->chargeType_ == nullptr && this->createTime_ == nullptr && this->expiredTime_ == nullptr && this->instanceCpuCount_ == nullptr
        && this->instanceGpuCount_ == nullptr && this->instanceGpuMemory_ == nullptr && this->instanceId_ == nullptr && this->instanceIp_ == nullptr && this->instanceMemory_ == nullptr
        && this->instanceName_ == nullptr && this->instancePhase_ == nullptr && this->instanceStatus_ == nullptr && this->instanceSystemDiskSize_ == nullptr && this->instanceTenantIp_ == nullptr
        && this->instanceType_ == nullptr && this->instanceUsedCpu_ == nullptr && this->instanceUsedGpu_ == nullptr && this->instanceUsedGpuMemory_ == nullptr && this->instanceUsedMemory_ == nullptr
        && this->labels_ == nullptr && this->lastCordonOperator_ == nullptr && this->lastCordonReason_ == nullptr && this->region_ == nullptr && this->resourceId_ == nullptr
        && this->zone_ == nullptr; };
    // arch Field Functions 
    bool hasArch() const { return this->arch_ != nullptr;};
    void deleteArch() { this->arch_ = nullptr;};
    inline string getArch() const { DARABONBA_PTR_GET_DEFAULT(arch_, "") };
    inline ResourceInstance& setArch(string arch) { DARABONBA_PTR_SET_VALUE(arch_, arch) };


    // autoRenewal Field Functions 
    bool hasAutoRenewal() const { return this->autoRenewal_ != nullptr;};
    void deleteAutoRenewal() { this->autoRenewal_ = nullptr;};
    inline bool getAutoRenewal() const { DARABONBA_PTR_GET_DEFAULT(autoRenewal_, false) };
    inline ResourceInstance& setAutoRenewal(bool autoRenewal) { DARABONBA_PTR_SET_VALUE(autoRenewal_, autoRenewal) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string getChargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ResourceInstance& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ResourceInstance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ResourceInstance& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // instanceCpuCount Field Functions 
    bool hasInstanceCpuCount() const { return this->instanceCpuCount_ != nullptr;};
    void deleteInstanceCpuCount() { this->instanceCpuCount_ = nullptr;};
    inline int32_t getInstanceCpuCount() const { DARABONBA_PTR_GET_DEFAULT(instanceCpuCount_, 0) };
    inline ResourceInstance& setInstanceCpuCount(int32_t instanceCpuCount) { DARABONBA_PTR_SET_VALUE(instanceCpuCount_, instanceCpuCount) };


    // instanceGpuCount Field Functions 
    bool hasInstanceGpuCount() const { return this->instanceGpuCount_ != nullptr;};
    void deleteInstanceGpuCount() { this->instanceGpuCount_ = nullptr;};
    inline int32_t getInstanceGpuCount() const { DARABONBA_PTR_GET_DEFAULT(instanceGpuCount_, 0) };
    inline ResourceInstance& setInstanceGpuCount(int32_t instanceGpuCount) { DARABONBA_PTR_SET_VALUE(instanceGpuCount_, instanceGpuCount) };


    // instanceGpuMemory Field Functions 
    bool hasInstanceGpuMemory() const { return this->instanceGpuMemory_ != nullptr;};
    void deleteInstanceGpuMemory() { this->instanceGpuMemory_ = nullptr;};
    inline string getInstanceGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceGpuMemory_, "") };
    inline ResourceInstance& setInstanceGpuMemory(string instanceGpuMemory) { DARABONBA_PTR_SET_VALUE(instanceGpuMemory_, instanceGpuMemory) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ResourceInstance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline ResourceInstance& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instanceMemory Field Functions 
    bool hasInstanceMemory() const { return this->instanceMemory_ != nullptr;};
    void deleteInstanceMemory() { this->instanceMemory_ = nullptr;};
    inline string getInstanceMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceMemory_, "") };
    inline ResourceInstance& setInstanceMemory(string instanceMemory) { DARABONBA_PTR_SET_VALUE(instanceMemory_, instanceMemory) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ResourceInstance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePhase Field Functions 
    bool hasInstancePhase() const { return this->instancePhase_ != nullptr;};
    void deleteInstancePhase() { this->instancePhase_ = nullptr;};
    inline string getInstancePhase() const { DARABONBA_PTR_GET_DEFAULT(instancePhase_, "") };
    inline ResourceInstance& setInstancePhase(string instancePhase) { DARABONBA_PTR_SET_VALUE(instancePhase_, instancePhase) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline ResourceInstance& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // instanceSystemDiskSize Field Functions 
    bool hasInstanceSystemDiskSize() const { return this->instanceSystemDiskSize_ != nullptr;};
    void deleteInstanceSystemDiskSize() { this->instanceSystemDiskSize_ = nullptr;};
    inline int32_t getInstanceSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(instanceSystemDiskSize_, 0) };
    inline ResourceInstance& setInstanceSystemDiskSize(int32_t instanceSystemDiskSize) { DARABONBA_PTR_SET_VALUE(instanceSystemDiskSize_, instanceSystemDiskSize) };


    // instanceTenantIp Field Functions 
    bool hasInstanceTenantIp() const { return this->instanceTenantIp_ != nullptr;};
    void deleteInstanceTenantIp() { this->instanceTenantIp_ = nullptr;};
    inline string getInstanceTenantIp() const { DARABONBA_PTR_GET_DEFAULT(instanceTenantIp_, "") };
    inline ResourceInstance& setInstanceTenantIp(string instanceTenantIp) { DARABONBA_PTR_SET_VALUE(instanceTenantIp_, instanceTenantIp) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ResourceInstance& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceUsedCpu Field Functions 
    bool hasInstanceUsedCpu() const { return this->instanceUsedCpu_ != nullptr;};
    void deleteInstanceUsedCpu() { this->instanceUsedCpu_ = nullptr;};
    inline float getInstanceUsedCpu() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedCpu_, 0.0) };
    inline ResourceInstance& setInstanceUsedCpu(float instanceUsedCpu) { DARABONBA_PTR_SET_VALUE(instanceUsedCpu_, instanceUsedCpu) };


    // instanceUsedGpu Field Functions 
    bool hasInstanceUsedGpu() const { return this->instanceUsedGpu_ != nullptr;};
    void deleteInstanceUsedGpu() { this->instanceUsedGpu_ = nullptr;};
    inline float getInstanceUsedGpu() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedGpu_, 0.0) };
    inline ResourceInstance& setInstanceUsedGpu(float instanceUsedGpu) { DARABONBA_PTR_SET_VALUE(instanceUsedGpu_, instanceUsedGpu) };


    // instanceUsedGpuMemory Field Functions 
    bool hasInstanceUsedGpuMemory() const { return this->instanceUsedGpuMemory_ != nullptr;};
    void deleteInstanceUsedGpuMemory() { this->instanceUsedGpuMemory_ = nullptr;};
    inline string getInstanceUsedGpuMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedGpuMemory_, "") };
    inline ResourceInstance& setInstanceUsedGpuMemory(string instanceUsedGpuMemory) { DARABONBA_PTR_SET_VALUE(instanceUsedGpuMemory_, instanceUsedGpuMemory) };


    // instanceUsedMemory Field Functions 
    bool hasInstanceUsedMemory() const { return this->instanceUsedMemory_ != nullptr;};
    void deleteInstanceUsedMemory() { this->instanceUsedMemory_ = nullptr;};
    inline string getInstanceUsedMemory() const { DARABONBA_PTR_GET_DEFAULT(instanceUsedMemory_, "") };
    inline ResourceInstance& setInstanceUsedMemory(string instanceUsedMemory) { DARABONBA_PTR_SET_VALUE(instanceUsedMemory_, instanceUsedMemory) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ResourceInstance::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ResourceInstance::Labels>) };
    inline vector<ResourceInstance::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<ResourceInstance::Labels>) };
    inline ResourceInstance& setLabels(const vector<ResourceInstance::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline ResourceInstance& setLabels(vector<ResourceInstance::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // lastCordonOperator Field Functions 
    bool hasLastCordonOperator() const { return this->lastCordonOperator_ != nullptr;};
    void deleteLastCordonOperator() { this->lastCordonOperator_ = nullptr;};
    inline string getLastCordonOperator() const { DARABONBA_PTR_GET_DEFAULT(lastCordonOperator_, "") };
    inline ResourceInstance& setLastCordonOperator(string lastCordonOperator) { DARABONBA_PTR_SET_VALUE(lastCordonOperator_, lastCordonOperator) };


    // lastCordonReason Field Functions 
    bool hasLastCordonReason() const { return this->lastCordonReason_ != nullptr;};
    void deleteLastCordonReason() { this->lastCordonReason_ = nullptr;};
    inline string getLastCordonReason() const { DARABONBA_PTR_GET_DEFAULT(lastCordonReason_, "") };
    inline ResourceInstance& setLastCordonReason(string lastCordonReason) { DARABONBA_PTR_SET_VALUE(lastCordonReason_, lastCordonReason) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ResourceInstance& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ResourceInstance& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // zone Field Functions 
    bool hasZone() const { return this->zone_ != nullptr;};
    void deleteZone() { this->zone_ = nullptr;};
    inline string getZone() const { DARABONBA_PTR_GET_DEFAULT(zone_, "") };
    inline ResourceInstance& setZone(string zone) { DARABONBA_PTR_SET_VALUE(zone_, zone) };


  protected:
    shared_ptr<string> arch_ {};
    shared_ptr<bool> autoRenewal_ {};
    shared_ptr<string> chargeType_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> expiredTime_ {};
    shared_ptr<int32_t> instanceCpuCount_ {};
    shared_ptr<int32_t> instanceGpuCount_ {};
    shared_ptr<string> instanceGpuMemory_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> instanceIp_ {};
    shared_ptr<string> instanceMemory_ {};
    shared_ptr<string> instanceName_ {};
    shared_ptr<string> instancePhase_ {};
    shared_ptr<string> instanceStatus_ {};
    shared_ptr<int32_t> instanceSystemDiskSize_ {};
    shared_ptr<string> instanceTenantIp_ {};
    shared_ptr<string> instanceType_ {};
    shared_ptr<float> instanceUsedCpu_ {};
    shared_ptr<float> instanceUsedGpu_ {};
    shared_ptr<string> instanceUsedGpuMemory_ {};
    shared_ptr<string> instanceUsedMemory_ {};
    shared_ptr<vector<ResourceInstance::Labels>> labels_ {};
    shared_ptr<string> lastCordonOperator_ {};
    shared_ptr<string> lastCordonReason_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> zone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eas20210701
#endif
