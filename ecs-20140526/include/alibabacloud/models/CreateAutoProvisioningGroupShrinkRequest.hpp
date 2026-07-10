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
      DARABONBA_PTR_TO_JSON(CandidateOptions, candidateOptions_);
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
      DARABONBA_PTR_FROM_JSON(CandidateOptions, candidateOptions_);
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
      // The tag key of the auto provisioning group.
      // 
      // Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. The tag key cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value of the auto provisioning group.
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
      // The category of the system disk. You can specify multiple candidate disk categories. The specified order determines the priority of each disk category. When a disk category is unavailable, the system automatically switches to the next category. Valid values:
      // 
      // -   cloud_efficiency: ultra disk.
      // -   cloud_ssd: standard SSD.
      // -   cloud_essd: enterprise SSD (ESSD).
      // -   cloud: basic disk.
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
        // The set of instance types. Duplicate values are not allowed, and the instance types must be within the range of LaunchTemplateConfig.InstanceType.
        shared_ptr<vector<string>> instanceTypes_ {};
        // The minimum number of instances to deliver within the `InstanceTypes` range.
        // 
        // > The sum of all MinTargetCapacity values (`sum(MinTargetCapacity) <= TotalTargetCapacity`) cannot exceed TotalTargetCapacity. If any instance type set cannot meet the MinTargetCapacity requirement due to insufficient inventory or other reasons, the entire request fails.
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
      // The minimum capacity set for different instance types. This parameter is supported only when `AutoProvisioningGroupType = request`.
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
      // The list of architecture types for instance types.
      shared_ptr<vector<string>> architectures_ {};
      // Specifies whether to include burstable instance types. Valid values:
      // 
      // - Exclude: excludes burstable instance types.
      // - Include: includes burstable instance types.
      // - Required: includes only burstable instance types.
      // 
      // Default value: Include.
      shared_ptr<string> burstablePerformance_ {};
      // The list of vCPU core counts for instance types.
      shared_ptr<vector<int32_t>> cores_ {};
      // The list of instance types to exclude.
      shared_ptr<vector<string>> excludedInstanceTypes_ {};
      // The image ID. You can use this parameter to set the image for the current resource pool. If not set, the image specified in `LaunchConfiguration.ImageId` or the launch template is used by default. You can call [DescribeImages](https://help.aliyun.com/document_detail/25534.html) to query available image resources.
      // Note: This parameter is supported only when `AutoProvisioningGroupType = instant`.
      shared_ptr<string> imageId_ {};
      // The level of the instance family, used to filter instance types that meet the requirements. Valid values:
      // 
      // - EntryLevel: entry level, which refers to shared instance types. Lower cost but no guarantee of stable computing performance. Suitable for scenarios with low average CPU utilization. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
      // - EnterpriseLevel: enterprise level. Stable performance with dedicated resources. Suitable for scenarios that require high stability. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // - CreditEntryLevel: credit-based entry level, which refers to burstable instances. Uses CPU credits to ensure computing performance. Suitable for scenarios with low average CPU utilization and occasional bursts. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      // 
      // Valid values of N: 1 to 10.
      shared_ptr<string> instanceFamilyLevel_ {};
      // The instance type in the extended launch template. Valid values of N: 1 to 20. For valid values, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> instanceType_ {};
      // The maximum price for spot instances in the extended launch template.
      // 
      // > After you set `LaunchTemplateConfig`, `LaunchTemplateConfig.N.MaxPrice` is required.
      shared_ptr<double> maxPrice_ {};
      // > This parameter is in invitational preview and is not available for use.
      shared_ptr<int32_t> maxQuantity_ {};
      // The list of memory sizes for instance types.
      shared_ptr<vector<float>> memories_ {};
      // The priority of the extended launch template. A value of 0 indicates the highest priority. Valid values: 0 to +∞.
      shared_ptr<int32_t> priority_ {};
      // The ID of the vSwitch to which the ECS instance in the extended launch template is connected. The zone of the ECS instance created from the extended template is determined by the vSwitch.
      // 
      // > If you specify LaunchTemplateConfig, LaunchTemplateConfig.N.VSwitchId is required.
      shared_ptr<string> vSwitchId_ {};
      // The weight of the instance type in the extended launch template. A higher value indicates that a single instance can meet more computing power requirements, which reduces the number of instances required. Valid values: greater than 0.
      // 
      // You can calculate the weight based on the computing power of the specified instance type and the minimum computing power of a single node in the cluster. For example, if the minimum computing power of a single node is 8 vCPUs and 60 GiB:
      // 
      // - The weight of an instance type with 8 vCPUs and 60 GiB can be set to 1.
      // - The weight of an instance type with 16 vCPUs and 120 GiB can be set to 2.
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
      // The category of the data disk. You can specify multiple candidate disk categories. The specified order determines the priority of each disk category. When a disk category is unavailable, the system automatically switches to the next category. Valid values:
      // 
      // -   cloud_efficiency: ultra disk.
      // -   cloud_ssd: standard SSD.
      // -   cloud_essd: enterprise SSD (ESSD).
      // -   cloud: basic disk.
      shared_ptr<string> diskCategory_ {};
    };

    class CandidateOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CandidateOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Evaluate, evaluate_);
        DARABONBA_PTR_TO_JSON(TimeoutMinutes, timeoutMinutes_);
      };
      friend void from_json(const Darabonba::Json& j, CandidateOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Evaluate, evaluate_);
        DARABONBA_PTR_FROM_JSON(TimeoutMinutes, timeoutMinutes_);
      };
      CandidateOptions() = default ;
      CandidateOptions(const CandidateOptions &) = default ;
      CandidateOptions(CandidateOptions &&) = default ;
      CandidateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CandidateOptions() = default ;
      CandidateOptions& operator=(const CandidateOptions &) = default ;
      CandidateOptions& operator=(CandidateOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->evaluate_ == nullptr
        && this->timeoutMinutes_ == nullptr; };
      // evaluate Field Functions 
      bool hasEvaluate() const { return this->evaluate_ != nullptr;};
      void deleteEvaluate() { this->evaluate_ = nullptr;};
      inline bool getEvaluate() const { DARABONBA_PTR_GET_DEFAULT(evaluate_, false) };
      inline CandidateOptions& setEvaluate(bool evaluate) { DARABONBA_PTR_SET_VALUE(evaluate_, evaluate) };


      // timeoutMinutes Field Functions 
      bool hasTimeoutMinutes() const { return this->timeoutMinutes_ != nullptr;};
      void deleteTimeoutMinutes() { this->timeoutMinutes_ = nullptr;};
      inline int32_t getTimeoutMinutes() const { DARABONBA_PTR_GET_DEFAULT(timeoutMinutes_, 0) };
      inline CandidateOptions& setTimeoutMinutes(int32_t timeoutMinutes) { DARABONBA_PTR_SET_VALUE(timeoutMinutes_, timeoutMinutes) };


    protected:
      shared_ptr<bool> evaluate_ {};
      shared_ptr<int32_t> timeoutMinutes_ {};
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
        // Specifies whether the instance that uses this image supports logon as the ecs-user user. Valid values:
        // - true: supported.
        // - false: not supported.
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
        // The number of CPU cores.
        // 
        // Default value: see [Specify and view CPU options](https://www.alibabacloud.com/help/en/ecs/user-guide/specify-and-view-cpu-options).
        shared_ptr<int32_t> core_ {};
        // The number of threads per CPU core. The number of vCPUs of the ECS instance = CpuOptions.Core value × CpuOptions.ThreadsPerCore value.
        // 
        // If CpuOptions.ThreadsPerCore is set to 1, CPU hyper-threading is disabled.
        // 
        // Only specific instance types support custom CPU thread counts.
        // 
        // For valid values and default values, see [Specify and view CPU options](https://www.alibabacloud.com/help/en/ecs/user-guide/specify-and-view-cpu-options).
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
        // The tag key of the instance. Valid values of N: 1 to 20. The tag key cannot be an empty string. It can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain `http://` or `https://`. If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<string> key_ {};
        // The tag value of the instance. Valid values of N: 1 to 20. The tag value can be an empty string. It can be up to 128 characters in length and cannot start with acs:. It cannot contain `http://` or `https://`. If you specify both a launch template and launch configuration information, the launch template takes precedence.
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
        // After you set this parameter, note the following items:
        // - This parameter takes effect only when you create a one-time synchronization delivery auto provisioning group (AutoProvisioningGroupType=instant).
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // Specifies whether to enable the performance burst feature. Valid values:
        // 
        // - true: enables the feature.
        // - false: does not enable the feature.
        // 
        // > This parameter is supported only when `SystemDisk.Category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disk](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<bool> burstingEnabled_ {};
        // The encryption algorithm for the system disk. Valid values:
        // 
        // - aes-256
        // - sm4-128
        // 
        // Default value: aes-256.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        // 
        // > This parameter is not publicly available.
        shared_ptr<string> encryptAlgorithm_ {};
        // Specifies whether the system disk is encrypted. Valid values:
        // 
        // - true: encrypted.
        // 
        // - false: not encrypted.
        // 
        // Default value: false.
        // 
        // If you specify both.
        shared_ptr<string> encrypted_ {};
        // The KMS key ID of the system disk.
        // 
        // When both a launch template and launch configuration information are specified, the launch template takes precedence.
        shared_ptr<string> KMSKeyId_ {};
        // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × Capacity - Baseline performance}.
        // 
        // Baseline performance = min{1,800 + 50 × Capacity, 50,000}.
        // > This parameter is supported only when SystemDisk.Category is set to cloud_auto. For more information, see [ESSD AutoPL disk](https://help.aliyun.com/document_detail/368372.html).
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
        // The ID of the automatic snapshot policy applied to the data disk.
        // 
        // Note:
        // - This parameter takes effect only when you create a one-time synchronous delivery auto provisioning group (AutoProvisioningGroupType=instant).
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // Specifies whether to enable the performance burst feature. Valid values:
        // 
        // - true: enables the feature.
        // - false: disables the feature.
        // 
        // > This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<bool> burstingEnabled_ {};
        // The category of data disk N. Valid values of N: 1 to 16. Valid values:
        // 
        // - cloud_efficiency: ultra disk.
        // - cloud_ssd: standard SSD.
        // - cloud_essd: enterprise SSD (ESSD).
        // - cloud: basic disk.
        // 
        // For I/O optimized instances, the default value is cloud_efficiency. For non-I/O optimized instances, the default value is cloud.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<string> category_ {};
        // Specifies whether the data disk is released when the instance is released. Valid values:
        // - true: the data disk is released when the instance is released.
        // - false: the data disk is not released when the instance is released.
        // 
        // Default value: true.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<bool> deleteWithInstance_ {};
        // The description of the data disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`. If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<string> description_ {};
        // The mount point of the data disk. If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<string> device_ {};
        // The name of the data disk. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, periods (.), colons (:), underscores (_), and hyphens (-).
        // 
        // Default value: empty.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<string> diskName_ {};
        // > This parameter is not publicly available.
        shared_ptr<string> encryptAlgorithm_ {};
        // Specifies whether data disk N is encrypted. Valid values:
        // 
        // - true: encrypted.
        // - false: not encrypted.
        // 
        // Default value: false.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<bool> encrypted_ {};
        // The ID of the KMS key for the data disk. If both a launch template and launch configuration are specified, the launch template takes precedence.
        shared_ptr<string> kmsKeyId_ {};
        // The performance level of the enterprise SSD used as a data disk. The value of N must be consistent with the N in `LaunchConfiguration.DataDisk.N.Category`. Valid values:
        // 
        // - PL0: a single disk can deliver up to 10,000 random read/write IOPS.
        // - PL1 (default): a single disk can deliver up to 50,000 random read/write IOPS.
        // - PL2: a single disk can deliver up to 100,000 random read/write IOPS.
        // - PL3: a single disk can deliver up to 1,000,000 random read/write IOPS.
        // 
        // For information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<string> performanceLevel_ {};
        // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × capacity - baseline performance}.
        // 
        // Baseline performance = min{1,800 + 50 × capacity, 50,000}.
        // 
        // > This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
        shared_ptr<int64_t> provisionedIops_ {};
        // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
        // 
        // - cloud_efficiency: 20 to 32768.
        // - cloud_ssd: 20 to 32768.
        // - cloud_essd: depends on the value of `LaunchConfiguration.DataDisk.N.PerformanceLevel`.
        //     - PL0: 40 to 32768.
        //     - PL1: 20 to 32768.
        //     - PL2: 461 to 32768.
        //     - PL3: 1261 to 32768.
        // - cloud: 5 to 2000.
        // 
        // > The value of this parameter must be greater than or equal to the size of the snapshot specified by `LaunchConfiguration.DataDisk.N.SnapshotId`.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
        shared_ptr<int32_t> size_ {};
        // The ID of the snapshot used to create data disk N. Valid values of N: 1 to 16.
        // 
        // After you specify this parameter, the `LaunchConfiguration.DataDisk.N.Size` parameter is ignored. The actual size of the created disk is the size of the specified snapshot. Snapshots created on or before July 15, 2013 cannot be used. Requests that use such snapshots are rejected.
        // 
        // If you specify both a launch template and launch configuration information, the launch template takes precedence.
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
        // > This parameter is in invitational preview and is not available for use.
        shared_ptr<int64_t> assumeRoleFor_ {};
        // > This parameter is in invitational preview and is not available for use.
        shared_ptr<string> roleType_ {};
        // > This parameter is in invitational preview and is not available for use.
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
      // > This parameter is in invitational preview and is not available for use.
      shared_ptr<vector<LaunchConfiguration::Arn>> arn_ {};
      // The automatic release time of the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
      // 
      // - If the value of seconds (`ss`) is not `00`, the time is automatically rounded down to the start of the current minute (`mm`).
      // 
      // - The earliest release time is 30 minutes after the current time.
      // 
      // - The latest release time cannot be more than three years from the current time.
      shared_ptr<string> autoReleaseTime_ {};
      // The running mode of the burstable instance. Valid values:
      // 
      // - Standard: standard mode. For more information about instance performance, see the performance constrained mode section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      // - Unlimited: unlimited mode. For more information about instance performance, see the unlimited mode section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      // 
      // Default value: none.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> creditSpecification_ {};
      // The list of data disk configurations in the launch configuration.
      shared_ptr<vector<LaunchConfiguration::DataDisk>> dataDisk_ {};
      // The ID of the deployment set.
      shared_ptr<string> deploymentSetId_ {};
      // The hostname of the instance. The following limits apply:
      // 
      // - Periods (.) and hyphens (-) cannot be used as the first or last characters and cannot be used consecutively.
      // - Windows instances: The hostname must be 2 to 15 characters in length and cannot contain periods (.) or consist entirely of digits. It can contain letters, digits, and hyphens (-).
      // - Instances of other types (such as Linux): The hostname must be 2 to 64 characters in length and can contain multiple periods (.). Each segment between periods can contain letters, digits, and hyphens (-).
      // - You cannot specify both `LaunchConfiguration.HostName` and `LaunchConfiguration.HostNames.N`. Otherwise, an error is returned.
      // - If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> hostName_ {};
      // The list of hostnames for one or more instances. The following limits apply:
      // 
      // - This parameter takes effect only when you create a one-time synchronous delivery auto provisioning group (`AutoProvisioningGroupType=instant`).
      // - N indicates the number of instances. Valid values of N: 1 to 1000. The value must be consistent with the TotalTargetCapacity parameter.
      // - Periods (.) and hyphens (-) cannot be used as the first or last characters and cannot be used consecutively.
      // - If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<vector<string>> hostNames_ {};
      // The name of the image family. The name must be 2 to 128 characters in length. The name must start with a letter and cannot start with `aliyun` or `acs:`. The name cannot contain `http://` or `https://`. The name can contain digits, colons (:), underscores (_), or hyphens (-).
      shared_ptr<string> imageFamily_ {};
      // The ID of the image used to launch instances. You can call [DescribeImages](https://help.aliyun.com/document_detail/25534.html) to query available image resources. If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> imageId_ {};
      // The description of the instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`. If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> instanceDescription_ {};
      // The name of the instance. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain Chinese characters, letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
      // 
      // Default value: the `InstanceId` of the instance.
      // 
      // When you create multiple ECS instances, you can batch configure sequential instance names. For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> instanceName_ {};
      // The billing method for network usage. Valid values:
      // 
      // - PayByBandwidth: pay-by-bandwidth.
      // - PayByTraffic: pay-by-traffic.
      // 
      // > In pay-by-traffic mode, the peak inbound and outbound bandwidths are used as upper limits of bandwidths instead of guaranteed performance metrics. When resources are contended, the peak bandwidths may be limited. If you require guaranteed bandwidth, use pay-by-bandwidth.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> internetChargeType_ {};
      // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
      // 
      // - If the maximum outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. Default value: 10.
      // - If the maximum outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `LaunchConfiguration.InternetMaxBandwidthOut`. Default value: the value of `LaunchConfiguration.InternetMaxBandwidthOut`.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<int32_t> internetMaxBandwidthIn_ {};
      // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
      // 
      // Default value: 0.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<int32_t> internetMaxBandwidthOut_ {};
      // Specifies whether the instance is an I/O optimized instance. Valid values:
      // 
      // - none: non-I/O optimization.
      // - optimized: I/O optimization.
      // 
      // For retired instance types, the default value is none. For other instance types, the default value is optimized.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> ioOptimized_ {};
      // The name of the key pair.
      // 
      // -   For Windows instances, this parameter is ignored and is empty by default.
      // -   For Linux instances, password-based logon is disabled during initialization.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> keyPairName_ {};
      // The password of the instance. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported:
      // 
      // ``()`~!@#$%^&*-_+=|{}`[]`:;\\"<>,.?/``
      // 
      // For Windows instances, the password cannot start with a forward slash (/).
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> password_ {};
      // Specifies whether to use the password preset in the image. Valid values:
      // 
      // - true: uses the preset password.
      // - false: does not use the preset password.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<bool> passwordInherit_ {};
      // The name of the instance RAM role. You can call the RAM API [ListRoles](https://help.aliyun.com/document_detail/28713.html) to query the instance RAM roles that you have created. If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> ramRoleName_ {};
      // The ID of the resource group to which the instance belongs. If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> resourceGroupId_ {};
      // Specifies whether to enable security hardening. Valid values:
      // 
      // -   Active: enables security hardening. This value is applicable only to public images.
      // -   Deactive: disables security hardening. This value is applicable to all image types.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> securityEnhancementStrategy_ {};
      // The ID of the security group to which the instance belongs. If both a launch template and launch configuration information are specified, the launch template takes precedence.
      shared_ptr<string> securityGroupId_ {};
      // The list of security groups to which the instance belongs.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The system disk information of the instance. If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<LaunchConfiguration::SystemDisk> systemDisk_ {};
      // The category of the system disk. Valid values:
      // 
      // -   cloud_efficiency: ultra disk.
      // -   cloud_ssd: standard SSD.
      // -   cloud_essd: enterprise SSD (ESSD).
      // -   cloud: basic disk.
      // 
      // For retired instance types that are non-I/O optimization instances, the default value is cloud. For other instance types, the default value is cloud_efficiency.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> systemDiskCategory_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> systemDiskDescription_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, periods (.), colons (:), underscores (_), and hyphens (-).
      // 
      // Default value: empty.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> systemDiskName_ {};
      // The performance level (PL) of the enterprise SSD used as the system disk. Valid values:
      // 
      // - PL0 (default): a single disk can deliver up to 10,000 random read/write IOPS.
      // - PL1: a single disk can deliver up to 50,000 random read/write IOPS.
      // - PL2: a single disk can deliver up to 100,000 random read/write IOPS.
      // - PL3: a single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The size of the system disk. Unit: GiB. Valid values: 20 to 500. The value of this parameter must be greater than or equal to max{20, size of the image specified by LaunchConfiguration.ImageId}.
      // 
      // Default value: max{40, size of the image specified by LaunchConfiguration.ImageId}.
      // 
      // If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The list of tags in the launch configuration.
      shared_ptr<vector<LaunchConfiguration::Tag>> tag_ {};
      // Instance user data of the instance. Instance user data must be Base64-encoded. The maximum size of the raw data is 32 KB. If you specify both a launch template and launch configuration information, the launch template takes precedence.
      shared_ptr<string> userData_ {};
      // Specifies whether to enable auto-renewal. This parameter takes effect when you create subscription instances. Valid values:
      // 
      // - true: enables auto-renewal.
      // - false (default): does not enable auto-renewal.
      shared_ptr<bool> autoRenew_ {};
      // The auto-renewal period. Valid values: 
      //          
      // <props="china">
      // - If PeriodUnit is set to Week: 1, 2, and 3.
      // - If PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
      // 
      // 
      // 
      // <props="intl">If PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
      // 
      // Default value: 1.
      shared_ptr<int32_t> autoRenewPeriod_ {};
      // The CPU-related configurations.
      shared_ptr<LaunchConfiguration::CpuOptions> cpuOptions_ {};
      // The image-related property information.
      // 
      // After you set this parameter, note the following items:
      // - This parameter takes effect only when you create a one-time synchronization delivery auto provisioning group (AutoProvisioningGroupType=instant).
      shared_ptr<LaunchConfiguration::ImageOptions> imageOptions_ {};
      // The subscription duration of the resource. Unit: specified by `PeriodUnit`. This parameter is required when you create subscription instances. Valid values:
      // 
      // <props="china">
      // - If PeriodUnit is set to Week, valid values of Period: 1, 2, 3, and 4.
      // - If PeriodUnit is set to Month, valid values of Period: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
      // 
      // 
      // 
      // <props="intl">If PeriodUnit is set to Month, valid values of Period: 1, 2, 3, 6, and 12.
      // 
      // <props="partner">If PeriodUnit is set to Month, valid values of Period: 1, 2, 3, 6, and 12.
      shared_ptr<int32_t> period_ {};
      // The unit of the subscription billable methods duration. Valid values: 
      // 
      // <props="china">
      // - Week
      // - Month (default)
      // 
      // 
      // 
      // <props="intl">Month (default).
      shared_ptr<string> periodUnit_ {};
      shared_ptr<LaunchConfiguration::SchedulerOptions> schedulerOptions_ {};
      shared_ptr<LaunchConfiguration::SecurityOptions> securityOptions_ {};
      // The protection period of the spot instance. Unit: hours. Default value: 1. Valid values:
      // - 1: After a spot instance is created, Alibaba Cloud ensures that the instance is not subject to automatic release within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the marketplace price and checks the resource inventory to determine whether to retain or revoke the instance.
      // - 0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the marketplace price and checks the resource inventory to determine whether to retain or revoke the instance.
      // 
      // Alibaba Cloud sends an ECS system event notification 5 minutes before the instance is released. Spot instances are billed by second. Select an appropriate protection period based on the expected task execution duration.
      // 
      // After you set this parameter, note the following items:
      // - This parameter takes effect only when you create a one-time synchronization delivery auto provisioning group (AutoProvisioningGroupType=instant).
      shared_ptr<int32_t> spotDuration_ {};
      // The spot instance break mode. Valid values:
      // 
      // - Terminate: directly releases the instance.
      // 
      // - Stop: puts the instance into economical mode.
      // 
      // For more information about economical mode, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
      // 
      // Default value: Terminate.
      // 
      // After you set this parameter, note the following items:
      // - This parameter takes effect only when you create a one-time synchronization delivery auto provisioning group (AutoProvisioningGroupType=instant).
      shared_ptr<string> spotInterruptionBehavior_ {};
    };

    virtual bool empty() const override { return this->launchConfiguration_ == nullptr
        && this->autoProvisioningGroupName_ == nullptr && this->autoProvisioningGroupType_ == nullptr && this->candidateOptions_ == nullptr && this->clientToken_ == nullptr && this->dataDiskConfig_ == nullptr
        && this->defaultTargetCapacityType_ == nullptr && this->description_ == nullptr && this->excessCapacityTerminationPolicy_ == nullptr && this->executionMode_ == nullptr && this->hibernationOptionsConfigured_ == nullptr
        && this->launchTemplateConfig_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateVersion_ == nullptr && this->maxSpotPrice_ == nullptr && this->minTargetCapacity_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->payAsYouGoAllocationStrategy_ == nullptr && this->payAsYouGoTargetCapacity_ == nullptr && this->prePaidOptions_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourcePoolOptionsShrink_ == nullptr
        && this->spotAllocationStrategy_ == nullptr && this->spotInstanceInterruptionBehavior_ == nullptr && this->spotInstancePoolsToUseCount_ == nullptr && this->spotTargetCapacity_ == nullptr && this->systemDiskConfig_ == nullptr
        && this->tag_ == nullptr && this->terminateInstances_ == nullptr && this->terminateInstancesWithExpiration_ == nullptr && this->totalTargetCapacity_ == nullptr && this->validFrom_ == nullptr
        && this->validUntil_ == nullptr; };
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


    // candidateOptions Field Functions 
    bool hasCandidateOptions() const { return this->candidateOptions_ != nullptr;};
    void deleteCandidateOptions() { this->candidateOptions_ = nullptr;};
    inline const CreateAutoProvisioningGroupShrinkRequest::CandidateOptions & getCandidateOptions() const { DARABONBA_PTR_GET_CONST(candidateOptions_, CreateAutoProvisioningGroupShrinkRequest::CandidateOptions) };
    inline CreateAutoProvisioningGroupShrinkRequest::CandidateOptions getCandidateOptions() { DARABONBA_PTR_GET(candidateOptions_, CreateAutoProvisioningGroupShrinkRequest::CandidateOptions) };
    inline CreateAutoProvisioningGroupShrinkRequest& setCandidateOptions(const CreateAutoProvisioningGroupShrinkRequest::CandidateOptions & candidateOptions) { DARABONBA_PTR_SET_VALUE(candidateOptions_, candidateOptions) };
    inline CreateAutoProvisioningGroupShrinkRequest& setCandidateOptions(CreateAutoProvisioningGroupShrinkRequest::CandidateOptions && candidateOptions) { DARABONBA_PTR_SET_RVALUE(candidateOptions_, candidateOptions) };


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
    // The name of the auto provisioning group. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> autoProvisioningGroupName_ {};
    // The delivery type of the auto provisioning group. Valid values:
    // 
    // - request: one-time asynchronous delivery. The group delivers an instance cluster asynchronously only at startup. If scheduling fails, no retry is performed.
    // 
    // - instant: one-time synchronous delivery. The group synchronously creates instances only at startup and returns the list of successfully created instances and the causes of creation failures in the response.
    // 
    // - maintain: continuous delivery. The group attempts to deliver an instance cluster at startup and monitors real-time capacity. If the target capacity is not reached, the group continues to create ECS instances.
    // 
    // Default value: maintain.
    shared_ptr<string> autoProvisioningGroupType_ {};
    shared_ptr<CreateAutoProvisioningGroupShrinkRequest::CandidateOptions> candidateOptions_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The list of data disk configurations.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::DataDiskConfig>> dataDiskConfig_ {};
    // The billing method for the capacity difference when the sum of `PayAsYouGoTargetCapacity` and `SpotTargetCapacity` is less than `TotalTargetCapacity`. Valid values:
    // 
    // - PayAsYouGo: pay-as-you-go instances.
    // - Spot: spot instances.
    // 
    // Default value: Spot.
    shared_ptr<string> defaultTargetCapacityType_ {};
    // The description of the auto provisioning group.
    shared_ptr<string> description_ {};
    // Specifies whether to release instances when the real-time capacity of the auto provisioning group exceeds the target capacity and a scale-in event is triggered. Valid values:
    // 
    // - termination: releases the scaled-in instances.
    // - no-termination: only removes the scaled-in instances from the auto provisioning group.
    // 
    // Default value: no-termination.
    shared_ptr<string> excessCapacityTerminationPolicy_ {};
    shared_ptr<string> executionMode_ {};
    // > This parameter is in invitational preview and is not publicly available.
    shared_ptr<bool> hibernationOptionsConfigured_ {};
    // The list of extended launch templates.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::LaunchTemplateConfig>> launchTemplateConfig_ {};
    // The ID of the instance launch template associated with the auto provisioning group. You can invoke [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html) to query active instance launch templates. If you specify both a launch template and launch configuration information (`LaunchConfiguration.*`), the launch template takes precedence.
    shared_ptr<string> launchTemplateId_ {};
    // The version of the instance launch template associated with the auto provisioning group. You can invoke [DescribeLaunchTemplateVersions](https://help.aliyun.com/document_detail/73761.html) to query active instance launch template versions.
    // 
    // Default value: the default version of the launch template.
    shared_ptr<string> launchTemplateVersion_ {};
    // The maximum price for spot instances in the auto provisioning group.
    // 
    // > If both `MaxSpotPrice` and `LaunchTemplateConfig.N.MaxPrice` are specified, the lower value is used.
    shared_ptr<float> maxSpotPrice_ {};
    // The minimum target capacity of the auto provisioning group. Valid values
    shared_ptr<string> minTargetCapacity_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The policy for creating pay-as-you-go instances. Valid values:
    // 
    // - lowest-price: cost optimization policy. Selects the instance type with the lowest price.
    // 
    // - prioritized: priority-based policy. Creates instances based on the priority specified by `LaunchTemplateConfig.N.Priority`.
    // 
    // Default value: lowest-price.
    shared_ptr<string> payAsYouGoAllocationStrategy_ {};
    // The target capacity of pay-as-you-go instances in the auto provisioning group. Valid values: less than or equal to the parameter value of `TotalTargetCapacity`.
    shared_ptr<string> payAsYouGoTargetCapacity_ {};
    // The detailed capacity configuration for subscription instances.
    shared_ptr<CreateAutoProvisioningGroupShrinkRequest::PrePaidOptions> prePaidOptions_ {};
    // The ID of the region in which the auto provisioning group resides. You can invoke [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the auto provisioning group belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The resource pool policy used to create instances. After you set this parameter, note the following items:
    // - This parameter takes effect only when you create pay-as-you-go instances.
    // - This parameter takes effect only when you create a one-time synchronization delivery auto provisioning group (`AutoProvisioningGroupType=instant`).
    shared_ptr<string> resourcePoolOptionsShrink_ {};
    // The policy for creating spot instances. Valid values:
    // 
    // - lowest-price: cost optimization policy. Selects the instance type with the lowest price.
    // 
    // - diversified: balanced zone distribution policy. Creates instances in the zones specified in the extended launch template and evenly distributes them across zones.
    // 
    // - capacity-optimized: capacity optimization distribution policy. Selects the optimal instance type and zone based on inventory availability.
    // 
    // Default value: lowest-price.
    shared_ptr<string> spotAllocationStrategy_ {};
    // The action to take when a spot instance is interrupted. Valid values:
    // 
    // - stop: stops the instance.
    // 
    // - terminate: releases the instance.
    // 
    // Default value: terminate.
    shared_ptr<string> spotInstanceInterruptionBehavior_ {};
    // Takes effect when `SpotAllocationStrategy` is set to `lowest-price`. Specifies the number of instance types with the lowest prices from which the auto provisioning group creates instances.
    // 
    // Valid values: less than the value of N in `LaunchTemplateConfig.N`.
    shared_ptr<int32_t> spotInstancePoolsToUseCount_ {};
    // The target capacity of spot instances in the auto provisioning group. Valid values: less than or equal to the parameter value of `TotalTargetCapacity`.
    shared_ptr<string> spotTargetCapacity_ {};
    // The list of system disk configurations.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::SystemDiskConfig>> systemDiskConfig_ {};
    // The tags to attach to the auto provisioning group.
    shared_ptr<vector<CreateAutoProvisioningGroupShrinkRequest::Tag>> tag_ {};
    // Specifies whether to release instances auto provisioning group when the auto-provisioning group is deleted. Valid values:
    // 
    // - true: releases instances auto provisioning group.
    // - false: retains instances auto provisioning group.
    // 
    // Default value: false.
    shared_ptr<bool> terminateInstances_ {};
    // Specifies whether to release instances auto provisioning group when the auto-provisioning group expires. Valid values:
    // 
    // - true: releases instances auto provisioning group.
    // - false: only removes instances from the auto-provisioning group.
    // 
    // Default value: false.
    shared_ptr<bool> terminateInstancesWithExpiration_ {};
    // The total target capacity of the auto provisioning group. Valid values: positive integers.
    // 
    // The total capacity must be greater than or equal to the sum of `PayAsYouGoTargetCapacity` (the target capacity of pay-as-you-go instances) and `SpotTargetCapacity` (the target capacity of spot instances).
    // 
    // This parameter is required.
    shared_ptr<string> totalTargetCapacity_ {};
    // The time when the auto provisioning group is started. Used together with `ValidUntil` to determine the valid period.
    // 
    // Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    // 
    // Default value: the UNIX timestamp at which the request takes effect immediately.
    shared_ptr<string> validFrom_ {};
    // The time when the auto provisioning group expires. Used together with `ValidFrom` to determine the valid period.
    // 
    // Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    // 
    // Default value: 2099-12-31T23:59:59Z.
    shared_ptr<string> validUntil_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
