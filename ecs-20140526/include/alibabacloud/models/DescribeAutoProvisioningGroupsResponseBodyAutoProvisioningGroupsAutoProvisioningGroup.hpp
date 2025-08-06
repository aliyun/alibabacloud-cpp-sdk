// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPSAUTOPROVISIONINGGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODYAUTOPROVISIONINGGROUPSAUTOPROVISIONINGGROUP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags.hpp>
#include <alibabacloud/models/DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupType, autoProvisioningGroupType_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateConfigs, launchTemplateConfigs_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoOptions, payAsYouGoOptions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SpotOptions, spotOptions_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TargetCapacitySpecification, targetCapacitySpecification_);
      DARABONBA_PTR_TO_JSON(TerminateInstances, terminateInstances_);
      DARABONBA_PTR_TO_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_TO_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupId, autoProvisioningGroupId_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupType, autoProvisioningGroupType_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateConfigs, launchTemplateConfigs_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoOptions, payAsYouGoOptions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SpotOptions, spotOptions_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TargetCapacitySpecification, targetCapacitySpecification_);
      DARABONBA_PTR_FROM_JSON(TerminateInstances, terminateInstances_);
      DARABONBA_PTR_FROM_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_FROM_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
    };
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup &&) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup() = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& operator=(const DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup &) = default ;
    DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& operator=(DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoProvisioningGroupId_ != nullptr
        && this->autoProvisioningGroupName_ != nullptr && this->autoProvisioningGroupType_ != nullptr && this->creationTime_ != nullptr && this->excessCapacityTerminationPolicy_ != nullptr && this->launchTemplateConfigs_ != nullptr
        && this->launchTemplateId_ != nullptr && this->launchTemplateVersion_ != nullptr && this->maxSpotPrice_ != nullptr && this->payAsYouGoOptions_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->spotOptions_ != nullptr && this->state_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->targetCapacitySpecification_ != nullptr && this->terminateInstances_ != nullptr && this->terminateInstancesWithExpiration_ != nullptr && this->validFrom_ != nullptr && this->validUntil_ != nullptr; };
    // autoProvisioningGroupId Field Functions 
    bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
    void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
    inline string autoProvisioningGroupId() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupId_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setAutoProvisioningGroupId(string autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


    // autoProvisioningGroupName Field Functions 
    bool hasAutoProvisioningGroupName() const { return this->autoProvisioningGroupName_ != nullptr;};
    void deleteAutoProvisioningGroupName() { this->autoProvisioningGroupName_ = nullptr;};
    inline string autoProvisioningGroupName() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupName_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setAutoProvisioningGroupName(string autoProvisioningGroupName) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupName_, autoProvisioningGroupName) };


    // autoProvisioningGroupType Field Functions 
    bool hasAutoProvisioningGroupType() const { return this->autoProvisioningGroupType_ != nullptr;};
    void deleteAutoProvisioningGroupType() { this->autoProvisioningGroupType_ = nullptr;};
    inline string autoProvisioningGroupType() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupType_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setAutoProvisioningGroupType(string autoProvisioningGroupType) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupType_, autoProvisioningGroupType) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // excessCapacityTerminationPolicy Field Functions 
    bool hasExcessCapacityTerminationPolicy() const { return this->excessCapacityTerminationPolicy_ != nullptr;};
    void deleteExcessCapacityTerminationPolicy() { this->excessCapacityTerminationPolicy_ = nullptr;};
    inline string excessCapacityTerminationPolicy() const { DARABONBA_PTR_GET_DEFAULT(excessCapacityTerminationPolicy_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setExcessCapacityTerminationPolicy(string excessCapacityTerminationPolicy) { DARABONBA_PTR_SET_VALUE(excessCapacityTerminationPolicy_, excessCapacityTerminationPolicy) };


    // launchTemplateConfigs Field Functions 
    bool hasLaunchTemplateConfigs() const { return this->launchTemplateConfigs_ != nullptr;};
    void deleteLaunchTemplateConfigs() { this->launchTemplateConfigs_ = nullptr;};
    inline const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs & launchTemplateConfigs() const { DARABONBA_PTR_GET_CONST(launchTemplateConfigs_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs) };
    inline Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs launchTemplateConfigs() { DARABONBA_PTR_GET(launchTemplateConfigs_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setLaunchTemplateConfigs(const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs & launchTemplateConfigs) { DARABONBA_PTR_SET_VALUE(launchTemplateConfigs_, launchTemplateConfigs) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setLaunchTemplateConfigs(Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs && launchTemplateConfigs) { DARABONBA_PTR_SET_RVALUE(launchTemplateConfigs_, launchTemplateConfigs) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string launchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string launchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxSpotPrice Field Functions 
    bool hasMaxSpotPrice() const { return this->maxSpotPrice_ != nullptr;};
    void deleteMaxSpotPrice() { this->maxSpotPrice_ = nullptr;};
    inline float maxSpotPrice() const { DARABONBA_PTR_GET_DEFAULT(maxSpotPrice_, 0.0) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setMaxSpotPrice(float maxSpotPrice) { DARABONBA_PTR_SET_VALUE(maxSpotPrice_, maxSpotPrice) };


    // payAsYouGoOptions Field Functions 
    bool hasPayAsYouGoOptions() const { return this->payAsYouGoOptions_ != nullptr;};
    void deletePayAsYouGoOptions() { this->payAsYouGoOptions_ = nullptr;};
    inline const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions & payAsYouGoOptions() const { DARABONBA_PTR_GET_CONST(payAsYouGoOptions_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions) };
    inline Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions payAsYouGoOptions() { DARABONBA_PTR_GET(payAsYouGoOptions_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setPayAsYouGoOptions(const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions & payAsYouGoOptions) { DARABONBA_PTR_SET_VALUE(payAsYouGoOptions_, payAsYouGoOptions) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setPayAsYouGoOptions(Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions && payAsYouGoOptions) { DARABONBA_PTR_SET_RVALUE(payAsYouGoOptions_, payAsYouGoOptions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spotOptions Field Functions 
    bool hasSpotOptions() const { return this->spotOptions_ != nullptr;};
    void deleteSpotOptions() { this->spotOptions_ = nullptr;};
    inline const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions & spotOptions() const { DARABONBA_PTR_GET_CONST(spotOptions_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions) };
    inline Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions spotOptions() { DARABONBA_PTR_GET(spotOptions_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setSpotOptions(const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions & spotOptions) { DARABONBA_PTR_SET_VALUE(spotOptions_, spotOptions) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setSpotOptions(Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions && spotOptions) { DARABONBA_PTR_SET_RVALUE(spotOptions_, spotOptions) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags) };
    inline Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setTags(const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setTags(Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // targetCapacitySpecification Field Functions 
    bool hasTargetCapacitySpecification() const { return this->targetCapacitySpecification_ != nullptr;};
    void deleteTargetCapacitySpecification() { this->targetCapacitySpecification_ = nullptr;};
    inline const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification & targetCapacitySpecification() const { DARABONBA_PTR_GET_CONST(targetCapacitySpecification_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification) };
    inline Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification targetCapacitySpecification() { DARABONBA_PTR_GET(targetCapacitySpecification_, Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setTargetCapacitySpecification(const Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification & targetCapacitySpecification) { DARABONBA_PTR_SET_VALUE(targetCapacitySpecification_, targetCapacitySpecification) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setTargetCapacitySpecification(Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification && targetCapacitySpecification) { DARABONBA_PTR_SET_RVALUE(targetCapacitySpecification_, targetCapacitySpecification) };


    // terminateInstances Field Functions 
    bool hasTerminateInstances() const { return this->terminateInstances_ != nullptr;};
    void deleteTerminateInstances() { this->terminateInstances_ = nullptr;};
    inline bool terminateInstances() const { DARABONBA_PTR_GET_DEFAULT(terminateInstances_, false) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setTerminateInstances(bool terminateInstances) { DARABONBA_PTR_SET_VALUE(terminateInstances_, terminateInstances) };


    // terminateInstancesWithExpiration Field Functions 
    bool hasTerminateInstancesWithExpiration() const { return this->terminateInstancesWithExpiration_ != nullptr;};
    void deleteTerminateInstancesWithExpiration() { this->terminateInstancesWithExpiration_ = nullptr;};
    inline bool terminateInstancesWithExpiration() const { DARABONBA_PTR_GET_DEFAULT(terminateInstancesWithExpiration_, false) };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) { DARABONBA_PTR_SET_VALUE(terminateInstancesWithExpiration_, terminateInstancesWithExpiration) };


    // validFrom Field Functions 
    bool hasValidFrom() const { return this->validFrom_ != nullptr;};
    void deleteValidFrom() { this->validFrom_ = nullptr;};
    inline string validFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setValidFrom(string validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string validUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroup& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


  protected:
    // The ID of the auto provisioning group.
    std::shared_ptr<string> autoProvisioningGroupId_ = nullptr;
    // The name of the auto provisioning group.
    std::shared_ptr<string> autoProvisioningGroupName_ = nullptr;
    // The delivery type of the auto provisioning group. Valid values:
    // 
    // *   request: one-time delivery. When the auto provisioning group is started, it delivers instances only once. If the instances fail to be delivered, the auto provisioning group does not retry the delivery.
    // *   maintain: continuous delivery. When the auto provisioning group is started, it attempts to deliver instances that meet the target capacity and monitors the real-time capacity. If the target capacity of the auto provisioning group is not reached, the auto provisioning group continues to create instances until the target capacity is reached.
    std::shared_ptr<string> autoProvisioningGroupType_ = nullptr;
    // The time when the auto provisioning group was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // Indicates whether to release the scaled-in instances when the real-time capacity of the auto provisioning group exceeds the target capacity and the group is triggered to scale in. Valid values:
    // 
    // *   termination: releases the scaled-in instances.
    // *   no-termination: only removes the scaled-in instances from the auto provisioning group but does not release the instances.
    std::shared_ptr<string> excessCapacityTerminationPolicy_ = nullptr;
    // Details about the extended configurations.
    std::shared_ptr<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupLaunchTemplateConfigs> launchTemplateConfigs_ = nullptr;
    // The ID of the launch template associated with the auto provisioning group.
    std::shared_ptr<string> launchTemplateId_ = nullptr;
    // The version of the launch template associated with the auto provisioning group.
    std::shared_ptr<string> launchTemplateVersion_ = nullptr;
    // The maximum price of spot  instances in the auto provisioning group.
    // 
    // >  When both the MaxSpotPrice and LaunchTemplateConfig.N.MaxPrice parameters are specified, the smaller one of the two parameter values is used.
    // 
    // The LaunchTemplateConfig.N.Priority parameter is set when the auto provisioning group is created, and cannot be modified.
    std::shared_ptr<float> maxSpotPrice_ = nullptr;
    // The policies related to pay-as-you-go instances.
    std::shared_ptr<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupPayAsYouGoOptions> payAsYouGoOptions_ = nullptr;
    // The region ID of the auto provisioning group.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the auto provisioning group belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The policy related to spot instances.
    std::shared_ptr<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupSpotOptions> spotOptions_ = nullptr;
    // The overall status of instance scheduling in the auto provisioning group. Valid values:
    // 
    // *   fulfilled: Scheduling was complete and the instances were delivered.
    // *   pending-fulfillment: The instances were being created.
    // *   pending-termination: The instances were being removed.
    // *   error: An exception occurred during scheduling and the instances were not delivered.
    std::shared_ptr<string> state_ = nullptr;
    // The status of the auto provisioning group. Valid values:
    // 
    // *   submitted: The auto provisioning group was created but did not execute scheduling tasks.
    // *   active: The auto provisioning group was executing scheduling tasks.
    // *   deleted: The auto provisioning group was deleted.
    // *   delete-running: The auto provisioning group was being deleted.
    // *   modifying: The auto provisioning group was being modified.
    std::shared_ptr<string> status_ = nullptr;
    // The tags that are added to the auto provisioning group.
    std::shared_ptr<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTags> tags_ = nullptr;
    // The settings of the target capacity of the auto provisioning group.
    std::shared_ptr<Models::DescribeAutoProvisioningGroupsResponseBodyAutoProvisioningGroupsAutoProvisioningGroupTargetCapacitySpecification> targetCapacitySpecification_ = nullptr;
    // Indicates whether to release instances in the auto provisioning group when the auto provisioning group is deleted. Valid values:
    // 
    // *   true: releases the instances.
    // *   false: only removes the instances from the auto provisioning group but does not release the instances.
    std::shared_ptr<bool> terminateInstances_ = nullptr;
    // Indicates whether to release instances in the auto provisioning group when the group expires. Valid values:
    // 
    // *   true: releases the instances.
    // *   false: only removes the instances from the auto provisioning group but does not release the instances.
    std::shared_ptr<bool> terminateInstancesWithExpiration_ = nullptr;
    // The time at which the auto provisioning group is started. The provisioning group is effective until the point in time specified by `ValidUntil`.
    std::shared_ptr<string> validFrom_ = nullptr;
    // The time at which the auto provisioning group expires. The period of time between this point in time and the point in time specified by the `ValidFrom` parameter is the validity period of the auto provisioning group.
    std::shared_ptr<string> validUntil_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
