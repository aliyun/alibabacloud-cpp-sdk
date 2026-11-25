// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUEST_HPP_
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
  class CreateScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequest& obj) { 
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
      DARABONBA_ANY_TO_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_TO_JSON(SecondaryEniVSwitchConstraint, secondaryEniVSwitchConstraint_);
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
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequest& obj) { 
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
      DARABONBA_ANY_FROM_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_FROM_JSON(SecondaryEniVSwitchConstraint, secondaryEniVSwitchConstraint_);
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
    CreateScalingConfigurationRequest() = default ;
    CreateScalingConfigurationRequest(const CreateScalingConfigurationRequest &) = default ;
    CreateScalingConfigurationRequest(CreateScalingConfigurationRequest &&) = default ;
    CreateScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequest() = default ;
    CreateScalingConfigurationRequest& operator=(const CreateScalingConfigurationRequest &) = default ;
    CreateScalingConfigurationRequest& operator=(CreateScalingConfigurationRequest &&) = default ;
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
      // The instance type of the spot instance. This parameter takes effect only when SpotStrategy is set to SpotWithPriceLimit.
      shared_ptr<string> instanceType_ {};
      // The maximum hourly price for the spot instance. This parameter takes effect only when SpotStrategy is set to SpotWithPriceLimit.
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
      // The confidential computing mode. Valid values:
      // -  Enclave: The ECS instance uses Enclave to build a confidential computing environment. For more information, see [Build a confidential computing environment by using Enclave](https://help.aliyun.com/document_detail/203433.html).
      // - TDX: builds a TDX confidential computing environment. For more information, see [Build a TDX confidential computing environment](https://help.aliyun.com/document_detail/479090.html).
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
      // The ID of the private pool, which is the ID of the elasticity assurance or capacity reservation service. You can only specify the ID of a private pool in Target mode, and you cannot specify this parameter together with PrivatePoolTags.
      shared_ptr<vector<string>> privatePoolIds_ {};
      // Filters available Target private pools by tag. Valid values of N: 1 to 20.
      // Note:
      // - When you configure this parameter, the system filters private pools from the Target private pools associated with your account. The filtered private pools must match the tags and meet the scaling group constraints, such as zone and instance type.
      // - Tag matching rule: The private pool must match all specified tags.
      // - You cannot specify this parameter together with PrivatePoolIds.
      shared_ptr<vector<ResourcePoolOptions::PrivatePoolTags>> privatePoolTags_ {};
      // Resource pools include private pools generated after the elasticity assurance or capacity reservation service takes effect, as well as public pools. They are available for selection when the instance starts. Valid values:
      // 
      // - PrivatePoolFirst: private pools take precedence. When you select this policy, if ResourcePoolOptions.PrivatePoolIds is specified or the PrivatePoolTags condition is met, the corresponding private pool is preferentially used. If no private pool is specified or the specified private pool has insufficient capacity, the system automatically matches an open private pool. If no eligible private pool is available, the public pool is used to create the instance.
      // 
      // - PrivatePoolOnly: only private pools are used. When you select this policy, you must specify ResourcePoolOptions.PrivatePoolIds. If the specified private pool has insufficient capacity, the instance fails to start.
      // 
      // - PublicPoolFirst: public pool resources take precedence. The public pool is preferentially used to create the instance. When public pool resources are insufficient, private pool resources are used as a supplement. The system preferentially and automatically matches an open private pool. If no eligible private pool is available, the specified ResourcePoolOptions.PrivatePoolIds or a Target private pool that meets the PrivatePoolTags condition is used. (This policy is in invitational preview and is not supported yet.)
      // 
      // - None: no resource pool policy is used.
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
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterfaces& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_FROM_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
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
        && this->ipv6AddressCount_ == nullptr && this->networkInterfaceTrafficMode_ == nullptr && this->secondaryPrivateIpAddressCount_ == nullptr && this->securityGroupIds_ == nullptr && this->vSwitchIds_ == nullptr; };
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


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline NetworkInterfaces& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline NetworkInterfaces& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    protected:
      // The elastic network interfaces (ENIs) type. When you use this parameter, you must use the NetworkInterfaces Settings for the primary network interface controller (NIC), and you cannot set the SecurityGroupId or SecurityGroupIds parameter. Valid values:
      // 
      // - Primary: primary elastic network interface (ENI).
      // 
      // - Secondary: secondary elastic network interface (ENI).
      // 
      // Default value: Secondary.
      shared_ptr<string> instanceType_ {};
      // The number of randomly generated IPv6 addresses for the primary ENI.
      // Take note of the following items:
      // 
      // - This parameter takes effect only when NetworkInterface.InstanceType is set to Primary. If NetworkInterface.InstanceType is set to Secondary or left empty, you cannot configure this parameter.
      // 
      // - After you configure this parameter, you cannot configure Ipv6AddressCount.
      shared_ptr<int32_t> ipv6AddressCount_ {};
      // The communication pattern of the network interface controller (NIC). Valid values of the parameter:
      // 
      // - Standard: uses the TCP communication pattern.
      // - HighPerformance: enables the Elastic RDMA Interface (ERI) and uses the RDMA communication pattern.
      // 
      // Default value: Standard.
      // 
      // > The number of elastic network interfaces (ENIs) in RDMA pattern cannot exceed the limit of the instance family. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The number of secondary private IPv4 addresses to be assigned to the ENI. Valid values: 1 to 49.
      // 
      // - The value cannot exceed the limit on the number of IP addresses for the instance type. For more information, see [Instance families](https://www.alibabacloud.com/help/en/ecs/user-guide/overview-of-instance-families).
      // 
      // - NetworkInterface.N.SecondaryPrivateIpAddressCount specifies the number of secondary private IPv4 addresses to be assigned to the ENI, excluding the primary private IP address of the ENI. The system randomly assigns these addresses from the available CIDR block of the vSwitch (NetworkInterface.N.VSwitchId) to which the ENI belongs.
      shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
      // The IDs of one or more security groups to which the elastic network interfaces (ENIs) belong.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The ID of the vSwitch to which the elastic network interfaces (ENIs) belong. N indicates the Settings for multiple vSwitches. Valid values of N: 1 to 10.
      // 
      // Take note of the following items:
      // - If InstanceType is set to Primary, you cannot set this parameter. The default value is the vSwitch to which the instance belongs.
      // - If InstanceType is set to Secondary or left empty, this parameter is optional.
      // - The system selects a vSwitch that is in the same zone as the primary network interface controller (NIC) and has the most active IP addresses.
      shared_ptr<vector<string>> vSwitchIds_ {};
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
      // When you need the scaling group to scale based on the capacity of the instance type, specify both this parameter and WeightedCapacity.
      // 
      // This parameter specifies the instance type and overrides the instance type in the launch template. You can specify N instance types to extend the launch template to support N instance types. Valid values of N: 1 to 20.
      // 
      // > This parameter takes effect only when LaunchTemplateId is specified.
      // 
      // Valid values of InstanceType: available ECS instance types.
      shared_ptr<string> instanceType_ {};
      // When you need to specify the capacity of the instance type in the scaling configuration, specify this parameter after you specify InstanceTypeOverrides.InstanceType.
      // 
      // This parameter specifies the weight of the instance type, which indicates the capacity that a single instance of the instance type provides in the scaling group. A greater weight indicates that fewer instances of this instance type are required to meet the expected capacity.
      // 
      // Because instance types have different performance metrics such as the number of vCPUs and memory size, you can configure different weights for different instance types based on your business requirements.
      // 
      // Example:
      // 
      // - Current capacity: 0.
      // - Expected capacity: 6.
      // - Capacity of the ecs.c5.xlarge instance type: 4.
      // 
      // To meet the expected capacity, the scaling group scales out by adding two ecs.c5.xlarge instances.
      // 
      // > During scale-out, the capacity of the scaling group cannot exceed the sum of the maximum capacity (MaxSize) and the maximum weight of the instance type.
      // 
      // Valid values of WeightedCapacity: 1 to 500.
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
      // Specifies the CIDR blocks of the optional vSwitches when you add vSwitches in other zones.
      shared_ptr<vector<string>> allowCidrBlocks_ {};
      // Specifies whether to allow supplementing vSwitches in other zones.
      // > The instance types remain unchanged, and only new zones are used as candidates. If the scaling group cannot scale out in all selected zones due to issues such as insufficient stock, the system automatically adds vSwitches in new zones to the scaling group based on this configuration.
      // > For example, if the scaling group is configured with the cn-hangzhou-h and cn-hangzhou-g zones, and scale-out fails in both zones, Auto Scaling may create a vSwitch in the cn-hangzhou-k zone and add it to the scaling group based on real-time stock availability.
      shared_ptr<bool> allowCrossAz_ {};
      // Specifies whether to allow supplementing instance types of other generations.
      // 
      // - For example, if the current instance type is ecs.c7.large, instance types such as ecs.c6.large and ecs.c8.large can be used as candidates after this feature is enabled.
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
      // - X86: x86 computing.
      // - Heterogeneous: heterogeneous computing, such as GPU or FPGA.
      // - BareMental: ECS bare metal server.
      // - Arm: Arm computing.
      // 
      // Default value: all architecture types.
      shared_ptr<vector<string>> architectures_ {};
      // Specifies whether the instance type is a burstable instance type. Valid values:
      // 
      // - Exclude: does not include burstable instance types.
      // - Include: includes burstable instance types.
      // - Required: includes only burstable instance types.
      // 
      // Default value: Include.
      shared_ptr<string> burstablePerformance_ {};
      // The number of vCPUs of the instance type in intelligent configuration mode. This parameter is used to filter instance types that meet your requirements. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // 
      // Take note of the following items:
      // 
      // - The InstancePatternInfos parameter is applicable only when the network type of the scaling group is VPC.
      // 
      // - You must configure both InstancePatternInfos.Cores and InstancePatternInfos.Memory when you use the InstancePatternInfos parameter.
      // 
      // - If you have already specified instance types by using the InstanceType or InstanceTypes parameter, Auto Scaling preferentially uses the specified instance types for scale-out. If the specified instance types are out of stock, Auto Scaling preferentially uses the instance type that has the lowest price among the instance types that meet the requirements specified by the InstancePatternInfos parameter.
      shared_ptr<int32_t> cores_ {};
      // The CPU architecture of the instance. Valid values:
      // 
      // >N indicates that you can specify multiple CPU architectures. Valid values of N: 1 to 2.
      // 
      // - X86.
      // - ARM.
      shared_ptr<vector<string>> cpuArchitectures_ {};
      // The instance types to be excluded. You can use a wildcard (*) to exclude a single instance type or an entire instance family. Examples:
      // 
      // - ecs.c6.large: excludes the ecs.c6.large instance type.
      // - ecs.c6.*: excludes all instance types in the c6 instance family.
      shared_ptr<vector<string>> excludedInstanceTypes_ {};
      // The GPU type.
      shared_ptr<vector<string>> gpuSpecs_ {};
      // The instance categorization. Valid values:
      // 
      // >N indicates the Settings for multiple instance categories. Valid values of N: 1 to 10.
      // 
      // - General-purpose: general-purpose.
      // - Compute-optimized: compute-optimized.
      // - Memory-optimized: memory-optimized.
      // - Big data: big data.
      // - Local SSDs: local SSD.
      // - High Clock Speed: high frequency.
      // - Enhanced: enhanced.
      // - Shared: shared.
      // - Compute-optimized with GPU: GPU computing.
      // - Visual Compute-optimized: visual compute-optimized.
      // - Heterogeneous Service: heterogeneous service.
      // - Compute-optimized with FPGA: FPGA-accelerated compute-optimized.
      // - Compute-optimized with NPU: NPU-accelerated compute-optimized.
      // - ECS Bare Metal: ECS Bare Metal Instance.
      // - High Performance Compute: high-performance computing (HPC).
      shared_ptr<vector<string>> instanceCategories_ {};
      // The level of the instance family. This parameter is used to filter instance types that meet your requirements and takes effect when `CostOptimization` is enabled. Valid values:
      // 
      // - EntryLevel: shared instance types. These instance types are more cost-effective but cannot ensure consistent computing performance. They are suitable for scenarios where the CPU utilization is typically low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
      // - EnterpriseLevel: enterprise-level instance types. These instance types provide consistent performance and dedicated resources. They are suitable for scenarios that require high stability. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // - CreditEntryLevel: credit-based entry-level instance types, which are burstable instances. These instance types use CPU credits to ensure computing performance and are suitable for scenarios where the CPU utilization is typically low but occasionally bursts. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      shared_ptr<string> instanceFamilyLevel_ {};
      // The instance families to be queried. N indicates that you can specify multiple instance families. Valid values of N: 1 to 10.
      shared_ptr<vector<string>> instanceTypeFamilies_ {};
      // The maximum acceptable hourly price for pay-as-you-go or spot instances in intelligent configuration mode. This parameter is used to filter instance types that meet your requirements.
      // 
      // > This parameter is required when SpotStrategy is set to SpotWithPriceLimit. In other cases, this parameter is optional.
      shared_ptr<float> maxPrice_ {};
      // The maximum number of vCPUs of the instance type.
      // 
      // > The value of MaximumCpuCoreCount cannot exceed four times the value of MinimumCpuCoreCount.
      shared_ptr<int32_t> maximumCpuCoreCount_ {};
      // The maximum number of GPUs for the instance. Valid values: positive integers.
      shared_ptr<int32_t> maximumGpuAmount_ {};
      // The maximum memory size of the instance. Unit: GiB.
      shared_ptr<float> maximumMemorySize_ {};
      // The memory size of the instance type in intelligent configuration mode. Unit: GiB. This parameter is used to filter instance types that meet your requirements.
      shared_ptr<float> memory_ {};
      // The minimum baseline vCPU computing performance (the sum of all vCPUs) for t5 and t6 burstable instances.
      shared_ptr<int32_t> minimumBaselineCredit_ {};
      // The minimum number of vCPUs of the instance type.
      shared_ptr<int32_t> minimumCpuCoreCount_ {};
      // The minimum upper limit on the number of IPv6 addresses per elastic network interfaces (ENIs) or network interface controller (NIC) for the instance.
      shared_ptr<int32_t> minimumEniIpv6AddressQuantity_ {};
      // The minimum upper limit on the number of IPv4 addresses per elastic network interfaces (ENIs) or network interface controller (NIC) for the instance.
      shared_ptr<int32_t> minimumEniPrivateIpAddressQuantity_ {};
      // The minimum upper limit on the number of network interface controller (NIC) devices that can be mounted to the instance.
      shared_ptr<int32_t> minimumEniQuantity_ {};
      // The minimum number of GPUs for the instance. Valid values: positive integers.
      shared_ptr<int32_t> minimumGpuAmount_ {};
      // The minimum initial vCPU credit value for t5 and t6 burstable instances.
      shared_ptr<int32_t> minimumInitialCredit_ {};
      // The minimum memory size of the instance. Unit: GiB.
      shared_ptr<float> minimumMemorySize_ {};
      // The physical processor model of the instance. N indicates that you can specify multiple processor models. Valid values of N: 1 to 10.
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
      // The ID of the automatic snapshot policy applied to the data cloud disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the burstable performance feature for the data cloud disk. Valid values:
      // 
      // - true: enables the feature.
      // - false: disables the feature. 
      // > You can set this parameter only when `SystemDisk.Category` is set to `cloud_auto`.
      // 
      // <props="china">For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The multiple disk types of the data cloud disk. If the disk type with a higher priority is unavailable, Auto Scaling automatically tries the disk type with the next highest priority to create the data cloud disk. Valid values:
      // - cloud: basic cloud disk. The DeleteWithInstance property of a basic cloud disk created together with the instance is set to true.
      // - cloud_efficiency: ultra cloud disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: ESSD.
      // - ephemeral_ssd: local SSD.
      // - cloud_auto: ESSD AutoPL.
      // - cloud_regional_disk_auto: regional ESSD.
      // 
      // > If you specify this parameter, you cannot specify `DataDisks.Category` at the same time.
      shared_ptr<vector<string>> categories_ {};
      // The category of the data cloud disk. Valid values:
      // 
      // - cloud: basic cloud disk. The DeleteWithInstance attribute of a basic cloud disk created together with the instance is set to true.
      // - cloud_efficiency: ultra cloud disk.
      // - cloud_ssd: standard SSD cloud disk.
      // - cloud_essd: ESSD.
      // - ephemeral_ssd: local SSD.
      // - cloud_auto: ESSD AutoPL.
      // - cloud_regional_disk_auto: regional ESSD.
      // 
      // You cannot specify this parameter together with DataDisk.Categories. If neither this parameter nor DataDisk.Categories is specified, the default value is used:
      // - For I/O optimized instances, the default value is cloud_efficiency.
      // - For non-I/O optimized instances, the default value is cloud.
      shared_ptr<string> category_ {};
      // Specifies whether to release the data cloud disk when the instance is released. Valid values:
      // 
      // - true: releases the data cloud disk when the instance is released.
      // - false: retains the data cloud disk when the instance is released.
      // 
      // You can set this parameter only for independent cloud disks (when DataDisks.Category is set to cloud, cloud_efficiency, cloud_ssd, or cloud_essd). Otherwise, an error is returned.
      // 
      // Default value: true.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the data cloud disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of the data cloud disk. If you do not specify this parameter, the system automatically allocates a mount point by default during automatic creation of the ECS instance. The mount point starts from /dev/xvdb and ends at /dev/xvdz.
      shared_ptr<string> device_ {};
      // The name of the data cloud disk. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.
      shared_ptr<string> diskName_ {};
      // Specifies whether to encrypt the data cloud disk. Valid values:
      // 
      // - true: encrypts the data cloud disk.
      // - false: does not encrypt the data cloud disk.
      // 
      // Default value: false.
      shared_ptr<string> encrypted_ {};
      // The ID of the Key Management Service (KMS) key used by the data cloud disk.
      shared_ptr<string> KMSKeyId_ {};
      // The settings of the performance level for the data cloud disk when it is an ESSD. Valid values:
      // 
      // - PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
      // - PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
      // 
      // > For more information about how to select the performance level of an ESSD, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned IOPS (Input/Output Operations Per Second) performance metrics of the data cloud disk.
      // 
      // > IOPS indicates the number of I/O operations that can be processed per second. It measures the read and write capabilities of block storage. Unit: operations per second.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the data cloud disk. Unit: GiB. Valid values:
      // 
      // - cloud: 5 to 2000.
      // - cloud_efficiency: 20 to 32768.
      // - cloud_essd: 20 to 32768.
      // - ephemeral_ssd: 5 to 800.
      // 
      // If you specify this parameter, the disk size must be greater than or equal to the snapshot size specified by SnapshotId.
      shared_ptr<int32_t> size_ {};
      // The snapshot used to create the data cloud disk. If this parameter is specified, DataDisks.Size is ignored, and the actual size of the created disk is the size of the specified snapshot.
      // 
      // If the snapshot was created on or before July 15, 2013, the call is rejected and the InvalidSnapshot.TooOld error code is returned.
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
      // >Notice: The instance type must be included in the instance type list of the scaling configuration.
      shared_ptr<string> instanceType_ {};
      // The ID of the vSwitch.
      // 
      // >Notice: The vSwitch must be included in the vSwitch list of the scaling group.
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
      // The ID of the automatic snapshot policy applied to the system cloud disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the burst (performance burst) feature for the system cloud disk. Valid values:
      // 
      // - true: enables the feature.
      // - false: disables the feature.
      // > This parameter is supported only when `SystemDisk.Category` is set to `cloud_auto`.
      // 
      // <props="china">For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The category of the system cloud disk. Valid values:
      // 
      // - cloud: basic cloud disk.
      // 
      // - cloud_efficiency: ultra cloud disk.
      // 
      // - cloud_ssd: standard SSD cloud disk.
      // 
      // - ephemeral_ssd: local SSD.
      // 
      // - cloud_essd: ESSD.
      // 
      // - cloud_auto: ESSD AutoPL.
      // 
      // You cannot specify this parameter together with `SystemDiskCategories`. If neither this parameter nor `SystemDiskCategories` is specified, the default value is used:
      // 
      // - For I/O optimized instances, the default value is cloud_efficiency.
      // - For non-I/O optimized instances, the default value is cloud.
      // 
      // This parameter specifies only one system cloud disk type. If you want the system to automatically try other types when the preferred disk type is unavailable, use `SystemDiskCategories` and configure multiple disk types in order of priority.
      shared_ptr<string> category_ {};
      // The description of the system cloud disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system cloud disk. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.
      shared_ptr<string> diskName_ {};
      // The encryption algorithm used for the system cloud disk. Valid values:
      // 
      // - AES-256.
      // - SM4-128.
      // 
      // Default value: AES-256.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt the system cloud disk. Valid values:
      // 
      // - true: encrypts the system cloud disk.
      // - false: does not encrypt the system cloud disk.
      // 
      // Default value: false.
      shared_ptr<bool> encrypted_ {};
      // The ID of the KMS key used for the system cloud disk.
      shared_ptr<string> KMSKeyId_ {};
      // The settings of the performance level for the system cloud disk when it is an ESSD. Valid values:
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
      // The provisioned IOPS (Input/Output Operations Per Second) performance metrics for the system cloud disk.
      // 
      // > IOPS refers to the number of I/O operations that can be processed per second. It indicates the read and write processing capability of block storage. Unit: operations per second.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the system cloud disk. Unit: GiB. Valid values:
      // 
      // - Basic cloud disk: 20 to 500.
      // - ESSD:
      //   - PL0: 1 to 2048.
      //   - PL1: 20 to 2048.
      //   - PL2: 461 to 2048.
      //   - PL3: 1261 to 2048.
      // - ESSD AutoPL: 1 to 2048.
      // - Other cloud disk types: 20 to 2048.
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
      // The ID of the private pool. It is the ID of the elasticity assurance or capacity reservation.
      shared_ptr<string> id_ {};
      // The private pool options for instance startup. After an elasticity assurance or a capacity reservation takes effect, a private pool is generated for you to select when you start instances. Valid values:
      // 
      // - Open: open mode. The system automatically matches an open private pool. If no matching private pool is available, the system uses resources from the public pool. In this mode, you do not need to specify the PrivatePoolOptions.Id parameter.
      // 
      // - Target: specified mode. The system uses the specified private pool to start the instance. If the specified private pool is unavailable, the instance fails to start. In this mode, you must specify the private pool ID by using the PrivatePoolOptions.Id parameter.
      // 
      // - None: no private pool. The system does not use private pools to start the instance.
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
      // Specifies whether to log on to the ECS instance as the ecs-user user. For more information, see [Manage the logon username of an ECS instance](https://help.aliyun.com/document_detail/388447.html). Valid values:
      // 
      // - true: yes.
      // 
      // - false: no.
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
        && this->schedulerOptions_ == nullptr && this->secondaryEniVSwitchConstraint_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr
        && this->securityOptions_ == nullptr && this->spotDuration_ == nullptr && this->spotInterruptionBehavior_ == nullptr && this->spotPriceLimits_ == nullptr && this->spotStrategy_ == nullptr
        && this->storageSetId_ == nullptr && this->storageSetPartitionNumber_ == nullptr && this->systemDiskCategories_ == nullptr && this->tags_ == nullptr && this->tenancy_ == nullptr
        && this->userData_ == nullptr && this->zoneId_ == nullptr; };
    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequest::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, CreateScalingConfigurationRequest::ImageOptions) };
    inline CreateScalingConfigurationRequest::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, CreateScalingConfigurationRequest::ImageOptions) };
    inline CreateScalingConfigurationRequest& setImageOptions(const CreateScalingConfigurationRequest::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateScalingConfigurationRequest& setImageOptions(CreateScalingConfigurationRequest::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequest::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, CreateScalingConfigurationRequest::PrivatePoolOptions) };
    inline CreateScalingConfigurationRequest::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, CreateScalingConfigurationRequest::PrivatePoolOptions) };
    inline CreateScalingConfigurationRequest& setPrivatePoolOptions(const CreateScalingConfigurationRequest::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline CreateScalingConfigurationRequest& setPrivatePoolOptions(CreateScalingConfigurationRequest::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const CreateScalingConfigurationRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, CreateScalingConfigurationRequest::SystemDisk) };
    inline CreateScalingConfigurationRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, CreateScalingConfigurationRequest::SystemDisk) };
    inline CreateScalingConfigurationRequest& setSystemDisk(const CreateScalingConfigurationRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateScalingConfigurationRequest& setSystemDisk(CreateScalingConfigurationRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline CreateScalingConfigurationRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateScalingConfigurationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline CreateScalingConfigurationRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline CreateScalingConfigurationRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // customPriorities Field Functions 
    bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
    void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequest::CustomPriorities> & getCustomPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<CreateScalingConfigurationRequest::CustomPriorities>) };
    inline vector<CreateScalingConfigurationRequest::CustomPriorities> getCustomPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<CreateScalingConfigurationRequest::CustomPriorities>) };
    inline CreateScalingConfigurationRequest& setCustomPriorities(const vector<CreateScalingConfigurationRequest::CustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
    inline CreateScalingConfigurationRequest& setCustomPriorities(vector<CreateScalingConfigurationRequest::CustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequest::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<CreateScalingConfigurationRequest::DataDisks>) };
    inline vector<CreateScalingConfigurationRequest::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<CreateScalingConfigurationRequest::DataDisks>) };
    inline CreateScalingConfigurationRequest& setDataDisks(const vector<CreateScalingConfigurationRequest::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline CreateScalingConfigurationRequest& setDataDisks(vector<CreateScalingConfigurationRequest::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline CreateScalingConfigurationRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline CreateScalingConfigurationRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateScalingConfigurationRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateScalingConfigurationRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateScalingConfigurationRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline CreateScalingConfigurationRequest& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline CreateScalingConfigurationRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline CreateScalingConfigurationRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline CreateScalingConfigurationRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateScalingConfigurationRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline CreateScalingConfigurationRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline CreateScalingConfigurationRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateScalingConfigurationRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePatternInfos Field Functions 
    bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
    void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequest::InstancePatternInfos> & getInstancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<CreateScalingConfigurationRequest::InstancePatternInfos>) };
    inline vector<CreateScalingConfigurationRequest::InstancePatternInfos> getInstancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<CreateScalingConfigurationRequest::InstancePatternInfos>) };
    inline CreateScalingConfigurationRequest& setInstancePatternInfos(const vector<CreateScalingConfigurationRequest::InstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
    inline CreateScalingConfigurationRequest& setInstancePatternInfos(vector<CreateScalingConfigurationRequest::InstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateScalingConfigurationRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeCandidateOptions Field Functions 
    bool hasInstanceTypeCandidateOptions() const { return this->instanceTypeCandidateOptions_ != nullptr;};
    void deleteInstanceTypeCandidateOptions() { this->instanceTypeCandidateOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequest::InstanceTypeCandidateOptions & getInstanceTypeCandidateOptions() const { DARABONBA_PTR_GET_CONST(instanceTypeCandidateOptions_, CreateScalingConfigurationRequest::InstanceTypeCandidateOptions) };
    inline CreateScalingConfigurationRequest::InstanceTypeCandidateOptions getInstanceTypeCandidateOptions() { DARABONBA_PTR_GET(instanceTypeCandidateOptions_, CreateScalingConfigurationRequest::InstanceTypeCandidateOptions) };
    inline CreateScalingConfigurationRequest& setInstanceTypeCandidateOptions(const CreateScalingConfigurationRequest::InstanceTypeCandidateOptions & instanceTypeCandidateOptions) { DARABONBA_PTR_SET_VALUE(instanceTypeCandidateOptions_, instanceTypeCandidateOptions) };
    inline CreateScalingConfigurationRequest& setInstanceTypeCandidateOptions(CreateScalingConfigurationRequest::InstanceTypeCandidateOptions && instanceTypeCandidateOptions) { DARABONBA_PTR_SET_RVALUE(instanceTypeCandidateOptions_, instanceTypeCandidateOptions) };


    // instanceTypeOverrides Field Functions 
    bool hasInstanceTypeOverrides() const { return this->instanceTypeOverrides_ != nullptr;};
    void deleteInstanceTypeOverrides() { this->instanceTypeOverrides_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequest::InstanceTypeOverrides> & getInstanceTypeOverrides() const { DARABONBA_PTR_GET_CONST(instanceTypeOverrides_, vector<CreateScalingConfigurationRequest::InstanceTypeOverrides>) };
    inline vector<CreateScalingConfigurationRequest::InstanceTypeOverrides> getInstanceTypeOverrides() { DARABONBA_PTR_GET(instanceTypeOverrides_, vector<CreateScalingConfigurationRequest::InstanceTypeOverrides>) };
    inline CreateScalingConfigurationRequest& setInstanceTypeOverrides(const vector<CreateScalingConfigurationRequest::InstanceTypeOverrides> & instanceTypeOverrides) { DARABONBA_PTR_SET_VALUE(instanceTypeOverrides_, instanceTypeOverrides) };
    inline CreateScalingConfigurationRequest& setInstanceTypeOverrides(vector<CreateScalingConfigurationRequest::InstanceTypeOverrides> && instanceTypeOverrides) { DARABONBA_PTR_SET_RVALUE(instanceTypeOverrides_, instanceTypeOverrides) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline CreateScalingConfigurationRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline CreateScalingConfigurationRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateScalingConfigurationRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline CreateScalingConfigurationRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateScalingConfigurationRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline CreateScalingConfigurationRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateScalingConfigurationRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateScalingConfigurationRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline CreateScalingConfigurationRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline CreateScalingConfigurationRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequest::NetworkInterfaces> & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<CreateScalingConfigurationRequest::NetworkInterfaces>) };
    inline vector<CreateScalingConfigurationRequest::NetworkInterfaces> getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<CreateScalingConfigurationRequest::NetworkInterfaces>) };
    inline CreateScalingConfigurationRequest& setNetworkInterfaces(const vector<CreateScalingConfigurationRequest::NetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline CreateScalingConfigurationRequest& setNetworkInterfaces(vector<CreateScalingConfigurationRequest::NetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateScalingConfigurationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateScalingConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateScalingConfigurationRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateScalingConfigurationRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateScalingConfigurationRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateScalingConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateScalingConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequest::ResourcePoolOptions & getResourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, CreateScalingConfigurationRequest::ResourcePoolOptions) };
    inline CreateScalingConfigurationRequest::ResourcePoolOptions getResourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, CreateScalingConfigurationRequest::ResourcePoolOptions) };
    inline CreateScalingConfigurationRequest& setResourcePoolOptions(const CreateScalingConfigurationRequest::ResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline CreateScalingConfigurationRequest& setResourcePoolOptions(CreateScalingConfigurationRequest::ResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string getScalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline CreateScalingConfigurationRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string getScalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline CreateScalingConfigurationRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline     const Darabonba::Json & getSchedulerOptions() const { DARABONBA_GET(schedulerOptions_) };
    Darabonba::Json & getSchedulerOptions() { DARABONBA_GET(schedulerOptions_) };
    inline CreateScalingConfigurationRequest& setSchedulerOptions(const Darabonba::Json & schedulerOptions) { DARABONBA_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline CreateScalingConfigurationRequest& setSchedulerOptions(Darabonba::Json && schedulerOptions) { DARABONBA_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // secondaryEniVSwitchConstraint Field Functions 
    bool hasSecondaryEniVSwitchConstraint() const { return this->secondaryEniVSwitchConstraint_ != nullptr;};
    void deleteSecondaryEniVSwitchConstraint() { this->secondaryEniVSwitchConstraint_ = nullptr;};
    inline string getSecondaryEniVSwitchConstraint() const { DARABONBA_PTR_GET_DEFAULT(secondaryEniVSwitchConstraint_, "") };
    inline CreateScalingConfigurationRequest& setSecondaryEniVSwitchConstraint(string secondaryEniVSwitchConstraint) { DARABONBA_PTR_SET_VALUE(secondaryEniVSwitchConstraint_, secondaryEniVSwitchConstraint) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline CreateScalingConfigurationRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateScalingConfigurationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateScalingConfigurationRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateScalingConfigurationRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const CreateScalingConfigurationRequest::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, CreateScalingConfigurationRequest::SecurityOptions) };
    inline CreateScalingConfigurationRequest::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, CreateScalingConfigurationRequest::SecurityOptions) };
    inline CreateScalingConfigurationRequest& setSecurityOptions(const CreateScalingConfigurationRequest::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline CreateScalingConfigurationRequest& setSecurityOptions(CreateScalingConfigurationRequest::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline CreateScalingConfigurationRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline CreateScalingConfigurationRequest& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimits Field Functions 
    bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
    void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
    inline const vector<CreateScalingConfigurationRequest::SpotPriceLimits> & getSpotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<CreateScalingConfigurationRequest::SpotPriceLimits>) };
    inline vector<CreateScalingConfigurationRequest::SpotPriceLimits> getSpotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<CreateScalingConfigurationRequest::SpotPriceLimits>) };
    inline CreateScalingConfigurationRequest& setSpotPriceLimits(const vector<CreateScalingConfigurationRequest::SpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
    inline CreateScalingConfigurationRequest& setSpotPriceLimits(vector<CreateScalingConfigurationRequest::SpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateScalingConfigurationRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline CreateScalingConfigurationRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline CreateScalingConfigurationRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline CreateScalingConfigurationRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline CreateScalingConfigurationRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline CreateScalingConfigurationRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline CreateScalingConfigurationRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateScalingConfigurationRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateScalingConfigurationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<CreateScalingConfigurationRequest::ImageOptions> imageOptions_ {};
    shared_ptr<CreateScalingConfigurationRequest::PrivatePoolOptions> privatePoolOptions_ {};
    shared_ptr<CreateScalingConfigurationRequest::SystemDisk> systemDisk_ {};
    // Specifies whether to associate the instance on a dedicated host with the dedicated host. Valid values:
    // 
    // - default: The instance is not associated with the dedicated host. If an instance with the economical mode enabled is stopped and then started, and the resources of the original dedicated host are insufficient, the instance is automatically deployed to another dedicated host in the automatic deployment resource pool.
    // 
    // - host: The instance is associated with the dedicated host. If an instance with the economical mode enabled is stopped and then started, it remains on the original dedicated host. If the resources of the original dedicated host are insufficient, the instance fails to start.
    // 
    // Default value: default.
    shared_ptr<string> affinity_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The number of vCPUs. Unit: cores.
    // 
    // You can specify both Cpu and Memory to define the range of instance types. For example, if you set Cpu to 2 and Memory to 16, all instance types with 2 vCPUs and 16 GiB of memory are matched. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and creates instances with the lowest price.
    // > This configuration takes effect only when the scaling mode is set to cost optimization and no instance type is specified in the scaling configuration.
    shared_ptr<int32_t> cpu_ {};
    // Specifies the running pattern of the burstable instance. Valid values:
    // 
    // - Standard: standard pattern.
    // 
    // - Unlimited: unlimited pattern.
    // 
    // For more information, see the performance schema section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The custom priority of the ECS instance type and vSwitch combination.
    // >Notice: This parameter takes effect only when the scaling policy of the scaling group is set to the priority-based policy.
    // 
    // If an instance cannot be created based on the instance type and vSwitch combination with a higher priority, Auto Scaling automatically selects the combination with the next highest priority to create the instance.
    // 
    // > If you specify custom priorities for only some instance type and vSwitch combinations, the unspecified combinations have lower priorities than the specified ones. The priorities of the unspecified combinations are determined based on the vSwitch sequence in the scaling group and the instance type sequence in the scaling configuration.
    // > - Example: If the vSwitch sequence in the scaling group is vsw1 and vsw2, the instance type sequence in the scaling configuration is type1 and type2, and the custom priority sequence is ["vsw2+type2", "vsw1+type2"], the final priority sequence is: "vsw2+type2" > "vsw1+type2" > "vsw1+type1" > "vsw2+type1".
    shared_ptr<vector<CreateScalingConfigurationRequest::CustomPriorities>> customPriorities_ {};
    // The collection of data cloud disk information.
    shared_ptr<vector<CreateScalingConfigurationRequest::DataDisks>> dataDisks_ {};
    // The ID of the dedicated host cluster.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // Specifies whether to create the ECS instance on a dedicated host. Because dedicated hosts do not support spot instances, the SpotStrategy and SpotPriceLimit parameters are automatically ignored if DedicatedHostId is specified.
    // 
    // You can call the DescribeDedicatedHosts operation to query the list of dedicated host IDs.
    shared_ptr<string> dedicatedHostId_ {};
    // The release protection property of the instance. This property specifies whether the instance can be directly released by using the ECS console or the DeleteInstance API operation, which prevents accidental deletion of the instance. Valid values:
    // 
    // - true: enables release protection for the instance. The instance cannot be directly released by using the ECS console or the DeleteInstance API operation.
    // 
    // - false: shutdown release protection for the instance. The instance can be directly released by using the ECS console or the DeleteInstance API operation.
    // 
    // Default value: false.
    // > This property applies only to pay-as-you-go instances to prevent instances created by Auto Scaling during scale-out from being accidentally deleted. It does not affect normal scale-in activities. Instances with release protection enabled can still be released during scale-in activities.
    shared_ptr<bool> deletionProtection_ {};
    // The ID of the deployment set to which the ECS instance belongs.
    shared_ptr<string> deploymentSetId_ {};
    // The hostname of the ECS instance. The hostname cannot start or end with a period (.) or a hyphen (-) and cannot contain consecutive periods (.) or hyphens (-). The naming requirements for different instance types are as follows:
    // 
    // - Windows instances: The hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). It cannot contain periods (.) or contain only digits.
    // - Other instance types such as Linux instances: The hostname must be 2 to 64 characters in length and can contain multiple periods (.). The string between two periods is a segment, which can contain letters, digits, and hyphens (-).
    shared_ptr<string> hostName_ {};
    // The ID of the HPC cluster to which the ECS instance belongs.
    shared_ptr<string> hpcClusterId_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // - enabled: enables the access channel.
    // - disabled: disables the access channel.
    // 
    // Default value: enabled.
    // 
    // > For more information about instance metadata, see [Overview of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpEndpoint_ {};
    // Specifies whether to forcibly use the security-hardened mode (IMDSv2) to access instance metadata. Valid values:
    // 
    // - optional: does not forcibly use the security-hardened mode.
    // - required: forcibly uses the security-hardened mode. After you set this value, you cannot access instance metadata in normal mode.
    // 
    // Default value: optional.
    // 
    // > For more information about the modes for accessing instance metadata, see [Access modes of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpTokens_ {};
    // The name of the image family. You can set this parameter to obtain the latest available image in the image family to create instances. If `ImageId` is specified, you cannot specify this parameter.
    shared_ptr<string> imageFamily_ {};
    // The ID of the image file. The image resource used during automatic creation of instances.
    shared_ptr<string> imageId_ {};
    // The name of the image file. The image name must be unique within a region. If ImageId is specified, ImageName is ignored.
    // 
    // 
    // You cannot use ImageName to specify an Alibaba Cloud Marketplace image.
    shared_ptr<string> imageName_ {};
    // The description of the ECS instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> instanceDescription_ {};
    // The name of the ECS instance during automatic creation by using this scaling configuration.
    shared_ptr<string> instanceName_ {};
    // The collection of intelligent configuration information used to filter instance types that meet your requirements.
    shared_ptr<vector<CreateScalingConfigurationRequest::InstancePatternInfos>> instancePatternInfos_ {};
    // The instance type of the ECS instance. For more information, see instance families.
    shared_ptr<string> instanceType_ {};
    // After you enable the candidate mode, if issues such as insufficient stock occur, the system supplements the currently selected instance types with similar instance types of the same size, or creates vSwitches in candidate zones and adds them to the scaling group.
    shared_ptr<CreateScalingConfigurationRequest::InstanceTypeCandidateOptions> instanceTypeCandidateOptions_ {};
    // The information used to specify instance types.
    shared_ptr<vector<CreateScalingConfigurationRequest::InstanceTypeOverrides>> instanceTypeOverrides_ {};
    // The multiple instance types. If InstanceTypes is specified, InstanceType is ignored.
    // 
    // If an instance cannot be created based on the instance type with a higher priority, Auto Scaling automatically selects the instance type with the next highest priority to create the instance.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The network billing method. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth. In this case, InternetMaxBandwidthOut specifies the fixed bandwidth value.
    // 
    // - PayByTraffic: pay-by-traffic. In this case, InternetMaxBandwidthOut specifies only the maximum bandwidth, and you are billed based on the actual network traffic.
    // 
    // If this parameter is not specified, the default value is PayByBandwidth for the classic network and PayByTraffic for a VPC.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // - If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. Default value: 10.
    // - If the purchased outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `InternetMaxBandwidthOut`. Default value: the value of `InternetMaxBandwidthOut`.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is an I/O optimization instance. Valid values:
    // 
    // - none: The instance is not an I/O optimization instance.
    // - optimized: The instance is an I/O optimization instance.
    // 
    // The default value is none for retired instance types and optimized for other instance types.
    shared_ptr<string> ioOptimized_ {};
    // The number of IPv6 addresses that are randomly generated for the network interface controller (NIC).
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // The name of the key pair used to log on to the ECS instance. 
    //          
    // - For Windows instances, this parameter is ignored and left empty by default. 
    // - For Linux instances, password-based logon is disabled by default.
    shared_ptr<string> keyPairName_ {};
    // The weight of the ECS instance as a load balancing backend server. Valid values: 1 to 100.
    // 
    // Default value: 50.
    shared_ptr<int32_t> loadBalancerWeight_ {};
    // The memory size. Unit: GiB.
    // 
    // You can specify both Cpu and Memory to define the range of instance types. For example, if you set Cpu to 2 and Memory to 16, all instance types with 2 vCPUs and 16 GiB of memory are matched. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and creates instances with the lowest price.
    // 
    // > This configuration takes effect only when the scaling mode is set to cost optimization and no instance type is specified in the scaling configuration.
    shared_ptr<int32_t> memory_ {};
    // The list of network interface controller (NIC) devices.
    shared_ptr<vector<CreateScalingConfigurationRequest::NetworkInterfaces>> networkInterfaces_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the ECS instance. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters include:
    // 
    // \\`()` ~!@#$%^&*-_+=\\|{}[]:;\\"<>,.?/`
    // 
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If you specify the Password parameter, send requests over HTTPS to prevent password leaks.
    shared_ptr<string> password_ {};
    // Specifies whether to use the preset password of the image. When you use this parameter, make sure that a password is preset in the image. Valid values:
    // 
    // - true: uses the preset password of the image.
    // - false: does not use the preset password of the image.
    shared_ptr<bool> passwordInherit_ {};
    // The name of the Resource Access Management (RAM) role for the ECS instance. RAM roles are provided and maintained by RAM. You can call the ListRoles operation to query available RAM roles.
    shared_ptr<string> ramRoleName_ {};
    // The ID of the resource group to which the ECS instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The resource pool policy used when creating the instance. Take note of the following items when you configure this parameter:
    // 
    // - This parameter takes effect only when you create pay-as-you-go instances.
    // 
    // - You cannot configure this parameter together with PrivatePoolOptions.MatchCriteria or PrivatePoolOptions.Id.
    shared_ptr<CreateScalingConfigurationRequest::ResourcePoolOptions> resourcePoolOptions_ {};
    // The name of the scaling configuration. The name must be 2 to 64 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.). It must start with a letter, digit, or Chinese character.
    // 
    // The name must be unique within a scaling group in a region. If you do not specify this parameter, the ID of the scaling configuration is used by default.
    shared_ptr<string> scalingConfigurationName_ {};
    // The ID of the scaling group to which the scaling configuration belongs.
    // 
    // This parameter is required.
    shared_ptr<string> scalingGroupId_ {};
    // The scheduling options.
    Darabonba::Json schedulerOptions_ {};
    // Specifies whether a vSwitch available for secondary elastic network interfaces (ENIs) must be selected from the list when the VSwitchIds parameter is specified for the secondary ENIs. Valid values:
    // - Strict: strict mode. If no vSwitch in the VSwitchIds list meets the requirements, instance creation fails.
    // - Tolerant: fault-tolerant mode. If no vSwitch in the VSwitchIds list meets the requirements, no secondary ENI is configured, and the instance is still created.
    // 
    // Default value: Strict.
    shared_ptr<string> secondaryEniVSwitchConstraint_ {};
    // Specifies whether to enable security hardening. Valid values:
    // 
    // - Active: enables security hardening. This value applies only to public images.
    // - Deactive: disables security hardening. This value applies to all image types.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which the ECS instance belongs. ECS instances in the same security group can access each other.
    shared_ptr<string> securityGroupId_ {};
    // Adds the ECS instance to multiple security groups at the same time. For more information, see the Security groups section in [Limits](https://help.aliyun.com/document_detail/25412.html).
    // 
    // > You cannot specify both SecurityGroupId and SecurityGroupIds at the same time.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The security options.
    shared_ptr<CreateScalingConfigurationRequest::SecurityOptions> securityOptions_ {};
    // The protection period of the spot instance. Unit: hours. Valid values:
    // 
    // - 1: Alibaba Cloud guarantees that the instance runs for 1 hour after it is created and is not automatically released. After 1 hour, the system automatically compares your bid with the market price and checks resource inventory to determine whether to retain automatic release the instance.
    // - 0: Alibaba Cloud does not guarantee that the instance runs for 1 hour after it is created. The system automatically compares your bid with the market price and checks resource inventory to determine whether to retain automatic release the instance.
    // 
    // > Alibaba Cloud sends you a notification by using ECS system events 5 minutes before the instance is released. Spot instances are billed by the second. Select an appropriate protection period based on the execution duration of your tasks.
    // 
    // Default value: 1.
    shared_ptr<int32_t> spotDuration_ {};
    // The break mode of the spot instance. Currently, only terminate (default) is supported, which releases the instance directly.
    shared_ptr<string> spotInterruptionBehavior_ {};
    // The collection of billing information for spot instances.
    shared_ptr<vector<CreateScalingConfigurationRequest::SpotPriceLimits>> spotPriceLimits_ {};
    // The preemption policy for the pay-as-you-go instance. Valid values:
    //          
    // - NoSpot: regular pay-as-you-go instance.
    // - SpotWithPriceLimit: spot instance with a maximum hourly price.
    // - SpotAsPriceGo: spot instance whose price is automatically set based on the current market price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The ID of the storage set.
    shared_ptr<string> storageSetId_ {};
    // The maximum number of partitions in the storage set. Valid values: integers greater than or equal to 2.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // The disk types for the system cloud disk. If a disk type with a higher priority is unavailable, Auto Scaling automatically attempts to use the disk type with the next highest priority to create the system cloud disk. Valid values:
    // - cloud: basic cloud disk.
    // - cloud_efficiency: ultra cloud disk.
    // - cloud_ssd: standard SSD cloud disk.
    // - cloud_essd: ESSD cloud disk.
    // 
    // > You cannot specify both this parameter and `SystemDisk.Category` at the same time.
    shared_ptr<vector<string>> systemDiskCategories_ {};
    // The tags of the ECS instance. Tags are passed in as key-value pairs. You can add up to 20 tags. The requirements for keys and values are as follows:
    //          
    // - A key can be up to 64 characters in length. It cannot start with aliyun or acs: and cannot contain `http://` or `https://`. A key cannot be an empty string.
    // - A value can be up to 128 characters in length. It cannot start with aliyun or acs: and cannot contain `http://` or `https://`. A value can be an empty string.
    shared_ptr<string> tags_ {};
    // Specifies whether to create the instance on a dedicated host. Valid values:
    // 
    // - default: creates the instance on a non-dedicated host.
    // 
    // - host: creates the instance on a dedicated host. If you do not specify DedicatedHostId, Alibaba Cloud automatically selects a dedicated host for the instance.
    // 
    // Default value: default.
    shared_ptr<string> tenancy_ {};
    // The user data of the ECS instance. It must be encoded in Base64. The maximum size of the raw data before encoding is 32 KB.
    shared_ptr<string> userData_ {};
    // The zone ID of the ECS instance.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
