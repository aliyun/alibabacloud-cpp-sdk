// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUEST_HPP_
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
  class CreateAutoProvisioningGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchConfiguration, launchConfiguration_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_TO_JSON(AutoProvisioningGroupType, autoProvisioningGroupType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataDiskConfig, dataDiskConfig_);
      DARABONBA_PTR_TO_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_TO_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_TO_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateConfig, launchTemplateConfig_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_TO_JSON(MinTargetCapacity, minTargetCapacity_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoAllocationStrategy, payAsYouGoAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_TO_JSON(PrePaidOptions, prePaidOptions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptionsShrink_);
      DARABONBA_PTR_TO_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_TO_JSON(SpotInstanceInterruptionBehavior, spotInstanceInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(SpotInstancePoolsToUseCount, spotInstancePoolsToUseCount_);
      DARABONBA_PTR_TO_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_TO_JSON(SystemDiskConfig, systemDiskConfig_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TerminateInstances, terminateInstances_);
      DARABONBA_PTR_TO_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_TO_JSON(TotalTargetCapacity, totalTargetCapacity_);
      DARABONBA_PTR_TO_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_TO_JSON(ValidUntil, validUntil_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchConfiguration, launchConfiguration_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupName, autoProvisioningGroupName_);
      DARABONBA_PTR_FROM_JSON(AutoProvisioningGroupType, autoProvisioningGroupType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataDiskConfig, dataDiskConfig_);
      DARABONBA_PTR_FROM_JSON(DefaultTargetCapacityType, defaultTargetCapacityType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExcessCapacityTerminationPolicy, excessCapacityTerminationPolicy_);
      DARABONBA_PTR_FROM_JSON(ExecutionMode, executionMode_);
      DARABONBA_PTR_FROM_JSON(HibernationOptionsConfigured, hibernationOptionsConfigured_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateConfig, launchTemplateConfig_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MaxSpotPrice, maxSpotPrice_);
      DARABONBA_PTR_FROM_JSON(MinTargetCapacity, minTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoAllocationStrategy, payAsYouGoAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(PayAsYouGoTargetCapacity, payAsYouGoTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(PrePaidOptions, prePaidOptions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(SpotAllocationStrategy, spotAllocationStrategy_);
      DARABONBA_PTR_FROM_JSON(SpotInstanceInterruptionBehavior, spotInstanceInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(SpotInstancePoolsToUseCount, spotInstancePoolsToUseCount_);
      DARABONBA_PTR_FROM_JSON(SpotTargetCapacity, spotTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(SystemDiskConfig, systemDiskConfig_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TerminateInstances, terminateInstances_);
      DARABONBA_PTR_FROM_JSON(TerminateInstancesWithExpiration, terminateInstancesWithExpiration_);
      DARABONBA_PTR_FROM_JSON(TotalTargetCapacity, totalTargetCapacity_);
      DARABONBA_PTR_FROM_JSON(ValidFrom, validFrom_);
      DARABONBA_PTR_FROM_JSON(ValidUntil, validUntil_);
    };
    CreateAutoProvisioningGroupShrinkRequest() = default ;
    CreateAutoProvisioningGroupShrinkRequest(const CreateAutoProvisioningGroupShrinkRequest &) = default ;
    CreateAutoProvisioningGroupShrinkRequest(CreateAutoProvisioningGroupShrinkRequest &&) = default ;
    CreateAutoProvisioningGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupShrinkRequest() = default ;
    CreateAutoProvisioningGroupShrinkRequest& operator=(const CreateAutoProvisioningGroupShrinkRequest &) = default ;
    CreateAutoProvisioningGroupShrinkRequest& operator=(CreateAutoProvisioningGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
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
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of tag N to add to the auto provisioning group.
      // 
      // Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the auto provisioning group.
      // 
      // Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    class SystemDiskConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDiskConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDiskConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      };
      SystemDiskConfig() = default ;
      SystemDiskConfig(const SystemDiskConfig &) = default ;
      SystemDiskConfig(SystemDiskConfig &&) = default ;
      SystemDiskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SystemDiskConfig() = default ;
      SystemDiskConfig& operator=(const SystemDiskConfig &) = default ;
      SystemDiskConfig& operator=(SystemDiskConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diskCategory_ == nullptr; };
      // diskCategory Field Functions 
      bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
      void deleteDiskCategory() { this->diskCategory_ = nullptr;};
      inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
      inline SystemDiskConfig& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    protected:
      // The category of the system disk. You can specify multiple disk categories, and the disk categories are prioritized in the order in which they are specified. If a specified disk category is unavailable, the system uses the next available disk category. Valid values:
      // 
      // - cloud_efficiency: ultra disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: ESSD
      // - cloud: basic disk.
      shared_ptr<string> diskCategory_ {};
    };

    class PrePaidOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrePaidOptions& obj) { 
        DARABONBA_PTR_TO_JSON(SpecifyCapacityDistribution, specifyCapacityDistribution_);
      };
      friend void from_json(const Darabonba::Json& j, PrePaidOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(SpecifyCapacityDistribution, specifyCapacityDistribution_);
      };
      PrePaidOptions() = default ;
      PrePaidOptions(const PrePaidOptions &) = default ;
      PrePaidOptions(PrePaidOptions &&) = default ;
      PrePaidOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrePaidOptions() = default ;
      PrePaidOptions& operator=(const PrePaidOptions &) = default ;
      PrePaidOptions& operator=(PrePaidOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SpecifyCapacityDistribution : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpecifyCapacityDistribution& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
          DARABONBA_PTR_TO_JSON(MinTargetCapacity, minTargetCapacity_);
        };
        friend void from_json(const Darabonba::Json& j, SpecifyCapacityDistribution& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
          DARABONBA_PTR_FROM_JSON(MinTargetCapacity, minTargetCapacity_);
        };
        SpecifyCapacityDistribution() = default ;
        SpecifyCapacityDistribution(const SpecifyCapacityDistribution &) = default ;
        SpecifyCapacityDistribution(SpecifyCapacityDistribution &&) = default ;
        SpecifyCapacityDistribution(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpecifyCapacityDistribution() = default ;
        SpecifyCapacityDistribution& operator=(const SpecifyCapacityDistribution &) = default ;
        SpecifyCapacityDistribution& operator=(SpecifyCapacityDistribution &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && this->minTargetCapacity_ == nullptr; };
        // instanceTypes Field Functions 
        bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
        void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
        inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
        inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
        inline SpecifyCapacityDistribution& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
        inline SpecifyCapacityDistribution& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


        // minTargetCapacity Field Functions 
        bool hasMinTargetCapacity() const { return this->minTargetCapacity_ != nullptr;};
        void deleteMinTargetCapacity() { this->minTargetCapacity_ = nullptr;};
        inline int32_t getMinTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(minTargetCapacity_, 0) };
        inline SpecifyCapacityDistribution& setMinTargetCapacity(int32_t minTargetCapacity) { DARABONBA_PTR_SET_VALUE(minTargetCapacity_, minTargetCapacity) };


      protected:
        // Details about the instance types. Duplicate instance types are not allowed and the instance types are within the LaunchTemplateConfig.InstanceType range.
        shared_ptr<vector<string>> instanceTypes_ {};
        // The minimum number of instances to be delivered within the `InstanceTypes` range.
        // 
        // >  `sum(MinTargetCapacity)<= TotalTargetCapacity` indicates that the sum of MinTargetCapacity values of all instance types cannot exceed the TotalTargetCapacity value. If any instance type set cannot meet the MinTargetCapacity requirement due to insufficient inventory or other reasons, the entire request fails.
        shared_ptr<int32_t> minTargetCapacity_ {};
      };

      virtual bool empty() const override { return this->specifyCapacityDistribution_ == nullptr; };
      // specifyCapacityDistribution Field Functions 
      bool hasSpecifyCapacityDistribution() const { return this->specifyCapacityDistribution_ != nullptr;};
      void deleteSpecifyCapacityDistribution() { this->specifyCapacityDistribution_ = nullptr;};
      inline const vector<PrePaidOptions::SpecifyCapacityDistribution> & getSpecifyCapacityDistribution() const { DARABONBA_PTR_GET_CONST(specifyCapacityDistribution_, vector<PrePaidOptions::SpecifyCapacityDistribution>) };
      inline vector<PrePaidOptions::SpecifyCapacityDistribution> getSpecifyCapacityDistribution() { DARABONBA_PTR_GET(specifyCapacityDistribution_, vector<PrePaidOptions::SpecifyCapacityDistribution>) };
      inline PrePaidOptions& setSpecifyCapacityDistribution(const vector<PrePaidOptions::SpecifyCapacityDistribution> & specifyCapacityDistribution) { DARABONBA_PTR_SET_VALUE(specifyCapacityDistribution_, specifyCapacityDistribution) };
      inline PrePaidOptions& setSpecifyCapacityDistribution(vector<PrePaidOptions::SpecifyCapacityDistribution> && specifyCapacityDistribution) { DARABONBA_PTR_SET_RVALUE(specifyCapacityDistribution_, specifyCapacityDistribution) };


    protected:
      // The minimum capacity set for different instance types. This parameter is valid only when `AutoProvisioningGroupType` is set to request.
      shared_ptr<vector<PrePaidOptions::SpecifyCapacityDistribution>> specifyCapacityDistribution_ {};
    };

    class LaunchTemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(Architectures, architectures_);
        DARABONBA_PTR_TO_JSON(BurstablePerformance, burstablePerformance_);
        DARABONBA_PTR_TO_JSON(Cores, cores_);
        DARABONBA_PTR_TO_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
        DARABONBA_PTR_TO_JSON(MaxQuantity, maxQuantity_);
        DARABONBA_PTR_TO_JSON(Memories, memories_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(Architectures, architectures_);
        DARABONBA_PTR_FROM_JSON(BurstablePerformance, burstablePerformance_);
        DARABONBA_PTR_FROM_JSON(Cores, cores_);
        DARABONBA_PTR_FROM_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
        DARABONBA_PTR_FROM_JSON(MaxQuantity, maxQuantity_);
        DARABONBA_PTR_FROM_JSON(Memories, memories_);
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
      virtual bool empty() const override { return this->architectures_ == nullptr
        && this->burstablePerformance_ == nullptr && this->cores_ == nullptr && this->excludedInstanceTypes_ == nullptr && this->imageId_ == nullptr && this->instanceFamilyLevel_ == nullptr
        && this->instanceType_ == nullptr && this->maxPrice_ == nullptr && this->maxQuantity_ == nullptr && this->memories_ == nullptr && this->priority_ == nullptr
        && this->vSwitchId_ == nullptr && this->weightedCapacity_ == nullptr; };
      // architectures Field Functions 
      bool hasArchitectures() const { return this->architectures_ != nullptr;};
      void deleteArchitectures() { this->architectures_ = nullptr;};
      inline const vector<string> & getArchitectures() const { DARABONBA_PTR_GET_CONST(architectures_, vector<string>) };
      inline vector<string> getArchitectures() { DARABONBA_PTR_GET(architectures_, vector<string>) };
      inline LaunchTemplateConfig& setArchitectures(const vector<string> & architectures) { DARABONBA_PTR_SET_VALUE(architectures_, architectures) };
      inline LaunchTemplateConfig& setArchitectures(vector<string> && architectures) { DARABONBA_PTR_SET_RVALUE(architectures_, architectures) };


      // burstablePerformance Field Functions 
      bool hasBurstablePerformance() const { return this->burstablePerformance_ != nullptr;};
      void deleteBurstablePerformance() { this->burstablePerformance_ = nullptr;};
      inline string getBurstablePerformance() const { DARABONBA_PTR_GET_DEFAULT(burstablePerformance_, "") };
      inline LaunchTemplateConfig& setBurstablePerformance(string burstablePerformance) { DARABONBA_PTR_SET_VALUE(burstablePerformance_, burstablePerformance) };


      // cores Field Functions 
      bool hasCores() const { return this->cores_ != nullptr;};
      void deleteCores() { this->cores_ = nullptr;};
      inline const vector<int32_t> & getCores() const { DARABONBA_PTR_GET_CONST(cores_, vector<int32_t>) };
      inline vector<int32_t> getCores() { DARABONBA_PTR_GET(cores_, vector<int32_t>) };
      inline LaunchTemplateConfig& setCores(const vector<int32_t> & cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };
      inline LaunchTemplateConfig& setCores(vector<int32_t> && cores) { DARABONBA_PTR_SET_RVALUE(cores_, cores) };


      // excludedInstanceTypes Field Functions 
      bool hasExcludedInstanceTypes() const { return this->excludedInstanceTypes_ != nullptr;};
      void deleteExcludedInstanceTypes() { this->excludedInstanceTypes_ = nullptr;};
      inline const vector<string> & getExcludedInstanceTypes() const { DARABONBA_PTR_GET_CONST(excludedInstanceTypes_, vector<string>) };
      inline vector<string> getExcludedInstanceTypes() { DARABONBA_PTR_GET(excludedInstanceTypes_, vector<string>) };
      inline LaunchTemplateConfig& setExcludedInstanceTypes(const vector<string> & excludedInstanceTypes) { DARABONBA_PTR_SET_VALUE(excludedInstanceTypes_, excludedInstanceTypes) };
      inline LaunchTemplateConfig& setExcludedInstanceTypes(vector<string> && excludedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(excludedInstanceTypes_, excludedInstanceTypes) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline LaunchTemplateConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceFamilyLevel Field Functions 
      bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
      void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
      inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
      inline LaunchTemplateConfig& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


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


      // maxQuantity Field Functions 
      bool hasMaxQuantity() const { return this->maxQuantity_ != nullptr;};
      void deleteMaxQuantity() { this->maxQuantity_ = nullptr;};
      inline int32_t getMaxQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxQuantity_, 0) };
      inline LaunchTemplateConfig& setMaxQuantity(int32_t maxQuantity) { DARABONBA_PTR_SET_VALUE(maxQuantity_, maxQuantity) };


      // memories Field Functions 
      bool hasMemories() const { return this->memories_ != nullptr;};
      void deleteMemories() { this->memories_ = nullptr;};
      inline const vector<float> & getMemories() const { DARABONBA_PTR_GET_CONST(memories_, vector<float>) };
      inline vector<float> getMemories() { DARABONBA_PTR_GET(memories_, vector<float>) };
      inline LaunchTemplateConfig& setMemories(const vector<float> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
      inline LaunchTemplateConfig& setMemories(vector<float> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


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
      // The architectures of the instance types.
      shared_ptr<vector<string>> architectures_ {};
      // Specifies whether to include burstable instance types. Valid values:
      // 
      // *   Exclude: excludes burstable instance types.
      // *   Include: includes burstable instance types.
      // *   Required: includes only burstable instance types.
      // 
      // Default value: Include.
      shared_ptr<string> burstablePerformance_ {};
      // The numbers of vCPUs of instance types.
      shared_ptr<vector<int32_t>> cores_ {};
      // The instance types that you want to exclude.
      shared_ptr<vector<string>> excludedInstanceTypes_ {};
      // The ID of the image. You can use this parameter to specify the image that is used by the current resource pool. If you do not specify this parameter, the image that is configured in `LaunchConfiguration.ImageId` or the launch template is used by default. You can call the [DescribeImages](https://help.aliyun.com/document_detail/25534.html) operation to query the available images. Note: This parameter is supported only when `AutoProvisioningGroupType` is set to instant.
      shared_ptr<string> imageId_ {};
      // The instance family level of the instance type in extended configuration N. This parameter is used to filter instance types. Valid values of Nextended configuration N, Valid values:
      // 
      // *   EntryLevel: entry level (shared instance types). Instance types of this level are the most cost-effective but may not ensure stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
      // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources and are suitable for business scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
      // *   CreditEntryLevel: credit entry level. This value is valid only for burstable instances. CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For information about burstable instances, see [Overview](https://help.aliyun.com/document_detail/59977.html).
      // 
      // Valid values of N: 1 to 10.
      shared_ptr<string> instanceFamilyLevel_ {};
      // The instance type in extended configuration N. Valid values of N: 1 to 20. For information about the valid values of this parameter, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> instanceType_ {};
      // The maximum price of spot instances in extended configuration N.
      // 
      // >  If you specify one or more `LaunchTemplateConfig.N.*` parameters, you must also specify `LaunchTemplateConfig.N.MaxPrice`.
      shared_ptr<double> maxPrice_ {};
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<int32_t> maxQuantity_ {};
      // The memory sizes of instance types.
      shared_ptr<vector<float>> memories_ {};
      // The priority of extended configuration N. A value of 0 indicates the highest priority. Valid values: 0 to ∞.
      shared_ptr<int32_t> priority_ {};
      // The ID of the vSwitch in extended configuration N. The zone of the ECS instances created from the extended configuration is determined by the vSwitch.
      // 
      // >  If you specify one or more `LaunchTemplateConfig.N.*` parameters, you must also specify `LaunchTemplateConfig.N.VSwitchId`.
      shared_ptr<string> vSwitchId_ {};
      // The weight of the instance type in extended configuration N. A greater weight indicates that a single instance has more computing power and fewer instances are required. The value must be greater than 0.
      // 
      // The weight is calculated based on the computing power of the specified instance type and the minimum computing power of a single instance in the cluster to be created by the auto provisioning group. For example, assume that the minimum computing power of a single instance is 8 vCPUs and 60 GiB of memory.
      // 
      // *   For an instance type with 8 vCPUs and 60 GiB of memory, you can set the weight to 1.
      // *   For an instance type with 16 vCPUs and 120 GiB of memory, you can set the weight to 2.
      shared_ptr<double> weightedCapacity_ {};
    };

    class DataDiskConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DataDiskConfig& obj) { 
        DARABONBA_PTR_TO_JSON(DiskCategory, diskCategory_);
      };
      friend void from_json(const Darabonba::Json& j, DataDiskConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(DiskCategory, diskCategory_);
      };
      DataDiskConfig() = default ;
      DataDiskConfig(const DataDiskConfig &) = default ;
      DataDiskConfig(DataDiskConfig &&) = default ;
      DataDiskConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DataDiskConfig() = default ;
      DataDiskConfig& operator=(const DataDiskConfig &) = default ;
      DataDiskConfig& operator=(DataDiskConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->diskCategory_ == nullptr; };
      // diskCategory Field Functions 
      bool hasDiskCategory() const { return this->diskCategory_ != nullptr;};
      void deleteDiskCategory() { this->diskCategory_ = nullptr;};
      inline string getDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(diskCategory_, "") };
      inline DataDiskConfig& setDiskCategory(string diskCategory) { DARABONBA_PTR_SET_VALUE(diskCategory_, diskCategory) };


    protected:
      // The category of data disk N. You can use this parameter to specify multiple disk categories, and the disk categories are prioritized in the order in which they are specified. If a specified disk category is unavailable, the system uses the next available disk category. Valid values:
      // 
      // - cloud_efficiency: ultra disk
      // - cloud_ssd: standard SSD
      // - cloud_essd: ESSD
      // - cloud: basic disk
      shared_ptr<string> diskCategory_ {};
    };

    class LaunchConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
        DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
        DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
        DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(HostNames, hostNames_);
        DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
        DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(Password, password_);
        DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
        DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskDescription, systemDiskDescription_);
        DARABONBA_PTR_TO_JSON(SystemDiskName, systemDiskName_);
        DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
        DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
        DARABONBA_PTR_TO_JSON(Period, period_);
        DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
        DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
        DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
        DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
        DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
        DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
        DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(HostNames, hostNames_);
        DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
        DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(Password, password_);
        DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
        DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskDescription, systemDiskDescription_);
        DARABONBA_PTR_FROM_JSON(SystemDiskName, systemDiskName_);
        DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
        DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
        DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
        DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
        DARABONBA_PTR_FROM_JSON(Period, period_);
        DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
        DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
        DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
        DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
        DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      };
      LaunchConfiguration() = default ;
      LaunchConfiguration(const LaunchConfiguration &) = default ;
      LaunchConfiguration(LaunchConfiguration &&) = default ;
      LaunchConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchConfiguration() = default ;
      LaunchConfiguration& operator=(const LaunchConfiguration &) = default ;
      LaunchConfiguration& operator=(LaunchConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SecurityOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityOptions& obj) { 
          DARABONBA_PTR_TO_JSON(TrustedSystemMode, trustedSystemMode_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(TrustedSystemMode, trustedSystemMode_);
        };
        SecurityOptions() = default ;
        SecurityOptions(const SecurityOptions &) = default ;
        SecurityOptions(SecurityOptions &&) = default ;
        SecurityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SecurityOptions() = default ;
        SecurityOptions& operator=(const SecurityOptions &) = default ;
        SecurityOptions& operator=(SecurityOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->trustedSystemMode_ == nullptr; };
        // trustedSystemMode Field Functions 
        bool hasTrustedSystemMode() const { return this->trustedSystemMode_ != nullptr;};
        void deleteTrustedSystemMode() { this->trustedSystemMode_ = nullptr;};
        inline string getTrustedSystemMode() const { DARABONBA_PTR_GET_DEFAULT(trustedSystemMode_, "") };
        inline SecurityOptions& setTrustedSystemMode(string trustedSystemMode) { DARABONBA_PTR_SET_VALUE(trustedSystemMode_, trustedSystemMode) };


      protected:
        shared_ptr<string> trustedSystemMode_ {};
      };

      class SchedulerOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SchedulerOptions& obj) { 
          DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
          DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
        };
        friend void from_json(const Darabonba::Json& j, SchedulerOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
          DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
        };
        SchedulerOptions() = default ;
        SchedulerOptions(const SchedulerOptions &) = default ;
        SchedulerOptions(SchedulerOptions &&) = default ;
        SchedulerOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SchedulerOptions() = default ;
        SchedulerOptions& operator=(const SchedulerOptions &) = default ;
        SchedulerOptions& operator=(SchedulerOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr
        && this->dedicatedHostId_ == nullptr; };
        // dedicatedHostClusterId Field Functions 
        bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
        void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
        inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
        inline SchedulerOptions& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


        // dedicatedHostId Field Functions 
        bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
        void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
        inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
        inline SchedulerOptions& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


      protected:
        shared_ptr<string> dedicatedHostClusterId_ {};
        shared_ptr<string> dedicatedHostId_ {};
      };

      class ImageOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ImageOptions& obj) { 
          DARABONBA_PTR_TO_JSON(LoginAsNonRoot, loginAsNonRoot_);
        };
        friend void from_json(const Darabonba::Json& j, ImageOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(LoginAsNonRoot, loginAsNonRoot_);
        };
        ImageOptions() = default ;
        ImageOptions(const ImageOptions &) = default ;
        ImageOptions(ImageOptions &&) = default ;
        ImageOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ImageOptions() = default ;
        ImageOptions& operator=(const ImageOptions &) = default ;
        ImageOptions& operator=(ImageOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->loginAsNonRoot_ == nullptr; };
        // loginAsNonRoot Field Functions 
        bool hasLoginAsNonRoot() const { return this->loginAsNonRoot_ != nullptr;};
        void deleteLoginAsNonRoot() { this->loginAsNonRoot_ = nullptr;};
        inline bool getLoginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(loginAsNonRoot_, false) };
        inline ImageOptions& setLoginAsNonRoot(bool loginAsNonRoot) { DARABONBA_PTR_SET_VALUE(loginAsNonRoot_, loginAsNonRoot) };


      protected:
        // Specifies whether the instance that uses the image supports logons of the ecs-user user. Valid value:
        // 
        // *   true: The instance that uses the image supports logons of the ecs-user user.
        // *   false: The instance that uses the image does not support logons of the ecs-user user.
        shared_ptr<bool> loginAsNonRoot_ {};
      };

      class CpuOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CpuOptions& obj) { 
          DARABONBA_PTR_TO_JSON(Core, core_);
          DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
        };
        friend void from_json(const Darabonba::Json& j, CpuOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(Core, core_);
          DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
        };
        CpuOptions() = default ;
        CpuOptions(const CpuOptions &) = default ;
        CpuOptions(CpuOptions &&) = default ;
        CpuOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CpuOptions() = default ;
        CpuOptions& operator=(const CpuOptions &) = default ;
        CpuOptions& operator=(CpuOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->core_ == nullptr
        && this->threadsPerCore_ == nullptr; };
        // core Field Functions 
        bool hasCore() const { return this->core_ != nullptr;};
        void deleteCore() { this->core_ = nullptr;};
        inline int32_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
        inline CpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


        // threadsPerCore Field Functions 
        bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
        void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
        inline int32_t getThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
        inline CpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


      protected:
        shared_ptr<int32_t> core_ {};
        shared_ptr<int32_t> threadsPerCore_ {};
      };

      class Tag : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tag& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tag& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The key of the tag. Valid values of N: 1 to 20. The tag key cannot be an empty string. It can be up to 128 characters in length and cannot start with acs: or aliyun. It cannot contain `http://` or `https://`. If both the LaunchTemplateId and LaunchConfiguration.* parameters are specified, the LaunchTemplateId parameter takes precedence.
        shared_ptr<string> key_ {};
        // The value of the tag. Valid values of N: 1 to 20. The tag value can be an empty string. It can be up to 128 characters in length. It cannot start with acs: or contain `http://` or `https://`. If both the LaunchTemplateId and LaunchConfiguration.* parameters are specified, the LaunchTemplateId parameter takes precedence.
        shared_ptr<string> value_ {};
      };

      class SystemDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
        };
        friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
        };
        SystemDisk() = default ;
        SystemDisk(const SystemDisk &) = default ;
        SystemDisk(SystemDisk &&) = default ;
        SystemDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SystemDisk() = default ;
        SystemDisk& operator=(const SystemDisk &) = default ;
        SystemDisk& operator=(SystemDisk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->burstingEnabled_ == nullptr && this->encryptAlgorithm_ == nullptr && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr && this->provisionedIops_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline SystemDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline SystemDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


        // encryptAlgorithm Field Functions 
        bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
        void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
        inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
        inline SystemDisk& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
        inline SystemDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // KMSKeyId Field Functions 
        bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
        void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
        inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
        inline SystemDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        // provisionedIops Field Functions 
        bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
        void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
        inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
        inline SystemDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


      protected:
        // The ID of the automatic snapshot policy to apply to the system disk.
        // 
        // When you specify this parameter, take note of the following items:
        // 
        // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // Specifies whether to enable the performance burst feature for the system disk. Valid values:
        // 
        // *   true: force attaches the disk to the instance.
        // *   false: disables the performance burst feature for the system disk.
        // 
        // >  This parameter is available only if you set `LaunchConfiguration.SystemDisk.Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<bool> burstingEnabled_ {};
        // The algorithm to use to encrypt the system disk. Valid values:
        // 
        // *   aes-256
        // *   sm4-128
        // 
        // Default value: aes-256.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        // 
        // >  This parameter is not publicly available.
        shared_ptr<string> encryptAlgorithm_ {};
        // Specifies whether to encrypt the system disk. Valid values:
        // 
        // *   true: encrypts system disk N.
        // *   false: does not encrypt system disk N.
        // 
        // Default value: false. Valid values:
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> encrypted_ {};
        // The ID of the KMS key to use for system disk N.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> KMSKeyId_ {};
        // The provisioned read/write IOPS of the ESSD AutoPL disk to use as the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
        // 
        // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
        // 
        // >  This parameter is available only if you set LaunchConfiguration.SystemDisk.Category to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<int64_t> provisionedIops_ {};
      };

      class DataDisk : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDisk& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        };
        friend void from_json(const Darabonba::Json& j, DataDisk& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        };
        DataDisk() = default ;
        DataDisk(const DataDisk &) = default ;
        DataDisk(DataDisk &&) = default ;
        DataDisk(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataDisk() = default ;
        DataDisk& operator=(const DataDisk &) = default ;
        DataDisk& operator=(DataDisk &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->deleteWithInstance_ == nullptr && this->description_ == nullptr && this->device_ == nullptr
        && this->diskName_ == nullptr && this->encryptAlgorithm_ == nullptr && this->encrypted_ == nullptr && this->kmsKeyId_ == nullptr && this->performanceLevel_ == nullptr
        && this->provisionedIops_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline DataDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline DataDisk& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DataDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // deleteWithInstance Field Functions 
        bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
        void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
        inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
        inline DataDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataDisk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline DataDisk& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline DataDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // encryptAlgorithm Field Functions 
        bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
        void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
        inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
        inline DataDisk& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
        inline DataDisk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // kmsKeyId Field Functions 
        bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
        void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
        inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
        inline DataDisk& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline DataDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // provisionedIops Field Functions 
        bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
        void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
        inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
        inline DataDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline DataDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline DataDisk& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      protected:
        // The ID of the automatic snapshot policy to apply to data disk N.
        // 
        // When you specify this parameter, take note of the following items:
        // 
        // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // Specifies whether to enable the performance burst feature for the system disk. Valid values:
        // 
        // *   true: force attaches the disk to the instance.
        // *   false: disables the performance burst feature for the system disk.
        // 
        // >  This parameter is available only if you set LaunchConfiguration.DataDisk.N.Category to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<bool> burstingEnabled_ {};
        // The category of data disk N. Valid values of N: 1 to 16. Valid values:
        // 
        // *   cloud_efficiency: utra disk.
        // *   cloud_ssd: standard SSD.
        // *   cloud_essd: ESSD.
        // *   cloud: basic disk.
        // 
        // For I/O optimized instances, the default value is cloud_efficiency. For non-I/O optimized instances, the default value is cloud.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> category_ {};
        // Specifies whether to release data disk N when the instance to which the data disk is attached is released. Valid values:
        // 
        // *   true: releases data disk N when the associated instance is released.
        // *   false: does not release data disk N when the associated instance is released.
        // 
        // Default value: true.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<bool> deleteWithInstance_ {};
        // The description of data disk N. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> description_ {};
        // The mount point of data disk N. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> device_ {};
        // The name of data disk N. The name must be 2 to 128 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, periods (.), colons (:), underscores (_), and hyphens (-).
        // 
        // This parameter is left empty by default.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> diskName_ {};
        // >  This parameter is not publicly available.
        shared_ptr<string> encryptAlgorithm_ {};
        // Specifies whether to encrypt data disk N. Valid values:
        // 
        // *   true: encrypts system disk N.
        // *   false: does not encrypt system disk N.
        // 
        // Default value: false. Valid values:
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<bool> encrypted_ {};
        // The ID of the Key Management Service (KMS) key to use for data disk N. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> kmsKeyId_ {};
        // The performance level of the Enterprise SSD (ESSD) to use as data disk N. The value of N in this parameter must be the same as the value of N in `LaunchConfiguration.DataDisk.N.Category`. Valid values:
        // 
        // *   PL0: A single ESSD can deliver up to 10000 random read/write IOPS.
        // *   PL1 (default): A single ESSD can deliver up to 50000 random read/write IOPS.
        // *   PL2: A single ESSD can deliver up to 100000 random read/write IOPS.
        // *   PL3: A single ESSD can deliver up to 1000000 random read/write IOPS.
        // 
        // For information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> performanceLevel_ {};
        // The provisioned read/write IOPS of the ESSD AutoPL disk to use as the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
        // 
        // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
        // 
        // >  This parameter is available only if you set LaunchConfiguration.DataDisk.N.Category to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<int64_t> provisionedIops_ {};
        // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
        // 
        // *   Valid values if you set LaunchConfiguration.DataDisk.N.Category to cloud_efficiency: 20 to 32768.
        // 
        // *   Valid values if you set LaunchConfiguration.DataDisk.N.Category to cloud_ssd: 20 to 32768.
        // 
        // *   Valid values if you set LaunchConfiguration.DataDisk.N.Category to cloud_essd: vary based on the `LaunchConfiguration.DataDisk.N.PerformanceLevel` value.
        // 
        //     *   Valid values if you set LaunchConfiguration.DataDisk.N.PerformanceLevel to PL0: 40 to 32768.
        //     *   Valid values if you set LaunchConfiguration.DataDisk.N.PerformanceLevel to PL1: 20 to 32768.
        //     *   Valid values if you set LaunchConfiguration.DataDisk.N.PerformanceLevel to PL2: 461 to 32768.
        //     *   Valid values if you set LaunchConfiguration.DataDisk.N.PerformanceLevel to PL3: 1261 to 32768.
        // 
        // *   Valid values if you set LaunchConfiguration.DataDisk.N.Category to cloud: 5 to 2000.
        // 
        // >  The value of this parameter must be greater than or equal to the size of the snapshot specified by `LaunchConfiguration.DataDisk.N.SnapshotId`.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<int32_t> size_ {};
        // The ID of the snapshot to use to create data disk N. Valid values of N: 1 to 16.
        // 
        // If you specify this parameter, `LaunchConfiguration.DataDisk.N.Size` is ignored. The size of data disk N is the same as that of the snapshot specified by this parameter. Use snapshots created after July 15, 2013. Otherwise, an error is returned and your request is rejected.
        // 
        // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
        shared_ptr<string> snapshotId_ {};
      };

      class Arn : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Arn& obj) { 
          DARABONBA_PTR_TO_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_TO_JSON(RoleType, roleType_);
          DARABONBA_PTR_TO_JSON(Rolearn, rolearn_);
        };
        friend void from_json(const Darabonba::Json& j, Arn& obj) { 
          DARABONBA_PTR_FROM_JSON(AssumeRoleFor, assumeRoleFor_);
          DARABONBA_PTR_FROM_JSON(RoleType, roleType_);
          DARABONBA_PTR_FROM_JSON(Rolearn, rolearn_);
        };
        Arn() = default ;
        Arn(const Arn &) = default ;
        Arn(Arn &&) = default ;
        Arn(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Arn() = default ;
        Arn& operator=(const Arn &) = default ;
        Arn& operator=(Arn &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assumeRoleFor_ == nullptr
        && this->roleType_ == nullptr && this->rolearn_ == nullptr; };
        // assumeRoleFor Field Functions 
        bool hasAssumeRoleFor() const { return this->assumeRoleFor_ != nullptr;};
        void deleteAssumeRoleFor() { this->assumeRoleFor_ = nullptr;};
        inline int64_t getAssumeRoleFor() const { DARABONBA_PTR_GET_DEFAULT(assumeRoleFor_, 0L) };
        inline Arn& setAssumeRoleFor(int64_t assumeRoleFor) { DARABONBA_PTR_SET_VALUE(assumeRoleFor_, assumeRoleFor) };


        // roleType Field Functions 
        bool hasRoleType() const { return this->roleType_ != nullptr;};
        void deleteRoleType() { this->roleType_ = nullptr;};
        inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
        inline Arn& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


        // rolearn Field Functions 
        bool hasRolearn() const { return this->rolearn_ != nullptr;};
        void deleteRolearn() { this->rolearn_ = nullptr;};
        inline string getRolearn() const { DARABONBA_PTR_GET_DEFAULT(rolearn_, "") };
        inline Arn& setRolearn(string rolearn) { DARABONBA_PTR_SET_VALUE(rolearn_, rolearn) };


      protected:
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<int64_t> assumeRoleFor_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<string> roleType_ {};
        // >  This parameter is in invitational preview and is not publicly available.
        shared_ptr<string> rolearn_ {};
      };

      virtual bool empty() const override { return this->arn_ == nullptr
        && this->autoReleaseTime_ == nullptr && this->creditSpecification_ == nullptr && this->dataDisk_ == nullptr && this->deploymentSetId_ == nullptr && this->hostName_ == nullptr
        && this->hostNames_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr
        && this->internetChargeType_ == nullptr && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->keyPairName_ == nullptr
        && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->ramRoleName_ == nullptr && this->resourceGroupId_ == nullptr && this->securityEnhancementStrategy_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->systemDisk_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskDescription_ == nullptr
        && this->systemDiskName_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr && this->systemDiskSize_ == nullptr && this->tag_ == nullptr && this->userData_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->cpuOptions_ == nullptr && this->imageOptions_ == nullptr && this->period_ == nullptr
        && this->periodUnit_ == nullptr && this->schedulerOptions_ == nullptr && this->securityOptions_ == nullptr && this->spotDuration_ == nullptr && this->spotInterruptionBehavior_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline const vector<LaunchConfiguration::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<LaunchConfiguration::Arn>) };
      inline vector<LaunchConfiguration::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<LaunchConfiguration::Arn>) };
      inline LaunchConfiguration& setArn(const vector<LaunchConfiguration::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
      inline LaunchConfiguration& setArn(vector<LaunchConfiguration::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


      // autoReleaseTime Field Functions 
      bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
      void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
      inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
      inline LaunchConfiguration& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


      // creditSpecification Field Functions 
      bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
      void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
      inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
      inline LaunchConfiguration& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


      // dataDisk Field Functions 
      bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
      void deleteDataDisk() { this->dataDisk_ = nullptr;};
      inline const vector<LaunchConfiguration::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<LaunchConfiguration::DataDisk>) };
      inline vector<LaunchConfiguration::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<LaunchConfiguration::DataDisk>) };
      inline LaunchConfiguration& setDataDisk(const vector<LaunchConfiguration::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
      inline LaunchConfiguration& setDataDisk(vector<LaunchConfiguration::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


      // deploymentSetId Field Functions 
      bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
      void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
      inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
      inline LaunchConfiguration& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline LaunchConfiguration& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // hostNames Field Functions 
      bool hasHostNames() const { return this->hostNames_ != nullptr;};
      void deleteHostNames() { this->hostNames_ = nullptr;};
      inline const vector<string> & getHostNames() const { DARABONBA_PTR_GET_CONST(hostNames_, vector<string>) };
      inline vector<string> getHostNames() { DARABONBA_PTR_GET(hostNames_, vector<string>) };
      inline LaunchConfiguration& setHostNames(const vector<string> & hostNames) { DARABONBA_PTR_SET_VALUE(hostNames_, hostNames) };
      inline LaunchConfiguration& setHostNames(vector<string> && hostNames) { DARABONBA_PTR_SET_RVALUE(hostNames_, hostNames) };


      // imageFamily Field Functions 
      bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
      void deleteImageFamily() { this->imageFamily_ = nullptr;};
      inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
      inline LaunchConfiguration& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline LaunchConfiguration& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline LaunchConfiguration& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline LaunchConfiguration& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline LaunchConfiguration& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // internetMaxBandwidthIn Field Functions 
      bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
      void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
      inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
      inline LaunchConfiguration& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


      // internetMaxBandwidthOut Field Functions 
      bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
      void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
      inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
      inline LaunchConfiguration& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


      // ioOptimized Field Functions 
      bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
      void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
      inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
      inline LaunchConfiguration& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline LaunchConfiguration& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline LaunchConfiguration& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // passwordInherit Field Functions 
      bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
      void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
      inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
      inline LaunchConfiguration& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


      // ramRoleName Field Functions 
      bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
      void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
      inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
      inline LaunchConfiguration& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline LaunchConfiguration& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // securityEnhancementStrategy Field Functions 
      bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
      void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
      inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
      inline LaunchConfiguration& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline LaunchConfiguration& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline LaunchConfiguration& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline LaunchConfiguration& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // systemDisk Field Functions 
      bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
      void deleteSystemDisk() { this->systemDisk_ = nullptr;};
      inline const LaunchConfiguration::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, LaunchConfiguration::SystemDisk) };
      inline LaunchConfiguration::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, LaunchConfiguration::SystemDisk) };
      inline LaunchConfiguration& setSystemDisk(const LaunchConfiguration::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
      inline LaunchConfiguration& setSystemDisk(LaunchConfiguration::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline LaunchConfiguration& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskDescription Field Functions 
      bool hasSystemDiskDescription() const { return this->systemDiskDescription_ != nullptr;};
      void deleteSystemDiskDescription() { this->systemDiskDescription_ = nullptr;};
      inline string getSystemDiskDescription() const { DARABONBA_PTR_GET_DEFAULT(systemDiskDescription_, "") };
      inline LaunchConfiguration& setSystemDiskDescription(string systemDiskDescription) { DARABONBA_PTR_SET_VALUE(systemDiskDescription_, systemDiskDescription) };


      // systemDiskName Field Functions 
      bool hasSystemDiskName() const { return this->systemDiskName_ != nullptr;};
      void deleteSystemDiskName() { this->systemDiskName_ = nullptr;};
      inline string getSystemDiskName() const { DARABONBA_PTR_GET_DEFAULT(systemDiskName_, "") };
      inline LaunchConfiguration& setSystemDiskName(string systemDiskName) { DARABONBA_PTR_SET_VALUE(systemDiskName_, systemDiskName) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline LaunchConfiguration& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline LaunchConfiguration& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline const vector<LaunchConfiguration::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<LaunchConfiguration::Tag>) };
      inline vector<LaunchConfiguration::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<LaunchConfiguration::Tag>) };
      inline LaunchConfiguration& setTag(const vector<LaunchConfiguration::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
      inline LaunchConfiguration& setTag(vector<LaunchConfiguration::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline LaunchConfiguration& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // autoRenew Field Functions 
      bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
      void deleteAutoRenew() { this->autoRenew_ = nullptr;};
      inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
      inline LaunchConfiguration& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


      // autoRenewPeriod Field Functions 
      bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
      void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
      inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
      inline LaunchConfiguration& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


      // cpuOptions Field Functions 
      bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
      void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
      inline const LaunchConfiguration::CpuOptions & getCpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, LaunchConfiguration::CpuOptions) };
      inline LaunchConfiguration::CpuOptions getCpuOptions() { DARABONBA_PTR_GET(cpuOptions_, LaunchConfiguration::CpuOptions) };
      inline LaunchConfiguration& setCpuOptions(const LaunchConfiguration::CpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
      inline LaunchConfiguration& setCpuOptions(LaunchConfiguration::CpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


      // imageOptions Field Functions 
      bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
      void deleteImageOptions() { this->imageOptions_ = nullptr;};
      inline const LaunchConfiguration::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, LaunchConfiguration::ImageOptions) };
      inline LaunchConfiguration::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, LaunchConfiguration::ImageOptions) };
      inline LaunchConfiguration& setImageOptions(const LaunchConfiguration::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
      inline LaunchConfiguration& setImageOptions(LaunchConfiguration::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


      // period Field Functions 
      bool hasPeriod() const { return this->period_ != nullptr;};
      void deletePeriod() { this->period_ = nullptr;};
      inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
      inline LaunchConfiguration& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


      // periodUnit Field Functions 
      bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
      void deletePeriodUnit() { this->periodUnit_ = nullptr;};
      inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
      inline LaunchConfiguration& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


      // schedulerOptions Field Functions 
      bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
      void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
      inline const LaunchConfiguration::SchedulerOptions & getSchedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, LaunchConfiguration::SchedulerOptions) };
      inline LaunchConfiguration::SchedulerOptions getSchedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, LaunchConfiguration::SchedulerOptions) };
      inline LaunchConfiguration& setSchedulerOptions(const LaunchConfiguration::SchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
      inline LaunchConfiguration& setSchedulerOptions(LaunchConfiguration::SchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


      // securityOptions Field Functions 
      bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
      void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
      inline const LaunchConfiguration::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, LaunchConfiguration::SecurityOptions) };
      inline LaunchConfiguration::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, LaunchConfiguration::SecurityOptions) };
      inline LaunchConfiguration& setSecurityOptions(const LaunchConfiguration::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
      inline LaunchConfiguration& setSecurityOptions(LaunchConfiguration::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


      // spotDuration Field Functions 
      bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
      void deleteSpotDuration() { this->spotDuration_ = nullptr;};
      inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
      inline LaunchConfiguration& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


      // spotInterruptionBehavior Field Functions 
      bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
      void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
      inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
      inline LaunchConfiguration& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    protected:
      // >  This parameter is in invitational preview and is not publicly available.
      shared_ptr<vector<LaunchConfiguration::Arn>> arn_ {};
      // The automatic release time of the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in Coordinated Universal Time (UTC).
      // 
      // *   If the value of `ss` is not `00`, the start time is automatically rounded down to the nearest minute based on the value of `mm`.
      // *   The specified time must be at least 30 minutes later than the current time.
      // *   The specified time can be at most three years later than the current time.
      shared_ptr<string> autoReleaseTime_ {};
      // The performance mode of the burstable instance. Valid values:
      // 
      // *   Standard: the standard mode. For more information, see the "Standard mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
      // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
      // 
      // This parameter is empty by default.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> creditSpecification_ {};
      // The cloud disks in the extended configurations of the launch template.
      shared_ptr<vector<LaunchConfiguration::DataDisk>> dataDisk_ {};
      // The ID of the deployment set.
      shared_ptr<string> deploymentSetId_ {};
      // The instance hostname. Take note of the following items:
      // 
      // *   The hostname cannot start or end with a period (.) or hyphen (-). The hostname cannot contain consecutive periods (.) or hyphens (-).
      // *   For Windows instances, the hostname must be 2 to 15 characters in length and cannot contain periods (.) or contain only digits. It can contain letters, digits, and hyphens (-).
      // *   For instances that run other operating systems such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate a hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
      // *   You cannot specify both `LaunchConfiguration.HostName` and `LaunchConfiguration.HostNames.N`. Otherwise, an error is returned.
      // *   When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> hostName_ {};
      // The hostname of instance N. You can use this parameter to specify different hostnames for multiple instances. Take note of the following items:
      // 
      // - This parameter takes effect only when `AutoProvisioningGroupType` is set to instant. 
      // - The value of N indicates the number of instances. Valid values of N: 1 to 1000. The value of N must be the same as the TotalTargetCapacity value. 
      // - The hostname cannot start or end with a period (.) or hyphen (-). The hostname cannot contain consecutive periods (.) or hyphens (-). 
      // - For Windows instances, the hostname must be 2 to 15 characters in length and cannot contain periods (.) or contain only digits. The hostname can contain letters, digits, and hyphens (-). 
      // - For instances that run other operating systems such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-). 
      // - You cannot specify both `LaunchConfiguration.HostName` and `LaunchConfiguration.HostNames.N`. Otherwise, an error is returned. 
      // - When both LaunchTemplateId and LaunchConfiguration.* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<vector<string>> hostNames_ {};
      // The name of the image family. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `aliyun` or `acs:`. The name cannot contain `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> imageFamily_ {};
      // The ID of the image to be used to create the instance. You can call the [DescribeImages](https://help.aliyun.com/document_detail/25534.html) operation to query available image resources. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> imageId_ {};
      // The instance description. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> instanceDescription_ {};
      // The instance name. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
      // 
      // The default value of this parameter is the `InstanceId` value.
      // 
      // When you batch create instances, you can batch configure sequential names for the instances. For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> instanceName_ {};
      // The billing method for network usage. Valid values:
      // 
      // *   PayByBandwidth: pay-by-bandwidth
      // *   PayByTraffic: pay-by-traffic
      // 
      // >  When the pay-by-traffic billing method for network usage is used, the maximum inbound and outbound bandwidth values are used as the upper limits of bandwidth instead of guaranteed performance specifications. When demands outstrip resource supplies, the maximum bandwidths may be limited. If you want guaranteed bandwidth for your instance, use the pay-by-bandwidth billing method.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> internetChargeType_ {};
      // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
      // 
      // *   When the maximum outbound public bandwidth is less than or equal to 10 Mbit/s, the valid values of this parameter are 1 to 10 and the default value is 10.
      // *   When the maximum outbound public bandwidth is greater than 10 Mbit/s, the valid values of this parameter are 1 to the value of `LaunchConfiguration.InternetMaxBandwidthOut`, and the default value is the value of `LaunchConfiguration.InternetMaxBandwidthOut`.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<int32_t> internetMaxBandwidthIn_ {};
      // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
      // 
      // Default value: 0.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<int32_t> internetMaxBandwidthOut_ {};
      // Specifies whether the instance is I/O optimized. Valid values:
      // 
      // *   none: The instance is not I/O optimized.
      // *   optimized: The instance is I/O optimized.
      // 
      // For instances of retired instance types, the default value is none. For instances of other instance types, the default value is optimized.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> ioOptimized_ {};
      // The key pair name.
      // 
      // *   For Windows instances, this parameter is ignored. This parameter is empty by default.
      // *   By default, password-based logon is disabled for Linux instances.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> keyPairName_ {};
      // The instance password. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The password can contain the following special characters:
      // 
      // ``( ) ` ~ ! @ # $ % ^ & * - _ + = | { }  ``: ; \\" < > , . ? /``  For Windows instances, the password cannot start with a forward slash (/). When both LaunchTemplateId and LaunchConfiguration.* parameters are specified, LaunchTemplateId takes precedence. `
      shared_ptr<string> password_ {};
      // Specifies whether to use the password preset in the image. Valid values:
      // 
      // *   true: uses the password preset in the image.
      // *   false: does not use the password preset in the image.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<bool> passwordInherit_ {};
      // The name of the instance Resource Access Management (RAM) role. You can call the [ListRoles](https://help.aliyun.com/document_detail/28713.html) operation provided by RAM to query the instance RAM roles that you created. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> ramRoleName_ {};
      // The ID of the resource group to which to assign the instance. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> resourceGroupId_ {};
      // Specifies whether to enable security hardening. Valid values:
      // 
      // *   Active: enables security hardening. This value is applicable only to public images.
      // *   Deactive: disables security hardening. This value is applicable to all image types.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> securityEnhancementStrategy_ {};
      // The ID of the security group to which to assign the instance. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> securityGroupId_ {};
      // The IDs of the security groups to which the new ECS instances belong.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The system disk information of instances. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<LaunchConfiguration::SystemDisk> systemDisk_ {};
      // The category of the system disk. Valid values:
      // 
      // *   cloud_efficiency: ultra disk
      // *   cloud_ssd: standard SSD
      // *   cloud_essd: enhanced SSD (ESSD)
      // *   cloud: basic disk
      // 
      // For non-I/O optimized instances of retired instance types, the default value is cloud. For other instances, the default value is cloud_efficiency.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> systemDiskCategory_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length. The description can contain letters and cannot start with `http://` or `https://`.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> systemDiskDescription_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, periods (.), colons (:), underscores (_), and hyphens (-).
      // 
      // This parameter is empty by default.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> systemDiskName_ {};
      // The performance level of the ESSD to be used as the system disk. Valid values:
      // 
      // *   PL0 (default): A single ESSD can deliver up to 10,000 random read/write IOPS.
      // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
      // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
      // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For more information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The size of the system disk. Valid values: 20 to 500. Unit: GiB. The value must be at least 20 and greater than or equal to the size of the image specified by LaunchConfiguration.ImageId.
      // 
      // Default value: 40 or the size of the image specified by LaunchConfiguration.ImageId, whichever is greater.
      // 
      // When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The tag in the extended configurations of the launch template.
      shared_ptr<vector<LaunchConfiguration::Tag>> tag_ {};
      // The instance user data. The user data must be encoded in Base64. The raw data can be up to 32 KB in size. When both LaunchTemplateId and LaunchConfiguration.\\* parameters are specified, LaunchTemplateId takes precedence.
      shared_ptr<string> userData_ {};
      // Specifies whether to enable auto-renewal for the reserved instance. This parameter is required only when the instance uses the subscription billing method. Valid values:
      // 
      // *   true
      // *   false (default)
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period of the instance. Valid values:
      // 
      // Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
      // 
      // Default value: 1.
      shared_ptr<int32_t> autoRenewPeriod_ {};
      shared_ptr<LaunchConfiguration::CpuOptions> cpuOptions_ {};
      // The image options.
      // 
      // When you specify this parameter, take note of the following items:
      // 
      // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
      shared_ptr<LaunchConfiguration::ImageOptions> imageOptions_ {};
      // The subscription period of the instance. The unit is specified by `PeriodUnit`. This parameter takes effect and is required only if the subscription billing method is selected. Valid values:
      // 
      // Valid values if PeriodUnit is set to Month: 1, 2, 3, 6, and 12.
      shared_ptr<int32_t> period_ {};
      // The unit of the subscription period. Default value: Month. Valid values:
      // 
      // Month
      shared_ptr<string> periodUnit_ {};
      shared_ptr<LaunchConfiguration::SchedulerOptions> schedulerOptions_ {};
      shared_ptr<LaunchConfiguration::SecurityOptions> securityOptions_ {};
      // The protection period of the spot instance. Unit: hours. Default value: 1. Valid values: Valid values:
      // 
      // *   1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
      // *   0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
      // 
      // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. The spot instance is billed by second. We recommend that you specify an appropriate protection period based on your business requirements.
      // 
      // When you specify this parameter, take note of the following items:
      // 
      // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
      shared_ptr<int32_t> spotDuration_ {};
      // The interruption event of the spot instances. Valid values:
      // 
      // *   Terminate: The instance is released.
      // *   Stop: The instance is stopped in economical mode.
      // 
      // For information about the economical mode, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
      // 
      // Default value: Terminate.
      // 
      // When you specify this parameter, take note of the following items:
      // 
      // *   This parameter takes effect only when the AutoProvisioningGroupType parameter is set to instant.
      shared_ptr<string> spotInterruptionBehavior_ {};
    };

    virtual bool empty() const override { return this->launchConfiguration_ == nullptr
        && this->autoProvisioningGroupName_ == nullptr && this->autoProvisioningGroupType_ == nullptr && this->clientToken_ == nullptr && this->dataDiskConfig_ == nullptr && this->defaultTargetCapacityType_ == nullptr
        && this->description_ == nullptr && this->excessCapacityTerminationPolicy_ == nullptr && this->executionMode_ == nullptr && this->hibernationOptionsConfigured_ == nullptr && this->launchTemplateConfig_ == nullptr
        && this->launchTemplateId_ == nullptr && this->launchTemplateVersion_ == nullptr && this->maxSpotPrice_ == nullptr && this->minTargetCapacity_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->payAsYouGoAllocationStrategy_ == nullptr && this->payAsYouGoTargetCapacity_ == nullptr && this->prePaidOptions_ == nullptr && this->regionId_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourcePoolOptionsShrink_ == nullptr && this->spotAllocationStrategy_ == nullptr
        && this->spotInstanceInterruptionBehavior_ == nullptr && this->spotInstancePoolsToUseCount_ == nullptr && this->spotTargetCapacity_ == nullptr && this->systemDiskConfig_ == nullptr && this->tag_ == nullptr
        && this->terminateInstances_ == nullptr && this->terminateInstancesWithExpiration_ == nullptr && this->totalTargetCapacity_ == nullptr && this->validFrom_ == nullptr && this->validUntil_ == nullptr; };
    // launchConfiguration Field Functions 
    bool hasLaunchConfiguration() const { return this->launchConfiguration_ != nullptr;};
    void deleteLaunchConfiguration() { this->launchConfiguration_ = nullptr;};
    inline const CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration & getLaunchConfiguration() const { DARABONBA_PTR_GET_CONST(launchConfiguration_, CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration) };
    inline CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration getLaunchConfiguration() { DARABONBA_PTR_GET(launchConfiguration_, CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration) };
    inline CreateAutoProvisioningGroupShrinkRequest& setLaunchConfiguration(const CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration & launchConfiguration) { DARABONBA_PTR_SET_VALUE(launchConfiguration_, launchConfiguration) };
    inline CreateAutoProvisioningGroupShrinkRequest& setLaunchConfiguration(CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration && launchConfiguration) { DARABONBA_PTR_SET_RVALUE(launchConfiguration_, launchConfiguration) };


    // autoProvisioningGroupName Field Functions 
    bool hasAutoProvisioningGroupName() const { return this->autoProvisioningGroupName_ != nullptr;};
    void deleteAutoProvisioningGroupName() { this->autoProvisioningGroupName_ = nullptr;};
    inline string getAutoProvisioningGroupName() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupName_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setAutoProvisioningGroupName(string autoProvisioningGroupName) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupName_, autoProvisioningGroupName) };


    // autoProvisioningGroupType Field Functions 
    bool hasAutoProvisioningGroupType() const { return this->autoProvisioningGroupType_ != nullptr;};
    void deleteAutoProvisioningGroupType() { this->autoProvisioningGroupType_ = nullptr;};
    inline string getAutoProvisioningGroupType() const { DARABONBA_PTR_GET_DEFAULT(autoProvisioningGroupType_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setAutoProvisioningGroupType(string autoProvisioningGroupType) { DARABONBA_PTR_SET_VALUE(autoProvisioningGroupType_, autoProvisioningGroupType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataDiskConfig Field Functions 
    bool hasDataDiskConfig() const { return this->dataDiskConfig_ != nullptr;};
    void deleteDataDiskConfig() { this->dataDiskConfig_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig> & getDataDiskConfig() const { DARABONBA_PTR_GET_CONST(dataDiskConfig_, vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig>) };
    inline vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig> getDataDiskConfig() { DARABONBA_PTR_GET(dataDiskConfig_, vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig>) };
    inline CreateAutoProvisioningGroupShrinkRequest& setDataDiskConfig(const vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig> & dataDiskConfig) { DARABONBA_PTR_SET_VALUE(dataDiskConfig_, dataDiskConfig) };
    inline CreateAutoProvisioningGroupShrinkRequest& setDataDiskConfig(vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig> && dataDiskConfig) { DARABONBA_PTR_SET_RVALUE(dataDiskConfig_, dataDiskConfig) };


    // defaultTargetCapacityType Field Functions 
    bool hasDefaultTargetCapacityType() const { return this->defaultTargetCapacityType_ != nullptr;};
    void deleteDefaultTargetCapacityType() { this->defaultTargetCapacityType_ = nullptr;};
    inline string getDefaultTargetCapacityType() const { DARABONBA_PTR_GET_DEFAULT(defaultTargetCapacityType_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setDefaultTargetCapacityType(string defaultTargetCapacityType) { DARABONBA_PTR_SET_VALUE(defaultTargetCapacityType_, defaultTargetCapacityType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // excessCapacityTerminationPolicy Field Functions 
    bool hasExcessCapacityTerminationPolicy() const { return this->excessCapacityTerminationPolicy_ != nullptr;};
    void deleteExcessCapacityTerminationPolicy() { this->excessCapacityTerminationPolicy_ = nullptr;};
    inline string getExcessCapacityTerminationPolicy() const { DARABONBA_PTR_GET_DEFAULT(excessCapacityTerminationPolicy_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setExcessCapacityTerminationPolicy(string excessCapacityTerminationPolicy) { DARABONBA_PTR_SET_VALUE(excessCapacityTerminationPolicy_, excessCapacityTerminationPolicy) };


    // executionMode Field Functions 
    bool hasExecutionMode() const { return this->executionMode_ != nullptr;};
    void deleteExecutionMode() { this->executionMode_ = nullptr;};
    inline string getExecutionMode() const { DARABONBA_PTR_GET_DEFAULT(executionMode_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setExecutionMode(string executionMode) { DARABONBA_PTR_SET_VALUE(executionMode_, executionMode) };


    // hibernationOptionsConfigured Field Functions 
    bool hasHibernationOptionsConfigured() const { return this->hibernationOptionsConfigured_ != nullptr;};
    void deleteHibernationOptionsConfigured() { this->hibernationOptionsConfigured_ = nullptr;};
    inline bool getHibernationOptionsConfigured() const { DARABONBA_PTR_GET_DEFAULT(hibernationOptionsConfigured_, false) };
    inline CreateAutoProvisioningGroupShrinkRequest& setHibernationOptionsConfigured(bool hibernationOptionsConfigured) { DARABONBA_PTR_SET_VALUE(hibernationOptionsConfigured_, hibernationOptionsConfigured) };


    // launchTemplateConfig Field Functions 
    bool hasLaunchTemplateConfig() const { return this->launchTemplateConfig_ != nullptr;};
    void deleteLaunchTemplateConfig() { this->launchTemplateConfig_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig> & getLaunchTemplateConfig() const { DARABONBA_PTR_GET_CONST(launchTemplateConfig_, vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig>) };
    inline vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig> getLaunchTemplateConfig() { DARABONBA_PTR_GET(launchTemplateConfig_, vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig>) };
    inline CreateAutoProvisioningGroupShrinkRequest& setLaunchTemplateConfig(const vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig> & launchTemplateConfig) { DARABONBA_PTR_SET_VALUE(launchTemplateConfig_, launchTemplateConfig) };
    inline CreateAutoProvisioningGroupShrinkRequest& setLaunchTemplateConfig(vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig> && launchTemplateConfig) { DARABONBA_PTR_SET_RVALUE(launchTemplateConfig_, launchTemplateConfig) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline string getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setLaunchTemplateVersion(string launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // maxSpotPrice Field Functions 
    bool hasMaxSpotPrice() const { return this->maxSpotPrice_ != nullptr;};
    void deleteMaxSpotPrice() { this->maxSpotPrice_ = nullptr;};
    inline float getMaxSpotPrice() const { DARABONBA_PTR_GET_DEFAULT(maxSpotPrice_, 0.0) };
    inline CreateAutoProvisioningGroupShrinkRequest& setMaxSpotPrice(float maxSpotPrice) { DARABONBA_PTR_SET_VALUE(maxSpotPrice_, maxSpotPrice) };


    // minTargetCapacity Field Functions 
    bool hasMinTargetCapacity() const { return this->minTargetCapacity_ != nullptr;};
    void deleteMinTargetCapacity() { this->minTargetCapacity_ = nullptr;};
    inline string getMinTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(minTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setMinTargetCapacity(string minTargetCapacity) { DARABONBA_PTR_SET_VALUE(minTargetCapacity_, minTargetCapacity) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateAutoProvisioningGroupShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // payAsYouGoAllocationStrategy Field Functions 
    bool hasPayAsYouGoAllocationStrategy() const { return this->payAsYouGoAllocationStrategy_ != nullptr;};
    void deletePayAsYouGoAllocationStrategy() { this->payAsYouGoAllocationStrategy_ = nullptr;};
    inline string getPayAsYouGoAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoAllocationStrategy_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setPayAsYouGoAllocationStrategy(string payAsYouGoAllocationStrategy) { DARABONBA_PTR_SET_VALUE(payAsYouGoAllocationStrategy_, payAsYouGoAllocationStrategy) };


    // payAsYouGoTargetCapacity Field Functions 
    bool hasPayAsYouGoTargetCapacity() const { return this->payAsYouGoTargetCapacity_ != nullptr;};
    void deletePayAsYouGoTargetCapacity() { this->payAsYouGoTargetCapacity_ = nullptr;};
    inline string getPayAsYouGoTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(payAsYouGoTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setPayAsYouGoTargetCapacity(string payAsYouGoTargetCapacity) { DARABONBA_PTR_SET_VALUE(payAsYouGoTargetCapacity_, payAsYouGoTargetCapacity) };


    // prePaidOptions Field Functions 
    bool hasPrePaidOptions() const { return this->prePaidOptions_ != nullptr;};
    void deletePrePaidOptions() { this->prePaidOptions_ = nullptr;};
    inline const CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions & getPrePaidOptions() const { DARABONBA_PTR_GET_CONST(prePaidOptions_, CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions) };
    inline CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions getPrePaidOptions() { DARABONBA_PTR_GET(prePaidOptions_, CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions) };
    inline CreateAutoProvisioningGroupShrinkRequest& setPrePaidOptions(const CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions & prePaidOptions) { DARABONBA_PTR_SET_VALUE(prePaidOptions_, prePaidOptions) };
    inline CreateAutoProvisioningGroupShrinkRequest& setPrePaidOptions(CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions && prePaidOptions) { DARABONBA_PTR_SET_RVALUE(prePaidOptions_, prePaidOptions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateAutoProvisioningGroupShrinkRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourcePoolOptionsShrink Field Functions 
    bool hasResourcePoolOptionsShrink() const { return this->resourcePoolOptionsShrink_ != nullptr;};
    void deleteResourcePoolOptionsShrink() { this->resourcePoolOptionsShrink_ = nullptr;};
    inline string getResourcePoolOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourcePoolOptionsShrink_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setResourcePoolOptionsShrink(string resourcePoolOptionsShrink) { DARABONBA_PTR_SET_VALUE(resourcePoolOptionsShrink_, resourcePoolOptionsShrink) };


    // spotAllocationStrategy Field Functions 
    bool hasSpotAllocationStrategy() const { return this->spotAllocationStrategy_ != nullptr;};
    void deleteSpotAllocationStrategy() { this->spotAllocationStrategy_ = nullptr;};
    inline string getSpotAllocationStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotAllocationStrategy_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setSpotAllocationStrategy(string spotAllocationStrategy) { DARABONBA_PTR_SET_VALUE(spotAllocationStrategy_, spotAllocationStrategy) };


    // spotInstanceInterruptionBehavior Field Functions 
    bool hasSpotInstanceInterruptionBehavior() const { return this->spotInstanceInterruptionBehavior_ != nullptr;};
    void deleteSpotInstanceInterruptionBehavior() { this->spotInstanceInterruptionBehavior_ = nullptr;};
    inline string getSpotInstanceInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInstanceInterruptionBehavior_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setSpotInstanceInterruptionBehavior(string spotInstanceInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInstanceInterruptionBehavior_, spotInstanceInterruptionBehavior) };


    // spotInstancePoolsToUseCount Field Functions 
    bool hasSpotInstancePoolsToUseCount() const { return this->spotInstancePoolsToUseCount_ != nullptr;};
    void deleteSpotInstancePoolsToUseCount() { this->spotInstancePoolsToUseCount_ = nullptr;};
    inline int32_t getSpotInstancePoolsToUseCount() const { DARABONBA_PTR_GET_DEFAULT(spotInstancePoolsToUseCount_, 0) };
    inline CreateAutoProvisioningGroupShrinkRequest& setSpotInstancePoolsToUseCount(int32_t spotInstancePoolsToUseCount) { DARABONBA_PTR_SET_VALUE(spotInstancePoolsToUseCount_, spotInstancePoolsToUseCount) };


    // spotTargetCapacity Field Functions 
    bool hasSpotTargetCapacity() const { return this->spotTargetCapacity_ != nullptr;};
    void deleteSpotTargetCapacity() { this->spotTargetCapacity_ = nullptr;};
    inline string getSpotTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(spotTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setSpotTargetCapacity(string spotTargetCapacity) { DARABONBA_PTR_SET_VALUE(spotTargetCapacity_, spotTargetCapacity) };


    // systemDiskConfig Field Functions 
    bool hasSystemDiskConfig() const { return this->systemDiskConfig_ != nullptr;};
    void deleteSystemDiskConfig() { this->systemDiskConfig_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig> & getSystemDiskConfig() const { DARABONBA_PTR_GET_CONST(systemDiskConfig_, vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig>) };
    inline vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig> getSystemDiskConfig() { DARABONBA_PTR_GET(systemDiskConfig_, vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig>) };
    inline CreateAutoProvisioningGroupShrinkRequest& setSystemDiskConfig(const vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig> & systemDiskConfig) { DARABONBA_PTR_SET_VALUE(systemDiskConfig_, systemDiskConfig) };
    inline CreateAutoProvisioningGroupShrinkRequest& setSystemDiskConfig(vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig> && systemDiskConfig) { DARABONBA_PTR_SET_RVALUE(systemDiskConfig_, systemDiskConfig) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateAutoProvisioningGroupShrinkRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateAutoProvisioningGroupShrinkRequest::Tag>) };
    inline vector<CreateAutoProvisioningGroupShrinkRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateAutoProvisioningGroupShrinkRequest::Tag>) };
    inline CreateAutoProvisioningGroupShrinkRequest& setTag(const vector<CreateAutoProvisioningGroupShrinkRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateAutoProvisioningGroupShrinkRequest& setTag(vector<CreateAutoProvisioningGroupShrinkRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // terminateInstances Field Functions 
    bool hasTerminateInstances() const { return this->terminateInstances_ != nullptr;};
    void deleteTerminateInstances() { this->terminateInstances_ = nullptr;};
    inline bool getTerminateInstances() const { DARABONBA_PTR_GET_DEFAULT(terminateInstances_, false) };
    inline CreateAutoProvisioningGroupShrinkRequest& setTerminateInstances(bool terminateInstances) { DARABONBA_PTR_SET_VALUE(terminateInstances_, terminateInstances) };


    // terminateInstancesWithExpiration Field Functions 
    bool hasTerminateInstancesWithExpiration() const { return this->terminateInstancesWithExpiration_ != nullptr;};
    void deleteTerminateInstancesWithExpiration() { this->terminateInstancesWithExpiration_ = nullptr;};
    inline bool getTerminateInstancesWithExpiration() const { DARABONBA_PTR_GET_DEFAULT(terminateInstancesWithExpiration_, false) };
    inline CreateAutoProvisioningGroupShrinkRequest& setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration) { DARABONBA_PTR_SET_VALUE(terminateInstancesWithExpiration_, terminateInstancesWithExpiration) };


    // totalTargetCapacity Field Functions 
    bool hasTotalTargetCapacity() const { return this->totalTargetCapacity_ != nullptr;};
    void deleteTotalTargetCapacity() { this->totalTargetCapacity_ = nullptr;};
    inline string getTotalTargetCapacity() const { DARABONBA_PTR_GET_DEFAULT(totalTargetCapacity_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setTotalTargetCapacity(string totalTargetCapacity) { DARABONBA_PTR_SET_VALUE(totalTargetCapacity_, totalTargetCapacity) };


    // validFrom Field Functions 
    bool hasValidFrom() const { return this->validFrom_ != nullptr;};
    void deleteValidFrom() { this->validFrom_ = nullptr;};
    inline string getValidFrom() const { DARABONBA_PTR_GET_DEFAULT(validFrom_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setValidFrom(string validFrom) { DARABONBA_PTR_SET_VALUE(validFrom_, validFrom) };


    // validUntil Field Functions 
    bool hasValidUntil() const { return this->validUntil_ != nullptr;};
    void deleteValidUntil() { this->validUntil_ = nullptr;};
    inline string getValidUntil() const { DARABONBA_PTR_GET_DEFAULT(validUntil_, "") };
    inline CreateAutoProvisioningGroupShrinkRequest& setValidUntil(string validUntil) { DARABONBA_PTR_SET_VALUE(validUntil_, validUntil) };


  protected:
    shared_ptr<CreateAutoProvisioningGroupShrinkRequest::LaunchConfiguration> launchConfiguration_ {};
    // The name of the auto provisioning group. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> autoProvisioningGroupName_ {};
    // The delivery type of the auto provisioning group. Valid values:
    // 
    // *   request: one-time asynchronous delivery. When the auto provisioning group is started, it attempts to asynchronously deliver an instance cluster that meets the target capacity only once. The group does not retry the operation regardless of whether all the instances are delivered.
    // *   instant: one-time synchronous delivery. When the auto provisioning group is started, it attempts to synchronously deliver an instance cluster that meets the target capacity only once. The list of delivered instances and the causes of delivery failures are returned in the response.
    // *   maintain: continuous delivery. When the auto provisioning group is started, it attempts to deliver an instance cluster that meets the target capacity, and monitors the real-time capacity. If the target capacity of the auto provisioning group is not reached, the auto provisioning group continues to create instances until the target capacity is reached.
    // 
    // Default value: maintain.
    shared_ptr<string> autoProvisioningGroupType_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The information of data disks on the instance.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig>> dataDiskConfig_ {};
    // The type of supplemental instances. When the sum of the `PayAsYouGoTargetCapacity` and `SpotTargetCapacity` values is smaller than the `TotalTargetCapacity` value, the auto provisioning group creates instances of the specified type to meet the total target capacity. Valid values:
    // 
    // *   PayAsYouGo: pay-as-you-go
    // *   Spot: spot instance
    // 
    // Default value: Spot.
    shared_ptr<string> defaultTargetCapacityType_ {};
    // The description of the auto provisioning group.
    shared_ptr<string> description_ {};
    // Specifies whether to release scaled-in instances when the real-time capacity of the auto provisioning group exceeds the target capacity and the group is triggered to scale in. Valid values:
    // 
    // *   termination: releases the scaled-in instances in the auto provisioning group.
    // *   no-termination: removes the scaled-in instances from the auto provisioning group but does not release the instances.
    // 
    // Default value: no-termination.
    shared_ptr<string> excessCapacityTerminationPolicy_ {};
    shared_ptr<string> executionMode_ {};
    // >This parameter is in invitational preview and is not publicly available.
    shared_ptr<bool> hibernationOptionsConfigured_ {};
    // The extended configurations of the launch template.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig>> launchTemplateConfig_ {};
    // The ID of the launch template associated with the auto provisioning group. You can call the [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html) operation to query available launch templates. When both LaunchTemplateId and `LaunchConfiguration.*` parameters are specified, LaunchTemplateId takes precedence.
    shared_ptr<string> launchTemplateId_ {};
    // The version of the launch template associated with the auto provisioning group. You can call the [DescribeLaunchTemplateVersions](https://help.aliyun.com/document_detail/73761.html) operation to query the versions of available launch templates.
    // 
    // Default value: the default version of the launch template.
    shared_ptr<string> launchTemplateVersion_ {};
    // The maximum price of spot instances in the auto provisioning group.
    // 
    // >  When both `MaxSpotPrice` and `LaunchTemplateConfig.N.MaxPrice` are specified, the smaller one of the two parameter values is used.
    shared_ptr<float> maxSpotPrice_ {};
    // The minimum target capacity of the auto provisioning group. The value must be a positive integer. When you specify this parameter, take note of the following items:
    // 
    // - This parameter takes effect only when `AutoProvisioningGroupType` is set to instant. 
    // - If the number of instances that can be created in the current region is smaller than the value of this parameter, the operation cannot be called and no instances are created. 
    // - If the number of instances that can be created in the current region is greater than the value of this parameter, instances can be created based on the specified parameters.
    shared_ptr<string> minTargetCapacity_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy for creating pay-as-you-go instances. Valid values:
    // 
    // *   lowest-price: cost optimization policy. The auto provisioning group selects the lowest-priced instance type to create instances.
    // *   prioritized: priority-based policy. The auto provisioning group creates instances based on the priority specified by `LaunchTemplateConfig.N.Priority`.
    // 
    // Default value: lowest-price.
    shared_ptr<string> payAsYouGoAllocationStrategy_ {};
    // The target capacity of pay-as-you-go instances in the auto provisioning group. The value must be less than or equal to the `TotalTargetCapacity` value.
    shared_ptr<string> payAsYouGoTargetCapacity_ {};
    // The capacity details of the subscription instance.
    shared_ptr<CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions> prePaidOptions_ {};
    // The ID of the region in which to create the auto provisioning group. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the auto provisioning group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The resource pool options to use to create instances. When you specify this parameter, take note of the following items:
    // 
    // *   This parameter takes effect only when the auto provisioning group creates pay-as-you-go instances.
    // *   This parameter takes effect only if you set `AutoProvisioningGroupType` to instant.
    shared_ptr<string> resourcePoolOptionsShrink_ {};
    // The policy for creating spot instances. Valid values:
    // 
    // *   lowest-price: cost optimization policy. The auto provisioning group selects the lowest-priced instance type to create instances.
    // *   diversified: balanced distribution policy. The auto provisioning group creates instances in zones that are specified in extended configurations and then evenly distributes the instances across the zones.
    // *   capacity-optimized: capacity-optimized distribution policy. The auto provisioning group creates instances of the optimal instance types across the optimal zones based on resource availability.
    // 
    // Default value: lowest-price.
    shared_ptr<string> spotAllocationStrategy_ {};
    // The operation to be performed on the spot instance when it is interrupted. Valid values:
    // 
    // *   stop: stops the spot instance.
    // *   terminate: releases the spot instance.
    // 
    // Default value: terminate.
    shared_ptr<string> spotInstanceInterruptionBehavior_ {};
    // The number of spot instances of the lowest-priced instance type to be created by the auto provisioning group. This parameter takes effect when `SpotAllocationStrategy` is set to `lowest-price`.
    // 
    // The value must be smaller than the N value specified in `LaunchTemplateConfig.N`.
    shared_ptr<int32_t> spotInstancePoolsToUseCount_ {};
    // The target capacity of spot instances in the auto provisioning group. The value must be less than or equal to the `TotalTargetCapacity` value.
    shared_ptr<string> spotTargetCapacity_ {};
    // The information of system disks on the instance.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig>> systemDiskConfig_ {};
    // The tags to add to the auto provisioning group.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::Tag>> tag_ {};
    // Specifies whether to release instances in the auto provisioning group when the auto provisioning group is deleted. Valid values:
    // 
    // *   true: releases the instances.
    // *   false: retains the instances.
    // 
    // Default value: false.
    shared_ptr<bool> terminateInstances_ {};
    // Specifies whether to release instances in the auto provisioning group when the group expires. Valid values:
    // 
    // *   true: releases the instances.
    // *   false: only removes the instances from the auto provisioning group but does not release them.
    // 
    // Default value: false.
    shared_ptr<bool> terminateInstancesWithExpiration_ {};
    // The total target capacity of the auto provisioning group. The value must be a positive integer.
    // 
    // The total target capacity of the auto provisioning group must be greater than or equal to the sum of the target capacity of pay-as-you-go instances specified by `PayAsYouGoTargetCapacity` and the target capacity of spot instances specified by `SpotTargetCapacity`.
    // 
    // This parameter is required.
    shared_ptr<string> totalTargetCapacity_ {};
    // The time at which to start the auto provisioning group. The period of time between this point in time and the point in time specified by `ValidUntil` is the validity period of the auto provisioning group.
    // 
    // Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // By default, an auto provisioning group is started immediately after it is created.
    shared_ptr<string> validFrom_ {};
    // The time at which the auto provisioning group expires. The period of time between this point in time and the point in time specified by `ValidFrom` is the validity period of the auto provisioning group.
    // 
    // Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // Default value: 2099-12-31T23:59:59Z.
    shared_ptr<string> validUntil_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
