// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUEST_HPP_
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
  class ModifyScalingConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
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
      DARABONBA_PTR_TO_JSON(Override, override_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_TO_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_ANY_TO_JSON(SchedulerOptions, schedulerOptions_);
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
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
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
      DARABONBA_PTR_FROM_JSON(Override, override_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourcePoolOptions, resourcePoolOptions_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationId, scalingConfigurationId_);
      DARABONBA_PTR_FROM_JSON(ScalingConfigurationName, scalingConfigurationName_);
      DARABONBA_ANY_FROM_JSON(SchedulerOptions, schedulerOptions_);
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
    ModifyScalingConfigurationRequest() = default ;
    ModifyScalingConfigurationRequest(const ModifyScalingConfigurationRequest &) = default ;
    ModifyScalingConfigurationRequest(ModifyScalingConfigurationRequest &&) = default ;
    ModifyScalingConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequest() = default ;
    ModifyScalingConfigurationRequest& operator=(const ModifyScalingConfigurationRequest &) = default ;
    ModifyScalingConfigurationRequest& operator=(ModifyScalingConfigurationRequest &&) = default ;
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
      // The instance type of the spot instance. This parameter is in effect when \\`SpotStrategy\\` is set to \\`SpotWithPriceLimit\\`.
      shared_ptr<string> instanceType_ {};
      // The bid for the spot instance. This parameter is in effect when \\`SpotStrategy\\` is set to \\`SpotWithPriceLimit\\`.
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
      // 
      // - Enclave: The ECS instance uses an enclave to build a confidential computing environment. For more information, see [Build a confidential computing environment using an enclave](https://help.aliyun.com/document_detail/203433.html).
      // 
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
      // The ID of the private pool. The private pool can be an Elastic Assurance service or a Capacity Reservation service. You can only specify the ID of a Target private pool. You cannot specify this parameter and the \\`PrivatePoolTags\\` parameter at the same time.
      shared_ptr<vector<string>> privatePoolIds_ {};
      // Filter available Target private pools by tag. You can specify up to 20 tags.
      // Description:
      // 
      // - When you configure this parameter, the system filters only the associated Target private pools under your account to find private pools that match the tags and meet the constraints of the scaling group, such as zone and instance type.
      // 
      // - Tag matching rule: The private pool must match all specified tags.
      // 
      // - You cannot specify this parameter and the \\`PrivatePoolIds\\` parameter at the same time.
      shared_ptr<vector<ResourcePoolOptions::PrivatePoolTags>> privatePoolTags_ {};
      // The resource pool includes the private pool generated after an Elastic Assurance service or a Capacity Reservation service takes effect, and the public pool. You can select a resource pool to start an instance. Valid values:
      // 
      // - PrivatePoolFirst: The private pool is used first. If you select this policy and specify \\`ResourcePoolOptions.PrivatePoolIds\\` or meet the \\`PrivatePoolTags\\` conditions, the corresponding private pool is used first. If you do not specify a private pool or the specified private pool has insufficient capacity, the system automatically matches an open private pool. If no eligible private pools are available, a public pool is used to create the instance.
      // 
      // - PrivatePoolOnly: Only the private pool is used. If you select this policy, you must specify \\`ResourcePoolOptions.PrivatePoolIds\\`. If the specified private pool has insufficient capacity, the instance fails to start.
      // 
      // - PublicPoolFirst: The public pool is used first. A public pool is used first to create the instance. If the public pool has insufficient resources, a private pool is used. The system preferentially matches an open private pool. If no eligible private pools are available, the system uses the Target private pool that is specified by \\`ResourcePoolOptions.PrivatePoolIds\\` or meets the \\`PrivatePoolTags\\` conditions. (This policy is in invitational preview and is not yet available for use.)
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
      // The type of the ENI. When you use this parameter, you must use \\`NetworkInterfaces\\` to configure the primary ENI. You cannot set the \\`SecurityGroupId\\` or \\`SecurityGroupIds\\` parameter. Valid values:
      // 
      // - Primary: primary ENI.
      // 
      // - Secondary: secondary ENI.
      // 
      // Default value: Secondary.
      shared_ptr<string> instanceType_ {};
      // The number of randomly generated IPv6 addresses to be assigned to the primary ENI. Note:
      // 
      // This parameter takes effect only when \\`NetworkInterface.InstanceType\\` is set to \\`Primary\\`. You cannot set this parameter if \\`NetworkInterface.InstanceType\\` is set to \\`Secondary\\` or is empty.
      // 
      // After you set this parameter, you cannot set \\`Ipv6AddressCount\\`.
      shared_ptr<int32_t> ipv6AddressCount_ {};
      // The communication mode of the NIC. Valid values:
      // 
      // - Standard: uses the TCP communication mode.
      // 
      // - HighPerformance: enables the Elastic RDMA Interface (ERI) and uses the RDMA communication mode.
      // 
      // Default value: Standard.
      // 
      // > The number of ENIs in RDMA mode cannot exceed the limit for the instance family. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The number of secondary private IPv4 addresses to assign to the NIC. Valid values: 1 to 49.
      // 
      // - The value cannot exceed the limit on the number of IP addresses for the instance type. For more information, see [Instance families](https://help.aliyun.com/zh/ecs/user-guide/overview-of-instance-families).
      // 
      // - \\`NetworkInterface.N.SecondaryPrivateIpAddressCount\\` is used to assign a number of secondary private IPv4 addresses to the NIC, excluding the primary private IP address of the NIC. The system randomly assigns the addresses from the available CIDR block of the vSwitch where the NIC is located (\\`NetworkInterface.N.VSwitchId\\`).
      shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
      // The IDs of one or more security groups to which the ENI belongs.
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
      // If you want to specify the capacity of an instance type in a scaling configuration, specify this parameter and \\`InstanceTypeOverride.WeightedCapacity\\`.
      // 
      // This parameter is used to specify an instance type. You can specify this parameter multiple times. You can use this parameter with the \\`InstanceTypeOverride.WeightedCapacity\\` parameter to enable custom weights for multiple instance types.
      // 
      // > If you specify this parameter, you cannot specify \\`instanceTypes\\`.
      // 
      // Valid values of InstanceType: available ECS instance types.
      shared_ptr<string> instanceType_ {};
      // If you want the scaling group to scale based on the capacity of instance types, specify this parameter after you specify \\`LaunchTemplateOverride.InstanceType\\`.
      // 
      // This parameter specifies the weight of an instance type, which indicates the capacity of a single instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the specified instance type are required to meet the expected capacity.
      // 
      // You can set different weights for different instance types as needed because the performance metrics, such as the number of vCPUs and memory size, vary based on the instance type.
      // 
      // For example:
      // 
      // - Current capacity: 0.
      // 
      // - Expected capacity: 6.
      // 
      // - Capacity of the ecs.c5.xlarge instance type: 4.
      // 
      // To meet the expected capacity, the scaling group scales out two ecs.c5.xlarge instances.
      // 
      // > The capacity of the scaling group after a scale-out activity cannot exceed the sum of the maximum capacity (MaxSize) and the maximum weight of an instance type.
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
      // When supplementing with vSwitches from other zones is allowed, you must specify the optional CIDR blocks for the vSwitches.
      shared_ptr<vector<string>> allowCidrBlocks_ {};
      // Specifies whether to allow supplementing with vSwitches from other zones.
      // 
      // > The instance type remains unchanged, and only new zones are selected as alternatives. When the scaling group cannot be scaled out in any of the selected zones due to issues such as insufficient inventory, the system automatically adds a new vSwitch in another zone to the scaling group based on this configuration.
      // > For example, if the scaling group is configured with zones cn-hangzhou-h and cn-hangzhou-g, and scale-out fails in both zones, ESS may create a vSwitch in cn-hangzhou-k and add it to the scaling group based on real-time inventory.
      shared_ptr<bool> allowCrossAz_ {};
      // Specifies whether to allow supplementing with instance types from other generations.
      // 
      // - For example, if the current instance type is ecs.c7.large, you can enable this feature to use alternative instance types such as ecs.c6.large and ecs.c8.large.
      shared_ptr<bool> allowDifferentGeneration_ {};
      // Specifies whether to enable the alternative mode.
      shared_ptr<bool> enabled_ {};
      // The maximum price for alternative instance types.
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
      // - X86: x86.
      // 
      // - Heterogeneous: heterogeneous computing, such as GPU and FPGA.
      // 
      // - BareMental: ECS Bare Metal Instance.
      // 
      // - Arm: Arm.
      // 
      // Default value: all architecture types.
      shared_ptr<vector<string>> architectures_ {};
      // Specifies whether to include burstable instance types. Valid values:
      // 
      // - Exclude: do not include burstable instance types.
      // 
      // - Include: include burstable instance types.
      // 
      // - Required: include only burstable instance types.
      // 
      // Default value: Include.
      shared_ptr<string> burstablePerformance_ {};
      // The number of vCPU cores of the instance type in intelligent configuration mode. This parameter is used to filter instance types. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // 
      // Note the following information:
      // 
      // - The \\`InstancePatternInfo\\` parameter is applicable only to scaling groups whose NetworkType is set to VPC.
      // 
      // - You must specify \\`InstancePatternInfo.Cores\\` and \\`InstancePatternInfo.Memory\\` at the same time.
      // 
      // - If you specify instance types using the \\`InstanceType\\` or \\`InstanceTypes\\` parameter, Auto Scaling preferentially uses the specified instance types for scale-out activities. If the specified instance types are out of stock, Auto Scaling uses the lowest-priced instance type among those that meet the requirements specified by the \\`InstancePatternInfo\\` parameter for scale-out activities.
      shared_ptr<int32_t> cores_ {};
      // The CPU architecture of the instance. Valid values:
      // 
      // > You can specify up to two CPU architectures.
      // 
      // - X86.
      // 
      // - ARM.
      shared_ptr<vector<string>> cpuArchitectures_ {};
      // The instance types to exclude. You can use a wildcard character (\\*) to exclude an instance type or an entire instance family. Examples:
      // 
      // - ecs.c6.large: excludes the ecs.c6.large instance type.
      // 
      // - ecs.c6.\\*: excludes all instance types of the c6 family.
      shared_ptr<vector<string>> excludedInstanceTypes_ {};
      // The GPU type.
      shared_ptr<vector<string>> gpuSpecs_ {};
      // The category of the instance type. Valid values:
      // 
      // - General-purpose: General-purpose.
      // 
      // - Compute-optimized: compute-optimized.
      // 
      // - Memory-optimized: memory-optimized.
      // 
      // - Big data: big data.
      // 
      // - Local SSDs: local SSD.
      // 
      // - High Clock Speed: high frequency.
      // 
      // - Enhanced: enhanced instance families.
      // 
      // - Shared: shared-resource instances.
      // 
      // - Compute-optimized with GPU: GPU.
      // 
      // - Visual Compute-optimized: visual compute-optimized.
      // 
      // - Heterogeneous Service: heterogeneous computing.
      // 
      // - Compute-optimized with FPGA: FPGA.
      // 
      // - Compute-optimized with NPU: NPU-accelerated.
      // 
      // - ECS Bare Metal: ECS Bare Metal Instance.
      // 
      // - High Performance Compute: high-performance computing (HPC).
      shared_ptr<vector<string>> instanceCategories_ {};
      // The level of the instance family. This parameter is used to filter instance types. This parameter takes effect only when \\`CostOptimization\\` is enabled. Valid values:
      // 
      // - EntryLevel: entry-level instances (shared). This instance type is cost-effective but does not provide stable computing performance. It is suitable for business scenarios that have low CPU utilization. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
      // 
      // - EnterpriseLevel: enterprise-level instances. This instance type provides stable performance and dedicated resources, and is suitable for business scenarios that have high stability requirements. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // 
      // - CreditEntryLevel: credit entry-level instances (burstable). This instance type provides CPU credits to ensure computing performance. It is suitable for business scenarios that have low and sporadic CPU utilization. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
      shared_ptr<string> instanceFamilyLevel_ {};
      // The instance families to query. You can specify up to 10 instance families.
      shared_ptr<vector<string>> instanceTypeFamilies_ {};
      // The maximum hourly price that you can accept for a pay-as-you-go or spot instance in intelligent configuration mode. This parameter is used to filter instance types.
      // 
      // > This parameter is required when \\`SpotStrategy\\` is set to \\`SpotWithPriceLimit\\`. In other cases, this parameter is optional.
      shared_ptr<float> maxPrice_ {};
      // The maximum number of vCPU cores of the instance type.
      // 
      // > The value of \\`MaximumCpuCoreCount\\` cannot be more than four times the value of \\`MinimumCpuCoreCount\\`.
      shared_ptr<int32_t> maximumCpuCoreCount_ {};
      // The maximum number of GPUs of the instance. Valid values: positive integers.
      shared_ptr<int32_t> maximumGpuAmount_ {};
      // The maximum memory size of the instance. Unit: GiB.
      shared_ptr<float> maximumMemorySize_ {};
      // The memory size of the instance type in intelligent configuration mode. Unit: GiB. This parameter is used to filter instance types.
      shared_ptr<float> memory_ {};
      // The minimum baseline vCPU computing performance (for all vCPUs) of a t5 or t6 burstable instance.
      shared_ptr<int32_t> minimumBaselineCredit_ {};
      // The minimum number of vCPU cores of the instance.
      shared_ptr<int32_t> minimumCpuCoreCount_ {};
      // The minimum number of IPv6 addresses that can be assigned to a single ENI of the instance.
      shared_ptr<int32_t> minimumEniIpv6AddressQuantity_ {};
      // The minimum number of IPv4 addresses that can be assigned to a single ENI of the instance.
      shared_ptr<int32_t> minimumEniPrivateIpAddressQuantity_ {};
      // The minimum number of ENIs that can be attached to the instance.
      shared_ptr<int32_t> minimumEniQuantity_ {};
      // The minimum number of GPUs of the instance. Valid values: positive integers.
      shared_ptr<int32_t> minimumGpuAmount_ {};
      // The minimum initial vCPU credit for a t5 or t6 burstable instance.
      shared_ptr<int32_t> minimumInitialCredit_ {};
      // The minimum memory size of the instance. Unit: GiB.
      shared_ptr<float> minimumMemorySize_ {};
      // The processor model of the instance. You can specify up to 10 processor models.
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
      // The ID of the automatic snapshot policy used for the data disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable performance burst for the system disk. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // > This parameter takes effect only when `SystemDisk.Category` is set to `cloud_auto`.
      // 
      // <props="china">
      // 
      // For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The categories of the data disk. Valid values:
      // 
      // - cloud: basic disk. The \\`DeleteWithInstance\\` attribute of a basic disk that is created with an instance is \\`true\\`.
      // 
      // - cloud_efficiency: ultra disk.
      // 
      // - cloud_ssd: standard SSD.
      // 
      // - cloud_essd: ESSD.
      // 
      // > You cannot specify this parameter and `DataDisk.Category` at the same time.
      shared_ptr<vector<string>> categories_ {};
      // The category of the data disk. Valid values:
      // 
      // - cloud: basic disk. The \\`DeleteWithInstance\\` attribute of a basic disk that is created with an instance is \\`true\\`.
      // 
      // - cloud_efficiency: ultra disk.
      // 
      // - cloud_ssd: standard SSD.
      // 
      // - ephemeral_ssd: local SSD.
      // 
      // - cloud_essd: ESSD.
      // 
      // You cannot specify this parameter and `DataDisk.Categories` at the same time. If neither this parameter nor `DataDisk.Categories` is specified, this parameter has a default value:
      // 
      // - For I/O optimized instances, the default value is \\`cloud_efficiency\\`.
      // 
      // - For non-I/O optimized instances, the default value is \\`cloud\\`.
      shared_ptr<string> category_ {};
      // Specifies whether to release the data disk when the instance is released. Valid values:
      // 
      // - true: The disk is released with the instance.
      // 
      // - false: The disk is not released with the instance.
      // 
      // You can set this parameter only for independent cloud disks (\\`DataDisk.Category\\` is \\`cloud\\`, \\`cloud_efficiency\\`, \\`cloud_ssd\\`, \\`cloud_essd\\`, or \\`cloud_auto\\`). Otherwise, an error occurs.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the data disk. The description must be 2 to 256 English or Chinese characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of the data disk. If you do not specify this parameter, the system allocates a mount point when the ECS instance is automatically created. The mount point starts from /dev/xvdb and goes to /dev/xvdz.
      shared_ptr<string> device_ {};
      // The name of the data disk. The name must be 2 to 128 English or Chinese characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // Specifies whether the system disk is encrypted. Valid values:
      // 
      // - true: The system disk is encrypted.
      // 
      // - false: The system disk is not encrypted.
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key for the data disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD that is used as the data disk. Valid values:
      // 
      // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
      // 
      // - PL1: A single disk can deliver up to 50,000 random read/write IOPS.
      // 
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // 
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // > For more information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The pre-configured IOPS of the data disk.
      // 
      // > IOPS, or input/output operations per second, is the number of I/O operations that a block storage device can process per second. It indicates the read and write performance of the block storage device.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the data disk. Unit: GiB. Value range:
      // 
      // - cloud: 5 to 2000.
      // 
      // - cloud_efficiency: 20 to 32768.
      // 
      // - cloud_ssd: 20 to 32768.
      // 
      // - cloud_essd: 20 to 32768.
      // 
      // - ephemeral_ssd: 5 to 800.
      // 
      // If you specify this parameter, the disk size must be greater than or equal to the size of the snapshot specified by \\`SnapshotId\\`.
      shared_ptr<int32_t> size_ {};
      // The snapshot that is used to create the data disk. If you specify this parameter, \\`DataDisk.Size\\` is ignored, and the size of the created disk is the size of the specified snapshot.
      // 
      // If the snapshot was created on or before July 15, 2013, the call is rejected, and the \\`InvalidSnapshot.TooOld\\` error is returned.
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
      // > The instance type must be included in the list of instance types in the scaling configuration.
      shared_ptr<string> instanceType_ {};
      // The ID of the vSwitch.
      // 
      // > The vSwitch must be included in the list of vSwitches in the scaling group.
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
      // The ID of the automatic snapshot policy used for the system disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the performance burst feature for the system disk. Valid values:
      // 
      // - true: enable.
      // 
      // - false: disable.
      // 
      // > This parameter is supported only when `SystemDisk.Category` is set to `cloud_auto`.
      // 
      // <props="china">
      // 
      // For more information, see [ESSD AutoPL cloud disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The category of the system disk. Valid values:
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
      // You cannot specify this parameter and `SystemDiskCategories` at the same time. If neither this parameter nor `SystemDiskCategories` is specified, this parameter has a default value. If the instance type is from instance family I and the instance is not I/O optimized, the default value is \\`cloud\\`. Otherwise, the default value is \\`cloud_efficiency\\`.
      shared_ptr<string> category_ {};
      // The description of the system disk. The description must be 2 to 256 English or Chinese characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system disk. The name must be 2 to 128 English or Chinese characters in length. It must start with a letter or a Chinese character and cannot start with http\\:// or https\\://. It can contain digits, colons (:), underscores (_), and hyphens (-). Default value: empty
      shared_ptr<string> diskName_ {};
      // The encryption algorithm used for the system disk. Valid values:
      // 
      // - AES-256.
      // 
      // - SM4-128.
      // 
      // Default value: AES-256.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt the system disk. Valid values:
      // 
      // - true: encrypt the system disk.
      // 
      // - false: do not encrypt the system disk.
      // 
      // Default value: false.
      shared_ptr<bool> encrypted_ {};
      // The ID of the KMS key used for the system disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD that is used as the system disk. Valid values:
      // 
      // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
      // 
      // - PL1: A single disk can deliver up to 50,000 random read/write IOPS.
      // 
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // 
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // > For more information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The pre-configured IOPS of the system disk.
      // 
      // > IOPS, or input/output operations per second, is the number of I/O operations that a block storage device can process per second. It indicates the read and write performance of the block storage device.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the system disk. Unit: GiB. Value range:
      // 
      // - Basic disks: 20 to 500.
      // 
      // - ESSDs:
      // 
      //   - PL0: 1 to 2048.
      // 
      //   - PL1: 20 to 2048.
      // 
      //   - PL2: 461 to 2048.
      // 
      //   - PL3: 1261 to 2048.
      // 
      // - ESSD AutoPL cloud disks: 1 to 2048.
      // 
      // - Other disk categories: 20 to 2048.
      // 
      // The value of this parameter must be greater than or equal to max{1, ImageSize}.
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
      // The ID of the private pool. The private pool can be an Elastic Assurance service or a Capacity Reservation service.
      shared_ptr<string> id_ {};
      // The capacity option of the private pool for starting the instance. The private pool is generated after an Elastic Assurance service or a Capacity Reservation service takes effect. You can select a private pool to start an instance. Valid values:
      // 
      // - Open: open mode. The system automatically matches the instance with an open private pool. If no open private pools are available, the instance is started using public pool resources. You do not need to set the \\`PrivatePoolOptions.Id\\` parameter in this mode.
      // 
      // - Target: specified mode. The instance is started using the capacity of a specified private pool. If the specified private pool is unavailable, the instance fails to start. You must specify the private pool ID by setting the \\`PrivatePoolOptions.Id\\` parameter in this mode.
      // 
      // - None: no mode. The instance is not started using the capacity of a private pool.
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
      // Specifies whether to log on to the ECS instance as the ecs-user user. For more information, see [Manage logon usernames of ECS instances](https://help.aliyun.com/document_detail/388447.html). Valid values:
      // 
      // true: yes.
      // 
      // false: no.
      shared_ptr<bool> loginAsNonRoot_ {};
    };

    virtual bool empty() const override { return this->imageOptions_ == nullptr
        && this->privatePoolOptions_ == nullptr && this->systemDisk_ == nullptr && this->affinity_ == nullptr && this->cpu_ == nullptr && this->creditSpecification_ == nullptr
        && this->customPriorities_ == nullptr && this->dataDisks_ == nullptr && this->dedicatedHostClusterId_ == nullptr && this->dedicatedHostId_ == nullptr && this->deletionProtection_ == nullptr
        && this->deploymentSetId_ == nullptr && this->hostName_ == nullptr && this->hpcClusterId_ == nullptr && this->httpEndpoint_ == nullptr && this->httpTokens_ == nullptr
        && this->imageFamily_ == nullptr && this->imageId_ == nullptr && this->imageName_ == nullptr && this->instanceDescription_ == nullptr && this->instanceName_ == nullptr
        && this->instancePatternInfos_ == nullptr && this->instanceTypeCandidateOptions_ == nullptr && this->instanceTypeOverrides_ == nullptr && this->instanceTypes_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr
        && this->loadBalancerWeight_ == nullptr && this->memory_ == nullptr && this->networkInterfaces_ == nullptr && this->override_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->ramRoleName_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourcePoolOptions_ == nullptr && this->scalingConfigurationId_ == nullptr && this->scalingConfigurationName_ == nullptr && this->schedulerOptions_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->securityOptions_ == nullptr && this->spotDuration_ == nullptr && this->spotInterruptionBehavior_ == nullptr
        && this->spotPriceLimits_ == nullptr && this->spotStrategy_ == nullptr && this->storageSetId_ == nullptr && this->storageSetPartitionNumber_ == nullptr && this->systemDiskCategories_ == nullptr
        && this->tags_ == nullptr && this->tenancy_ == nullptr && this->userData_ == nullptr && this->zoneId_ == nullptr; };
    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const ModifyScalingConfigurationRequest::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, ModifyScalingConfigurationRequest::ImageOptions) };
    inline ModifyScalingConfigurationRequest::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, ModifyScalingConfigurationRequest::ImageOptions) };
    inline ModifyScalingConfigurationRequest& setImageOptions(const ModifyScalingConfigurationRequest::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline ModifyScalingConfigurationRequest& setImageOptions(ModifyScalingConfigurationRequest::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const ModifyScalingConfigurationRequest::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, ModifyScalingConfigurationRequest::PrivatePoolOptions) };
    inline ModifyScalingConfigurationRequest::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, ModifyScalingConfigurationRequest::PrivatePoolOptions) };
    inline ModifyScalingConfigurationRequest& setPrivatePoolOptions(const ModifyScalingConfigurationRequest::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline ModifyScalingConfigurationRequest& setPrivatePoolOptions(ModifyScalingConfigurationRequest::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const ModifyScalingConfigurationRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, ModifyScalingConfigurationRequest::SystemDisk) };
    inline ModifyScalingConfigurationRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, ModifyScalingConfigurationRequest::SystemDisk) };
    inline ModifyScalingConfigurationRequest& setSystemDisk(const ModifyScalingConfigurationRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline ModifyScalingConfigurationRequest& setSystemDisk(ModifyScalingConfigurationRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline ModifyScalingConfigurationRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline ModifyScalingConfigurationRequest& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline ModifyScalingConfigurationRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // customPriorities Field Functions 
    bool hasCustomPriorities() const { return this->customPriorities_ != nullptr;};
    void deleteCustomPriorities() { this->customPriorities_ = nullptr;};
    inline const vector<ModifyScalingConfigurationRequest::CustomPriorities> & getCustomPriorities() const { DARABONBA_PTR_GET_CONST(customPriorities_, vector<ModifyScalingConfigurationRequest::CustomPriorities>) };
    inline vector<ModifyScalingConfigurationRequest::CustomPriorities> getCustomPriorities() { DARABONBA_PTR_GET(customPriorities_, vector<ModifyScalingConfigurationRequest::CustomPriorities>) };
    inline ModifyScalingConfigurationRequest& setCustomPriorities(const vector<ModifyScalingConfigurationRequest::CustomPriorities> & customPriorities) { DARABONBA_PTR_SET_VALUE(customPriorities_, customPriorities) };
    inline ModifyScalingConfigurationRequest& setCustomPriorities(vector<ModifyScalingConfigurationRequest::CustomPriorities> && customPriorities) { DARABONBA_PTR_SET_RVALUE(customPriorities_, customPriorities) };


    // dataDisks Field Functions 
    bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
    void deleteDataDisks() { this->dataDisks_ = nullptr;};
    inline const vector<ModifyScalingConfigurationRequest::DataDisks> & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, vector<ModifyScalingConfigurationRequest::DataDisks>) };
    inline vector<ModifyScalingConfigurationRequest::DataDisks> getDataDisks() { DARABONBA_PTR_GET(dataDisks_, vector<ModifyScalingConfigurationRequest::DataDisks>) };
    inline ModifyScalingConfigurationRequest& setDataDisks(const vector<ModifyScalingConfigurationRequest::DataDisks> & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
    inline ModifyScalingConfigurationRequest& setDataDisks(vector<ModifyScalingConfigurationRequest::DataDisks> && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline ModifyScalingConfigurationRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline ModifyScalingConfigurationRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyScalingConfigurationRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline ModifyScalingConfigurationRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyScalingConfigurationRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline ModifyScalingConfigurationRequest& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline ModifyScalingConfigurationRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline ModifyScalingConfigurationRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline ModifyScalingConfigurationRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline ModifyScalingConfigurationRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
    inline ModifyScalingConfigurationRequest& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


    // instanceDescription Field Functions 
    bool hasInstanceDescription() const { return this->instanceDescription_ != nullptr;};
    void deleteInstanceDescription() { this->instanceDescription_ = nullptr;};
    inline string getInstanceDescription() const { DARABONBA_PTR_GET_DEFAULT(instanceDescription_, "") };
    inline ModifyScalingConfigurationRequest& setInstanceDescription(string instanceDescription) { DARABONBA_PTR_SET_VALUE(instanceDescription_, instanceDescription) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyScalingConfigurationRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instancePatternInfos Field Functions 
    bool hasInstancePatternInfos() const { return this->instancePatternInfos_ != nullptr;};
    void deleteInstancePatternInfos() { this->instancePatternInfos_ = nullptr;};
    inline const vector<ModifyScalingConfigurationRequest::InstancePatternInfos> & getInstancePatternInfos() const { DARABONBA_PTR_GET_CONST(instancePatternInfos_, vector<ModifyScalingConfigurationRequest::InstancePatternInfos>) };
    inline vector<ModifyScalingConfigurationRequest::InstancePatternInfos> getInstancePatternInfos() { DARABONBA_PTR_GET(instancePatternInfos_, vector<ModifyScalingConfigurationRequest::InstancePatternInfos>) };
    inline ModifyScalingConfigurationRequest& setInstancePatternInfos(const vector<ModifyScalingConfigurationRequest::InstancePatternInfos> & instancePatternInfos) { DARABONBA_PTR_SET_VALUE(instancePatternInfos_, instancePatternInfos) };
    inline ModifyScalingConfigurationRequest& setInstancePatternInfos(vector<ModifyScalingConfigurationRequest::InstancePatternInfos> && instancePatternInfos) { DARABONBA_PTR_SET_RVALUE(instancePatternInfos_, instancePatternInfos) };


    // instanceTypeCandidateOptions Field Functions 
    bool hasInstanceTypeCandidateOptions() const { return this->instanceTypeCandidateOptions_ != nullptr;};
    void deleteInstanceTypeCandidateOptions() { this->instanceTypeCandidateOptions_ = nullptr;};
    inline const ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions & getInstanceTypeCandidateOptions() const { DARABONBA_PTR_GET_CONST(instanceTypeCandidateOptions_, ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions) };
    inline ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions getInstanceTypeCandidateOptions() { DARABONBA_PTR_GET(instanceTypeCandidateOptions_, ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions) };
    inline ModifyScalingConfigurationRequest& setInstanceTypeCandidateOptions(const ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions & instanceTypeCandidateOptions) { DARABONBA_PTR_SET_VALUE(instanceTypeCandidateOptions_, instanceTypeCandidateOptions) };
    inline ModifyScalingConfigurationRequest& setInstanceTypeCandidateOptions(ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions && instanceTypeCandidateOptions) { DARABONBA_PTR_SET_RVALUE(instanceTypeCandidateOptions_, instanceTypeCandidateOptions) };


    // instanceTypeOverrides Field Functions 
    bool hasInstanceTypeOverrides() const { return this->instanceTypeOverrides_ != nullptr;};
    void deleteInstanceTypeOverrides() { this->instanceTypeOverrides_ = nullptr;};
    inline const vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides> & getInstanceTypeOverrides() const { DARABONBA_PTR_GET_CONST(instanceTypeOverrides_, vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides>) };
    inline vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides> getInstanceTypeOverrides() { DARABONBA_PTR_GET(instanceTypeOverrides_, vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides>) };
    inline ModifyScalingConfigurationRequest& setInstanceTypeOverrides(const vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides> & instanceTypeOverrides) { DARABONBA_PTR_SET_VALUE(instanceTypeOverrides_, instanceTypeOverrides) };
    inline ModifyScalingConfigurationRequest& setInstanceTypeOverrides(vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides> && instanceTypeOverrides) { DARABONBA_PTR_SET_RVALUE(instanceTypeOverrides_, instanceTypeOverrides) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & getInstanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> getInstanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline ModifyScalingConfigurationRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline ModifyScalingConfigurationRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline ModifyScalingConfigurationRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline ModifyScalingConfigurationRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline ModifyScalingConfigurationRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline ModifyScalingConfigurationRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline ModifyScalingConfigurationRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ModifyScalingConfigurationRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // loadBalancerWeight Field Functions 
    bool hasLoadBalancerWeight() const { return this->loadBalancerWeight_ != nullptr;};
    void deleteLoadBalancerWeight() { this->loadBalancerWeight_ = nullptr;};
    inline int32_t getLoadBalancerWeight() const { DARABONBA_PTR_GET_DEFAULT(loadBalancerWeight_, 0) };
    inline ModifyScalingConfigurationRequest& setLoadBalancerWeight(int32_t loadBalancerWeight) { DARABONBA_PTR_SET_VALUE(loadBalancerWeight_, loadBalancerWeight) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline ModifyScalingConfigurationRequest& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkInterfaces Field Functions 
    bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
    void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
    inline const vector<ModifyScalingConfigurationRequest::NetworkInterfaces> & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, vector<ModifyScalingConfigurationRequest::NetworkInterfaces>) };
    inline vector<ModifyScalingConfigurationRequest::NetworkInterfaces> getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, vector<ModifyScalingConfigurationRequest::NetworkInterfaces>) };
    inline ModifyScalingConfigurationRequest& setNetworkInterfaces(const vector<ModifyScalingConfigurationRequest::NetworkInterfaces> & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
    inline ModifyScalingConfigurationRequest& setNetworkInterfaces(vector<ModifyScalingConfigurationRequest::NetworkInterfaces> && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


    // override Field Functions 
    bool hasOverride() const { return this->override_ != nullptr;};
    void deleteOverride() { this->override_ = nullptr;};
    inline bool getOverride() const { DARABONBA_PTR_GET_DEFAULT(override_, false) };
    inline ModifyScalingConfigurationRequest& setOverride(bool override) { DARABONBA_PTR_SET_VALUE(override_, override) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyScalingConfigurationRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyScalingConfigurationRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyScalingConfigurationRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline ModifyScalingConfigurationRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline ModifyScalingConfigurationRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyScalingConfigurationRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyScalingConfigurationRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourcePoolOptions Field Functions 
    bool hasResourcePoolOptions() const { return this->resourcePoolOptions_ != nullptr;};
    void deleteResourcePoolOptions() { this->resourcePoolOptions_ = nullptr;};
    inline const ModifyScalingConfigurationRequest::ResourcePoolOptions & getResourcePoolOptions() const { DARABONBA_PTR_GET_CONST(resourcePoolOptions_, ModifyScalingConfigurationRequest::ResourcePoolOptions) };
    inline ModifyScalingConfigurationRequest::ResourcePoolOptions getResourcePoolOptions() { DARABONBA_PTR_GET(resourcePoolOptions_, ModifyScalingConfigurationRequest::ResourcePoolOptions) };
    inline ModifyScalingConfigurationRequest& setResourcePoolOptions(const ModifyScalingConfigurationRequest::ResourcePoolOptions & resourcePoolOptions) { DARABONBA_PTR_SET_VALUE(resourcePoolOptions_, resourcePoolOptions) };
    inline ModifyScalingConfigurationRequest& setResourcePoolOptions(ModifyScalingConfigurationRequest::ResourcePoolOptions && resourcePoolOptions) { DARABONBA_PTR_SET_RVALUE(resourcePoolOptions_, resourcePoolOptions) };


    // scalingConfigurationId Field Functions 
    bool hasScalingConfigurationId() const { return this->scalingConfigurationId_ != nullptr;};
    void deleteScalingConfigurationId() { this->scalingConfigurationId_ = nullptr;};
    inline string getScalingConfigurationId() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationId_, "") };
    inline ModifyScalingConfigurationRequest& setScalingConfigurationId(string scalingConfigurationId) { DARABONBA_PTR_SET_VALUE(scalingConfigurationId_, scalingConfigurationId) };


    // scalingConfigurationName Field Functions 
    bool hasScalingConfigurationName() const { return this->scalingConfigurationName_ != nullptr;};
    void deleteScalingConfigurationName() { this->scalingConfigurationName_ = nullptr;};
    inline string getScalingConfigurationName() const { DARABONBA_PTR_GET_DEFAULT(scalingConfigurationName_, "") };
    inline ModifyScalingConfigurationRequest& setScalingConfigurationName(string scalingConfigurationName) { DARABONBA_PTR_SET_VALUE(scalingConfigurationName_, scalingConfigurationName) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline     const Darabonba::Json & getSchedulerOptions() const { DARABONBA_GET(schedulerOptions_) };
    Darabonba::Json & getSchedulerOptions() { DARABONBA_GET(schedulerOptions_) };
    inline ModifyScalingConfigurationRequest& setSchedulerOptions(const Darabonba::Json & schedulerOptions) { DARABONBA_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline ModifyScalingConfigurationRequest& setSchedulerOptions(Darabonba::Json && schedulerOptions) { DARABONBA_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifyScalingConfigurationRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline ModifyScalingConfigurationRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline ModifyScalingConfigurationRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const ModifyScalingConfigurationRequest::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, ModifyScalingConfigurationRequest::SecurityOptions) };
    inline ModifyScalingConfigurationRequest::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, ModifyScalingConfigurationRequest::SecurityOptions) };
    inline ModifyScalingConfigurationRequest& setSecurityOptions(const ModifyScalingConfigurationRequest::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline ModifyScalingConfigurationRequest& setSecurityOptions(ModifyScalingConfigurationRequest::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline ModifyScalingConfigurationRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline ModifyScalingConfigurationRequest& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimits Field Functions 
    bool hasSpotPriceLimits() const { return this->spotPriceLimits_ != nullptr;};
    void deleteSpotPriceLimits() { this->spotPriceLimits_ = nullptr;};
    inline const vector<ModifyScalingConfigurationRequest::SpotPriceLimits> & getSpotPriceLimits() const { DARABONBA_PTR_GET_CONST(spotPriceLimits_, vector<ModifyScalingConfigurationRequest::SpotPriceLimits>) };
    inline vector<ModifyScalingConfigurationRequest::SpotPriceLimits> getSpotPriceLimits() { DARABONBA_PTR_GET(spotPriceLimits_, vector<ModifyScalingConfigurationRequest::SpotPriceLimits>) };
    inline ModifyScalingConfigurationRequest& setSpotPriceLimits(const vector<ModifyScalingConfigurationRequest::SpotPriceLimits> & spotPriceLimits) { DARABONBA_PTR_SET_VALUE(spotPriceLimits_, spotPriceLimits) };
    inline ModifyScalingConfigurationRequest& setSpotPriceLimits(vector<ModifyScalingConfigurationRequest::SpotPriceLimits> && spotPriceLimits) { DARABONBA_PTR_SET_RVALUE(spotPriceLimits_, spotPriceLimits) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline ModifyScalingConfigurationRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline ModifyScalingConfigurationRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline ModifyScalingConfigurationRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // systemDiskCategories Field Functions 
    bool hasSystemDiskCategories() const { return this->systemDiskCategories_ != nullptr;};
    void deleteSystemDiskCategories() { this->systemDiskCategories_ = nullptr;};
    inline const vector<string> & getSystemDiskCategories() const { DARABONBA_PTR_GET_CONST(systemDiskCategories_, vector<string>) };
    inline vector<string> getSystemDiskCategories() { DARABONBA_PTR_GET(systemDiskCategories_, vector<string>) };
    inline ModifyScalingConfigurationRequest& setSystemDiskCategories(const vector<string> & systemDiskCategories) { DARABONBA_PTR_SET_VALUE(systemDiskCategories_, systemDiskCategories) };
    inline ModifyScalingConfigurationRequest& setSystemDiskCategories(vector<string> && systemDiskCategories) { DARABONBA_PTR_SET_RVALUE(systemDiskCategories_, systemDiskCategories) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline ModifyScalingConfigurationRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline ModifyScalingConfigurationRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ModifyScalingConfigurationRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ModifyScalingConfigurationRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<ModifyScalingConfigurationRequest::ImageOptions> imageOptions_ {};
    shared_ptr<ModifyScalingConfigurationRequest::PrivatePoolOptions> privatePoolOptions_ {};
    shared_ptr<ModifyScalingConfigurationRequest::SystemDisk> systemDisk_ {};
    // Specifies whether to associate the instance on a dedicated host with the dedicated host. Valid values:
    // 
    // - default: The instance is not associated with the dedicated host. If you restart an instance that was stopped in economical mode, the instance may be placed on a different dedicated host in the automatic deployment resource pool if the resources of the original dedicated host are insufficient.
    // 
    // - host: The instance is associated with the dedicated host. If you restart an instance that was stopped in economical mode, the instance is still placed on the original dedicated host. If the resources of the original dedicated host are insufficient, the instance fails to restart.
    shared_ptr<string> affinity_ {};
    // The number of vCPUs. Unit: cores.
    // 
    // You can specify both \\`Cpu\\` and \\`Memory\\` to define a range of instance types. For example, if you set \\`Cpu\\` to 2 and \\`Memory\\` to 16, all instance types with 2 vCPUs and 16 GiB of memory are matched. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and then creates the instance of the lowest-priced instance type.
    // 
    // > This configuration is effective only when the cost optimization mode is enabled and no instance types are specified in the scaling configuration.
    shared_ptr<int32_t> cpu_ {};
    // The performance mode of the burstable instance. Valid values:
    // 
    // - Standard: the standard mode. For more information about the instance performance, see the "Performance modes" section in [What is a burstable instance?](https://help.aliyun.com/document_detail/59977.html).
    // 
    // - Unlimited: the unlimited mode. For more information about the instance performance, see the "Performance modes" section in [What is a burstable instance?](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The custom priority of the ECS instance type and vSwitch.
    // >Notice: This parameter is in effect only when the scaling policy of the scaling group is set to the priority-based policy.
    // 
    // If an instance cannot be created using the instance type and vSwitch with a higher priority, Auto Scaling automatically uses the instance type and vSwitch combination with the next priority to create the instance.
    // 
    // > If you specify custom priorities for only some instance type and vSwitch combinations, the combinations for which you do not specify custom priorities have a lower priority than the combinations for which you specify custom priorities. The priority of the combinations for which you do not specify custom priorities is determined by the order of vSwitches in the scaling group and the order of instance types in the scaling configuration.
    // >
    // > - For example, if the vSwitches in the scaling group are ordered as vsw1 and vsw2, the instance types in the scaling configuration are ordered as type1 and type2, and the custom priority is set to ["vsw2+type2", "vsw1+type2"], the final priority is: "vsw2+type2" > "vsw1+type2" > "vsw1+type1" > "vsw2+type1".
    shared_ptr<vector<ModifyScalingConfigurationRequest::CustomPriorities>> customPriorities_ {};
    // The collection of data disk information.
    shared_ptr<vector<ModifyScalingConfigurationRequest::DataDisks>> dataDisks_ {};
    // The ID of the dedicated host cluster.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // Specifies whether to create the ECS instance on a dedicated host. If you specify \\`DedicatedHostId\\`, the \\`SpotStrategy\\` and \\`SpotPriceLimit\\` settings in the request are ignored. This is because dedicated hosts do not support spot instances.
    // 
    // You can call the DescribeDedicatedHosts operation to query the list of dedicated host IDs.
    shared_ptr<string> dedicatedHostId_ {};
    // The release protection attribute of the instance. This parameter specifies whether you can release the instance using the ECS console or by calling the DeleteInstance operation. This prevents the instance from being accidentally released. Valid values:
    // 
    // - true: enables release protection. You cannot release the instance using the ECS console or by calling the DeleteInstance operation.
    // 
    // - false: disables release protection. You can release the instance using the ECS console or by calling the DeleteInstance operation.
    // 
    // > This attribute applies only to pay-as-you-go instances. It prevents the instances that are scaled out by Auto Scaling from being accidentally released. This attribute does not affect normal scale-in activities. Instances for which release protection is enabled can be released during scale-in activities.
    shared_ptr<bool> deletionProtection_ {};
    // The ID of the deployment set to which the ECS instance belongs.
    shared_ptr<string> deploymentSetId_ {};
    // The hostname of the ECS instance. A period (.) or a hyphen (-) cannot be used as the first or last character of the hostname. Consecutive periods (.) or hyphens (-) are not allowed. The naming conventions for hostnames vary based on the instance operating system:
    // 
    // - For Windows instances, the hostname must be 2 to 15 characters in length and can contain letters, digits, and hyphens (-). It cannot contain periods (.) or consist of only digits.
    // 
    // - For other instance types, such as Linux, the hostname must be 2 to 64 characters in length. You can use periods (.) to separate the hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    shared_ptr<string> hostName_ {};
    // The ID of the HPC cluster to which the ECS instance belongs.
    shared_ptr<string> hpcClusterId_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // 
    // - enabled: enable.
    // 
    // - disabled: disable.
    // 
    // Default value: enabled.
    // 
    // > For more information about instance metadata, see [Overview of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpEndpoint_ {};
    // Specifies whether to enforce the security-hardened mode (IMDSv2) when you access instance metadata. Valid values:
    // 
    // - optional: does not enforce the use of IMDSv2.
    // 
    // - required: enforces the use of IMDSv2. If you set the value to \\`required\\`, you cannot access instance metadata in normal mode.
    // 
    // Default value: optional.
    // 
    // > For more information about how to access instance metadata, see [Access modes of instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpTokens_ {};
    // The name of the image family. You can set this parameter to obtain the latest available image from the specified image family to create instances. If you have set the `ImageId` parameter, you cannot set this parameter.
    shared_ptr<string> imageFamily_ {};
    // The ID of the image file that is used to create the instances.
    // 
    // > If the image that was previously used in the scaling configuration includes a system disk and data disks, the original data disk information is cleared after you change the image.
    shared_ptr<string> imageId_ {};
    // The name of the image file. The image name must be unique in a region. If you specify \\`ImageId\\`, \\`ImageName\\` is ignored.
    // 
    // You cannot use \\`ImageName\\` to specify a Marketplace image.
    shared_ptr<string> imageName_ {};
    // The description of the ECS instance. The description must be 2 to 256 English or Chinese characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> instanceDescription_ {};
    // The name of the ECS instances that are automatically created using this scaling configuration.
    shared_ptr<string> instanceName_ {};
    // The collection of intelligent configuration information that is used to filter instance types that meet the specified requirements.
    shared_ptr<vector<ModifyScalingConfigurationRequest::InstancePatternInfos>> instancePatternInfos_ {};
    // After you enable the alternative mode, if issues such as insufficient inventory occur, the system supplements the selected instance types with similar instance types of the same size, or creates vSwitches in alternative zones and adds them to the scaling group.
    shared_ptr<ModifyScalingConfigurationRequest::InstanceTypeCandidateOptions> instanceTypeCandidateOptions_ {};
    // The information about the specified instance types.
    shared_ptr<vector<ModifyScalingConfigurationRequest::InstanceTypeOverrides>> instanceTypeOverrides_ {};
    // The instance types. If you use \\`InstanceTypes\\`, \\`InstanceType\\` is ignored.
    // 
    // If an instance cannot be created using the instance type with a higher priority, Auto Scaling automatically uses the instance type with the next priority to create the instance.
    shared_ptr<vector<string>> instanceTypes_ {};
    // The billing method for network usage. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth. If you set the value to PayByBandwidth, the value of \\`InternetMaxBandwidthOut\\` is the selected fixed bandwidth.
    // 
    // - PayByTraffic: pay-by-data-transfer. If you set the value to PayByTraffic, the value of \\`InternetMaxBandwidthOut\\` is the maximum bandwidth, and the billing is based on the actual network traffic.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s. Value range:
    // 
    // - If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. The default value is 10.
    // 
    // - If the purchased outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `InternetMaxBandwidthOut`. The default value is the value of `InternetMaxBandwidthOut`.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is I/O optimized. Valid values:
    // 
    // - none: The instance is not I/O optimized.
    // 
    // - optimized: The instance is I/O optimized.
    shared_ptr<string> ioOptimized_ {};
    // The number of randomly generated IPv6 addresses to be assigned to the ENI.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // The name of the key pair that is used to log on to the ECS instance.
    // 
    // - For Windows instances, this parameter is ignored. The default value is empty.
    // 
    // - For Linux instances, password-based logon is disabled by default.
    shared_ptr<string> keyPairName_ {};
    // The weight of the backend server. Valid values: 1 to 100.
    shared_ptr<int32_t> loadBalancerWeight_ {};
    // The memory size. Unit: GiB.
    // 
    // You can specify both \\`Cpu\\` and \\`Memory\\` to define a range of instance types. For example, if you set \\`Cpu\\` to 2 and \\`Memory\\` to 16, all instance types with 2 vCPUs and 16 GiB of memory are matched. Auto Scaling determines the available instance types based on factors such as I/O optimization and zone, and then creates the instance of the lowest-priced instance type.
    // 
    // > This configuration is effective only when the cost optimization mode is enabled and no instance types are specified in the scaling configuration.
    shared_ptr<int32_t> memory_ {};
    // The list of ENIs.
    shared_ptr<vector<ModifyScalingConfigurationRequest::NetworkInterfaces>> networkInterfaces_ {};
    // Specifies whether to overwrite the parameter. Valid values:
    // 
    // - true: Overwrite the parameter.
    // 
    // - false: Do not overwrite the parameter.
    shared_ptr<bool> override_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the ECS instance. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters can be:
    // 
    // \\`()\\~!@#$%^&\\*-_+=|{}[]:;\\"<>,.?/
    // 
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If you specify the \\`Password\\` parameter, we recommend that you send requests over HTTPS to prevent password leaks.
    shared_ptr<string> password_ {};
    // Specifies whether to use the password that is preset in the image. If you use this parameter, make sure that a password is set for the image.
    shared_ptr<bool> passwordInherit_ {};
    // The name of the RAM role of the ECS instance. The RAM role is provided and maintained by RAM. You can call the ListRoles operation to query the available RAM roles. For information about how to create a RAM role, see API CreateRole.
    shared_ptr<string> ramRoleName_ {};
    // The ID of the resource group to which the ECS instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    // The resource pool policy to use when creating an instance. Note the following when you set this parameter:
    // 
    // - This parameter is in effect only when you create a pay-as-you-go instance.
    // 
    // - You cannot set this parameter and \\`PrivatePoolOptions.MatchCriteria\\` or \\`PrivatePoolOptions.Id\\` at the same time.
    shared_ptr<ModifyScalingConfigurationRequest::ResourcePoolOptions> resourcePoolOptions_ {};
    // The ID of the scaling configuration that you want to modify.
    // 
    // This parameter is required.
    shared_ptr<string> scalingConfigurationId_ {};
    // The name of the scaling configuration. The name must be 2 to 64 English or Chinese characters in length. It must start with a digit, a letter, or a Chinese character. The name can contain digits, underscores (_), hyphens (-), and periods (.).
    // 
    // The name of a scaling configuration must be unique within a scaling group in the same region. If you do not specify this parameter, the ID of the scaling configuration is used by default.
    shared_ptr<string> scalingConfigurationName_ {};
    // The scheduling options.
    Darabonba::Json schedulerOptions_ {};
    // The ID of the security group to which the ECS instance belongs. ECS instances in the same security group can access each other.
    shared_ptr<string> securityGroupId_ {};
    // The ID of the security group.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The security options.
    shared_ptr<ModifyScalingConfigurationRequest::SecurityOptions> securityOptions_ {};
    // The protection period of the spot instance. Unit: hours. Valid values:
    // 
    // - 1: Alibaba Cloud ensures that the instance runs for 1 hour and is not automatically released. After 1 hour, the system automatically compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // - 0: Alibaba Cloud does not ensure that the instance runs for 1 hour after it is created. The system automatically compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // > Alibaba Cloud sends a notification to you through ECS system events 5 minutes before the instance is released. Spot instances are billed by the second. Select a protection period based on the time required to complete your task.
    // 
    // Default value: 1.
    shared_ptr<int32_t> spotDuration_ {};
    // The interruption mode of the spot instance. Currently, only Terminate is supported, which is the default value. This value indicates that the instance is directly released.
    shared_ptr<string> spotInterruptionBehavior_ {};
    // The information about the spot instance types.
    shared_ptr<vector<ModifyScalingConfigurationRequest::SpotPriceLimits>> spotPriceLimits_ {};
    // The preemption policy for the pay-as-you-go instance. Valid values:
    // 
    // - NoSpot: a regular pay-as-you-go instance.
    // 
    // - SpotWithPriceLimit: a spot instance for which you specify the maximum hourly price.
    // 
    // - SpotAsPriceGo: a spot instance for which the system automatically bids based on the current market price.
    shared_ptr<string> spotStrategy_ {};
    // The ID of the storage set.
    shared_ptr<string> storageSetId_ {};
    // The maximum number of partitions in the storage set. The value must be an integer that is greater than or equal to 2.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // The categories of the system disk. If a disk of a category with a higher priority cannot be created, Auto Scaling automatically tries to create a disk of a category with the next priority. Valid values:
    // 
    // - cloud: basic disk.
    // 
    // - cloud_efficiency: ultra disk.
    // 
    // - cloud_ssd: standard SSD.
    // 
    // - cloud_essd: ESSD.
    // 
    // > You cannot specify this parameter and `SystemDisk.Category` at the same time.
    shared_ptr<vector<string>> systemDiskCategories_ {};
    // The tags of the ECS instance. You can specify up to 20 tags in key-value pairs. The following limits apply to keys and values:
    // 
    // - A key can be up to 64 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. If you specify tags, the key cannot be an empty string.
    // 
    // - A value can be up to 128 characters in length, cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`. The value can be an empty string.
    shared_ptr<string> tags_ {};
    // Specifies whether to create the instance on a dedicated host. Valid values:
    // 
    // - default: Create the instance not on a dedicated host.
    // 
    // - host: Create the instance on a dedicated host. If you do not specify \\`DedicatedHostId\\`, Alibaba Cloud automatically selects a dedicated host for the instance.
    shared_ptr<string> tenancy_ {};
    // The custom data of the ECS instance. The data must be Base64-encoded. The raw data can be up to 32 KB in size.
    shared_ptr<string> userData_ {};
    // The ID of the zone to which the ECS instance belongs.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
