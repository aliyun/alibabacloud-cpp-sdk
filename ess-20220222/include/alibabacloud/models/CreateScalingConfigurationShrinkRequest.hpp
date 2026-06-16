// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONSHRINKREQUEST_HPP_
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
  class CreateScalingConfigurationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
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
      DARABONBA_PTR_TO_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstancePatternInfos, instancePatternInfos_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeCandidateOptions, instanceTypeCandidateOptions_);
      DARABONBA_PTR_TO_JSON(InstanceTypeOverrides, instanceTypeOverrides_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptionsShrink_);
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
      DARABONBA_PTR_TO_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
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
      DARABONBA_PTR_FROM_JSON(InstanceDescription, instanceDescription_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstancePatternInfos, instancePatternInfos_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeCandidateOptions, instanceTypeCandidateOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeOverrides, instanceTypeOverrides_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LoadBalancerWeight, loadBalancerWeight_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptionsShrink_);
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
      DARABONBA_PTR_FROM_JSON(SystemDiskCategories, systemDiskCategories_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateScalingConfigurationShrinkRequest() = default ;
    CreateScalingConfigurationShrinkRequest(const CreateScalingConfigurationShrinkRequest &) = default ;
    CreateScalingConfigurationShrinkRequest(CreateScalingConfigurationShrinkRequest &&) = default ;
    CreateScalingConfigurationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationShrinkRequest() = default ;
    CreateScalingConfigurationShrinkRequest& operator=(const CreateScalingConfigurationShrinkRequest &) = default ;
    CreateScalingConfigurationShrinkRequest& operator=(CreateScalingConfigurationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
      // The instance type of the preemptible instance. This parameter takes effect when SpotStrategy is set to SpotWithPriceLimit.
      shared_ptr<string> instanceType_ {};
      // The bid price for the preemptible instance. This parameter takes effect when SpotStrategy is set to SpotWithPriceLimit.
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
      // The confidential computing mode. Possible values:
      // 
      // - Enclave: The ECS instance uses an Enclave to build a confidential computing environment. For more information, see [Build a confidential computing environment using an Enclave](https://help.aliyun.com/document_detail/203433.html).
      // 
      // - TDX: Builds a TDX confidential computing environment. For more information, see [Build a TDX confidential computing environment](https://help.aliyun.com/document_detail/479090.html).
      shared_ptr<string> confidentialComputingMode_ {};
    };

    class ResourcePoolOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcePoolOptions& obj) { 
        DARABONBA_PTR_TO_JSON(PrivatePoolIds, privatePoolIds_);
        DARABONBA_PTR_TO_JSON(PrivatePoolTags, privatePoolTags_);
        DARABONBA_PTR_TO_JSON(Strategy, strategy_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcePoolOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(PrivatePoolIds, privatePoolIds_);
        DARABONBA_PTR_FROM_JSON(PrivatePoolTags, privatePoolTags_);
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
      class PrivatePoolTags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PrivatePoolTags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, PrivatePoolTags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        PrivatePoolTags() = default ;
        PrivatePoolTags(const PrivatePoolTags &) = default ;
        PrivatePoolTags(PrivatePoolTags &&) = default ;
        PrivatePoolTags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PrivatePoolTags() = default ;
        PrivatePoolTags& operator=(const PrivatePoolTags &) = default ;
        PrivatePoolTags& operator=(PrivatePoolTags &&) = default ;
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
        inline PrivatePoolTags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline PrivatePoolTags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key of the private pool.
        shared_ptr<string> key_ {};
        // The tag value of the private pool.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->privatePoolIds_ == nullptr
        && this->privatePoolTags_ == nullptr && this->strategy_ == nullptr; };
      // privatePoolIds Field Functions 
      bool hasPrivatePoolIds() const { return this->privatePoolIds_ != nullptr;};
      void deletePrivatePoolIds() { this->privatePoolIds_ = nullptr;};
      inline const vector<string> & getPrivatePoolIds() const { DARABONBA_PTR_GET_CONST(privatePoolIds_, vector<string>) };
      inline vector<string> getPrivatePoolIds() { DARABONBA_PTR_GET(privatePoolIds_, vector<string>) };
      inline ResourcePoolOptions& setPrivatePoolIds(const vector<string> & privatePoolIds) { DARABONBA_PTR_SET_VALUE(privatePoolIds_, privatePoolIds) };
      inline ResourcePoolOptions& setPrivatePoolIds(vector<string> && privatePoolIds) { DARABONBA_PTR_SET_RVALUE(privatePoolIds_, privatePoolIds) };


      // privatePoolTags Field Functions 
      bool hasPrivatePoolTags() const { return this->privatePoolTags_ != nullptr;};
      void deletePrivatePoolTags() { this->privatePoolTags_ = nullptr;};
      inline const vector<ResourcePoolOptions::PrivatePoolTags> & getPrivatePoolTags() const { DARABONBA_PTR_GET_CONST(privatePoolTags_, vector<ResourcePoolOptions::PrivatePoolTags>) };
      inline vector<ResourcePoolOptions::PrivatePoolTags> getPrivatePoolTags() { DARABONBA_PTR_GET(privatePoolTags_, vector<ResourcePoolOptions::PrivatePoolTags>) };
      inline ResourcePoolOptions& setPrivatePoolTags(const vector<ResourcePoolOptions::PrivatePoolTags> & privatePoolTags) { DARABONBA_PTR_SET_VALUE(privatePoolTags_, privatePoolTags) };
      inline ResourcePoolOptions& setPrivatePoolTags(vector<ResourcePoolOptions::PrivatePoolTags> && privatePoolTags) { DARABONBA_PTR_SET_RVALUE(privatePoolTags_, privatePoolTags) };


      // strategy Field Functions 
      bool hasStrategy() const { return this->strategy_ != nullptr;};
      void deleteStrategy() { this->strategy_ = nullptr;};
      inline string getStrategy() const { DARABONBA_PTR_GET_DEFAULT(strategy_, "") };
      inline ResourcePoolOptions& setStrategy(string strategy) { DARABONBA_PTR_SET_VALUE(strategy_, strategy) };


    protected:
      // The ID of the private pool. This is the ID of the Elastic Assurance or Capacity Reservation service. This parameter can only accept Target mode private pool IDs and cannot be specified at the same time as the PrivatePoolTags parameter.
      shared_ptr<vector<string>> privatePoolIds_ {};
      // Filter available Target private pools by tags. N is an integer from 1 to 20.
      // Note:
      // 
      // - When this parameter is configured, the system only selects from the associated Target private pools under the account that have matching tags and also meet the scaling group constraints (such as zone, instance type, etc.).
      // 
      // - Tag matching rule: The private pool must match all specified tags.
      // 
      // - This parameter cannot be specified at the same time as the PrivatePoolIds parameter.
      shared_ptr<vector<ResourcePoolOptions::PrivatePoolTags>> privatePoolTags_ {};
      // The resource pool, which includes private pools generated after an Elastic Assurance or Capacity Reservation service takes effect, and the public pool, can be selected for instance startup. Valid values:
      // 
      // - PrivatePoolFirst: Private pool first. When this policy is selected, if you specify ResourcePoolOptions.PrivatePoolIds or meet the PrivatePoolTags conditions, the corresponding private pool is used first. If no private pool is specified or the specified private pool has insufficient capacity, the system automatically matches an open-type private pool. If no eligible private pool is found, the instance is created using the public pool.
      // 
      // - PrivatePoolOnly: Private pool only. When this policy is selected, you must specify ResourcePoolOptions.PrivatePoolIds. If the specified private pool has insufficient capacity, the instance fails to start.
      // 
      // - PublicPoolFirst: Public pool resources first. The system prioritizes creating the instance using the public pool. When public pool resources are insufficient, private pool resources are used as a supplement. The system first automatically matches an open-type private pool. If no eligible private pool is found, it uses a Target-type private pool that is specified by ResourcePoolOptions.PrivatePoolIds or meets the PrivatePoolTags conditions. (This policy is in invitational preview and is not yet available for use.)
      // 
      // - None: No resource pool policy is used.
      // 
      // Default value: None.
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
      // The type of ENI. When using this parameter, you must use NetworkInterfaces to set the primary NIC and cannot set the SecurityGroupId or SecurityGroupIds parameters. Valid values:
      // 
      // - Primary: primary NIC.
      // 
      // - Secondary: secondary NIC.
      // 
      // Default value: Secondary.
      shared_ptr<string> instanceType_ {};
      // The number of randomly generated IPv6 addresses to assign to the primary NIC.
      // Note:
      // 
      // - This parameter takes effect only when NetworkInterface.InstanceType is set to Primary. If NetworkInterface.InstanceType is set to Secondary or is empty, you cannot set this parameter.
      // 
      // - If you set this parameter, you cannot set Ipv6AddressCount.
      shared_ptr<int32_t> ipv6AddressCount_ {};
      // The communication mode of the NIC. Valid values:
      // 
      // - Standard: uses TCP communication mode.
      // 
      // - HighPerformance: enables the Elastic RDMA Interface (ERI) and uses RDMA communication mode.
      // 
      // Default value: Standard.
      // 
      // > The number of ENIs in RDMA mode cannot exceed the limit for the instance family. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The number of secondary private IPv4 addresses to assign to the NIC. Valid values: 1 to 49.
      // 
      // - The value cannot exceed the IP address limit for the instance type. For more information, see [Instance families](https://help.aliyun.com/en/ecs/user-guide/overview-of-instance-families).
      // 
      // - NetworkInterface.N.SecondaryPrivateIpAddressCount is used to assign a number of secondary private IPv4 addresses to the NIC (excluding the primary private IP address). The system randomly assigns these addresses from the available CIDR block of the vSwitch (NetworkInterface.N.VSwitchId) where the NIC is located.
      shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
      // One or more security group IDs to which the ENI belongs.
      shared_ptr<vector<string>> securityGroupIds_ {};
    };

    class InstanceTypeOverrides : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypeOverrides& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypeOverrides& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
      };
      InstanceTypeOverrides() = default ;
      InstanceTypeOverrides(const InstanceTypeOverrides &) = default ;
      InstanceTypeOverrides(InstanceTypeOverrides &&) = default ;
      InstanceTypeOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypeOverrides() = default ;
      InstanceTypeOverrides& operator=(const InstanceTypeOverrides &) = default ;
      InstanceTypeOverrides& operator=(InstanceTypeOverrides &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceType_ == nullptr
        && this->weightedCapacity_ == nullptr; };
      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline InstanceTypeOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // weightedCapacity Field Functions 
      bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
      void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
      inline int32_t getWeightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
      inline InstanceTypeOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


    protected:
      // If you want the scaling group to scale based on the capacity of instance types, specify both this parameter and WeightedCapacity.
      // 
      // This parameter specifies the instance type and overwrites the instance type in the launch template. You can specify this parameter up to 20 times. N is an integer from 1 to 20.
      // 
      // > This parameter takes effect only when a launch template is specified by the LaunchTemplateId parameter.
      // 
      // Valid values for InstanceType: available ECS instance types.
      shared_ptr<string> instanceType_ {};
      // To specify the capacity of an instance type in the scaling configuration, specify this parameter after you specify InstanceTypeOverrides.InstanceType.
      // 
      // This parameter specifies the weight of the instance type. The weight indicates the capacity of a single instance of the specified instance type in the scaling group. A higher weight means that fewer instances of that type are needed to meet the desired capacity.
      // 
      // You can configure different weights for different instance types based on their performance metrics, such as the number of vCPUs and memory size.
      // 
      // For example:
      // 
      // - Current capacity: 0.
      // 
      // - Expected capacity: 6.
      // 
      // - Capacity of ecs.c5.xlarge: 4.
      // 
      // To meet the expected capacity, the scaling group will scale out two ecs.c5.xlarge instances.
      // 
      // > During a scale-out, the capacity of the scaling group cannot exceed the sum of MaxSize and the maximum weight of the instance type.
      // 
      // Valid values for WeightedCapacity: 1 to 500.
      shared_ptr<int32_t> weightedCapacity_ {};
    };

    class InstanceTypeCandidateOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceTypeCandidateOptions& obj) { 
        DARABONBA_PTR_TO_JSON(AllowCidrBlocks, allowCidrBlocks_);
        DARABONBA_PTR_TO_JSON(AllowCrossAz, allowCrossAz_);
        DARABONBA_PTR_TO_JSON(AllowDifferentGeneration, allowDifferentGeneration_);
        DARABONBA_PTR_TO_JSON(Enabled, enabled_);
        DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceTypeCandidateOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(AllowCidrBlocks, allowCidrBlocks_);
        DARABONBA_PTR_FROM_JSON(AllowCrossAz, allowCrossAz_);
        DARABONBA_PTR_FROM_JSON(AllowDifferentGeneration, allowDifferentGeneration_);
        DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
        DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      };
      InstanceTypeCandidateOptions() = default ;
      InstanceTypeCandidateOptions(const InstanceTypeCandidateOptions &) = default ;
      InstanceTypeCandidateOptions(InstanceTypeCandidateOptions &&) = default ;
      InstanceTypeCandidateOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceTypeCandidateOptions() = default ;
      InstanceTypeCandidateOptions& operator=(const InstanceTypeCandidateOptions &) = default ;
      InstanceTypeCandidateOptions& operator=(InstanceTypeCandidateOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allowCidrBlocks_ == nullptr
        && this->allowCrossAz_ == nullptr && this->allowDifferentGeneration_ == nullptr && this->enabled_ == nullptr && this->maxPrice_ == nullptr; };
      // allowCidrBlocks Field Functions 
      bool hasAllowCidrBlocks() const { return this->allowCidrBlocks_ != nullptr;};
      void deleteAllowCidrBlocks() { this->allowCidrBlocks_ = nullptr;};
      inline const vector<string> & getAllowCidrBlocks() const { DARABONBA_PTR_GET_CONST(allowCidrBlocks_, vector<string>) };
      inline vector<string> getAllowCidrBlocks() { DARABONBA_PTR_GET(allowCidrBlocks_, vector<string>) };
      inline InstanceTypeCandidateOptions& setAllowCidrBlocks(const vector<string> & allowCidrBlocks) { DARABONBA_PTR_SET_VALUE(allowCidrBlocks_, allowCidrBlocks) };
      inline InstanceTypeCandidateOptions& setAllowCidrBlocks(vector<string> && allowCidrBlocks) { DARABONBA_PTR_SET_RVALUE(allowCidrBlocks_, allowCidrBlocks) };


      // allowCrossAz Field Functions 
      bool hasAllowCrossAz() const { return this->allowCrossAz_ != nullptr;};
      void deleteAllowCrossAz() { this->allowCrossAz_ = nullptr;};
      inline bool getAllowCrossAz() const { DARABONBA_PTR_GET_DEFAULT(allowCrossAz_, false) };
      inline InstanceTypeCandidateOptions& setAllowCrossAz(bool allowCrossAz) { DARABONBA_PTR_SET_VALUE(allowCrossAz_, allowCrossAz) };


      // allowDifferentGeneration Field Functions 
      bool hasAllowDifferentGeneration() const { return this->allowDifferentGeneration_ != nullptr;};
      void deleteAllowDifferentGeneration() { this->allowDifferentGeneration_ = nullptr;};
      inline bool getAllowDifferentGeneration() const { DARABONBA_PTR_GET_DEFAULT(allowDifferentGeneration_, false) };
      inline InstanceTypeCandidateOptions& setAllowDifferentGeneration(bool allowDifferentGeneration) { DARABONBA_PTR_SET_VALUE(allowDifferentGeneration_, allowDifferentGeneration) };


      // enabled Field Functions 
      bool hasEnabled() const { return this->enabled_ != nullptr;};
      void deleteEnabled() { this->enabled_ = nullptr;};
      inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
      inline InstanceTypeCandidateOptions& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


      // maxPrice Field Functions 
      bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
      void deleteMaxPrice() { this->maxPrice_ = nullptr;};
      inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
      inline InstanceTypeCandidateOptions& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    protected:
      // When supplementing with vSwitches from other zones is allowed, you must specify the CIDR blocks for the candidate vSwitches.
      shared_ptr<vector<string>> allowCidrBlocks_ {};
      // Specifies whether to allow supplementing with vSwitches from other zones.
      // 
      // > The instance type remains unchanged; only new zones are considered as candidates. When a scaling group cannot scale out in any of the selected zones due to issues like insufficient inventory, this configuration allows ESS to automatically add a vSwitch from a new zone to the scaling group.
      // > For example, if a scaling group is configured for zones cn-hangzhou-h and cn-hangzhou-g, and neither can be scaled out, ESS might create and add a vSwitch in cn-hangzhou-k based on real-time inventory.
      shared_ptr<bool> allowCrossAz_ {};
      // Specifies whether to allow supplementing with instance types from other generations.
      // 
      // - For example, if the current instance type is ecs.c7.large, enabling this allows ecs.c6.large and ecs.c8.large as candidate types.
      shared_ptr<bool> allowDifferentGeneration_ {};
      // Specifies whether to enable the candidate mode.
      shared_ptr<bool> enabled_ {};
      // The maximum price for candidate instance types.
      shared_ptr<float> maxPrice_ {};
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
      // The architecture type of the instance type. Valid values:
      // 
      // - X86: X86 compute.
      // 
      // - Heterogeneous: heterogeneous computing, such as GPU or FPGA.
      // 
      // - BareMental: ECS Bare Metal Instance.
      // 
      // - Arm: Arm compute.
      // 
      // Default value: all architecture types are included.
      shared_ptr<vector<string>> architectures_ {};
      // Specifies whether to include burstable instance types. Valid values:
      // 
      // - Exclude: does not include burstable instance types.
      // 
      // - Include: includes burstable instance types.
      // 
      // - Required: includes only burstable instance types.
      // 
      // Default value: Include.
      shared_ptr<string> burstablePerformance_ {};
      // In intelligent configuration mode, the number of vCPU cores of the instance type. This is used to filter instance types that meet the requirements. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // 
      // Note the following:
      // 
      // - The InstancePatternInfos parameter applies only when the network type of the scaling group is VPC.
      // 
      // - When using InstancePatternInfos, you must specify both InstancePatternInfos.Cores and InstancePatternInfos.Memory.
      // 
      // - If you have already specified instance types using the InstanceType or InstanceTypes parameter, Auto Scaling prioritizes the specified instance types for scale-outs. If the specified instance types are out of stock, Auto Scaling uses the instance type with the lowest price from the instance types that match the InstancePatternInfos parameter.
      shared_ptr<int32_t> cores_ {};
      // The CPU architecture of the instance. Valid values:
      // 
      // > You can specify multiple CPU architectures. N is an integer from 1 to 2.
      // 
      // - X86.
      // 
      // - ARM.
      shared_ptr<vector<string>> cpuArchitectures_ {};
      // The instance types to exclude. You can use a wildcard character (\\*) to exclude a single instance type or an entire instance family. For example:
      // 
      // - ecs.c6.large: excludes the ecs.c6.large instance type.
      // 
      // - ecs.c6.\\*: excludes all instance types in the c6 family.
      shared_ptr<vector<string>> excludedInstanceTypes_ {};
      // The GPU type.
      shared_ptr<vector<string>> gpuSpecs_ {};
      // The category of the instance. Valid values:
      // 
      // > You can specify multiple instance categories. N is an integer from 1 to 10.
      // 
      // - General-purpose: General-purpose.
      // 
      // - Compute-optimized: compute-optimized.
      // 
      // - Memory-optimized: memory-optimized.
      // 
      // - Big data: big data.
      // 
      // - Local SSDs : local SSDs.
      // 
      // - High Clock Speed : high frequency.
      // 
      // - Enhanced : enhanced instance families.
      // 
      // - Shared: shared-resource instances.
      // 
      // - Compute-optimized with GPU : GPU compute-optimized.
      // 
      // - Visual Compute-optimized : visual compute-optimized.
      // 
      // - Heterogeneous Service : heterogeneous service.
      // 
      // - Compute-optimized with FPGA : FPGA compute-optimized.
      // 
      // - Compute-optimized with NPU : NPU compute-optimized.
      // 
      // - ECS Bare Metal : ECS Bare Metal Instance.
      // 
      // - High Performance Compute: high-performance computing.
      shared_ptr<vector<string>> instanceCategories_ {};
      // The level of the instance family, used to filter instance types that meet the requirements. This parameter takes effect when `CostOptimization` is enabled. Valid values:
      // 
      // - EntryLevel: entry-level, which refers to shared-resource instances. This level offers lower costs but cannot guarantee stable computing performance. It is suitable for business scenarios with low CPU utilization. For more information, see [Shared-resource instances](https://help.aliyun.com/document_detail/108489.html).
      // 
      // - EnterpriseLevel: enterprise-level. This level provides stable performance and dedicated resources, suitable for business scenarios that require high stability. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // 
      // - CreditEntryLevel: credit entry-level, which refers to burstable instances. This level uses CPU credits to ensure computing performance and is suitable for business scenarios with low CPU utilization and occasional CPU bursts. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      shared_ptr<string> instanceFamilyLevel_ {};
      // The instance families to query. You can specify multiple instance families. N is an integer from 1 to 10.
      shared_ptr<vector<string>> instanceTypeFamilies_ {};
      // In intelligent configuration mode, the maximum hourly price you are willing to pay for a pay-as-you-go or preemptible instance. This is used to filter instance types that meet the requirements.
      // 
      // > This parameter is required when SpotStrategy is set to SpotWithPriceLimit. In other cases, this parameter is optional.
      shared_ptr<float> maxPrice_ {};
      // The maximum number of vCPU cores for the instance type.
      // 
      // > MaximumCpuCoreCount cannot be more than four times the value of MinimumCpuCoreCount.
      shared_ptr<int32_t> maximumCpuCoreCount_ {};
      // The maximum number of GPUs for the instance. The value must be a positive integer.
      shared_ptr<int32_t> maximumGpuAmount_ {};
      // The maximum memory size of the instance. Unit: GiB.
      shared_ptr<float> maximumMemorySize_ {};
      // In intelligent configuration mode, the memory size of the instance type. Unit: GiB. This is used to filter instance types that meet the requirements.
      shared_ptr<float> memory_ {};
      // The minimum baseline vCPU performance (the sum of all vCPUs) for burstable instances of the t5 or t6 family.
      shared_ptr<int32_t> minimumBaselineCredit_ {};
      // The minimum number of vCPU cores for the instance type.
      shared_ptr<int32_t> minimumCpuCoreCount_ {};
      // The minimum number of IPv6 addresses that can be assigned to a single ENI.
      shared_ptr<int32_t> minimumEniIpv6AddressQuantity_ {};
      // The minimum number of private IPv4 addresses to assign to a single elastic network interface (ENI) of an instance.
      shared_ptr<int32_t> minimumEniPrivateIpAddressQuantity_ {};
      // The minimum number of elastic network interfaces (ENIs) that can be attached to an instance.
      shared_ptr<int32_t> minimumEniQuantity_ {};
      // The minimum number of GPUs for the instance. The value must be a positive integer.
      shared_ptr<int32_t> minimumGpuAmount_ {};
      // The minimum initial vCPU credit for burstable instances of the t5 or t6 family.
      shared_ptr<int32_t> minimumInitialCredit_ {};
      // The minimum memory size of the instance. Unit: GiB.
      shared_ptr<float> minimumMemorySize_ {};
      // The processor model of the instance. You can specify multiple processor models. N is an integer from 1 to 10.
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
      // The ID of the automatic snapshot policy to apply to the data disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable performance burst for the system disk. Valid values:
      // 
      // - true: Enables performance burst.
      // 
      // - false: Disables performance burst.
      // 
      // > This parameter is available only when `SystemDisk.Category` is set to `cloud_auto`.
      // 
      // <props="china">
      // 
      // For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // Multiple disk categories for the data disk. When a disk of a higher-priority category is unavailable, Auto Scaling automatically tries the next lower-priority category. Valid values:
      // 
      // - cloud: basic disk. The DeleteWithInstance attribute of a basic disk created with an instance is true.
      // 
      // - cloud_efficiency: ultra disk.
      // 
      // - cloud_ssd: standard SSD.
      // 
      // - cloud_essd: ESSD.
      // 
      // > If you specify this parameter, you cannot specify `DataDisks.Category`.
      shared_ptr<vector<string>> categories_ {};
      // The category of the data disk. Valid values:
      // 
      // - cloud: basic disk.
      // 
      // - cloud_efficiency: ultra disk.
      // 
      // - cloud_ssd: standard SSD.
      // 
      // - cloud_essd: ESSD.
      // 
      // - ephemeral_ssd: local SSD.
      // 
      // - cloud_auto: ESSD AutoPL disk.
      // 
      // You cannot specify this parameter and DataDisk.Categories at the same time. If you do not specify this parameter or DataDisk.Categories, the default value of this parameter is used:
      // 
      // - For I/O optimized instances, the default value is cloud_efficiency.
      // 
      // - For non-I/O optimized instances, the default value is cloud.
      shared_ptr<string> category_ {};
      // Specifies whether to release the data disk when the instance is released. Valid values:
      // 
      // - true: releases the disk when the instance is released.
      // 
      // - false: retains the disk when the instance is released.
      // 
      // This parameter can be set only for separately purchased cloud disks (DataDisks.Category is cloud, cloud_efficiency, cloud_ssd, or cloud_essd). Otherwise, an error occurs.
      // 
      // Default value: true.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the data disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of the data disk. If you do not specify this parameter, the system automatically assigns a mount point when creating the ECS instance, starting from /dev/xvdb and ending at /dev/xvdz.
      shared_ptr<string> device_ {};
      // The name of the data disk. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // Specifies whether to encrypt the data disk. Valid values:
      // 
      // - true: encrypts the disk.
      // 
      // - false: does not encrypt the disk.
      // 
      // Default value: false.
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key for the data disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD that is used as the data disk. Valid values:
      // 
      // - PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
      // 
      // - PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
      // 
      // - PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
      // 
      // - PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
      // 
      // > For information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned IOPS of the data disk.
      // 
      // > IOPS (input/output operations per second) indicates the number of I/O operations that a block storage device can process per second. It represents the read and write capabilities of the device.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the data disk. Unit: GiB. Valid values:
      // 
      // - cloud: 5 to 2000.
      // 
      // - cloud_efficiency: 20 to 32768.
      // 
      // - cloud_essd: 20 to 32768.
      // 
      // - ephemeral_ssd: 5 to 800.
      // 
      // If you specify this parameter, the disk size must be greater than or equal to the snapshot size specified by SnapshotId.
      shared_ptr<int32_t> size_ {};
      // The snapshot to use to create the data disk. If you specify this parameter, DataDisks.Size is ignored. The size of the created disk is the size of the specified snapshot.
      // 
      // If the snapshot was created on or before July 15, 2013, the call is rejected and an InvalidSnapshot.TooOld error is returned.
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
      // The instance type of the ECS instance.
      // 
      // >Notice: 
      // 
      // Must be included in the list of instance types in the scaling configuration.
      shared_ptr<string> instanceType_ {};
      // The ID of the vSwitch.
      // 
      // >Notice: 
      // 
      // Must be included in the list of vSwitches in the scaling group.
      shared_ptr<string> vswitchId_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskName, diskName_);
        DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
        DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
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
        && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->description_ == nullptr && this->diskName_ == nullptr && this->encryptAlgorithm_ == nullptr
        && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr && this->size_ == nullptr; };
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


      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
      inline SystemDisk& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline SystemDisk& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // diskName Field Functions 
      bool hasDiskName() const { return this->diskName_ != nullptr;};
      void deleteDiskName() { this->diskName_ = nullptr;};
      inline string getDiskName() const { DARABONBA_PTR_GET_DEFAULT(diskName_, "") };
      inline SystemDisk& setDiskName(string diskName) { DARABONBA_PTR_SET_VALUE(diskName_, diskName) };


      // encryptAlgorithm Field Functions 
      bool hasEncryptAlgorithm() const { return this->encryptAlgorithm_ != nullptr;};
      void deleteEncryptAlgorithm() { this->encryptAlgorithm_ = nullptr;};
      inline string getEncryptAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptAlgorithm_, "") };
      inline SystemDisk& setEncryptAlgorithm(string encryptAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptAlgorithm_, encryptAlgorithm) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline bool getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
      inline SystemDisk& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // KMSKeyId Field Functions 
      bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
      void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
      inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
      inline SystemDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // provisionedIops Field Functions 
      bool hasProvisionedIops() const { return this->provisionedIops_ != nullptr;};
      void deleteProvisionedIops() { this->provisionedIops_ = nullptr;};
      inline int64_t getProvisionedIops() const { DARABONBA_PTR_GET_DEFAULT(provisionedIops_, 0L) };
      inline SystemDisk& setProvisionedIops(int64_t provisionedIops) { DARABONBA_PTR_SET_VALUE(provisionedIops_, provisionedIops) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
      inline SystemDisk& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    protected:
      // The ID of the automatic snapshot policy to apply to the system disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the performance burst feature for the system disk. Valid values:
      // 
      // - true: enables the feature.
      // 
      // - false: disables the feature.
      // 
      // > You can set this parameter only when `SystemDisk.Category` is set to `cloud_auto`.
      // 
      // <props="china">
      // 
      // For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The category of the system disk. Valid values:
      // 
      // - cloud: basic disk.
      // 
      // - cloud_efficiency: ultra disk.
      // 
      // - cloud_ssd: standard SSD.
      // 
      // - ephemeral_ssd: local SSD.
      // 
      // - cloud_essd: ESSD.
      // 
      // - cloud_auto: ESSD AutoPL disk.
      // 
      // You cannot specify this parameter and `SystemDiskCategories` at the same time. If you do not specify this parameter or `SystemDiskCategories`, the default value of this parameter is used:
      // 
      // - For I/O optimized instances, the default value is cloud_efficiency.
      // 
      // - For non-I/O optimized instances, the default value is cloud.
      shared_ptr<string> category_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // The encryption algorithm for the system disk. Valid values:
      // 
      // - AES-256.
      // 
      // - SM4-128.
      // 
      // Default value: AES-256.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt the system disk. Valid values:
      // 
      // - true: encrypts the disk.
      // 
      // - false: does not encrypt the disk.
      // 
      // Default value: false.
      shared_ptr<bool> encrypted_ {};
      // The ID of the KMS key to use for the system disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD that is used as the system disk. Valid values:
      // 
      // - PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
      // 
      // - PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
      // 
      // - PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
      // 
      // - PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
      // 
      // Default value: PL1.
      shared_ptr<string> performanceLevel_ {};
      // The provisioned IOPS of the system disk.
      // 
      // > IOPS (input/output operations per second) indicates the number of I/O operations that a block storage device can process per second. It represents the read and write capabilities of the device.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the system disk. Unit: GiB. Valid values:
      // 
      // - Basic disk: 20 to 500.
      // 
      // - ESSD:
      // 
      //   - PL0: 1 to 2048.
      // 
      //   - PL1: 20 to 2048.
      // 
      //   - PL2: 461 to 2048.
      // 
      //   - PL3: 1261 to 2048.
      // 
      // - ESSD AutoPL disk: 1 to 2048.
      // 
      // - Other disk categories: 20 to 2048.
      // 
      // The value of this parameter must be greater than or equal to max{1, ImageSize}.
      // 
      // Default value: max{40, ImageSize}.
      shared_ptr<int32_t> size_ {};
    };

    class PrivatePoolOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivatePoolOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MatchCriteria, matchCriteria_);
      };
      friend void from_json(const Darabonba::Json& j, PrivatePoolOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MatchCriteria, matchCriteria_);
      };
      PrivatePoolOptions() = default ;
      PrivatePoolOptions(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions(PrivatePoolOptions &&) = default ;
      PrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivatePoolOptions() = default ;
      PrivatePoolOptions& operator=(const PrivatePoolOptions &) = default ;
      PrivatePoolOptions& operator=(PrivatePoolOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->matchCriteria_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline PrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // matchCriteria Field Functions 
      bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
      void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
      inline string getMatchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
      inline PrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


    protected:
      // The ID of the private pool. This is the ID of the Elastic Assurance or Capacity Reservation service.
      shared_ptr<string> id_ {};
      // The private pool capacity option for instance startup. After an Elastic Assurance or a Capacity Reservation service takes effect, a private pool is generated. You can select a private pool to start an instance. Valid values:
      // 
      // - Open: open mode. The system automatically matches the instance with an open private pool. If no eligible private pool is found, the instance is started using public pool resources. You do not need to set the PrivatePoolOptions.Id parameter in this mode.
      // 
      // - Target: specified mode. The instance is started using the capacity of a specified private pool. If the specified private pool is unavailable, the instance fails to start. You must set the PrivatePoolOptions.Id parameter in this mode.
      // 
      // - None: no private pool is used. The instance is started without using a private pool.
      shared_ptr<string> matchCriteria_ {};
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
      // Specifies whether to use the ecs-user user to log on to the ECS instance. For more information, see [Manage logon usernames of ECS instances](https://help.aliyun.com/document_detail/388447.html). Valid values:
      // 
      // - true: Yes.
      // 
      // - false: No.
      // 
      // Default value: false.
      shared_ptr<bool> loginAsNonRoot_ {};
    };

    virtual bool empty() const override { return this->imageOptions_ == nullptr
        && this->privatePoolOptions_ == nullptr && this->systemDisk_ == nullptr && this->affinity_ == nullptr && this->clientToken_ == nullptr && this->cpu_ == nullptr
        && this->creditSpecification_ == nullptr && this->customPriorities_ == nullptr && this->dataDisks_ == nullptr && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostId_ == nullptr
        && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr && this->hostName_ == nullptr && this->hpcClusterId_ == nullptr && this->httpEndpoint_ == nullptr
        && this->httpTokens_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->instanceDescription_ == nullptr
        && this->instanceName_ == nullptr && this->instancePatternInfos_ == nullptr && this->instanceType_ == nullptr && this->instanceTypeCandidateOptions_ == nullptr && this->instanceTypeOverrides_ == nullptr
        && this->instanceTypes_ == nullptr && this->internetChargeType_ == nullptr && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr
        && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr && this->loadBalancerWeight_ == nullptr && this->memory_ == nullptr && this->networkInterfaces_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->ramRoleName_ == nullptr
        && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourcePoolOptions_ == nullptr && this->scalingConfigurationName_ == nullptr && this->scalingGroupId_ == nullptr
        && this->schedulerOptionsShrink_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->securityOptions_ == nullptr
        && this->spotDuration_ == nullptr && this->spotInterruptionBehavior_ == nullptr && this->spotPriceLimits_ == nullptr && this->spotStrategy_ == nullptr && this->storageSetId_ == nullptr
        && this->storageSetPartitionNumber_ == nullptr && this->systemDiskCategories_ == nullptr && this->tags_ == nullptr && this->tenancy_ == nullptr && this->userData_ == nullptr
        && this->zoneId_ == nullptr; };
    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const CreateScalingConfigurationShrinkRequest::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, CreateScalingConfigurationShrinkRequest::ImageOptions) };
    inline CreateScalingConfigurationShrinkRequest::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, CreateScalingConfigurationShrinkRequest::ImageOptions) };
    inline CreateScalingConfigurationShrinkRequest& setImageOptions(const CreateScalingConfigurationShrinkRequest::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateScalingConfigurationShrinkRequest& setImageOptions(CreateScalingConfigurationShrinkRequest::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const CreateScalingConfigurationShrinkRequest::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, CreateScalingConfigurationShrinkRequest::PrivatePoolOptions) };
    inline CreateScalingConfigurationShrinkRequest::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, CreateScalingConfigurationShrinkRequest::PrivatePoolOptions) };
    inline CreateScalingConfigurationShrinkRequest& setPrivatePoolOptions(const CreateScalingConfigurationShrinkRequest::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateScalingConfigurationShrinkRequest& setPrivatePoolOptions(CreateScalingConfigurationShrinkRequest::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const CreateScalingConfigurationShrinkRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, CreateScalingConfigurationShrinkRequest::SystemDisk) };
    inline CreateScalingConfigurationShrinkRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, CreateScalingConfigurationShrinkRequest::SystemDisk) };
    inline CreateScalingConfigurationShrinkRequest& setSystemDisk(const CreateScalingConfigurationShrinkRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateScalingConfigurationShrinkRequest& setSystemDisk(CreateScalingConfigurationShrinkRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline CreateScalingConfigurationShrinkRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateScalingConfigurationShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline CreateScalingConfigurationShrinkRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // customPriorities Field Functions 
    bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
    void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
    inline const vector<CreateScalingConfigurationShrinkRequest::CustomPriorities> & getCustomPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<CreateScalingConfigurationShrinkRequest::CustomPriorities>) };
    inline vector<CreateScalingConfigurationShrinkRequest::CustomPriorities> getCustomPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<CreateScalingConfigurationShrinkRequest::CustomPriorities>) };
    inline CreateScalingConfigurationShrinkRequest& setCustomPriorities(const vector<CreateScalingConfigurationShrinkRequest::CustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
    inline CreateScalingConfigurationShrinkRequest& setCustomPriorities(vector<CreateScalingConfigurationShrinkRequest::CustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<CreateScalingConfigurationShrinkRequest::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<CreateScalingConfigurationShrinkRequest::DataDisks>) };
    inline vector<CreateScalingConfigurationShrinkRequest::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<CreateScalingConfigurationShrinkRequest::DataDisks>) };
    inline CreateScalingConfigurationShrinkRequest& setDataDisks(const vector<CreateScalingConfigurationShrinkRequest::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateScalingConfigurationShrinkRequest& setDataDisks(vector<CreateScalingConfigurationShrinkRequest::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateScalingConfigurationShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateScalingConfigurationShrinkRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline CreateScalingConfigurationShrinkRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline CreateScalingConfigurationShrinkRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateScalingConfigurationShrinkRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateScalingConfigurationShrinkRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateScalingConfigurationShrinkRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateScalingConfigurationShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePatternInfos Field Functions 
    bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
    void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
    inline const vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos> & getInstancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos>) };
    inline vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos> getInstancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos>) };
    inline CreateScalingConfigurationShrinkRequest& setInstancePatternInfos(const vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
    inline CreateScalingConfigurationShrinkRequest& setInstancePatternInfos(vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateScalingConfigurationShrinkRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeCandidateOptions Field Functions 
    bool hasInstanceTypeCandidateOptions() const { return this->instanceTypeCandidateOptions_ != nullptr;};
    void deleteInstanceTypeCandidateOptions() { this->instanceTypeCandidateOptions_ = nullptr;};
    inline const CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions & getInstanceTypeCandidateOptions() const { DARABONBA_PTR_GET_CONST(instanceTypeCandidateOptions_, CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions) };
    inline CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions getInstanceTypeCandidateOptions() { DARABONBA_PTR_GET(instanceTypeCandidateOptions_, CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions) };
    inline CreateScalingConfigurationShrinkRequest& setInstanceTypeCandidateOptions(const CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions & instanceTypeCandidateOptions) { DARABONBA_PTR_SET_VALUE(instanceTypeCandidateOptions_, instanceTypeCandidateOptions) };
    inline CreateScalingConfigurationShrinkRequest& setInstanceTypeCandidateOptions(CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions && instanceTypeCandidateOptions) { DARABONBA_PTR_SET_RVALUE(instanceTypeCandidateOptions_, instanceTypeCandidateOptions) };


    // instanceTypeOverrides Field Functions 
    bool hasInstanceTypeOverrides() const { return this->instanceTypeOverrides_ != nullptr;};
    void deleteInstanceTypeOverrides() { this->instanceTypeOverrides_ = nullptr;};
    inline const vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides> & getInstanceTypeOverrides() const { DARABONBA_PTR_GET_CONST(instanceTypeOverrides_, vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides>) };
    inline vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides> getInstanceTypeOverrides() { DARABONBA_PTR_GET(instanceTypeOverrides_, vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides>) };
    inline CreateScalingConfigurationShrinkRequest& setInstanceTypeOverrides(const vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides> & instanceTypeOverrides) { DARABONBA_PTR_SET_VALUE(instanceTypeOverrides_, instanceTypeOverrides) };
    inline CreateScalingConfigurationShrinkRequest& setInstanceTypeOverrides(vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides> && instanceTypeOverrides) { DARABONBA_PTR_SET_RVALUE(instanceTypeOverrides_, instanceTypeOverrides) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateScalingConfigurationShrinkRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateScalingConfigurationShrinkRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateScalingConfigurationShrinkRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline CreateScalingConfigurationShrinkRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateScalingConfigurationShrinkRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces> & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces>) };
    inline vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces> getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces>) };
    inline CreateScalingConfigurationShrinkRequest& setNetworkInterfaces(const vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline CreateScalingConfigurationShrinkRequest& setNetworkInterfaces(vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingConfigurationShrinkRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingConfigurationShrinkRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateScalingConfigurationShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateScalingConfigurationShrinkRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateScalingConfigurationShrinkRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingConfigurationShrinkRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const CreateScalingConfigurationShrinkRequest::ResourcePoolOptions & getResourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, CreateScalingConfigurationShrinkRequest::ResourcePoolOptions) };
    inline CreateScalingConfigurationShrinkRequest::ResourcePoolOptions getResourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, CreateScalingConfigurationShrinkRequest::ResourcePoolOptions) };
    inline CreateScalingConfigurationShrinkRequest& setResourcePoolOptions(const CreateScalingConfigurationShrinkRequest::ResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline CreateScalingConfigurationShrinkRequest& setResourcePoolOptions(CreateScalingConfigurationShrinkRequest::ResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string getScalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline CreateScalingConfigurationShrinkRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // schedulerOptionsShrink Field Functions 
    bool hasSchedulerOptionsShrink() const { return this->schedulerOptionsShrink_ != nullptr;};
    void deleteSchedulerOptionsShrink() { this->schedulerOptionsShrink_ = nullptr;};
    inline string getSchedulerOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(schedulerOptionsShrink_, "") };
    inline CreateScalingConfigurationShrinkRequest& setSchedulerOptionsShrink(string schedulerOptionsShrink) { DARABONBA_PTR_SET_VALUE(schedulerOptionsShrink_, schedulerOptionsShrink) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline CreateScalingConfigurationShrinkRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateScalingConfigurationShrinkRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateScalingConfigurationShrinkRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const CreateScalingConfigurationShrinkRequest::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, CreateScalingConfigurationShrinkRequest::SecurityOptions) };
    inline CreateScalingConfigurationShrinkRequest::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, CreateScalingConfigurationShrinkRequest::SecurityOptions) };
    inline CreateScalingConfigurationShrinkRequest& setSecurityOptions(const CreateScalingConfigurationShrinkRequest::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline CreateScalingConfigurationShrinkRequest& setSecurityOptions(CreateScalingConfigurationShrinkRequest::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline CreateScalingConfigurationShrinkRequest& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimits Field Functions 
    bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
    void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
    inline const vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits> & getSpotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits>) };
    inline vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits> getSpotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits>) };
    inline CreateScalingConfigurationShrinkRequest& setSpotPriceLimits(const vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
    inline CreateScalingConfigurationShrinkRequest& setSpotPriceLimits(vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateScalingConfigurationShrinkRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline CreateScalingConfigurationShrinkRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline CreateScalingConfigurationShrinkRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline CreateScalingConfigurationShrinkRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateScalingConfigurationShrinkRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline CreateScalingConfigurationShrinkRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateScalingConfigurationShrinkRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateScalingConfigurationShrinkRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<CreateScalingConfigurationShrinkRequest::ImageOptions> imageOptions_ {};
    shared_ptr<CreateScalingConfigurationShrinkRequest::PrivatePoolOptions> privatePoolOptions_ {};
    shared_ptr<CreateScalingConfigurationShrinkRequest::SystemDisk> systemDisk_ {};
    // Specifies whether to associate the instance with the dedicated host. Valid values:
    // 
    // - default: The instance is not associated with the dedicated host. When you restart an instance that was stopped in economical mode, the instance may be placed on a different dedicated host in the automatic deployment resource pool if the original dedicated host has insufficient resources.
    // 
    // - host: The instance is associated with the dedicated host. When you restart an instance that was stopped in economical mode, the instance is still placed on the original dedicated host. If the original dedicated host has insufficient resources, the instance fails to restart.
    // 
    // Default value: default.
    shared_ptr<string> affinity_ {};
    // Ensures the idempotence of the request. You can use the client to generate a unique parameter value to make sure that the same request is not repeated. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The number of vCPUs. Unit: cores.
    // 
    // You can specify both Cpu and Memory to define a range of instance types. For example, if you set Cpu to 2 and Memory to 16, all instance types with 2 vCPUs and 16 GiB of memory are selected. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and then creates an instance of the instance type that has the lowest price.
    // 
    // > This configuration is effective only when the cost optimization policy is enabled for the scaling group and no instance types are specified in the scaling configuration.
    shared_ptr<int32_t> cpu_ {};
    // The performance mode of the burstable instance. Valid values:
    // 
    // - Standard: standard mode.
    // 
    // - Unlimited: unlimited mode.
    // 
    // For more information, see the Performance modes section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The custom priority for the combination of an ECS instance type and a vSwitch.
    // >Notice: This is effective only when the scaling policy of the scaling group is set to the priority policy.
    // 
    // If an instance cannot be created from a combination of an instance type and a vSwitch with a higher priority, Auto Scaling automatically tries the next combination in the list.
    // 
    // > If you specify custom priorities for only some combinations of instance types and vSwitches, the unspecified combinations have a lower priority than the specified ones. The unspecified combinations are still prioritized based on the order of vSwitches in the scaling group and the order of instance types in the scaling configuration.
    // >
    // > - For example, if the vSwitch order in the scaling group is vsw1, vsw2, the instance type order in the scaling configuration is type1, type2, and the custom priority order is ["vsw2+type2", "vsw1+type2"], the final priority will be: "vsw2+type2" > "vsw1+type2" > "vsw1+type1" > "vsw2+type1".
    shared_ptr<vector<CreateScalingConfigurationShrinkRequest::CustomPriorities>> customPriorities_ {};
    // A collection of data disk information.
    shared_ptr<vector<CreateScalingConfigurationShrinkRequest::DataDisks>> dataDisks_ {};
    // The ID of the dedicated host cluster.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // Specifies whether to create the ECS instance on a dedicated host. If you specify the DedicatedHostId parameter, the SpotStrategy and SpotPriceLimit settings in the request are automatically ignored. This is because dedicated hosts do not support creating preemptible instances.
    // 
    // You can call the DescribeDedicatedHosts operation to query the list of dedicated host IDs.
    shared_ptr<string> dedicatedHostId_ {};
    // The release protection attribute of the instance. This specifies whether you can release the instance through the ECS console or by calling the DeleteInstance API. This prevents accidental release of the instance. Valid values:
    // 
    // - true: enables release protection. You cannot release the instance through the ECS console or by calling the DeleteInstance API.
    // 
    // - false: disables release protection. You can release the instance through the ECS console or by calling the DeleteInstance API.
    // 
    // Default value: false.
    // 
    // > This attribute applies only to pay-as-you-go instances to prevent accidental release of instances scaled out by Auto Scaling. It does not affect normal scale-in activities. Instances with release protection enabled can be released during scale-in activities.
    shared_ptr<bool> deletionProtection_ {};
    // The ID of the deployment set to which the ECS instance belongs.
    shared_ptr<string> deploymentSetId_ {};
    // The hostname of the ECS instance. A period (.) or a hyphen (-) cannot be used as the first or last character of a hostname. Consecutive periods (.) or hyphens (-) are not allowed. The naming conventions for different instance types are as follows:
    // 
    // - For Windows instances, the hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). It cannot contain periods (.) or be all digits.
    // 
    // - For other instance types, such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    shared_ptr<string> hostName_ {};
    // The ID of the High Performance Computing (HPC) cluster to which the ECS instance belongs.
    shared_ptr<string> hpcClusterId_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // 
    // - enabled: enables the channel.
    // 
    // - disabled: disables the channel.
    // 
    // Default value: enabled.
    // 
    // > For information about instance metadata, see [Overview of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpEndpoint_ {};
    // Specifies whether to enforce the security-hardened mode (IMDSv2) when accessing instance metadata. Valid values:
    // 
    // - optional: does not enforce the mode.
    // 
    // - required: enforces the mode. If you set this value, you cannot access instance metadata in normal mode.
    // 
    // Default value: optional.
    // 
    // > For information about instance metadata access modes, see [Instance metadata access modes](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpTokens_ {};
    // The name of the image family. You can set this parameter to obtain the latest available image from the specified image family to create the instance. If you have specified the `ImageId` parameter, you cannot set this parameter.
    shared_ptr<string> imageFamily_ {};
    // The ID of the image file to use for creating instances.
    shared_ptr<string> imageId_ {};
    // The name of the image file. Image names must be unique within a region. If you specify ImageId, ImageName is ignored.
    // 
    // You cannot use ImageName to specify a Marketplace image.
    shared_ptr<string> imageName_ {};
    // The description of the ECS instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> instanceDescription_ {};
    // The name of the ECS instances that are created using the scaling configuration.
    shared_ptr<string> instanceName_ {};
    // A collection of intelligent configuration information used to filter instance types that meet the requirements.
    shared_ptr<vector<CreateScalingConfigurationShrinkRequest::InstancePatternInfos>> instancePatternInfos_ {};
    // The instance type of the ECS instance. For more information, see Instance families.
    shared_ptr<string> instanceType_ {};
    // After you enable the candidate mode, if issues such as insufficient inventory occur, the system supplements the currently selected instance types with similar-sized alternatives or creates vSwitches in candidate zones and adds them to the scaling group.
    shared_ptr<CreateScalingConfigurationShrinkRequest::InstanceTypeCandidateOptions> instanceTypeCandidateOptions_ {};
    // Information about the specified instance types.
    shared_ptr<vector<CreateScalingConfigurationShrinkRequest::InstanceTypeOverrides>> instanceTypeOverrides_ {};
    // Multiple instance types. If you use InstanceTypes, InstanceType is ignored.
    // 
    // If an instance cannot be created from an instance type with a higher priority, Auto Scaling automatically tries the next instance type in the list.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The billing method for network usage. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth. InternetMaxBandwidthOut specifies the fixed bandwidth.
    // 
    // - PayByTraffic: pay-by-data-transfer. InternetMaxBandwidthOut specifies the maximum bandwidth. You are charged for the actual data transfer.
    // 
    // If you do not specify this parameter, the default value is PayByBandwidth for classic network and PayByTraffic for VPC.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // - If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. Default value: 10.
    // 
    // - If the purchased outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `InternetMaxBandwidthOut`. Default value: the value of `InternetMaxBandwidthOut`.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is I/O optimized. Valid values:
    // 
    // none: The instance is not I/O optimized.
    // optimized: The instance is I/O optimized.
    // 
    // For retired instance types, the default value is none. For other instance types, the default value is optimized.
    shared_ptr<string> ioOptimized_ {};
    // The number of randomly generated IPv6 addresses to assign to the ENI.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // The name of the key pair to use to log on to the ECS instance.
    // 
    // - For Windows instances, this parameter is ignored. The default value is empty.
    // 
    // - For Linux instances, password-based logon is disabled.
    shared_ptr<string> keyPairName_ {};
    // The weight of the ECS instance as a backend server of the load balancer. Valid values: 1 to 100.
    // 
    // Default value: 50.
    shared_ptr<int32_t> loadBalancerWeight_ {};
    // The memory size. Unit: GiB.
    // 
    // You can specify both Cpu and Memory to define a range of instance types. For example, if you set Cpu to 2 and Memory to 16, all instance types with 2 vCPUs and 16 GiB of memory are selected. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and then creates an instance of the instance type that has the lowest price.
    // 
    // > This configuration is effective only when the cost optimization policy is enabled for the scaling group and no instance types are specified in the scaling configuration.
    shared_ptr<int32_t> memory_ {};
    // The list of ENIs.
    shared_ptr<vector<CreateScalingConfigurationShrinkRequest::NetworkInterfaces>> networkInterfaces_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the ECS instance. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters can be:
    // 
    // \\`()` ~!@#$%^&*-_+=\\|{}[]:;\\"<>,.?/`
    // 
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If you specify the Password parameter, we recommend that you send the request over HTTPS to prevent password leaks.
    shared_ptr<string> password_ {};
    // Specifies whether to use the password preset in the image. If you use this parameter, make sure that a password is preset in the image. Valid values:
    // 
    // - true: uses the preset password.
    // 
    // - false: does not use the preset password.
    shared_ptr<bool> passwordInherit_ {};
    // The name of the RAM role for the ECS instance. The name is provided and maintained by RAM. You can call the ListRoles operation to query the available RAM roles.
    shared_ptr<string> ramRoleName_ {};
    // The ID of the resource group to which the ECS instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The resource pool policy to use when creating an instance. Note the following when you set this parameter:
    // 
    // - This parameter takes effect only when creating pay-as-you-go instances.
    // 
    // - You cannot set this parameter at the same time as PrivatePoolOptions.MatchCriteria and PrivatePoolOptions.Id.
    shared_ptr<CreateScalingConfigurationShrinkRequest::ResourcePoolOptions> resourcePoolOptions_ {};
    // The name of the scaling configuration. The name must be 2 to 64 characters in length, and can contain digits, underscores (_), hyphens (-), and periods (.). It must start with a digit, a letter, or a Chinese character.
    // 
    // The name of a scaling configuration must be unique within a scaling group in a region. If you do not specify this parameter, the ID of the scaling configuration is used.
    shared_ptr<string> scalingConfigurationName_ {};
    // The ID of the scaling group to which the scaling configuration belongs.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The scheduling options.
    shared_ptr<string> schedulerOptionsShrink_ {};
    // Specifies whether to enable security hardening. Valid values:
    // 
    // - Active: enables security hardening. This setting is valid only for public images.
    // 
    // - Deactive: disables security hardening. This setting is valid for all image types.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which the ECS instance belongs. ECS instances in the same security group can communicate with each other.
    shared_ptr<string> securityGroupId_ {};
    // Adds the ECS instance to multiple security groups. For more information, see the Security groups section in [Limits](https://help.aliyun.com/document_detail/25412.html).
    // 
    // > You cannot specify both SecurityGroupId and SecurityGroupIds.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The security options.
    shared_ptr<CreateScalingConfigurationShrinkRequest::SecurityOptions> securityOptions_ {};
    // The protection period of the preemptible instance. Unit: hours. Valid values:
    // 
    // - 1: The instance is retained for 1 hour after it is created. After 1 hour, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // - 0: The instance is not guaranteed to be retained for 1 hour after it is created. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // > Alibaba Cloud sends a notification to you through an ECS system event 5 minutes before the instance is released. Preemptible instances are billed by the second. We recommend that you select a protection period based on the time required for your task to complete.
    // 
    // Default value: 1.
    shared_ptr<int32_t> spotDuration_ {};
    // The interruption mode of the preemptible instance. Currently, only terminate is supported, which releases the instance by default.
    shared_ptr<string> spotInterruptionBehavior_ {};
    // A collection of billing information for preemptible instances.
    shared_ptr<vector<CreateScalingConfigurationShrinkRequest::SpotPriceLimits>> spotPriceLimits_ {};
    // The preemption policy for pay-as-you-go instances. Valid values:
    // 
    // - NoSpot: The instance is a regular pay-as-you-go instance.
    // 
    // - SpotWithPriceLimit: The instance is a preemptible instance with a user-defined maximum hourly price.
    // 
    // - SpotAsPriceGo: The instance is a preemptible instance for which the price is automatically bid based on the current market price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The ID of the storage set.
    shared_ptr<string> storageSetId_ {};
    // The maximum number of partitions in the storage set. The value must be greater than or equal to 2.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // Multiple disk categories for the system disk. When a disk of a higher-priority category is unavailable, Auto Scaling automatically tries the next lower-priority category to create the system disk. Valid values:
    // 
    // - cloud: basic disk.
    // 
    // - cloud_efficiency: ultra disk.
    // 
    // - cloud_ssd: standard SSD.
    // 
    // - cloud_essd: ESSD.
    // 
    // > If you specify this parameter, you cannot specify `SystemDisk.Category`.
    shared_ptr<vector<string>> systemDiskCategories_ {};
    // The tags of the ECS instance. You can specify up to 20 tags in key-value pairs. The following limits apply to keys and values:
    // 
    // - A key can be up to 64 characters in length and cannot start with aliyun or acs:. It cannot contain `http://` or `https://`. If you use tags, the key cannot be an empty string.
    // 
    // - A value can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain `http://` or `https://`. The value can be an empty string.
    shared_ptr<string> tags_ {};
    // Specifies whether to create the instance on a dedicated host. Valid values:
    // 
    // - default: creates the instance on a non-dedicated host.
    // 
    // - host: creates the instance on a dedicated host. If you do not specify DedicatedHostId, Alibaba Cloud automatically selects a dedicated host for the instance.
    // 
    // Default value: default.
    shared_ptr<string> tenancy_ {};
    // The custom data of the ECS instance. The data must be Base64 encoded. The raw data can be up to 32 KB in size.
    shared_ptr<string> userData_ {};
    // The ID of the zone to which the ECS instance belongs.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
