// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurations, scalingConfigurations_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurations, scalingConfigurations_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeScalingConfigurationsResponseBody() = default ;
    DescribeScalingConfigurationsResponseBody(const DescribeScalingConfigurationsResponseBody &) = default ;
    DescribeScalingConfigurationsResponseBody(DescribeScalingConfigurationsResponseBody &&) = default ;
    DescribeScalingConfigurationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBody() = default ;
    DescribeScalingConfigurationsResponseBody& operator=(const DescribeScalingConfigurationsResponseBody &) = default ;
    DescribeScalingConfigurationsResponseBody& operator=(DescribeScalingConfigurationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScalingConfigurations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScalingConfigurations& obj) { 
        DARABONBA_PTR_TO_JSON(Affinity, affinity_);
        DARABONBA_PTR_TO_JSON(Cpu, cpu_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
        DARABONBA_PTR_TO_JSON(CustomPriorities, customPriorities_);
        DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
        DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
        DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
        DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_TO_JSON(HostName, hostName_);
        DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
        DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
        DARABONBA_PTR_TO_JSON(HttpTokens, httpTokens_);
        DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
        DARABONBA_PTR_TO_JSON(ImageName, imageName_);
        DARABONBA_PTR_TO_JSON(ImageOptionsLoginAsNonRoot, imageOptionsLoginAsNonRoot_);
        DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
        DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_TO_JSON(InstanceGeneration, instanceGeneration_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InstancePatternInfos, instancePatternInfos_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
        DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
        DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
        DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_TO_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
        DARABONBA_PTR_TO_JSON(Memory, memory_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
        DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
        DARABONBA_PTR_TO_JSON(PasswordSetted, passwordSetted_);
        DARABONBA_PTR_TO_JSON(PrivatePoolOptions.Id, privatePoolOptions_id_);
        DARABONBA_PTR_TO_JSON(PrivatePoolOptions.MatchCriteria, privatePoolOptions_matchCriteria_);
        DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
        DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
        DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
        DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
        DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
        DARABONBA_PTR_TO_JSON(SpotPriceLimits, spotPriceLimits_);
        DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
        DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
        DARABONBA_PTR_TO_JSON(SystemDiskAutoSnapshotPolicyId, systemDiskAutoSnapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(SystemDiskBurstingEnabled, systemDiskBurstingEnabled_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
        DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_TO_JSON(SystemDiskDescription, systemDiskDescription_);
        DARABONBA_PTR_TO_JSON(SystemDiskEncryptAlgorithm, systemDiskEncryptAlgorithm_);
        DARABONBA_PTR_TO_JSON(SystemDiskEncrypted, systemDiskEncrypted_);
        DARABONBA_PTR_TO_JSON(SystemDiskKMSKeyId, systemDiskKMSKeyId_);
        DARABONBA_PTR_TO_JSON(SystemDiskName, systemDiskName_);
        DARABONBA_PTR_TO_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_TO_JSON(SystemDiskProvisionedIops, systemDiskProvisionedIops_);
        DARABONBA_PTR_TO_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
        DARABONBA_PTR_TO_JSON(WeightedCapacities, weightedCapacities_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, ScalingConfigurations& obj) { 
        DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
        DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
        DARABONBA_PTR_FROM_JSON(CustomPriorities, customPriorities_);
        DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
        DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
        DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
        DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
        DARABONBA_PTR_FROM_JSON(HostName, hostName_);
        DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
        DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
        DARABONBA_PTR_FROM_JSON(HttpTokens, httpTokens_);
        DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
        DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
        DARABONBA_PTR_FROM_JSON(ImageOptionsLoginAsNonRoot, imageOptionsLoginAsNonRoot_);
        DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
        DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
        DARABONBA_PTR_FROM_JSON(InstanceGeneration, instanceGeneration_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InstancePatternInfos, instancePatternInfos_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
        DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
        DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
        DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
        DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
        DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
        DARABONBA_PTR_FROM_JSON(LifecycleState, lifecycleState_);
        DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
        DARABONBA_PTR_FROM_JSON(Memory, memory_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
        DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
        DARABONBA_PTR_FROM_JSON(PasswordSetted, passwordSetted_);
        DARABONBA_PTR_FROM_JSON(PrivatePoolOptions.Id, privatePoolOptions_id_);
        DARABONBA_PTR_FROM_JSON(PrivatePoolOptions.MatchCriteria, privatePoolOptions_matchCriteria_);
        DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
        DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
        DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
        DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
        DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
        DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
        DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
        DARABONBA_PTR_FROM_JSON(SpotPriceLimits, spotPriceLimits_);
        DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
        DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
        DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
        DARABONBA_PTR_FROM_JSON(SystemDiskAutoSnapshotPolicyId, systemDiskAutoSnapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(SystemDiskBurstingEnabled, systemDiskBurstingEnabled_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
        DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
        DARABONBA_PTR_FROM_JSON(SystemDiskDescription, systemDiskDescription_);
        DARABONBA_PTR_FROM_JSON(SystemDiskEncryptAlgorithm, systemDiskEncryptAlgorithm_);
        DARABONBA_PTR_FROM_JSON(SystemDiskEncrypted, systemDiskEncrypted_);
        DARABONBA_PTR_FROM_JSON(SystemDiskKMSKeyId, systemDiskKMSKeyId_);
        DARABONBA_PTR_FROM_JSON(SystemDiskName, systemDiskName_);
        DARABONBA_PTR_FROM_JSON(SystemDiskPerformanceLevel, systemDiskPerformanceLevel_);
        DARABONBA_PTR_FROM_JSON(SystemDiskProvisionedIops, systemDiskProvisionedIops_);
        DARABONBA_PTR_FROM_JSON(SystemDiskSize, systemDiskSize_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
        DARABONBA_PTR_FROM_JSON(WeightedCapacities, weightedCapacities_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      };
      ScalingConfigurations() = default ;
      ScalingConfigurations(const ScalingConfigurations &) = default ;
      ScalingConfigurations(ScalingConfigurations &&) = default ;
      ScalingConfigurations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScalingConfigurations() = default ;
      ScalingConfigurations& operator=(const ScalingConfigurations &) = default ;
      ScalingConfigurations& operator=(ScalingConfigurations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the ECS instance. You can specify up to 20 tags for each ECS instance.
        // 
        // The tag key cannot be an empty string. The tag key can be up to 128 characters in length. It cannot start with `acs:` or `aliyun` and cannot contain `http://` or `https://`.
        shared_ptr<string> key_ {};
        // The tag value of the ECS instance. You can specify up to 20 tags for each ECS instance.
        // 
        // The tag value can be an empty string. The tag value can be up to 128 characters in length. It cannot start with `acs:` and cannot contain `http://` or `https://`.
        shared_ptr<string> value_ {};
      };

      class SpotPriceLimits : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SpotPriceLimits& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(PriceLimit, priceLimit_);
        };
        friend void from_json(const Darabonba::Json& j, SpotPriceLimits& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(PriceLimit, priceLimit_);
        };
        SpotPriceLimits() = default ;
        SpotPriceLimits(const SpotPriceLimits &) = default ;
        SpotPriceLimits(SpotPriceLimits &&) = default ;
        SpotPriceLimits(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SpotPriceLimits() = default ;
        SpotPriceLimits& operator=(const SpotPriceLimits &) = default ;
        SpotPriceLimits& operator=(SpotPriceLimits &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->priceLimit_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline SpotPriceLimits& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // priceLimit Field Functions 
        bool hasPriceLimit() const { return this->priceLimit_ != nullptr;};
        void deletePriceLimit() { this->priceLimit_ = nullptr;};
        inline float getPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(priceLimit_, 0.0) };
        inline SpotPriceLimits& setPriceLimit(float priceLimit) { DARABONBA_PTR_SET_VALUE(priceLimit_, priceLimit) };


      protected:
        // The instance type of the preemptible instances.
        shared_ptr<string> instanceType_ {};
        // The price limit of the preemptible instances.
        shared_ptr<float> priceLimit_ {};
      };

      class SecurityOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SecurityOptions& obj) { 
          DARABONBA_PTR_TO_JSON(ConfidentialComputingMode, confidentialComputingMode_);
        };
        friend void from_json(const Darabonba::Json& j, SecurityOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfidentialComputingMode, confidentialComputingMode_);
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
        virtual bool empty() const override { return this->confidentialComputingMode_ == nullptr; };
        // confidentialComputingMode Field Functions 
        bool hasConfidentialComputingMode() const { return this->confidentialComputingMode_ != nullptr;};
        void deleteConfidentialComputingMode() { this->confidentialComputingMode_ = nullptr;};
        inline string getConfidentialComputingMode() const { DARABONBA_PTR_GET_DEFAULT(confidentialComputingMode_, "") };
        inline SecurityOptions& setConfidentialComputingMode(string confidentialComputingMode) { DARABONBA_PTR_SET_VALUE(confidentialComputingMode_, confidentialComputingMode) };


      protected:
        shared_ptr<string> confidentialComputingMode_ {};
      };

      class SchedulerOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SchedulerOptions& obj) { 
          DARABONBA_PTR_TO_JSON(ManagedPrivateSpaceId, managedPrivateSpaceId_);
        };
        friend void from_json(const Darabonba::Json& j, SchedulerOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(ManagedPrivateSpaceId, managedPrivateSpaceId_);
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
        virtual bool empty() const override { return this->managedPrivateSpaceId_ == nullptr; };
        // managedPrivateSpaceId Field Functions 
        bool hasManagedPrivateSpaceId() const { return this->managedPrivateSpaceId_ != nullptr;};
        void deleteManagedPrivateSpaceId() { this->managedPrivateSpaceId_ = nullptr;};
        inline string getManagedPrivateSpaceId() const { DARABONBA_PTR_GET_DEFAULT(managedPrivateSpaceId_, "") };
        inline SchedulerOptions& setManagedPrivateSpaceId(string managedPrivateSpaceId) { DARABONBA_PTR_SET_VALUE(managedPrivateSpaceId_, managedPrivateSpaceId) };


      protected:
        // >  This parameter is in invitational preview and is not available for use.
        shared_ptr<string> managedPrivateSpaceId_ {};
      };

      class ResourcePoolOptions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourcePoolOptions& obj) { 
          DARABONBA_PTR_TO_JSON(PrivatePoolIds, privatePoolIds_);
          DARABONBA_PTR_TO_JSON(Strategy, strategy_);
        };
        friend void from_json(const Darabonba::Json& j, ResourcePoolOptions& obj) { 
          DARABONBA_PTR_FROM_JSON(PrivatePoolIds, privatePoolIds_);
          DARABONBA_PTR_FROM_JSON(Strategy, strategy_);
        };
        ResourcePoolOptions() = default ;
        ResourcePoolOptions(const ResourcePoolOptions &) = default ;
        ResourcePoolOptions(ResourcePoolOptions &&) = default ;
        ResourcePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourcePoolOptions() = default ;
        ResourcePoolOptions& operator=(const ResourcePoolOptions &) = default ;
        ResourcePoolOptions& operator=(ResourcePoolOptions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->privatePoolIds_ == nullptr
        && this->strategy_ == nullptr; };
        // privatePoolIds Field Functions 
        bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
        void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
        inline const vector<string> & getPrivatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
        inline vector<string> getPrivatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
        inline ResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
        inline ResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


        // strategy Field Functions 
        bool hasStrategy() const { return this->strategy_ != nullptr;};
        void deleteStrategy() { this->strategy_ = nullptr;};
        inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
        inline ResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


      protected:
        // The IDs of private pools. The ID of a private pool is the same as the ID of the elasticity assurance or capacity reservation that is associated with the private pool.
        shared_ptr<vector<string>> privatePoolIds_ {};
        // The resource pool used for instance creation, which can be the public pool or a private pool associated with any active elasticity assurance or capacity reservation. Valid values:
        // 
        // *   PrivatePoolFirst: prioritizes private pools. When this option is set along with ResourcePoolOptions.PrivatePoolIds, the specified private pools are used first. If you leave ResourcePoolOptions.PrivatePoolIds empty or if the specified private pools lack sufficient capacity, the system will automatically use available open private pools instead. If no matching private pools are available, the system defaults to the public pool.
        // *   PrivatePoolOnly: uses only private pools. If you use this value, you must specify ResourcePoolOptions.PrivatePoolIds. If the specified private pools lack sufficient capacity, instance creation will fail.
        // *   None: uses no resource pools.
        shared_ptr<string> strategy_ {};
      };

      class NetworkInterfaces : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NetworkInterfaces& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
          DARABONBA_PTR_TO_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
          DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        };
        friend void from_json(const Darabonba::Json& j, NetworkInterfaces& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
          DARABONBA_PTR_FROM_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
          DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        };
        NetworkInterfaces() = default ;
        NetworkInterfaces(const NetworkInterfaces &) = default ;
        NetworkInterfaces(NetworkInterfaces &&) = default ;
        NetworkInterfaces(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NetworkInterfaces() = default ;
        NetworkInterfaces& operator=(const NetworkInterfaces &) = default ;
        NetworkInterfaces& operator=(NetworkInterfaces &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->ipv6AddressCount_ == nullptr && this->networkInterfaceTrafficMode_ == nullptr && this->secondaryPrivateIpAddressCount_ == nullptr && this->securityGroupIds_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline NetworkInterfaces& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // ipv6AddressCount Field Functions 
        bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
        void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
        inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
        inline NetworkInterfaces& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


        // networkInterfaceTrafficMode Field Functions 
        bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
        void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
        inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
        inline NetworkInterfaces& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


        // secondaryPrivateIpAddressCount Field Functions 
        bool hasSecondaryPrivateIpAddressCount() const { return this->secondaryPrivateIpAddressCount_ != nullptr;};
        void deleteSecondaryPrivateIpAddressCount() { this->secondaryPrivateIpAddressCount_ = nullptr;};
        inline int32_t getSecondaryPrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(secondaryPrivateIpAddressCount_, 0) };
        inline NetworkInterfaces& setSecondaryPrivateIpAddressCount(int32_t secondaryPrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(secondaryPrivateIpAddressCount_, secondaryPrivateIpAddressCount) };


        // securityGroupIds Field Functions 
        bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
        void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
        inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
        inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
        inline NetworkInterfaces& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
        inline NetworkInterfaces& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      protected:
        // The ENI type. Valid values:
        // 
        // *   Primary: the primary ENI
        // *   Secondary: the secondary ENI
        shared_ptr<string> instanceType_ {};
        // The number of randomly generated IPv6 addresses that are allocated to the primary ENI.
        shared_ptr<int32_t> ipv6AddressCount_ {};
        // The communication mode of the ENI. Valid values:
        // 
        // *   Standard: The TCP communication mode is used.
        // *   HighPerformance: The Elastic RDMA Interface (ERI) is enabled and the remote direct memory access (RDMA) communication mode is used.
        shared_ptr<string> networkInterfaceTrafficMode_ {};
        shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
        // The IDs of the security groups to which the ENIs belong.
        shared_ptr<vector<string>> securityGroupIds_ {};
      };

      class InstancePatternInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstancePatternInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Architectures, architectures_);
          DARABONBA_PTR_TO_JSON(BurstablePerformance, burstablePerformance_);
          DARABONBA_PTR_TO_JSON(Cores, cores_);
          DARABONBA_PTR_TO_JSON(CpuArchitectures, cpuArchitectures_);
          DARABONBA_PTR_TO_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
          DARABONBA_PTR_TO_JSON(GpuSpecs, gpuSpecs_);
          DARABONBA_PTR_TO_JSON(InstanceCategories, instanceCategories_);
          DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
          DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
          DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
          DARABONBA_PTR_TO_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
          DARABONBA_PTR_TO_JSON(MaximumGpuAmount, maximumGpuAmount_);
          DARABONBA_PTR_TO_JSON(MaximumMemorySize, maximumMemorySize_);
          DARABONBA_PTR_TO_JSON(Memory, memory_);
          DARABONBA_PTR_TO_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
          DARABONBA_PTR_TO_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
          DARABONBA_PTR_TO_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
          DARABONBA_PTR_TO_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
          DARABONBA_PTR_TO_JSON(MinimumEniQuantity, minimumEniQuantity_);
          DARABONBA_PTR_TO_JSON(MinimumGpuAmount, minimumGpuAmount_);
          DARABONBA_PTR_TO_JSON(MinimumInitialCredit, minimumInitialCredit_);
          DARABONBA_PTR_TO_JSON(MinimumMemorySize, minimumMemorySize_);
          DARABONBA_PTR_TO_JSON(PhysicalProcessorModels, physicalProcessorModels_);
        };
        friend void from_json(const Darabonba::Json& j, InstancePatternInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Architectures, architectures_);
          DARABONBA_PTR_FROM_JSON(BurstablePerformance, burstablePerformance_);
          DARABONBA_PTR_FROM_JSON(Cores, cores_);
          DARABONBA_PTR_FROM_JSON(CpuArchitectures, cpuArchitectures_);
          DARABONBA_PTR_FROM_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
          DARABONBA_PTR_FROM_JSON(GpuSpecs, gpuSpecs_);
          DARABONBA_PTR_FROM_JSON(InstanceCategories, instanceCategories_);
          DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
          DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
          DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
          DARABONBA_PTR_FROM_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
          DARABONBA_PTR_FROM_JSON(MaximumGpuAmount, maximumGpuAmount_);
          DARABONBA_PTR_FROM_JSON(MaximumMemorySize, maximumMemorySize_);
          DARABONBA_PTR_FROM_JSON(Memory, memory_);
          DARABONBA_PTR_FROM_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
          DARABONBA_PTR_FROM_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
          DARABONBA_PTR_FROM_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
          DARABONBA_PTR_FROM_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
          DARABONBA_PTR_FROM_JSON(MinimumEniQuantity, minimumEniQuantity_);
          DARABONBA_PTR_FROM_JSON(MinimumGpuAmount, minimumGpuAmount_);
          DARABONBA_PTR_FROM_JSON(MinimumInitialCredit, minimumInitialCredit_);
          DARABONBA_PTR_FROM_JSON(MinimumMemorySize, minimumMemorySize_);
          DARABONBA_PTR_FROM_JSON(PhysicalProcessorModels, physicalProcessorModels_);
        };
        InstancePatternInfos() = default ;
        InstancePatternInfos(const InstancePatternInfos &) = default ;
        InstancePatternInfos(InstancePatternInfos &&) = default ;
        InstancePatternInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstancePatternInfos() = default ;
        InstancePatternInfos& operator=(const InstancePatternInfos &) = default ;
        InstancePatternInfos& operator=(InstancePatternInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->architectures_ == nullptr
        && this->burstablePerformance_ == nullptr && this->cores_ == nullptr && this->cpuArchitectures_ == nullptr && this->excludedInstanceTypes_ == nullptr && this->gpuSpecs_ == nullptr
        && this->instanceCategories_ == nullptr && this->instanceFamilyLevel_ == nullptr && this->instanceTypeFamilies_ == nullptr && this->maxPrice_ == nullptr && this->maximumCpuCoreCount_ == nullptr
        && this->maximumGpuAmount_ == nullptr && this->maximumMemorySize_ == nullptr && this->memory_ == nullptr && this->minimumBaselineCredit_ == nullptr && this->minimumCpuCoreCount_ == nullptr
        && this->minimumEniIpv6AddressQuantity_ == nullptr && this->minimumEniPrivateIpAddressQuantity_ == nullptr && this->minimumEniQuantity_ == nullptr && this->minimumGpuAmount_ == nullptr && this->minimumInitialCredit_ == nullptr
        && this->minimumMemorySize_ == nullptr && this->physicalProcessorModels_ == nullptr; };
        // architectures Field Functions 
        bool hasArchitectures() const { return this->architectures_ != nullptr;};
        void deleteArchitectures() { this->architectures_ = nullptr;};
        inline const vector<string> & getArchitectures() const { DARABONBA_PTR_GET_CONST(architectures_, vector<string>) };
        inline vector<string> getArchitectures() { DARABONBA_PTR_GET(architectures_, vector<string>) };
        inline InstancePatternInfos& setArchitectures(const vector<string> & architectures) { DARABONBA_PTR_SET_VALUE(architectures_, architectures) };
        inline InstancePatternInfos& setArchitectures(vector<string> && architectures) { DARABONBA_PTR_SET_RVALUE(architectures_, architectures) };


        // burstablePerformance Field Functions 
        bool hasBurstablePerformance() const { return this->burstablePerformance_ != nullptr;};
        void deleteBurstablePerformance() { this->burstablePerformance_ = nullptr;};
        inline string getBurstablePerformance() const { DARABONBA_PTR_GET_DEFAULT(burstablePerformance_, "") };
        inline InstancePatternInfos& setBurstablePerformance(string burstablePerformance) { DARABONBA_PTR_SET_VALUE(burstablePerformance_, burstablePerformance) };


        // cores Field Functions 
        bool hasCores() const { return this->cores_ != nullptr;};
        void deleteCores() { this->cores_ = nullptr;};
        inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
        inline InstancePatternInfos& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


        // cpuArchitectures Field Functions 
        bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
        void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
        inline const vector<string> & getCpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
        inline vector<string> getCpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
        inline InstancePatternInfos& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
        inline InstancePatternInfos& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


        // excludedInstanceTypes Field Functions 
        bool hasExcludedInstanceTypes() const { return this->excludedInstanceTypes_ != nullptr;};
        void deleteExcludedInstanceTypes() { this->excludedInstanceTypes_ = nullptr;};
        inline const vector<string> & getExcludedInstanceTypes() const { DARABONBA_PTR_GET_CONST(excludedInstanceTypes_, vector<string>) };
        inline vector<string> getExcludedInstanceTypes() { DARABONBA_PTR_GET(excludedInstanceTypes_, vector<string>) };
        inline InstancePatternInfos& setExcludedInstanceTypes(const vector<string> & excludedInstanceTypes) { DARABONBA_PTR_SET_VALUE(excludedInstanceTypes_, excludedInstanceTypes) };
        inline InstancePatternInfos& setExcludedInstanceTypes(vector<string> && excludedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(excludedInstanceTypes_, excludedInstanceTypes) };


        // gpuSpecs Field Functions 
        bool hasGpuSpecs() const { return this->gpuSpecs_ != nullptr;};
        void deleteGpuSpecs() { this->gpuSpecs_ = nullptr;};
        inline const vector<string> & getGpuSpecs() const { DARABONBA_PTR_GET_CONST(gpuSpecs_, vector<string>) };
        inline vector<string> getGpuSpecs() { DARABONBA_PTR_GET(gpuSpecs_, vector<string>) };
        inline InstancePatternInfos& setGpuSpecs(const vector<string> & gpuSpecs) { DARABONBA_PTR_SET_VALUE(gpuSpecs_, gpuSpecs) };
        inline InstancePatternInfos& setGpuSpecs(vector<string> && gpuSpecs) { DARABONBA_PTR_SET_RVALUE(gpuSpecs_, gpuSpecs) };


        // instanceCategories Field Functions 
        bool hasInstanceCategories() const { return this->instanceCategories_ != nullptr;};
        void deleteInstanceCategories() { this->instanceCategories_ = nullptr;};
        inline const vector<string> & getInstanceCategories() const { DARABONBA_PTR_GET_CONST(instanceCategories_, vector<string>) };
        inline vector<string> getInstanceCategories() { DARABONBA_PTR_GET(instanceCategories_, vector<string>) };
        inline InstancePatternInfos& setInstanceCategories(const vector<string> & instanceCategories) { DARABONBA_PTR_SET_VALUE(instanceCategories_, instanceCategories) };
        inline InstancePatternInfos& setInstanceCategories(vector<string> && instanceCategories) { DARABONBA_PTR_SET_RVALUE(instanceCategories_, instanceCategories) };


        // instanceFamilyLevel Field Functions 
        bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
        void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
        inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
        inline InstancePatternInfos& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


        // instanceTypeFamilies Field Functions 
        bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
        void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
        inline const vector<string> & getInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, vector<string>) };
        inline vector<string> getInstanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, vector<string>) };
        inline InstancePatternInfos& setInstanceTypeFamilies(const vector<string> & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
        inline InstancePatternInfos& setInstanceTypeFamilies(vector<string> && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


        // maxPrice Field Functions 
        bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
        void deleteMaxPrice() { this->maxPrice_ = nullptr;};
        inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
        inline InstancePatternInfos& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


        // maximumCpuCoreCount Field Functions 
        bool hasMaximumCpuCoreCount() const { return this->maximumCpuCoreCount_ != nullptr;};
        void deleteMaximumCpuCoreCount() { this->maximumCpuCoreCount_ = nullptr;};
        inline int32_t getMaximumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maximumCpuCoreCount_, 0) };
        inline InstancePatternInfos& setMaximumCpuCoreCount(int32_t maximumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(maximumCpuCoreCount_, maximumCpuCoreCount) };


        // maximumGpuAmount Field Functions 
        bool hasMaximumGpuAmount() const { return this->maximumGpuAmount_ != nullptr;};
        void deleteMaximumGpuAmount() { this->maximumGpuAmount_ = nullptr;};
        inline int32_t getMaximumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(maximumGpuAmount_, 0) };
        inline InstancePatternInfos& setMaximumGpuAmount(int32_t maximumGpuAmount) { DARABONBA_PTR_SET_VALUE(maximumGpuAmount_, maximumGpuAmount) };


        // maximumMemorySize Field Functions 
        bool hasMaximumMemorySize() const { return this->maximumMemorySize_ != nullptr;};
        void deleteMaximumMemorySize() { this->maximumMemorySize_ = nullptr;};
        inline float getMaximumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(maximumMemorySize_, 0.0) };
        inline InstancePatternInfos& setMaximumMemorySize(float maximumMemorySize) { DARABONBA_PTR_SET_VALUE(maximumMemorySize_, maximumMemorySize) };


        // memory Field Functions 
        bool hasMemory() const { return this->memory_ != nullptr;};
        void deleteMemory() { this->memory_ = nullptr;};
        inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
        inline InstancePatternInfos& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


        // minimumBaselineCredit Field Functions 
        bool hasMinimumBaselineCredit() const { return this->minimumBaselineCredit_ != nullptr;};
        void deleteMinimumBaselineCredit() { this->minimumBaselineCredit_ = nullptr;};
        inline int32_t getMinimumBaselineCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumBaselineCredit_, 0) };
        inline InstancePatternInfos& setMinimumBaselineCredit(int32_t minimumBaselineCredit) { DARABONBA_PTR_SET_VALUE(minimumBaselineCredit_, minimumBaselineCredit) };


        // minimumCpuCoreCount Field Functions 
        bool hasMinimumCpuCoreCount() const { return this->minimumCpuCoreCount_ != nullptr;};
        void deleteMinimumCpuCoreCount() { this->minimumCpuCoreCount_ = nullptr;};
        inline int32_t getMinimumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(minimumCpuCoreCount_, 0) };
        inline InstancePatternInfos& setMinimumCpuCoreCount(int32_t minimumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(minimumCpuCoreCount_, minimumCpuCoreCount) };


        // minimumEniIpv6AddressQuantity Field Functions 
        bool hasMinimumEniIpv6AddressQuantity() const { return this->minimumEniIpv6AddressQuantity_ != nullptr;};
        void deleteMinimumEniIpv6AddressQuantity() { this->minimumEniIpv6AddressQuantity_ = nullptr;};
        inline int32_t getMinimumEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniIpv6AddressQuantity_, 0) };
        inline InstancePatternInfos& setMinimumEniIpv6AddressQuantity(int32_t minimumEniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniIpv6AddressQuantity_, minimumEniIpv6AddressQuantity) };


        // minimumEniPrivateIpAddressQuantity Field Functions 
        bool hasMinimumEniPrivateIpAddressQuantity() const { return this->minimumEniPrivateIpAddressQuantity_ != nullptr;};
        void deleteMinimumEniPrivateIpAddressQuantity() { this->minimumEniPrivateIpAddressQuantity_ = nullptr;};
        inline int32_t getMinimumEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniPrivateIpAddressQuantity_, 0) };
        inline InstancePatternInfos& setMinimumEniPrivateIpAddressQuantity(int32_t minimumEniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniPrivateIpAddressQuantity_, minimumEniPrivateIpAddressQuantity) };


        // minimumEniQuantity Field Functions 
        bool hasMinimumEniQuantity() const { return this->minimumEniQuantity_ != nullptr;};
        void deleteMinimumEniQuantity() { this->minimumEniQuantity_ = nullptr;};
        inline int32_t getMinimumEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniQuantity_, 0) };
        inline InstancePatternInfos& setMinimumEniQuantity(int32_t minimumEniQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniQuantity_, minimumEniQuantity) };


        // minimumGpuAmount Field Functions 
        bool hasMinimumGpuAmount() const { return this->minimumGpuAmount_ != nullptr;};
        void deleteMinimumGpuAmount() { this->minimumGpuAmount_ = nullptr;};
        inline int32_t getMinimumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(minimumGpuAmount_, 0) };
        inline InstancePatternInfos& setMinimumGpuAmount(int32_t minimumGpuAmount) { DARABONBA_PTR_SET_VALUE(minimumGpuAmount_, minimumGpuAmount) };


        // minimumInitialCredit Field Functions 
        bool hasMinimumInitialCredit() const { return this->minimumInitialCredit_ != nullptr;};
        void deleteMinimumInitialCredit() { this->minimumInitialCredit_ = nullptr;};
        inline int32_t getMinimumInitialCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumInitialCredit_, 0) };
        inline InstancePatternInfos& setMinimumInitialCredit(int32_t minimumInitialCredit) { DARABONBA_PTR_SET_VALUE(minimumInitialCredit_, minimumInitialCredit) };


        // minimumMemorySize Field Functions 
        bool hasMinimumMemorySize() const { return this->minimumMemorySize_ != nullptr;};
        void deleteMinimumMemorySize() { this->minimumMemorySize_ = nullptr;};
        inline float getMinimumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(minimumMemorySize_, 0.0) };
        inline InstancePatternInfos& setMinimumMemorySize(float minimumMemorySize) { DARABONBA_PTR_SET_VALUE(minimumMemorySize_, minimumMemorySize) };


        // physicalProcessorModels Field Functions 
        bool hasPhysicalProcessorModels() const { return this->physicalProcessorModels_ != nullptr;};
        void deletePhysicalProcessorModels() { this->physicalProcessorModels_ = nullptr;};
        inline const vector<string> & getPhysicalProcessorModels() const { DARABONBA_PTR_GET_CONST(physicalProcessorModels_, vector<string>) };
        inline vector<string> getPhysicalProcessorModels() { DARABONBA_PTR_GET(physicalProcessorModels_, vector<string>) };
        inline InstancePatternInfos& setPhysicalProcessorModels(const vector<string> & physicalProcessorModels) { DARABONBA_PTR_SET_VALUE(physicalProcessorModels_, physicalProcessorModels) };
        inline InstancePatternInfos& setPhysicalProcessorModels(vector<string> && physicalProcessorModels) { DARABONBA_PTR_SET_RVALUE(physicalProcessorModels_, physicalProcessorModels) };


      protected:
        // The architectures of instance types. Valid values:
        // 
        // *   X86: x86.
        // *   Heterogeneous: heterogeneous computing, such as GPU-accelerated or FPGA-accelerated.
        // *   BareMetal: ECS Bare Metal Instance.
        // *   Arm: Arm.
        shared_ptr<vector<string>> architectures_ {};
        // Indicates whether burstable instance types are included. Valid values:
        // 
        // *   Exclude: Burstable instance types are not included.
        // *   Include: Burstable instance types are included.
        // *   Required: Only burstable instance types are included.
        shared_ptr<string> burstablePerformance_ {};
        // The number of vCPUs of the instance type.
        shared_ptr<int32_t> cores_ {};
        // The CPU architectures of the instance types. Valid values:
        // 
        // >  You can specify 1 to 2 CPU architectures.
        // 
        // *   x86
        // *   Arm
        shared_ptr<vector<string>> cpuArchitectures_ {};
        // The instance types that are excluded. You can use wildcard characters, such as an asterisk (\\*), to exclude an instance type or an instance family. Examples:
        // 
        // *   ecs.c6.large: The ecs.c6.large instance type is excluded.
        // *   ecs.c6.\\*: The c6 instance family is excluded.
        shared_ptr<vector<string>> excludedInstanceTypes_ {};
        // The GPU models.
        shared_ptr<vector<string>> gpuSpecs_ {};
        // The categories of ECS instances. Valid values:
        // 
        // >  Up to 10 categories of ECS instances are supported.
        // 
        // *   General-purpose: general-purpose instance type.
        // *   Compute-optimized: compute-optimized instance type.
        // *   Memory-optimized: memory-optimized instance type.
        // *   Big data: big data instance type.
        // *   Local SSDs: instance type with local SSDs.
        // *   High Clock Speed: instance type with high clock speeds.
        // *   Enhanced: enhanced instance type.
        // *   Shared: shared instance type.
        // *   Compute-optimized with GPU: GPU-accelerated compute-optimized instance type.
        // *   Visual Compute-optimized: visual compute-optimized instance type.
        // *   Heterogeneous Service: heterogeneous service instance type.
        // *   Compute-optimized with FPGA: FPGA-accelerated compute-optimized instance type.
        // *   Compute-optimized with NPU: NPU-accelerated compute-optimized instance type.
        // *   ECS Bare Metal: ECS Bare Metal Instance type.
        // *   High Performance Compute: HPC-optimized instance type.
        shared_ptr<vector<string>> instanceCategories_ {};
        // The level of the instance family.
        // 
        // *   EntryLevel: entry level (shared instance types). Instance types of this level are the most cost-effective but may not provide stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
        // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources, and are suitable for scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
        // *   CreditEntryLevel: credit entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
        shared_ptr<string> instanceFamilyLevel_ {};
        // The instance families that are queried. You can query 1 to 10 instance families in each call.
        shared_ptr<vector<string>> instanceTypeFamilies_ {};
        // The maximum hourly price for the pay-as-you-go or preemptible instances.
        shared_ptr<float> maxPrice_ {};
        // The maximum number of vCPUs per instance type.
        // 
        // >  The value of MaximumCpuCoreCount cannot exceed four times the value of MinimumCpuCoreCount.
        shared_ptr<int32_t> maximumCpuCoreCount_ {};
        // The maximum number of GPUs per instance. The value must be a positive integer.
        shared_ptr<int32_t> maximumGpuAmount_ {};
        // The maximum memory size per instance. Unit: GiB.
        shared_ptr<float> maximumMemorySize_ {};
        // The memory size of the instance type. Unit: GiB.
        shared_ptr<float> memory_ {};
        // The baseline vCPU computing performance (overall baseline performance of all vCPUs) per t5 or t6 burstable instance.
        shared_ptr<int32_t> minimumBaselineCredit_ {};
        // The minimum number of vCPUs per instance type.
        shared_ptr<int32_t> minimumCpuCoreCount_ {};
        // The minimum number of IPv6 addresses per ENI.
        shared_ptr<int32_t> minimumEniIpv6AddressQuantity_ {};
        // The minimum number of IPv4 addresses per ENI.
        shared_ptr<int32_t> minimumEniPrivateIpAddressQuantity_ {};
        // The minimum number of elastic network interfaces (ENIs) per instance.
        shared_ptr<int32_t> minimumEniQuantity_ {};
        // The minimum number of GPUs per instance. The value must be a positive integer.
        shared_ptr<int32_t> minimumGpuAmount_ {};
        // The initial vCPU credits per t5 or t6 burstable instance.
        shared_ptr<int32_t> minimumInitialCredit_ {};
        // The minimum memory size per instance. Unit: GiB.
        shared_ptr<float> minimumMemorySize_ {};
        // The processor models of the instance types. You can specify 1 to 10 processor models.
        shared_ptr<vector<string>> physicalProcessorModels_ {};
      };

      class DataDisks : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataDisks& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_TO_JSON(Categories, categories_);
          DARABONBA_PTR_TO_JSON(Category, category_);
          DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Device, device_);
          DARABONBA_PTR_TO_JSON(DiskName, diskName_);
          DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
          DARABONBA_PTR_TO_JSON(Size, size_);
          DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        };
        friend void from_json(const Darabonba::Json& j, DataDisks& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
          DARABONBA_PTR_FROM_JSON(Categories, categories_);
          DARABONBA_PTR_FROM_JSON(Category, category_);
          DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Device, device_);
          DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
          DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
          DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
          DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
          DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
          DARABONBA_PTR_FROM_JSON(Size, size_);
          DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        };
        DataDisks() = default ;
        DataDisks(const DataDisks &) = default ;
        DataDisks(DataDisks &&) = default ;
        DataDisks(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataDisks() = default ;
        DataDisks& operator=(const DataDisks &) = default ;
        DataDisks& operator=(DataDisks &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->burstingEnabled_ == nullptr && this->categories_ == nullptr && this->category_ == nullptr && this->deleteWithInstance_ == nullptr && this->description_ == nullptr
        && this->device_ == nullptr && this->diskName_ == nullptr && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr && this->performanceLevel_ == nullptr
        && this->provisionedIops_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline DataDisks& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // burstingEnabled Field Functions 
        bool hasBurstingEnabled() const { return this->burstingEnabled_ != nullptr;};
        void deleteBurstingEnabled() { this->burstingEnabled_ = nullptr;};
        inline bool getBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(burstingEnabled_, false) };
        inline DataDisks& setBurstingEnabled(bool burstingEnabled) { DARABONBA_PTR_SET_VALUE(burstingEnabled_, burstingEnabled) };


        // categories Field Functions 
        bool hasCategories() const { return this->categories_ != nullptr;};
        void deleteCategories() { this->categories_ = nullptr;};
        inline const vector<string> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
        inline vector<string> getCategories() { DARABONBA_PTR_GET(categories_, vector<string>) };
        inline DataDisks& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
        inline DataDisks& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


        // category Field Functions 
        bool hasCategory() const { return this->category_ != nullptr;};
        void deleteCategory() { this->category_ = nullptr;};
        inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
        inline DataDisks& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


        // deleteWithInstance Field Functions 
        bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
        void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
        inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
        inline DataDisks& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline DataDisks& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // device Field Functions 
        bool hasDevice() const { return this->device_ != nullptr;};
        void deleteDevice() { this->device_ = nullptr;};
        inline string getDevice() const { DARABONBA_PTR_GET_DEFAULT(device_, "") };
        inline DataDisks& setDevice(string device) { DARABONBA_PTR_SET_VALUE(device_, device) };


        // diskName Field Functions 
        bool hasDiskName() const { return this->diskName_ != nullptr;};
        void deleteDiskName() { this->diskName_ = nullptr;};
        inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
        inline DataDisks& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


        // encrypted Field Functions 
        bool hasEncrypted() const { return this->encrypted_ != nullptr;};
        void deleteEncrypted() { this->encrypted_ = nullptr;};
        inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
        inline DataDisks& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


        // KMSKeyId Field Functions 
        bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
        void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
        inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
        inline DataDisks& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


        // performanceLevel Field Functions 
        bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
        void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
        inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
        inline DataDisks& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


        // provisionedIops Field Functions 
        bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
        void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
        inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
        inline DataDisks& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


        // size Field Functions 
        bool hasSize() const { return this->size_ != nullptr;};
        void deleteSize() { this->size_ = nullptr;};
        inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
        inline DataDisks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


        // snapshotId Field Functions 
        bool hasSnapshotId() const { return this->snapshotId_ != nullptr;};
        void deleteSnapshotId() { this->snapshotId_ = nullptr;};
        inline string getSnapshotId() const { DARABONBA_PTR_GET_DEFAULT(snapshotId_, "") };
        inline DataDisks& setSnapshotId(string snapshotId) { DARABONBA_PTR_SET_VALUE(snapshotId_, snapshotId) };


      protected:
        // The ID of the automatic snapshot policy that is applied to the data disk.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // Indicates whether the Performance Burst feature is enabled for the data disk. Valid values:
        // 
        // *   true
        // *   false
        // 
        // >  This parameter is available only when you set `DataDisk.Category` to `cloud_auto`.
        shared_ptr<bool> burstingEnabled_ {};
        // The categories of the data disks. The values are sorted based on their priorities. The first value has the highest priority. If Auto Scaling cannot create instances by using the disk category of the highest priority, Auto Scaling creates instances by using the disk category of the next highest priority. Valid values:
        // 
        // *   cloud: basic disk. DeleteWithInstance of a basic disk created along with the ECS instance is set to true.
        // *   cloud_efficiency: ultra disk.
        // *   cloud_ssd: standard SSD.
        // *   cloud_essd: ESSD.
        shared_ptr<vector<string>> categories_ {};
        // The category of the data disk. Valid values:
        // 
        // *   cloud: basic disk. DeleteWithInstance of a basic disk created along with the ECS instance is set to true.
        // *   cloud_efficiency: ultra disk.
        // *   cloud_ssd: standard SSD.
        // *   ephemeral_ssd: local SSD.
        // *   cloud_essd: ESSD.
        // *   cloud_auto: ESSD AutoPL.
        shared_ptr<string> category_ {};
        // Indicates whether the data disk is released when the instance to which the data disk is attached is released. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> deleteWithInstance_ {};
        // The description of the data disk.
        shared_ptr<string> description_ {};
        // The mount target of the data disk.
        shared_ptr<string> device_ {};
        // The name of the data disk.
        shared_ptr<string> diskName_ {};
        // Indicates whether the data disk is encrypted. Valid values:
        // 
        // *   true
        // *   false
        // 
        // Default value: false.
        shared_ptr<string> encrypted_ {};
        // The ID of the Key Management Service (KMS) key that is applied to the data disk.
        shared_ptr<string> KMSKeyId_ {};
        // The PL of the data disk that is an ESSD.
        shared_ptr<string> performanceLevel_ {};
        // The provisioned IOPS of the data disk.
        // 
        // >  IOPS measures the number of read and write operations that an Elastic Block Storage (EBS) device can process per second.
        shared_ptr<int64_t> provisionedIops_ {};
        // The size of the data disk. Unit: GB. Valid values:
        // 
        // *   5 to 2000 if you set Category to cloud.
        // *   20 to 32768 if you set Category to cloud_efficiency.
        // *   20 to 32768 if you set Category to cloud_ssd.
        // *   20 to 32768 if you set Category to cloud_essd.
        // *   5 to 800 if you set Category to ephemeral_ssd.
        shared_ptr<int32_t> size_ {};
        // The ID of the snapshot based on which the data disk is created.
        shared_ptr<string> snapshotId_ {};
      };

      class CustomPriorities : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CustomPriorities& obj) { 
          DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
        };
        friend void from_json(const Darabonba::Json& j, CustomPriorities& obj) { 
          DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
          DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
        };
        CustomPriorities() = default ;
        CustomPriorities(const CustomPriorities &) = default ;
        CustomPriorities(CustomPriorities &&) = default ;
        CustomPriorities(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CustomPriorities() = default ;
        CustomPriorities& operator=(const CustomPriorities &) = default ;
        CustomPriorities& operator=(CustomPriorities &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->vswitchId_ == nullptr; };
        // instanceType Field Functions 
        bool hasInstanceType() const { return this->instanceType_ != nullptr;};
        void deleteInstanceType() { this->instanceType_ = nullptr;};
        inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
        inline CustomPriorities& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


        // vswitchId Field Functions 
        bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
        void deleteVswitchId() { this->vswitchId_ = nullptr;};
        inline string getVswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
        inline CustomPriorities& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


      protected:
        // The ECS instance type.
        shared_ptr<string> instanceType_ {};
        // The vSwitch ID.
        shared_ptr<string> vswitchId_ {};
      };

      virtual bool empty() const override { return this->affinity_ == nullptr
        && this->cpu_ == nullptr && this->creationTime_ == nullptr && this->creditSpecification_ == nullptr && this->customPriorities_ == nullptr && this->dataDisks_ == nullptr
        && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostId_ == nullptr && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr && this->hostName_ == nullptr
        && this->hpcClusterId_ == nullptr && this->httpEndpoint_ == nullptr && this->httpTokens_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->imageOptionsLoginAsNonRoot_ == nullptr && this->imageOwnerAlias_ == nullptr && this->instanceDescription_ == nullptr && this->instanceGeneration_ == nullptr
        && this->instanceName_ == nullptr && this->instancePatternInfos_ == nullptr && this->instanceType_ == nullptr && this->instanceTypes_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr
        && this->lifecycleState_ == nullptr && this->loadBalancerWeight_ == nullptr && this->memory_ == nullptr && this->networkInterfaces_ == nullptr && this->passwordInherit_ == nullptr
        && this->passwordSetted_ == nullptr && this->privatePoolOptions_id_ == nullptr && this->privatePoolOptions_matchCriteria_ == nullptr && this->ramRoleName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourcePoolOptions_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingConfigurationName_ == nullptr && this->scalingGroupId_ == nullptr && this->schedulerOptions_ == nullptr
        && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->securityOptions_ == nullptr && this->spotDuration_ == nullptr
        && this->spotInterruptionBehavior_ == nullptr && this->spotPriceLimits_ == nullptr && this->spotStrategy_ == nullptr && this->storageSetId_ == nullptr && this->storageSetPartitionNumber_ == nullptr
        && this->systemDiskAutoSnapshotPolicyId_ == nullptr && this->systemDiskBurstingEnabled_ == nullptr && this->systemDiskCategories_ == nullptr && this->systemDiskCategory_ == nullptr && this->systemDiskDescription_ == nullptr
        && this->systemDiskEncryptAlgorithm_ == nullptr && this->systemDiskEncrypted_ == nullptr && this->systemDiskKMSKeyId_ == nullptr && this->systemDiskName_ == nullptr && this->systemDiskPerformanceLevel_ == nullptr
        && this->systemDiskProvisionedIops_ == nullptr && this->systemDiskSize_ == nullptr && this->tags_ == nullptr && this->tenancy_ == nullptr && this->userData_ == nullptr
        && this->weightedCapacities_ == nullptr && this->zoneId_ == nullptr; };
      // affinity Field Functions 
      bool hasAffinity() const { return this->affinity_ != nullptr;};
      void deleteAffinity() { this->affinity_ = nullptr;};
      inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
      inline ScalingConfigurations& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline ScalingConfigurations& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline ScalingConfigurations& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // creditSpecification Field Functions 
      bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
      void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
      inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
      inline ScalingConfigurations& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


      // customPriorities Field Functions 
      bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
      void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
      inline const vector<ScalingConfigurations::CustomPriorities> & getCustomPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<ScalingConfigurations::CustomPriorities>) };
      inline vector<ScalingConfigurations::CustomPriorities> getCustomPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<ScalingConfigurations::CustomPriorities>) };
      inline ScalingConfigurations& setCustomPriorities(const vector<ScalingConfigurations::CustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
      inline ScalingConfigurations& setCustomPriorities(vector<ScalingConfigurations::CustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


      // dataDisks Field Functions 
      bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
      void deleteDataDisks() { this->dataDisks_ = nullptr;};
      inline const vector<ScalingConfigurations::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<ScalingConfigurations::DataDisks>) };
      inline vector<ScalingConfigurations::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<ScalingConfigurations::DataDisks>) };
      inline ScalingConfigurations& setDataDisks(const vector<ScalingConfigurations::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
      inline ScalingConfigurations& setDataDisks(vector<ScalingConfigurations::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


      // dedicatedHostClusterId Field Functions 
      bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
      void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
      inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
      inline ScalingConfigurations& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


      // dedicatedHostId Field Functions 
      bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
      void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
      inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
      inline ScalingConfigurations& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
      inline ScalingConfigurations& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // deploymentSetId Field Functions 
      bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
      void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
      inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
      inline ScalingConfigurations& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline ScalingConfigurations& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // hpcClusterId Field Functions 
      bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
      void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
      inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
      inline ScalingConfigurations& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


      // httpEndpoint Field Functions 
      bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
      void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
      inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
      inline ScalingConfigurations& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


      // httpTokens Field Functions 
      bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
      void deleteHttpTokens() { this->httpTokens_ = nullptr;};
      inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
      inline ScalingConfigurations& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


      // imageFamily Field Functions 
      bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
      void deleteImageFamily() { this->imageFamily_ = nullptr;};
      inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
      inline ScalingConfigurations& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline ScalingConfigurations& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


      // imageName Field Functions 
      bool hasImageName() const { return this->imageName_ != nullptr;};
      void deleteImageName() { this->imageName_ = nullptr;};
      inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
      inline ScalingConfigurations& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


      // imageOptionsLoginAsNonRoot Field Functions 
      bool hasImageOptionsLoginAsNonRoot() const { return this->imageOptionsLoginAsNonRoot_ != nullptr;};
      void deleteImageOptionsLoginAsNonRoot() { this->imageOptionsLoginAsNonRoot_ = nullptr;};
      inline bool getImageOptionsLoginAsNonRoot() const { DARABONBA_PTR_GET_DEFAULT(imageOptionsLoginAsNonRoot_, false) };
      inline ScalingConfigurations& setImageOptionsLoginAsNonRoot(bool imageOptionsLoginAsNonRoot) { DARABONBA_PTR_SET_VALUE(imageOptionsLoginAsNonRoot_, imageOptionsLoginAsNonRoot) };


      // imageOwnerAlias Field Functions 
      bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
      void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
      inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
      inline ScalingConfigurations& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


      // instanceDescription Field Functions 
      bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
      void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
      inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
      inline ScalingConfigurations& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


      // instanceGeneration Field Functions 
      bool hasInstanceGeneration() const { return this->instanceGeneration_ != nullptr;};
      void deleteInstanceGeneration() { this->instanceGeneration_ = nullptr;};
      inline string getInstanceGeneration() const { DARABONBA_PTR_GET_DEFAULT(instanceGeneration_, "") };
      inline ScalingConfigurations& setInstanceGeneration(string instanceGeneration) { DARABONBA_PTR_SET_VALUE(instanceGeneration_, instanceGeneration) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ScalingConfigurations& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // instancePatternInfos Field Functions 
      bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
      void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
      inline const vector<ScalingConfigurations::InstancePatternInfos> & getInstancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<ScalingConfigurations::InstancePatternInfos>) };
      inline vector<ScalingConfigurations::InstancePatternInfos> getInstancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<ScalingConfigurations::InstancePatternInfos>) };
      inline ScalingConfigurations& setInstancePatternInfos(const vector<ScalingConfigurations::InstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
      inline ScalingConfigurations& setInstancePatternInfos(vector<ScalingConfigurations::InstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline ScalingConfigurations& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // instanceTypes Field Functions 
      bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
      void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
      inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
      inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
      inline ScalingConfigurations& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
      inline ScalingConfigurations& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


      // internetChargeType Field Functions 
      bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
      void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
      inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
      inline ScalingConfigurations& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


      // internetMaxBandwidthIn Field Functions 
      bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
      void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
      inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
      inline ScalingConfigurations& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


      // internetMaxBandwidthOut Field Functions 
      bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
      void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
      inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
      inline ScalingConfigurations& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


      // ioOptimized Field Functions 
      bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
      void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
      inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
      inline ScalingConfigurations& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


      // ipv6AddressCount Field Functions 
      bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
      void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
      inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
      inline ScalingConfigurations& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


      // keyPairName Field Functions 
      bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
      void deleteKeyPairName() { this->keyPairName_ = nullptr;};
      inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
      inline ScalingConfigurations& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


      // lifecycleState Field Functions 
      bool hasLifecycleState() const { return this->lifecycleState_ != nullptr;};
      void deleteLifecycleState() { this->lifecycleState_ = nullptr;};
      inline string getLifecycleState() const { DARABONBA_PTR_GET_DEFAULT(lifecycleState_, "") };
      inline ScalingConfigurations& setLifecycleState(string lifecycleState) { DARABONBA_PTR_SET_VALUE(lifecycleState_, lifecycleState) };


      // loadBalancerWeight Field Functions 
      bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
      void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
      inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
      inline ScalingConfigurations& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
      inline ScalingConfigurations& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // networkInterfaces Field Functions 
      bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
      void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
      inline const vector<ScalingConfigurations::NetworkInterfaces> & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<ScalingConfigurations::NetworkInterfaces>) };
      inline vector<ScalingConfigurations::NetworkInterfaces> getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<ScalingConfigurations::NetworkInterfaces>) };
      inline ScalingConfigurations& setNetworkInterfaces(const vector<ScalingConfigurations::NetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
      inline ScalingConfigurations& setNetworkInterfaces(vector<ScalingConfigurations::NetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


      // passwordInherit Field Functions 
      bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
      void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
      inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
      inline ScalingConfigurations& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


      // passwordSetted Field Functions 
      bool hasPasswordSetted() const { return this->passwordSetted_ != nullptr;};
      void deletePasswordSetted() { this->passwordSetted_ = nullptr;};
      inline bool getPasswordSetted() const { DARABONBA_PTR_GET_DEFAULT(passwordSetted_, false) };
      inline ScalingConfigurations& setPasswordSetted(bool passwordSetted) { DARABONBA_PTR_SET_VALUE(passwordSetted_, passwordSetted) };


      // privatePoolOptions_id Field Functions 
      bool hasPrivatePoolOptions_id() const { return this->privatePoolOptions_id_ != nullptr;};
      void deletePrivatePoolOptions_id() { this->privatePoolOptions_id_ = nullptr;};
      inline string getPrivatePoolOptions_id() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptions_id_, "") };
      inline ScalingConfigurations& setPrivatePoolOptions_id(string privatePoolOptions_id) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_id_, privatePoolOptions_id) };


      // privatePoolOptions_matchCriteria Field Functions 
      bool hasPrivatePoolOptions_matchCriteria() const { return this->privatePoolOptions_matchCriteria_ != nullptr;};
      void deletePrivatePoolOptions_matchCriteria() { this->privatePoolOptions_matchCriteria_ = nullptr;};
      inline string getPrivatePoolOptions_matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(privatePoolOptions_matchCriteria_, "") };
      inline ScalingConfigurations& setPrivatePoolOptions_matchCriteria(string privatePoolOptions_matchCriteria) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_matchCriteria_, privatePoolOptions_matchCriteria) };


      // ramRoleName Field Functions 
      bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
      void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
      inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
      inline ScalingConfigurations& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline ScalingConfigurations& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // resourcePoolOptions Field Functions 
      bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
      void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
      inline const ScalingConfigurations::ResourcePoolOptions & getResourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, ScalingConfigurations::ResourcePoolOptions) };
      inline ScalingConfigurations::ResourcePoolOptions getResourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, ScalingConfigurations::ResourcePoolOptions) };
      inline ScalingConfigurations& setResourcePoolOptions(const ScalingConfigurations::ResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
      inline ScalingConfigurations& setResourcePoolOptions(ScalingConfigurations::ResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


      // scalingConfigurationId Field Functions 
      bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
      void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
      inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
      inline ScalingConfigurations& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


      // scalingConfigurationName Field Functions 
      bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
      void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
      inline string getScalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
      inline ScalingConfigurations& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


      // scalingGroupId Field Functions 
      bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
      void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
      inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
      inline ScalingConfigurations& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


      // schedulerOptions Field Functions 
      bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
      void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
      inline const ScalingConfigurations::SchedulerOptions & getSchedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, ScalingConfigurations::SchedulerOptions) };
      inline ScalingConfigurations::SchedulerOptions getSchedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, ScalingConfigurations::SchedulerOptions) };
      inline ScalingConfigurations& setSchedulerOptions(const ScalingConfigurations::SchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
      inline ScalingConfigurations& setSchedulerOptions(ScalingConfigurations::SchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


      // securityEnhancementStrategy Field Functions 
      bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
      void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
      inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
      inline ScalingConfigurations& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline ScalingConfigurations& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline ScalingConfigurations& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline ScalingConfigurations& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // securityOptions Field Functions 
      bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
      void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
      inline const ScalingConfigurations::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, ScalingConfigurations::SecurityOptions) };
      inline ScalingConfigurations::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, ScalingConfigurations::SecurityOptions) };
      inline ScalingConfigurations& setSecurityOptions(const ScalingConfigurations::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
      inline ScalingConfigurations& setSecurityOptions(ScalingConfigurations::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


      // spotDuration Field Functions 
      bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
      void deleteSpotDuration() { this->spotDuration_ = nullptr;};
      inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
      inline ScalingConfigurations& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


      // spotInterruptionBehavior Field Functions 
      bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
      void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
      inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
      inline ScalingConfigurations& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


      // spotPriceLimits Field Functions 
      bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
      void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
      inline const vector<ScalingConfigurations::SpotPriceLimits> & getSpotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<ScalingConfigurations::SpotPriceLimits>) };
      inline vector<ScalingConfigurations::SpotPriceLimits> getSpotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<ScalingConfigurations::SpotPriceLimits>) };
      inline ScalingConfigurations& setSpotPriceLimits(const vector<ScalingConfigurations::SpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
      inline ScalingConfigurations& setSpotPriceLimits(vector<ScalingConfigurations::SpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


      // spotStrategy Field Functions 
      bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
      void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
      inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
      inline ScalingConfigurations& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


      // storageSetId Field Functions 
      bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
      void deleteStorageSetId() { this->storageSetId_ = nullptr;};
      inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
      inline ScalingConfigurations& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


      // storageSetPartitionNumber Field Functions 
      bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
      void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
      inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
      inline ScalingConfigurations& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


      // systemDiskAutoSnapshotPolicyId Field Functions 
      bool hasSystemDiskAutoSnapshotPolicyId() const { return this->systemDiskAutoSnapshotPolicyId_ != nullptr;};
      void deleteSystemDiskAutoSnapshotPolicyId() { this->systemDiskAutoSnapshotPolicyId_ = nullptr;};
      inline string getSystemDiskAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskAutoSnapshotPolicyId_, "") };
      inline ScalingConfigurations& setSystemDiskAutoSnapshotPolicyId(string systemDiskAutoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(systemDiskAutoSnapshotPolicyId_, systemDiskAutoSnapshotPolicyId) };


      // systemDiskBurstingEnabled Field Functions 
      bool hasSystemDiskBurstingEnabled() const { return this->systemDiskBurstingEnabled_ != nullptr;};
      void deleteSystemDiskBurstingEnabled() { this->systemDiskBurstingEnabled_ = nullptr;};
      inline bool getSystemDiskBurstingEnabled() const { DARABONBA_PTR_GET_DEFAULT(systemDiskBurstingEnabled_, false) };
      inline ScalingConfigurations& setSystemDiskBurstingEnabled(bool systemDiskBurstingEnabled) { DARABONBA_PTR_SET_VALUE(systemDiskBurstingEnabled_, systemDiskBurstingEnabled) };


      // systemDiskCategories Field Functions 
      bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
      void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
      inline const vector<string> & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
      inline vector<string> getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
      inline ScalingConfigurations& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
      inline ScalingConfigurations& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


      // systemDiskCategory Field Functions 
      bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
      void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
      inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
      inline ScalingConfigurations& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


      // systemDiskDescription Field Functions 
      bool hasSystemDiskDescription() const { return this->systemDiskDescription_ != nullptr;};
      void deleteSystemDiskDescription() { this->systemDiskDescription_ = nullptr;};
      inline string getSystemDiskDescription() const { DARABONBA_PTR_GET_DEFAULT(systemDiskDescription_, "") };
      inline ScalingConfigurations& setSystemDiskDescription(string systemDiskDescription) { DARABONBA_PTR_SET_VALUE(systemDiskDescription_, systemDiskDescription) };


      // systemDiskEncryptAlgorithm Field Functions 
      bool hasSystemDiskEncryptAlgorithm() const { return this->systemDiskEncryptAlgorithm_ != nullptr;};
      void deleteSystemDiskEncryptAlgorithm() { this->systemDiskEncryptAlgorithm_ = nullptr;};
      inline string getSystemDiskEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncryptAlgorithm_, "") };
      inline ScalingConfigurations& setSystemDiskEncryptAlgorithm(string systemDiskEncryptAlgorithm) { DARABONBA_PTR_SET_VALUE(systemDiskEncryptAlgorithm_, systemDiskEncryptAlgorithm) };


      // systemDiskEncrypted Field Functions 
      bool hasSystemDiskEncrypted() const { return this->systemDiskEncrypted_ != nullptr;};
      void deleteSystemDiskEncrypted() { this->systemDiskEncrypted_ = nullptr;};
      inline bool getSystemDiskEncrypted() const { DARABONBA_PTR_GET_DEFAULT(systemDiskEncrypted_, false) };
      inline ScalingConfigurations& setSystemDiskEncrypted(bool systemDiskEncrypted) { DARABONBA_PTR_SET_VALUE(systemDiskEncrypted_, systemDiskEncrypted) };


      // systemDiskKMSKeyId Field Functions 
      bool hasSystemDiskKMSKeyId() const { return this->systemDiskKMSKeyId_ != nullptr;};
      void deleteSystemDiskKMSKeyId() { this->systemDiskKMSKeyId_ = nullptr;};
      inline string getSystemDiskKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(systemDiskKMSKeyId_, "") };
      inline ScalingConfigurations& setSystemDiskKMSKeyId(string systemDiskKMSKeyId) { DARABONBA_PTR_SET_VALUE(systemDiskKMSKeyId_, systemDiskKMSKeyId) };


      // systemDiskName Field Functions 
      bool hasSystemDiskName() const { return this->systemDiskName_ != nullptr;};
      void deleteSystemDiskName() { this->systemDiskName_ = nullptr;};
      inline string getSystemDiskName() const { DARABONBA_PTR_GET_DEFAULT(systemDiskName_, "") };
      inline ScalingConfigurations& setSystemDiskName(string systemDiskName) { DARABONBA_PTR_SET_VALUE(systemDiskName_, systemDiskName) };


      // systemDiskPerformanceLevel Field Functions 
      bool hasSystemDiskPerformanceLevel() const { return this->systemDiskPerformanceLevel_ != nullptr;};
      void deleteSystemDiskPerformanceLevel() { this->systemDiskPerformanceLevel_ = nullptr;};
      inline string getSystemDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(systemDiskPerformanceLevel_, "") };
      inline ScalingConfigurations& setSystemDiskPerformanceLevel(string systemDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(systemDiskPerformanceLevel_, systemDiskPerformanceLevel) };


      // systemDiskProvisionedIops Field Functions 
      bool hasSystemDiskProvisionedIops() const { return this->systemDiskProvisionedIops_ != nullptr;};
      void deleteSystemDiskProvisionedIops() { this->systemDiskProvisionedIops_ = nullptr;};
      inline int64_t getSystemDiskProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(systemDiskProvisionedIops_, 0L) };
      inline ScalingConfigurations& setSystemDiskProvisionedIops(int64_t systemDiskProvisionedIops) { DARABONBA_PTR_SET_VALUE(systemDiskProvisionedIops_, systemDiskProvisionedIops) };


      // systemDiskSize Field Functions 
      bool hasSystemDiskSize() const { return this->systemDiskSize_ != nullptr;};
      void deleteSystemDiskSize() { this->systemDiskSize_ = nullptr;};
      inline int32_t getSystemDiskSize() const { DARABONBA_PTR_GET_DEFAULT(systemDiskSize_, 0) };
      inline ScalingConfigurations& setSystemDiskSize(int32_t systemDiskSize) { DARABONBA_PTR_SET_VALUE(systemDiskSize_, systemDiskSize) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ScalingConfigurations::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ScalingConfigurations::Tags>) };
      inline vector<ScalingConfigurations::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ScalingConfigurations::Tags>) };
      inline ScalingConfigurations& setTags(const vector<ScalingConfigurations::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ScalingConfigurations& setTags(vector<ScalingConfigurations::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // tenancy Field Functions 
      bool hasTenancy() const { return this->tenancy_ != nullptr;};
      void deleteTenancy() { this->tenancy_ = nullptr;};
      inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
      inline ScalingConfigurations& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline ScalingConfigurations& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


      // weightedCapacities Field Functions 
      bool hasWeightedCapacities() const { return this->weightedCapacities_ != nullptr;};
      void deleteWeightedCapacities() { this->weightedCapacities_ = nullptr;};
      inline const vector<int32_t> & getWeightedCapacities() const { DARABONBA_PTR_GET_CONST(weightedCapacities_, vector<int32_t>) };
      inline vector<int32_t> getWeightedCapacities() { DARABONBA_PTR_GET(weightedCapacities_, vector<int32_t>) };
      inline ScalingConfigurations& setWeightedCapacities(const vector<int32_t> & weightedCapacities) { DARABONBA_PTR_SET_VALUE(weightedCapacities_, weightedCapacities) };
      inline ScalingConfigurations& setWeightedCapacities(vector<int32_t> && weightedCapacities) { DARABONBA_PTR_SET_RVALUE(weightedCapacities_, weightedCapacities) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline ScalingConfigurations& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // Indicates whether the ECS instance on a dedicated host is associated with the dedicated host. Valid values:
      // 
      // *   default: The instance is not associated with the dedicated host. If you restart an instance that was stopped in Economical Mode and the original dedicated host of the instance has insufficient resources, the instance is automatically deployed to another dedicated host in the automatic deployment resource pool.
      // *   host: The instance is associated with the dedicated host. If you restart an instance that was stopped in Economical Mode, the instance remains on the original dedicated host. If the available resources of the original dedicated host are insufficient, the instance cannot be restarted.
      shared_ptr<string> affinity_ {};
      // The number of vCPUs.
      // 
      // You can specify CPU and Memory to define the range of instance types. For example, if you set CPU to 2 and Memory to 16, the instance types that have 2 vCPUs and 16 GiB are returned. If you specify CPU and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones and preferentially creates instances by using the lowest-priced instance type.
      // 
      // >  You can specify CPU and Memory to define instance types only when you set Scaling Policy to Cost Optimization and no instance type is specified in the scaling configuration.
      shared_ptr<int32_t> cpu_ {};
      // The time at which the scaling configuration was created.
      shared_ptr<string> creationTime_ {};
      // The performance mode of the burstable instances. Valid values:
      // 
      // *   Standard: the standard mode. For more information, see the "Standard mode" section in the [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html) topic.
      // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      shared_ptr<string> creditSpecification_ {};
      // The priority of the custom ECS instance type + vSwitch combination.
      // 
      // >  This parameter takes effect only when Scaling Policy of the scaling group is set to Priority Policy.
      // 
      // If Auto Scaling cannot create ECS instances by using the custom ECS instance type + vSwitch combination of the highest priority, Auto Scaling creates ECS instances by using the custom ECS instance type + vSwitch combination of the next highest priority.
      // 
      // >  If you specify the priorities of only a portion of custom ECS instance type + vSwitch combinations, Auto Scaling preferentially creates ECS instances by using the custom combinations that have specified priorities. If the custom combinations that have specified priorities do not provide sufficient resources, Auto Scaling creates ECS instances by using the custom combinations that do not have specified priorities based on the specified orders of vSwitches and instance types.
      // 
      // *   Example: the specified order of vSwitches for your scaling group is vsw1 and vsw2 and the specified order of instance types in your scaling configuration is type1 and type 2. In addition, you use CustomPriorities to specify ["vsw2+type2", "vsw1+type2"]. In this example, the vsw2+type2 combination has the highest priority and the vsw2+type1 combination has the lowest priority. The vsw1+type2 combination has a higher priority than the vsw1+type1 combination.
      shared_ptr<vector<ScalingConfigurations::CustomPriorities>> customPriorities_ {};
      // The data disks.
      shared_ptr<vector<ScalingConfigurations::DataDisks>> dataDisks_ {};
      // The ID of the dedicated host cluster.
      shared_ptr<string> dedicatedHostClusterId_ {};
      // The ID of the dedicated host on which the ECS instance is created. Preemptible instances are not supported by dedicated hosts. Therefore, if you specify DedicatedHostId, SpotStrategy and SpotPriceLimit are ignored.
      // 
      // You can call the DescribeDedicatedHosts operation to query the IDs of dedicated hosts.
      shared_ptr<string> dedicatedHostId_ {};
      // Indicates whether Release Protection is enabled for the ECS instances. You can specify this parameter to determine whether the ECS instances can be deleted by using the ECS console or calling the DeleteInstance operation. Valid values:
      // 
      // *   true: Release Protection is enabled for the ECS instances. You cannot delete the ECS instances by using the ECS console or calling the DeleteInstance operation.
      // *   false: Release Protection is disabled for the ECS instances. You can delete the ECS instances by using the ECS console or calling the DeleteInstance operation.
      // 
      // >  You can enable Release Protection for only pay-as-you-go instances to prevent unexpected instance deletion during scale-in events. The Release Protection feature does not affect normal scaling activities. In other words, an instance that meets the criteria of scale-in policies may be removed from a scaling group during a scale-in event even if you enabled Release Protection for the instance.
      shared_ptr<bool> deletionProtection_ {};
      // The ID of the deployment set to which the Elastic Compute Service (ECS) instances belong.
      shared_ptr<string> deploymentSetId_ {};
      // The hostname series of the ECS instances.
      shared_ptr<string> hostName_ {};
      // The ID of the High Performance Computing (HPC) cluster to which the ECS instances belong.
      shared_ptr<string> hpcClusterId_ {};
      // Indicates whether the access channel is enabled for instance metadata. Valid values:
      // 
      // *   enabled
      // *   disabled
      shared_ptr<string> httpEndpoint_ {};
      // Indicates whether the security hardening mode (IMDSv2) is forcefully used to access instance metadata. Valid values:
      // 
      // *   optional: The security hardening mode IMDSv2 is not forcibly used.
      // *   required: The security hardening mode (IMDSv2) is forcibly used. After you set this parameter to required, you cannot access instance metadata in normal mode.
      shared_ptr<string> httpTokens_ {};
      // The name of the image family. You can specify this parameter to obtain the latest available images in the current image family for instance creation. If you specify ImageId, you cannot specify `ImageFamily`.
      shared_ptr<string> imageFamily_ {};
      // The ID of the image file that provides the image resource for Auto Scaling to create ECS instances.
      shared_ptr<string> imageId_ {};
      // The name of the image file.
      shared_ptr<string> imageName_ {};
      // Indicates whether the ecs-user username can be used to log on to an ECS instance created from the scaling configuration. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> imageOptionsLoginAsNonRoot_ {};
      // The image source. Valid values:
      // 
      // *   system: a public image provided by Alibaba Cloud
      // *   self: a custom image that you created
      // *   others: a shared image from another Alibaba Cloud account or a community image published by another Alibaba Cloud account
      // *   marketplace: an Alibaba Cloud Marketplace image
      shared_ptr<string> imageOwnerAlias_ {};
      // The description of the ECS instances.
      shared_ptr<string> instanceDescription_ {};
      // The generation of the ECS instances.
      shared_ptr<string> instanceGeneration_ {};
      // The naming series of the ECS instances.
      shared_ptr<string> instanceName_ {};
      // The intelligent configuration settings, which determine the available instance types.
      shared_ptr<vector<ScalingConfigurations::InstancePatternInfos>> instancePatternInfos_ {};
      // The instance types of the ECS instances.
      shared_ptr<string> instanceType_ {};
      // The ECS instance types.
      shared_ptr<vector<string>> instanceTypes_ {};
      // The billing method for network usage. Valid values:
      // 
      // *   PayByBandwidth: pay-by-bandwidth. You are charged for the bandwidth that you specified by using InternetMaxBandwidthOut.
      // *   PayByTraffic: pay-by-traffic. You are charged for the actual traffic that you used. InternetMaxBandwidthOut specifies only the maximum available bandwidth.
      shared_ptr<string> internetChargeType_ {};
      // The maximum inbound public bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> internetMaxBandwidthIn_ {};
      // The maximum outbound public bandwidth. Unit: Mbit/s.
      shared_ptr<int32_t> internetMaxBandwidthOut_ {};
      // Indicates whether the ECS instances are I/O optimized. Valid values:
      // 
      // *   none: The ECS instances are not I/O optimized.
      // *   optimized: The ECS instances are I/O optimized.
      shared_ptr<string> ioOptimized_ {};
      // The number of randomly generated IPv6 addresses that are allocated to the elastic network interface (ENI).
      shared_ptr<int32_t> ipv6AddressCount_ {};
      // The name of the key pair that is used to log on to an ECS instance created from the scaling configuration.
      shared_ptr<string> keyPairName_ {};
      // The status of the scaling configuration in the scaling group. Valid values:
      // 
      // *   Active: The scaling configuration is active in the scaling group. Auto Scaling uses the scaling configuration that is in the Active state to create ECS instances during scale-out events.
      // *   Inactive: The scaling configuration is inactive in the scaling group. Scaling configurations that are in the Inactive state are still contained in the scaling group, but Auto Scaling does not use the inactive scaling configurations to create ECS instances during scale-out events.
      shared_ptr<string> lifecycleState_ {};
      // The weight of an ECS instance as a backend server. Valid values: 1 to 100.
      shared_ptr<int32_t> loadBalancerWeight_ {};
      // The memory size. Unit: GiB.
      // 
      // You can specify CPU and Memory to define the range of instance types. For example, if you set CPU to 2 and Memory to 16, the instance types that have 2 vCPUs and 16 GiB are returned. If you specify CPU and Memory, Auto Scaling determines the available instance types based on factors such as I/O optimization requirements and zones and preferentially creates instances by using the lowest-priced instance type.
      // 
      // >  You can specify CPU and Memory to define instance types only when you set Scaling Policy to Cost Optimization and no instance type is specified in the scaling configuration.
      shared_ptr<int32_t> memory_ {};
      // The ENIs.
      shared_ptr<vector<ScalingConfigurations::NetworkInterfaces>> networkInterfaces_ {};
      // Indicates whether the password preconfigured in the image is used.
      shared_ptr<bool> passwordInherit_ {};
      // Indicates whether a password is configured for the instance.
      shared_ptr<bool> passwordSetted_ {};
      shared_ptr<string> privatePoolOptions_id_ {};
      shared_ptr<string> privatePoolOptions_matchCriteria_ {};
      // The name of the Resource Access Management (RAM) role assumed by the ECS instances. This name is provided and maintained by RAM. You can call the ListRoles operation to query the available RAM roles.
      shared_ptr<string> ramRoleName_ {};
      // The ID of the resource group to which the ECS instances belong.
      shared_ptr<string> resourceGroupId_ {};
      // The resource pools used for instance creation, which can be the public pool or a private pool associated with any active elasticity assurance or capacity reservation.
      // 
      // *   This parameter takes effect only when you create pay-as-you-go instances.
      shared_ptr<ScalingConfigurations::ResourcePoolOptions> resourcePoolOptions_ {};
      // The ID of the scaling configuration.
      shared_ptr<string> scalingConfigurationId_ {};
      // The name of the scaling configuration.
      shared_ptr<string> scalingConfigurationName_ {};
      // The ID of the scaling group to which the scaling configuration belongs.
      shared_ptr<string> scalingGroupId_ {};
      // >  This parameter is in invitational preview and is not available for use.
      shared_ptr<ScalingConfigurations::SchedulerOptions> schedulerOptions_ {};
      // Indicates whether Security Hardening is enabled. Valid values:
      // 
      // *   Active: Security Hardening is enabled. This value is applicable to only public images.
      // *   Deactive: Security Hardening is disabled. This value is applicable to all images.
      shared_ptr<string> securityEnhancementStrategy_ {};
      // The ID of the security group to which the ECS instances belong. ECS instances that belong to the same security group can communicate with each other.
      shared_ptr<string> securityGroupId_ {};
      // The IDs of the security groups to which the ECS instances belong. ECS instances that belong to the same security group can communicate with each other.
      shared_ptr<vector<string>> securityGroupIds_ {};
      shared_ptr<ScalingConfigurations::SecurityOptions> securityOptions_ {};
      // The protection period of the preemptible instances. Unit: hours.
      shared_ptr<int32_t> spotDuration_ {};
      // The interruption event of the preemptible instances.
      shared_ptr<string> spotInterruptionBehavior_ {};
      // The preemptible instances.
      shared_ptr<vector<ScalingConfigurations::SpotPriceLimits>> spotPriceLimits_ {};
      // The preemption policy that is applied to pay-as-you-go instances. Valid values:
      // 
      // *   NoSpot: The instances are created as regular pay-as-you-go instances.
      // *   SpotWithPriceLimit: The instances are created as preemptible instances that have a user-defined maximum hourly price.
      // *   SpotAsPriceGo: The instances are preemptible instances for which the market price at the time of purchase is automatically used as the bid price.
      shared_ptr<string> spotStrategy_ {};
      // The ID of the storage set.
      shared_ptr<string> storageSetId_ {};
      // The maximum number of partitions in the storage set. The value is an integer that is greater than or equal to 2.
      shared_ptr<int32_t> storageSetPartitionNumber_ {};
      // The ID of the automatic snapshot policy that is applied to the system disk.
      shared_ptr<string> systemDiskAutoSnapshotPolicyId_ {};
      // Indicates whether the Performance Burst feature is enabled for the system disk. Valid values:
      // 
      // *   true
      // *   false
      // 
      // >  This parameter is available only when you set SystemDisk.Category to cloud_auto.
      shared_ptr<bool> systemDiskBurstingEnabled_ {};
      // The categories of the system disks. The values are sorted based on their priorities. The first value has the highest priority. If Auto Scaling cannot create instances by using the disk category of the highest priority, Auto Scaling creates instances by using the disk category of the next highest priority. Valid values:
      // 
      // *   cloud: basic disk
      // *   cloud_efficiency: ultra disk
      // *   cloud_ssd: standard SSD
      // *   cloud_essd: ESSD
      shared_ptr<vector<string>> systemDiskCategories_ {};
      // The category of the system disk. Valid values:
      // 
      // *   cloud: basic disk
      // *   cloud_efficiency: ultra disk
      // *   cloud_ssd: standard SSD
      // *   ephemeral_ssd: local SSD
      // *   cloud_essd: enterprise SSD (ESSD)
      // *   cloud_auto: ESSD AutoPL
      shared_ptr<string> systemDiskCategory_ {};
      // The description of the system disk.
      shared_ptr<string> systemDiskDescription_ {};
      // The encryption algorithm that is applied to the system disk. Valid values:
      // 
      // *   AES-256
      // *   SM4-128
      shared_ptr<string> systemDiskEncryptAlgorithm_ {};
      // Indicates whether the system disk is encrypted. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> systemDiskEncrypted_ {};
      // The ID of the KMS key that is applied to the system disk.
      shared_ptr<string> systemDiskKMSKeyId_ {};
      // The name of the system disk.
      shared_ptr<string> systemDiskName_ {};
      // The performance level (PL) of the system disk that is an ESSD.
      shared_ptr<string> systemDiskPerformanceLevel_ {};
      // The provisioned IOPS of the system disk.
      // 
      // >  IOPS measures the number of read and write operations that an EBS device can process per second.
      shared_ptr<int64_t> systemDiskProvisionedIops_ {};
      // The size of the system disk. Unit: GiB.
      shared_ptr<int32_t> systemDiskSize_ {};
      // The tags.
      shared_ptr<vector<ScalingConfigurations::Tags>> tags_ {};
      // Indicates whether the ECS instance is created on a dedicated host. Valid values:
      // 
      // *   default: The ECS instance is created on a non-dedicated host.
      // *   host: The ECS instance is created on a dedicated host. If you do not specify DedicatedHostId, the system selects a dedicated host for the ECS instance.
      // 
      // Default value: default.
      shared_ptr<string> tenancy_ {};
      // The user data of the ECS instances.
      shared_ptr<string> userData_ {};
      // The weights of the instance types. The value of this parameter indicates the capacity of an instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the instance type are required to meet the expected capacity requirement.
      shared_ptr<vector<int32_t>> weightedCapacities_ {};
      // The ID of the zone in which the ECS instances are created. You can call the DescribeZones operation to query the zone IDs.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->scalingConfigurations_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingConfigurationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingConfigurationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScalingConfigurationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scalingConfigurations Field Functions 
    bool hasScalingConfigurations() const { return this->scalingConfigurations_ != nullptr;};
    void deleteScalingConfigurations() { this->scalingConfigurations_ = nullptr;};
    inline const vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations> & getScalingConfigurations() const { DARABONBA_PTR_GET_CONST(scalingConfigurations_, vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations>) };
    inline vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations> getScalingConfigurations() { DARABONBA_PTR_GET(scalingConfigurations_, vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations>) };
    inline DescribeScalingConfigurationsResponseBody& setScalingConfigurations(const vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations> & scalingConfigurations) { DARABONBA_PTR_SET_VALUE(scalingConfigurations_, scalingConfigurations) };
    inline DescribeScalingConfigurationsResponseBody& setScalingConfigurations(vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations> && scalingConfigurations) { DARABONBA_PTR_SET_RVALUE(scalingConfigurations_, scalingConfigurations) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeScalingConfigurationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The scaling configurations.
    shared_ptr<vector<DescribeScalingConfigurationsResponseBody::ScalingConfigurations>> scalingConfigurations_ {};
    // The total number of scaling configurations.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
