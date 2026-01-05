// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPSRESPONSEBODY_HPP_
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
  class DescribeAutoProvisioningGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroups, autoProvisioningGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroups, autoProvisioningGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoProvisioningGroupsResponseBody() = default ;
    DescribeAutoProvisioningGroupsResponseBody(const DescribeAutoProvisioningGroupsResponseBody &) = default ;
    DescribeAutoProvisioningGroupsResponseBody(DescribeAutoProvisioningGroupsResponseBody &&) = default ;
    DescribeAutoProvisioningGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupsResponseBody() = default ;
    DescribeAutoProvisioningGroupsResponseBody& operator=(const DescribeAutoProvisioningGroupsResponseBody &) = default ;
    DescribeAutoProvisioningGroupsResponseBody& operator=(DescribeAutoProvisioningGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoProvisioningGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoProvisioningGroups& obj) { 
        DARABONBA_PTR_TO_JSON(AutoProvisioningGroup, autoProvisioningGroup_);
      };
      friend void from_json(const Darabonba::Json& j, AutoProvisioningGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoProvisioningGroup, autoProvisioningGroup_);
      };
      AutoProvisioningGroups() = default ;
      AutoProvisioningGroups(const AutoProvisioningGroups &) = default ;
      AutoProvisioningGroups(AutoProvisioningGroups &&) = default ;
      AutoProvisioningGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoProvisioningGroups() = default ;
      AutoProvisioningGroups& operator=(const AutoProvisioningGroups &) = default ;
      AutoProvisioningGroups& operator=(AutoProvisioningGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoProvisioningGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoProvisioningGroup& obj) { 
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
        friend void from_json(const Darabonba::Json& j, AutoProvisioningGroup& obj) { 
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
        AutoProvisioningGroup() = default ;
        AutoProvisioningGroup(const AutoProvisioningGroup &) = default ;
        AutoProvisioningGroup(AutoProvisioningGroup &&) = default ;
        AutoProvisioningGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoProvisioningGroup() = default ;
        AutoProvisioningGroup& operator=(const AutoProvisioningGroup &) = default ;
        AutoProvisioningGroup& operator=(AutoProvisioningGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TargetCapacitySpecification : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TargetCapacitySpecification& obj) { 
            DARABONBA_PTR_TO_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
            DARABONBA_PTR_TO_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
            DARABONBA_PTR_TO_JSON(SpotTargetCapacity, spotTargetCapacity_);
            DARABONBA_PTR_TO_JSON(TotalTargetCapacity, totalTargetCapacity_);
          };
          friend void from_json(const Darabonba::Json& j, TargetCapacitySpecification& obj) { 
            DARABONBA_PTR_FROM_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
            DARABONBA_PTR_FROM_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
            DARABONBA_PTR_FROM_JSON(SpotTargetCapacity, spotTargetCapacity_);
            DARABONBA_PTR_FROM_JSON(TotalTargetCapacity, totalTargetCapacity_);
          };
          TargetCapacitySpecification() = default ;
          TargetCapacitySpecification(const TargetCapacitySpecification &) = default ;
          TargetCapacitySpecification(TargetCapacitySpecification &&) = default ;
          TargetCapacitySpecification(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TargetCapacitySpecification() = default ;
          TargetCapacitySpecification& operator=(const TargetCapacitySpecification &) = default ;
          TargetCapacitySpecification& operator=(TargetCapacitySpecification &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->defaultTargetCapacityType_ == nullptr
        && this->payAsYouGoTargetCapacity_ == nullptr && this->spotTargetCapacity_ == nullptr && this->totalTargetCapacity_ == nullptr; };
          // defaultTargetCapacityType Field Functions 
          bool hasDefaultTargetCapacityType() const { return this->defaultTargetCapacityType_ != nullptr;};
          void deleteDefaultTargetCapacityType() { this->defaultTargetCapacityType_ = nullptr;};
          inline string getDefaultTargetCapacityType() const { DARABONBA_PTR_GET_DEFAULT(defaultTargetCapacityType_, "") };
          inline TargetCapacitySpecification& setDefaultTargetCapacityType(string defaultTargetCapacityType) { DARABONBA_PTR_SET_VALUE(defaultTargetCapacityType_, defaultTargetCapacityType) };


          // payAsYouGoTargetCapacity Field Functions 
          bool hasPayAsYouGoTargetCapacity() const { return this->payAsYouGoTargetCapacity_ != nullptr;};
          void deletePayAsYouGoTargetCapacity() { this->payAsYouGoTargetCapacity_ = nullptr;};
          inline float getPayAsYouGoTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoTargetCapacity_, 0.0) };
          inline TargetCapacitySpecification& setPayAsYouGoTargetCapacity(float payAsYouGoTargetCapacity) { DARABONBA_PTR_SET_VALUE(payAsYouGoTargetCapacity_, payAsYouGoTargetCapacity) };


          // spotTargetCapacity Field Functions 
          bool hasSpotTargetCapacity() const { return this->spotTargetCapacity_ != nullptr;};
          void deleteSpotTargetCapacity() { this->spotTargetCapacity_ = nullptr;};
          inline float getSpotTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotTargetCapacity_, 0.0) };
          inline TargetCapacitySpecification& setSpotTargetCapacity(float spotTargetCapacity) { DARABONBA_PTR_SET_VALUE(spotTargetCapacity_, spotTargetCapacity) };


          // totalTargetCapacity Field Functions 
          bool hasTotalTargetCapacity() const { return this->totalTargetCapacity_ != nullptr;};
          void deleteTotalTargetCapacity() { this->totalTargetCapacity_ = nullptr;};
          inline float getTotalTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalTargetCapacity_, 0.0) };
          inline TargetCapacitySpecification& setTotalTargetCapacity(float totalTargetCapacity) { DARABONBA_PTR_SET_VALUE(totalTargetCapacity_, totalTargetCapacity) };


        protected:
          // The type of supplemental instances. When the sum of the `PayAsYouGoTargetCapacity` and `SpotTargetCapacity` values is less than the `TotalTargetCapacity` value, the auto provisioning group creates instances of the specified billing method to meet the target capacity. Valid values:
          // 
          // *   PayAsYouGo: pay-as-you-go instances.
          // *   Spot: spot instances.
          shared_ptr<string> defaultTargetCapacityType_ {};
          // The target capacity of pay-as-you-go instances that the auto provisioning group provisions.
          shared_ptr<float> payAsYouGoTargetCapacity_ {};
          // The target capacity of spot instances that the auto provisioning group provisions.
          shared_ptr<float> spotTargetCapacity_ {};
          // The target capacity of the auto provisioning group. The capacity consists of the following parts:
          // 
          // *   PayAsYouGoTargetCapacity
          // *   SpotTargetCapacity
          // *   The supplemental capacity besides instance capacities specified by PayAsYouGoTargetCapacity and SpotTargetCapacity.
          shared_ptr<float> totalTargetCapacity_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          Tags() = default ;
          Tags(const Tags &) = default ;
          Tags(Tags &&) = default ;
          Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tags() = default ;
          Tags& operator=(const Tags &) = default ;
          Tags& operator=(Tags &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tag : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tag& obj) { 
              DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
              DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
            };
            friend void from_json(const Darabonba::Json& j, Tag& obj) { 
              DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
              DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
            };
            Tag() = default ;
            Tag(const Tag &) = default ;
            Tag(Tag &&) = default ;
            Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Tag() = default ;
            Tag& operator=(const Tag &) = default ;
            Tag& operator=(Tag &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
            // tagKey Field Functions 
            bool hasTagKey() const { return this->tagKey_ != nullptr;};
            void deleteTagKey() { this->tagKey_ = nullptr;};
            inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
            inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


            // tagValue Field Functions 
            bool hasTagValue() const { return this->tagValue_ != nullptr;};
            void deleteTagValue() { this->tagValue_ = nullptr;};
            inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
            inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


          protected:
            // The key of tag N that is added to the auto provisioning group.
            // 
            // Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain http:// or https://. The tag key cannot start with acs: or aliyun.
            shared_ptr<string> tagKey_ {};
            // The value of tag N that is added to the auto provisioning group.
            // 
            // Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain http:// or https://.
            shared_ptr<string> tagValue_ {};
          };

          virtual bool empty() const override { return this->tag_ == nullptr; };
          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
          inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
          inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
          inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


        protected:
          shared_ptr<vector<Tags::Tag>> tag_ {};
        };

        class SpotOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SpotOptions& obj) { 
            DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
            DARABONBA_PTR_TO_JSON(InstanceInterruptionBehavior, instanceInterruptionBehavior_);
            DARABONBA_PTR_TO_JSON(InstancePoolsToUseCount, instancePoolsToUseCount_);
          };
          friend void from_json(const Darabonba::Json& j, SpotOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
            DARABONBA_PTR_FROM_JSON(InstanceInterruptionBehavior, instanceInterruptionBehavior_);
            DARABONBA_PTR_FROM_JSON(InstancePoolsToUseCount, instancePoolsToUseCount_);
          };
          SpotOptions() = default ;
          SpotOptions(const SpotOptions &) = default ;
          SpotOptions(SpotOptions &&) = default ;
          SpotOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SpotOptions() = default ;
          SpotOptions& operator=(const SpotOptions &) = default ;
          SpotOptions& operator=(SpotOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allocationStrategy_ == nullptr
        && this->instanceInterruptionBehavior_ == nullptr && this->instancePoolsToUseCount_ == nullptr; };
          // allocationStrategy Field Functions 
          bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
          void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
          inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
          inline SpotOptions& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


          // instanceInterruptionBehavior Field Functions 
          bool hasInstanceInterruptionBehavior() const { return this->instanceInterruptionBehavior_ != nullptr;};
          void deleteInstanceInterruptionBehavior() { this->instanceInterruptionBehavior_ = nullptr;};
          inline string getInstanceInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(instanceInterruptionBehavior_, "") };
          inline SpotOptions& setInstanceInterruptionBehavior(string instanceInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(instanceInterruptionBehavior_, instanceInterruptionBehavior) };


          // instancePoolsToUseCount Field Functions 
          bool hasInstancePoolsToUseCount() const { return this->instancePoolsToUseCount_ != nullptr;};
          void deleteInstancePoolsToUseCount() { this->instancePoolsToUseCount_ = nullptr;};
          inline int32_t getInstancePoolsToUseCount() const { DARABONBA_PTR_GET_DEFAULT(instancePoolsToUseCount_, 0) };
          inline SpotOptions& setInstancePoolsToUseCount(int32_t instancePoolsToUseCount) { DARABONBA_PTR_SET_VALUE(instancePoolsToUseCount_, instancePoolsToUseCount) };


        protected:
          // The policy for creating spot instances. Valid values:
          // 
          // *   lowest-price: cost optimization policy. This policy indicates that the lowest-priced instance type is used to create instances.
          // *   diversified: balanced distribution policy. This policy indicates that instances are created evenly across multiple zones specified in the extended configuration.
          shared_ptr<string> allocationStrategy_ {};
          // The action to be performed after the excess spot instances are stopped. Valid values:
          // 
          // *   stop: retains the excess spot instances in the stopped state.
          // *   terminate: releases the excess spot instances.
          shared_ptr<string> instanceInterruptionBehavior_ {};
          // The number of instances that the auto provisioning group creates by selecting the instance type of the lowest price.
          // 
          // >  This parameter is set when the auto provisioning group is created, and cannot be modified.
          shared_ptr<int32_t> instancePoolsToUseCount_ {};
        };

        class PayAsYouGoOptions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PayAsYouGoOptions& obj) { 
            DARABONBA_PTR_TO_JSON(AllocationStrategy, allocationStrategy_);
          };
          friend void from_json(const Darabonba::Json& j, PayAsYouGoOptions& obj) { 
            DARABONBA_PTR_FROM_JSON(AllocationStrategy, allocationStrategy_);
          };
          PayAsYouGoOptions() = default ;
          PayAsYouGoOptions(const PayAsYouGoOptions &) = default ;
          PayAsYouGoOptions(PayAsYouGoOptions &&) = default ;
          PayAsYouGoOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PayAsYouGoOptions() = default ;
          PayAsYouGoOptions& operator=(const PayAsYouGoOptions &) = default ;
          PayAsYouGoOptions& operator=(PayAsYouGoOptions &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->allocationStrategy_ == nullptr; };
          // allocationStrategy Field Functions 
          bool hasAllocationStrategy() const { return this->allocationStrategy_ != nullptr;};
          void deleteAllocationStrategy() { this->allocationStrategy_ = nullptr;};
          inline string getAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocationStrategy_, "") };
          inline PayAsYouGoOptions& setAllocationStrategy(string allocationStrategy) { DARABONBA_PTR_SET_VALUE(allocationStrategy_, allocationStrategy) };


        protected:
          // The policy for creating pay-as-you-go instances. Valid values:
          // 
          // *   lowest-price: cost optimization policy. This policy indicates that lowest-cost instance types are used to create instances.
          // *   prioritized: priority-based policy. This policy indicates that instances are created based on the priority specified by the LaunchTemplateConfig.N.Priority parameter.
          // 
          // >  The LaunchTemplateConfig.N.Priority parameter is set when the auto provisioning group is created, and cannot be modified.
          shared_ptr<string> allocationStrategy_ {};
        };

        class LaunchTemplateConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LaunchTemplateConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(LaunchTemplateConfig, launchTemplateConfig_);
          };
          friend void from_json(const Darabonba::Json& j, LaunchTemplateConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(LaunchTemplateConfig, launchTemplateConfig_);
          };
          LaunchTemplateConfigs() = default ;
          LaunchTemplateConfigs(const LaunchTemplateConfigs &) = default ;
          LaunchTemplateConfigs(LaunchTemplateConfigs &&) = default ;
          LaunchTemplateConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LaunchTemplateConfigs() = default ;
          LaunchTemplateConfigs& operator=(const LaunchTemplateConfigs &) = default ;
          LaunchTemplateConfigs& operator=(LaunchTemplateConfigs &&) = default ;
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
            inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
            inline LaunchTemplateConfig& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


            // priority Field Functions 
            bool hasPriority() const { return this->priority_ != nullptr;};
            void deletePriority() { this->priority_ = nullptr;};
            inline float getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0.0) };
            inline LaunchTemplateConfig& setPriority(float priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


            // vSwitchId Field Functions 
            bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
            void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
            inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
            inline LaunchTemplateConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


            // weightedCapacity Field Functions 
            bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
            void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
            inline float getWeightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0.0) };
            inline LaunchTemplateConfig& setWeightedCapacity(float weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


          protected:
            // The instance type that is specified in the extended configuration.
            shared_ptr<string> instanceType_ {};
            // The maximum price of the instance type specified in the extended configuration.
            shared_ptr<float> maxPrice_ {};
            // The priority of the instance type specified in the extended configuration. A value of 0 indicates the highest priority.
            shared_ptr<float> priority_ {};
            // The ID of the vSwitch specified in the extended configuration.
            shared_ptr<string> vSwitchId_ {};
            // The weight of the instance type specified in the extended configuration.
            shared_ptr<float> weightedCapacity_ {};
          };

          virtual bool empty() const override { return this->launchTemplateConfig_ == nullptr; };
          // launchTemplateConfig Field Functions 
          bool hasLaunchTemplateConfig() const { return this->launchTemplateConfig_ != nullptr;};
          void deleteLaunchTemplateConfig() { this->launchTemplateConfig_ = nullptr;};
          inline const vector<LaunchTemplateConfigs::LaunchTemplateConfig> & getLaunchTemplateConfig() const { DARABONBA_PTR_GET_CONST(launchTemplateConfig_, vector<LaunchTemplateConfigs::LaunchTemplateConfig>) };
          inline vector<LaunchTemplateConfigs::LaunchTemplateConfig> getLaunchTemplateConfig() { DARABONBA_PTR_GET(launchTemplateConfig_, vector<LaunchTemplateConfigs::LaunchTemplateConfig>) };
          inline LaunchTemplateConfigs& setLaunchTemplateConfig(const vector<LaunchTemplateConfigs::LaunchTemplateConfig> & launchTemplateConfig) { DARABONBA_PTR_SET_VALUE(launchTemplateConfig_, launchTemplateConfig) };
          inline LaunchTemplateConfigs& setLaunchTemplateConfig(vector<LaunchTemplateConfigs::LaunchTemplateConfig> && launchTemplateConfig) { DARABONBA_PTR_SET_RVALUE(launchTemplateConfig_, launchTemplateConfig) };


        protected:
          shared_ptr<vector<LaunchTemplateConfigs::LaunchTemplateConfig>> launchTemplateConfig_ {};
        };

        virtual bool empty() const override { return this->autoProvisioningGroupId_ == nullptr
        && this->autoProvisioningGroupName_ == nullptr && this->autoProvisioningGroupType_ == nullptr && this->creationTime_ == nullptr && this->excessCapacityTerminationPolicy_ == nullptr && this->launchTemplateConfigs_ == nullptr
        && this->launchTemplateId_ == nullptr && this->launchTemplateVersion_ == nullptr && this->maxSpotPrice_ == nullptr && this->payAsYouGoOptions_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->spotOptions_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr
        && this->targetCapacitySpecification_ == nullptr && this->terminateInstances_ == nullptr && this->terminateInstancesWithExpiration_ == nullptr && this->validFrom_ == nullptr && this->validUntil_ == nullptr; };
        // autoProvisioningGroupId Field Functions 
        bool hasAutoProvisioningGroupId() const { return this->autoProvisioningGroupId_ != nullptr;};
        void deleteAutoProvisioningGroupId() { this->autoProvisioningGroupId_ = nullptr;};
        inline string getAutoProvisioningGroupId() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupId_, "") };
        inline AutoProvisioningGroup& setAutoProvisioningGroupId(string autoProvisioningGroupId) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupId_, autoProvisioningGroupId) };


        // autoProvisioningGroupName Field Functions 
        bool hasAutoProvisioningGroupName() const { return this->autoProvisioningGroupName_ != nullptr;};
        void deleteAutoProvisioningGroupName() { this->autoProvisioningGroupName_ = nullptr;};
        inline string getAutoProvisioningGroupName() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupName_, "") };
        inline AutoProvisioningGroup& setAutoProvisioningGroupName(string autoProvisioningGroupName) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupName_, autoProvisioningGroupName) };


        // autoProvisioningGroupType Field Functions 
        bool hasAutoProvisioningGroupType() const { return this->autoProvisioningGroupType_ != nullptr;};
        void deleteAutoProvisioningGroupType() { this->autoProvisioningGroupType_ = nullptr;};
        inline string getAutoProvisioningGroupType() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupType_, "") };
        inline AutoProvisioningGroup& setAutoProvisioningGroupType(string autoProvisioningGroupType) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupType_, autoProvisioningGroupType) };


        // creationTime Field Functions 
        bool hasCreationTime() const { return this->creationTime_ != nullptr;};
        void deleteCreationTime() { this->creationTime_ = nullptr;};
        inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
        inline AutoProvisioningGroup& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


        // excessCapacityTerminationPolicy Field Functions 
        bool hasExcessCapacityTerminationPolicy() const { return this->excessCapacityTerminationPolicy_ != nullptr;};
        void deleteExcessCapacityTerminationPolicy() { this->excessCapacityTerminationPolicy_ = nullptr;};
        inline string getExcessCapacityTerminationPolicy() const { DARABONBA_PTR_GET_DEFAULT(excessCapacityTerminationPolicy_, "") };
        inline AutoProvisioningGroup& setExcessCapacityTerminationPolicy(string excessCapacityTerminationPolicy) { DARABONBA_PTR_SET_VALUE(excessCapacityTerminationPolicy_, excessCapacityTerminationPolicy) };


        // launchTemplateConfigs Field Functions 
        bool hasLaunchTemplateConfigs() const { return this->launchTemplateConfigs_ != nullptr;};
        void deleteLaunchTemplateConfigs() { this->launchTemplateConfigs_ = nullptr;};
        inline const AutoProvisioningGroup::LaunchTemplateConfigs & getLaunchTemplateConfigs() const { DARABONBA_PTR_GET_CONST(launchTemplateConfigs_, AutoProvisioningGroup::LaunchTemplateConfigs) };
        inline AutoProvisioningGroup::LaunchTemplateConfigs getLaunchTemplateConfigs() { DARABONBA_PTR_GET(launchTemplateConfigs_, AutoProvisioningGroup::LaunchTemplateConfigs) };
        inline AutoProvisioningGroup& setLaunchTemplateConfigs(const AutoProvisioningGroup::LaunchTemplateConfigs & launchTemplateConfigs) { DARABONBA_PTR_SET_VALUE(launchTemplateConfigs_, launchTemplateConfigs) };
        inline AutoProvisioningGroup& setLaunchTemplateConfigs(AutoProvisioningGroup::LaunchTemplateConfigs && launchTemplateConfigs) { DARABONBA_PTR_SET_RVALUE(launchTemplateConfigs_, launchTemplateConfigs) };


        // launchTemplateId Field Functions 
        bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
        void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
        inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
        inline AutoProvisioningGroup& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


        // launchTemplateVersion Field Functions 
        bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
        void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
        inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
        inline AutoProvisioningGroup& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


        // maxSpotPrice Field Functions 
        bool hasMaxSpotPrice() const { return this->maxSpotPrice_ != nullptr;};
        void deleteMaxSpotPrice() { this->maxSpotPrice_ = nullptr;};
        inline float getMaxSpotPrice() const { DARABONBA_PTR_GET_DEFAULT(maxSpotPrice_, 0.0) };
        inline AutoProvisioningGroup& setMaxSpotPrice(float maxSpotPrice) { DARABONBA_PTR_SET_VALUE(maxSpotPrice_, maxSpotPrice) };


        // payAsYouGoOptions Field Functions 
        bool hasPayAsYouGoOptions() const { return this->payAsYouGoOptions_ != nullptr;};
        void deletePayAsYouGoOptions() { this->payAsYouGoOptions_ = nullptr;};
        inline const AutoProvisioningGroup::PayAsYouGoOptions & getPayAsYouGoOptions() const { DARABONBA_PTR_GET_CONST(payAsYouGoOptions_, AutoProvisioningGroup::PayAsYouGoOptions) };
        inline AutoProvisioningGroup::PayAsYouGoOptions getPayAsYouGoOptions() { DARABONBA_PTR_GET(payAsYouGoOptions_, AutoProvisioningGroup::PayAsYouGoOptions) };
        inline AutoProvisioningGroup& setPayAsYouGoOptions(const AutoProvisioningGroup::PayAsYouGoOptions & payAsYouGoOptions) { DARABONBA_PTR_SET_VALUE(payAsYouGoOptions_, payAsYouGoOptions) };
        inline AutoProvisioningGroup& setPayAsYouGoOptions(AutoProvisioningGroup::PayAsYouGoOptions && payAsYouGoOptions) { DARABONBA_PTR_SET_RVALUE(payAsYouGoOptions_, payAsYouGoOptions) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AutoProvisioningGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline AutoProvisioningGroup& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // spotOptions Field Functions 
        bool hasSpotOptions() const { return this->spotOptions_ != nullptr;};
        void deleteSpotOptions() { this->spotOptions_ = nullptr;};
        inline const AutoProvisioningGroup::SpotOptions & getSpotOptions() const { DARABONBA_PTR_GET_CONST(spotOptions_, AutoProvisioningGroup::SpotOptions) };
        inline AutoProvisioningGroup::SpotOptions getSpotOptions() { DARABONBA_PTR_GET(spotOptions_, AutoProvisioningGroup::SpotOptions) };
        inline AutoProvisioningGroup& setSpotOptions(const AutoProvisioningGroup::SpotOptions & spotOptions) { DARABONBA_PTR_SET_VALUE(spotOptions_, spotOptions) };
        inline AutoProvisioningGroup& setSpotOptions(AutoProvisioningGroup::SpotOptions && spotOptions) { DARABONBA_PTR_SET_RVALUE(spotOptions_, spotOptions) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline AutoProvisioningGroup& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AutoProvisioningGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const AutoProvisioningGroup::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, AutoProvisioningGroup::Tags) };
        inline AutoProvisioningGroup::Tags getTags() { DARABONBA_PTR_GET(tags_, AutoProvisioningGroup::Tags) };
        inline AutoProvisioningGroup& setTags(const AutoProvisioningGroup::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline AutoProvisioningGroup& setTags(AutoProvisioningGroup::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // targetCapacitySpecification Field Functions 
        bool hasTargetCapacitySpecification() const { return this->targetCapacitySpecification_ != nullptr;};
        void deleteTargetCapacitySpecification() { this->targetCapacitySpecification_ = nullptr;};
        inline const AutoProvisioningGroup::TargetCapacitySpecification & getTargetCapacitySpecification() const { DARABONBA_PTR_GET_CONST(targetCapacitySpecification_, AutoProvisioningGroup::TargetCapacitySpecification) };
        inline AutoProvisioningGroup::TargetCapacitySpecification getTargetCapacitySpecification() { DARABONBA_PTR_GET(targetCapacitySpecification_, AutoProvisioningGroup::TargetCapacitySpecification) };
        inline AutoProvisioningGroup& setTargetCapacitySpecification(const AutoProvisioningGroup::TargetCapacitySpecification & targetCapacitySpecification) { DARABONBA_PTR_SET_VALUE(targetCapacitySpecification_, targetCapacitySpecification) };
        inline AutoProvisioningGroup& setTargetCapacitySpecification(AutoProvisioningGroup::TargetCapacitySpecification && targetCapacitySpecification) { DARABONBA_PTR_SET_RVALUE(targetCapacitySpecification_, targetCapacitySpecification) };


        // terminateInstances Field Functions 
        bool hasTerminateInstances() const { return this->terminateInstances_ != nullptr;};
        void deleteTerminateInstances() { this->terminateInstances_ = nullptr;};
        inline bool getTerminateInstances() const { DARABONBA_PTR_GET_DEFAULT(terminateInstances_, false) };
        inline AutoProvisioningGroup& setTerminateInstances(bool terminateInstances) { DARABONBA_PTR_SET_VALUE(terminateInstances_, terminateInstances) };


        // terminateInstancesWithExpiration Field Functions 
        bool hasTerminateInstancesWithExpiration() const { return this->terminateInstancesWithExpiration_ != nullptr;};
        void deleteTerminateInstancesWithExpiration() { this->terminateInstancesWithExpiration_ = nullptr;};
        inline bool getTerminateInstancesWithExpiration() const { DARABONBA_PTR_GET_DEFAULT(terminateInstancesWithExpiration_, false) };
        inline AutoProvisioningGroup& setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) { DARABONBA_PTR_SET_VALUE(terminateInstancesWithExpiration_, terminateInstancesWithExpiration) };


        // validFrom Field Functions 
        bool hasValidFrom() const { return this->validFrom_ != nullptr;};
        void deleteValidFrom() { this->validFrom_ = nullptr;};
        inline string getValidFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, "") };
        inline AutoProvisioningGroup& setValidFrom(string validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


        // validUntil Field Functions 
        bool hasValidUntil() const { return this->validUntil_ != nullptr;};
        void deleteValidUntil() { this->validUntil_ = nullptr;};
        inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
        inline AutoProvisioningGroup& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


      protected:
        // The ID of the auto provisioning group.
        shared_ptr<string> autoProvisioningGroupId_ {};
        // The name of the auto provisioning group.
        shared_ptr<string> autoProvisioningGroupName_ {};
        // The delivery type of the auto provisioning group. Valid values:
        // 
        // *   request: one-time delivery. When the auto provisioning group is started, it delivers instances only once. If the instances fail to be delivered, the auto provisioning group does not retry the delivery.
        // *   maintain: continuous delivery. When the auto provisioning group is started, it attempts to deliver instances that meet the target capacity and monitors the real-time capacity. If the target capacity of the auto provisioning group is not reached, the auto provisioning group continues to create instances until the target capacity is reached.
        shared_ptr<string> autoProvisioningGroupType_ {};
        // The time when the auto provisioning group was created.
        shared_ptr<string> creationTime_ {};
        // Indicates whether to release the scaled-in instances when the real-time capacity of the auto provisioning group exceeds the target capacity and the group is triggered to scale in. Valid values:
        // 
        // *   termination: releases the scaled-in instances.
        // *   no-termination: only removes the scaled-in instances from the auto provisioning group but does not release the instances.
        shared_ptr<string> excessCapacityTerminationPolicy_ {};
        // Details about the extended configurations.
        shared_ptr<AutoProvisioningGroup::LaunchTemplateConfigs> launchTemplateConfigs_ {};
        // The ID of the launch template associated with the auto provisioning group.
        shared_ptr<string> launchTemplateId_ {};
        // The version of the launch template associated with the auto provisioning group.
        shared_ptr<string> launchTemplateVersion_ {};
        // The maximum price of spot  instances in the auto provisioning group.
        // 
        // >  When both the MaxSpotPrice and LaunchTemplateConfig.N.MaxPrice parameters are specified, the smaller one of the two parameter values is used.
        // 
        // The LaunchTemplateConfig.N.Priority parameter is set when the auto provisioning group is created, and cannot be modified.
        shared_ptr<float> maxSpotPrice_ {};
        // The policies related to pay-as-you-go instances.
        shared_ptr<AutoProvisioningGroup::PayAsYouGoOptions> payAsYouGoOptions_ {};
        // The region ID of the auto provisioning group.
        shared_ptr<string> regionId_ {};
        // The ID of the resource group to which the auto provisioning group belongs.
        shared_ptr<string> resourceGroupId_ {};
        // The policy related to spot instances.
        shared_ptr<AutoProvisioningGroup::SpotOptions> spotOptions_ {};
        // The overall status of instance scheduling in the auto provisioning group. Valid values:
        // 
        // *   fulfilled: Scheduling was complete and the instances were delivered.
        // *   pending-fulfillment: The instances were being created.
        // *   pending-termination: The instances were being removed.
        // *   error: An exception occurred during scheduling and the instances were not delivered.
        shared_ptr<string> state_ {};
        // The status of the auto provisioning group. Valid values:
        // 
        // *   submitted: The auto provisioning group was created but did not execute scheduling tasks.
        // *   active: The auto provisioning group was executing scheduling tasks.
        // *   deleted: The auto provisioning group was deleted.
        // *   delete-running: The auto provisioning group was being deleted.
        // *   modifying: The auto provisioning group was being modified.
        shared_ptr<string> status_ {};
        // The tags that are added to the auto provisioning group.
        shared_ptr<AutoProvisioningGroup::Tags> tags_ {};
        // The settings of the target capacity of the auto provisioning group.
        shared_ptr<AutoProvisioningGroup::TargetCapacitySpecification> targetCapacitySpecification_ {};
        // Indicates whether to release instances in the auto provisioning group when the auto provisioning group is deleted. Valid values:
        // 
        // *   true: releases the instances.
        // *   false: only removes the instances from the auto provisioning group but does not release the instances.
        shared_ptr<bool> terminateInstances_ {};
        // Indicates whether to release instances in the auto provisioning group when the group expires. Valid values:
        // 
        // *   true: releases the instances.
        // *   false: only removes the instances from the auto provisioning group but does not release the instances.
        shared_ptr<bool> terminateInstancesWithExpiration_ {};
        // The time at which the auto provisioning group is started. The provisioning group is effective until the point in time specified by `ValidUntil`.
        shared_ptr<string> validFrom_ {};
        // The time at which the auto provisioning group expires. The period of time between this point in time and the point in time specified by the `ValidFrom` parameter is the validity period of the auto provisioning group.
        shared_ptr<string> validUntil_ {};
      };

      virtual bool empty() const override { return this->autoProvisioningGroup_ == nullptr; };
      // autoProvisioningGroup Field Functions 
      bool hasAutoProvisioningGroup() const { return this->autoProvisioningGroup_ != nullptr;};
      void deleteAutoProvisioningGroup() { this->autoProvisioningGroup_ = nullptr;};
      inline const vector<AutoProvisioningGroups::AutoProvisioningGroup> & getAutoProvisioningGroup() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroup_, vector<AutoProvisioningGroups::AutoProvisioningGroup>) };
      inline vector<AutoProvisioningGroups::AutoProvisioningGroup> getAutoProvisioningGroup() { DARABONBA_PTR_GET(autoProvisioningGroup_, vector<AutoProvisioningGroups::AutoProvisioningGroup>) };
      inline AutoProvisioningGroups& setAutoProvisioningGroup(const vector<AutoProvisioningGroups::AutoProvisioningGroup> & autoProvisioningGroup) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroup_, autoProvisioningGroup) };
      inline AutoProvisioningGroups& setAutoProvisioningGroup(vector<AutoProvisioningGroups::AutoProvisioningGroup> && autoProvisioningGroup) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroup_, autoProvisioningGroup) };


    protected:
      shared_ptr<vector<AutoProvisioningGroups::AutoProvisioningGroup>> autoProvisioningGroup_ {};
    };

    virtual bool empty() const override { return this->autoProvisioningGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoProvisioningGroups Field Functions 
    bool hasAutoProvisioningGroups() const { return this->autoProvisioningGroups_ != nullptr;};
    void deleteAutoProvisioningGroups() { this->autoProvisioningGroups_ = nullptr;};
    inline const DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups & getAutoProvisioningGroups() const { DARABONBA_PTR_GET_CONST(autoProvisioningGroups_, DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups) };
    inline DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups getAutoProvisioningGroups() { DARABONBA_PTR_GET(autoProvisioningGroups_, DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups) };
    inline DescribeAutoProvisioningGroupsResponseBody& setAutoProvisioningGroups(const DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups & autoProvisioningGroups) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroups_, autoProvisioningGroups) };
    inline DescribeAutoProvisioningGroupsResponseBody& setAutoProvisioningGroups(DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups && autoProvisioningGroups) { DARABONBA_PTR_SET_RVALUE(autoProvisioningGroups_, autoProvisioningGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoProvisioningGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoProvisioningGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the auto provisioning groups.
    shared_ptr<DescribeAutoProvisioningGroupsResponseBody::AutoProvisioningGroups> autoProvisioningGroups_ {};
    // The number of the page returned.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of queried auto provisioning groups.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
