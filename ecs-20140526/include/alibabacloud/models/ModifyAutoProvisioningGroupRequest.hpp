// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOPROVISIONINGGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOPROVISIONINGGROUPREQUEST_HPP_
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
  class ModifyAutoProvisioningGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoProvisioningGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_TO_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_TO_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateConfig, launchTemplateConfig_);
      DARABONBA_PTR_TO_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_TO_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_TO_JSON(TotalTargetCapacity, totalTargetCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoProvisioningGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_FROM_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_FROM_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateConfig, launchTemplateConfig_);
      DARABONBA_PTR_FROM_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_FROM_JSON(TotalTargetCapacity, totalTargetCapacity_);
    };
    ModifyAutoProvisioningGroupRequest() = default ;
    ModifyAutoProvisioningGroupRequest(const ModifyAutoProvisioningGroupRequest &) = default ;
    ModifyAutoProvisioningGroupRequest(ModifyAutoProvisioningGroupRequest &&) = default ;
    ModifyAutoProvisioningGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoProvisioningGroupRequest() = default ;
    ModifyAutoProvisioningGroupRequest& operator=(const ModifyAutoProvisioningGroupRequest &) = default ;
    ModifyAutoProvisioningGroupRequest& operator=(ModifyAutoProvisioningGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchTemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
      };
      LaunchTemplateConfig() = default ;
      LaunchTemplateConfig(const LaunchTemplateConfig &) = default ;
      LaunchTemplateConfig(LaunchTemplateConfig &&) = default ;
      LaunchTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchTemplateConfig() = default ;
      LaunchTemplateConfig& operator=(const LaunchTemplateConfig &) = default ;
      LaunchTemplateConfig& operator=(LaunchTemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->maxPrice_ == nullptr && this->priority_ == nullptr && this->vSwitchId_ == nullptr && this->weightedCapacity_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline LaunchTemplateConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // maxPrice Field Functions 
      bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
      void deleteMaxPrice() { this->maxPrice_ = nullptr;};
      inline double getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
      inline LaunchTemplateConfig& setMaxPrice(double maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline LaunchTemplateConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline LaunchTemplateConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // weightedCapacity Field Functions 
      bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
      void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
      inline double getWeightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0.0) };
      inline LaunchTemplateConfig& setWeightedCapacity(double weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


    protected:
      // The instance type in extended configuration N. Valid values of N: 1 to 20. For more information about the valid values of this parameter, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> instanceType_ {};
      // The maximum price of spot instances in extended configuration N.
      shared_ptr<double> maxPrice_ {};
      // The priority of extended configuration N. A value of 0 indicates the highest priority. The value must be greater than 0.
      shared_ptr<int32_t> priority_ {};
      // The ID of the vSwitch in extended configuration N. The zone of the instances created from the extended configuration is determined by the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // The weight of the instance type specified in the extended configuration. A greater weight indicates that a single instance has more computing power and fewer instances are required. The value must be greater than 0.
      // 
      // The weight is calculated based on the computing power of the instance type and the minimum computing power of a single instance in the cluster that can created by the auto-provisioning group. For example, assume that the minimum computing power of a single instance is 8 vCPUs and 60 GiB of memory.
      // 
      // *   For an instance type with 8 vCPUs and 60 GiB of memory, you can set the weight to 1.
      // *   For an instance type with 16 vCPUs and 120 GiB of memory, you can set the weight to 2.
      shared_ptr<double> weightedCapacity_ {};
    };

    virtual bool empty() const override { return this->autoProvisioningGroupId_ == nullptr
        && this->autoProvisioningGroupName_ == nullptr && this->defaultTargetCapacityType_ == nullptr && this->excessCapacityTerminationPolicy_ == nullptr && this->launchTemplateConfig_ == nullptr && this->maxSpotPrice_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payAsYouGoTargetCapacity_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->spotTargetCapacity_ == nullptr && this->terminateInstancesWithExpiration_ == nullptr && this->totalTargetCapacity_ == nullptr; };
    // autoProvisioningGroupId Field Functions 
    bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
    void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
    inline string getAutoProvisioningGroupId() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupId_, "") };
    inline ModifyAutoProvisioningGroupRequest& setAutoProvisioningGroupId(string autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


    // autoProvisioningGroupName Field Functions 
    bool hasAutoProvisioningGroupName() const { return this->autoProvisioningGroupName_ != nullptr;};
    void deleteAutoProvisioningGroupName() { this->autoProvisioningGroupName_ = nullptr;};
    inline string getAutoProvisioningGroupName() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupName_, "") };
    inline ModifyAutoProvisioningGroupRequest& setAutoProvisioningGroupName(string autoProvisioningGroupName) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupName_, autoProvisioningGroupName) };


    // defaultTargetCapacityType Field Functions 
    bool hasDefaultTargetCapacityType() const { return this->defaultTargetCapacityType_ != nullptr;};
    void deleteDefaultTargetCapacityType() { this->defaultTargetCapacityType_ = nullptr;};
    inline string getDefaultTargetCapacityType() const { DARABONBA_PTR_GET_DEFAULT(defaultTargetCapacityType_, "") };
    inline ModifyAutoProvisioningGroupRequest& setDefaultTargetCapacityType(string defaultTargetCapacityType) { DARABONBA_PTR_SET_VALUE(defaultTargetCapacityType_, defaultTargetCapacityType) };


    // excessCapacityTerminationPolicy Field Functions 
    bool hasExcessCapacityTerminationPolicy() const { return this->excessCapacityTerminationPolicy_ != nullptr;};
    void deleteExcessCapacityTerminationPolicy() { this->excessCapacityTerminationPolicy_ = nullptr;};
    inline string getExcessCapacityTerminationPolicy() const { DARABONBA_PTR_GET_DEFAULT(excessCapacityTerminationPolicy_, "") };
    inline ModifyAutoProvisioningGroupRequest& setExcessCapacityTerminationPolicy(string excessCapacityTerminationPolicy) { DARABONBA_PTR_SET_VALUE(excessCapacityTerminationPolicy_, excessCapacityTerminationPolicy) };


    // launchTemplateConfig Field Functions 
    bool hasLaunchTemplateConfig() const { return this->launchTemplateConfig_ != nullptr;};
    void deleteLaunchTemplateConfig() { this->launchTemplateConfig_ = nullptr;};
    inline const vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig> & getLaunchTemplateConfig() const { DARABONBA_PTR_GET_CONST(launchTemplateConfig_, vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig>) };
    inline vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig> getLaunchTemplateConfig() { DARABONBA_PTR_GET(launchTemplateConfig_, vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig>) };
    inline ModifyAutoProvisioningGroupRequest& setLaunchTemplateConfig(const vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig> & launchTemplateConfig) { DARABONBA_PTR_SET_VALUE(launchTemplateConfig_, launchTemplateConfig) };
    inline ModifyAutoProvisioningGroupRequest& setLaunchTemplateConfig(vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig> && launchTemplateConfig) { DARABONBA_PTR_SET_RVALUE(launchTemplateConfig_, launchTemplateConfig) };


    // maxSpotPrice Field Functions 
    bool hasMaxSpotPrice() const { return this->maxSpotPrice_ != nullptr;};
    void deleteMaxSpotPrice() { this->maxSpotPrice_ = nullptr;};
    inline float getMaxSpotPrice() const { DARABONBA_PTR_GET_DEFAULT(maxSpotPrice_, 0.0) };
    inline ModifyAutoProvisioningGroupRequest& setMaxSpotPrice(float maxSpotPrice) { DARABONBA_PTR_SET_VALUE(maxSpotPrice_, maxSpotPrice) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyAutoProvisioningGroupRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyAutoProvisioningGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payAsYouGoTargetCapacity Field Functions 
    bool hasPayAsYouGoTargetCapacity() const { return this->payAsYouGoTargetCapacity_ != nullptr;};
    void deletePayAsYouGoTargetCapacity() { this->payAsYouGoTargetCapacity_ = nullptr;};
    inline string getPayAsYouGoTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoTargetCapacity_, "") };
    inline ModifyAutoProvisioningGroupRequest& setPayAsYouGoTargetCapacity(string payAsYouGoTargetCapacity) { DARABONBA_PTR_SET_VALUE(payAsYouGoTargetCapacity_, payAsYouGoTargetCapacity) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyAutoProvisioningGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyAutoProvisioningGroupRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyAutoProvisioningGroupRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // spotTargetCapacity Field Functions 
    bool hasSpotTargetCapacity() const { return this->spotTargetCapacity_ != nullptr;};
    void deleteSpotTargetCapacity() { this->spotTargetCapacity_ = nullptr;};
    inline string getSpotTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotTargetCapacity_, "") };
    inline ModifyAutoProvisioningGroupRequest& setSpotTargetCapacity(string spotTargetCapacity) { DARABONBA_PTR_SET_VALUE(spotTargetCapacity_, spotTargetCapacity) };


    // terminateInstancesWithExpiration Field Functions 
    bool hasTerminateInstancesWithExpiration() const { return this->terminateInstancesWithExpiration_ != nullptr;};
    void deleteTerminateInstancesWithExpiration() { this->terminateInstancesWithExpiration_ = nullptr;};
    inline bool getTerminateInstancesWithExpiration() const { DARABONBA_PTR_GET_DEFAULT(terminateInstancesWithExpiration_, false) };
    inline ModifyAutoProvisioningGroupRequest& setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) { DARABONBA_PTR_SET_VALUE(terminateInstancesWithExpiration_, terminateInstancesWithExpiration) };


    // totalTargetCapacity Field Functions 
    bool hasTotalTargetCapacity() const { return this->totalTargetCapacity_ != nullptr;};
    void deleteTotalTargetCapacity() { this->totalTargetCapacity_ = nullptr;};
    inline string getTotalTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalTargetCapacity_, "") };
    inline ModifyAutoProvisioningGroupRequest& setTotalTargetCapacity(string totalTargetCapacity) { DARABONBA_PTR_SET_VALUE(totalTargetCapacity_, totalTargetCapacity) };


  protected:
    // The auto-provisioning group ID.
    shared_ptr<string> autoProvisioningGroupId_ {};
    // The name of the auto-provisioning group. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with http:// or https://.[ It can contain letters, digits, colons (:), underscores (_), and hyphens (-).](http://https://。、（:）、（_）（-）。)
    shared_ptr<string> autoProvisioningGroupName_ {};
    // The type of supplemental instances. When the sum of the PayAsYouGoTargetCapacity and SpotTargetCapacity values is smaller than the TotalTargetCapacity value, the auto-provisioning group creates instances of the specified type to meet the target capacity. Valid values:
    // 
    // *   PayAsYouGo: pay-as-you-go instances
    // *   Spot: spot instances
    shared_ptr<string> defaultTargetCapacityType_ {};
    // Specifies whether to release the removed instances when the real-time capacity of the auto-provisioning group exceeds the target capacity and a scale-in event is triggered. Valid values:
    // 
    // *   termination: releases the removed instances.
    // *   no-termination: removes the instances from the auto-provisioning group but does not release them.
    shared_ptr<string> excessCapacityTerminationPolicy_ {};
    // The extended configurations of the launch template.
    shared_ptr<vector<ModifyAutoProvisioningGroupRequest::LaunchTemplateConfig>> launchTemplateConfig_ {};
    // The maximum price of spot instances in the auto-provisioning group.
    // 
    // > When both the MaxSpotPrice and LaunchTemplateConfig.N.MaxPrice parameters are specified, the smaller one of the two parameter values is used. The LaunchTemplateConfig.N.MaxPrice parameter is specified when the auto-provisioning group is created, and cannot be modified.
    shared_ptr<float> maxSpotPrice_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The target capacity of pay-as-you-go instances in the auto-provisioning group. Valid values: Set this parameter to a value smaller than the TotalTargetCapacity value.
    shared_ptr<string> payAsYouGoTargetCapacity_ {};
    // The region ID of the auto-provisioning group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The target capacity of spot instances in the auto-provisioning group. Valid values: Set this parameter to a value smaller than the TotalTargetCapacity value.
    shared_ptr<string> spotTargetCapacity_ {};
    // Specifies whether to release instances that are located in the auto-provisioning group after the group expires. Valid values:
    // 
    // *   true: releases instances that are located in the auto-provisioning group.
    // *   false: removes instances from the auto-provisioning group but does not release them.
    shared_ptr<bool> terminateInstancesWithExpiration_ {};
    // The total target capacity of the auto-provisioning group. The value must be a positive integer.
    // 
    // The total target capacity of the auto-provisioning group must be greater than or equal to the sum of the target capacity of pay-as-you-go instances specified by the PayAsYouGoTargetCapacity parameter as well as the target capacity of spot instances specified by the SpotTargetCapacity parameter.
    shared_ptr<string> totalTargetCapacity_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
