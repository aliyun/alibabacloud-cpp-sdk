// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUEST_HPP_
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
  class RunInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_TO_JSON(HibernationOptions, hibernationOptions_);
      DARABONBA_PTR_TO_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_TO_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(Affinity, affinity_);
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ClockOptions, clockOptions_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostNames, hostNames_);
      DARABONBA_PTR_TO_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_TO_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
      DARABONBA_PTR_TO_JSON(HttpTokens, httpTokens_);
      DARABONBA_PTR_TO_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_TO_JSON(MinAmount, minAmount_);
      DARABONBA_PTR_TO_JSON(NetworkInterface, networkInterface_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceQueueNumber, networkInterfaceQueueNumber_);
      DARABONBA_PTR_TO_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_TO_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_TO_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_FROM_JSON(HibernationOptions, hibernationOptions_);
      DARABONBA_PTR_FROM_JSON(PrivatePoolOptions, privatePoolOptions_);
      DARABONBA_PTR_FROM_JSON(SchedulerOptions, schedulerOptions_);
      DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(Affinity, affinity_);
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ClockOptions, clockOptions_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetGroupNo, deploymentSetGroupNo_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostNames, hostNames_);
      DARABONBA_PTR_FROM_JSON(HpcClusterId, hpcClusterId_);
      DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_FROM_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
      DARABONBA_PTR_FROM_JSON(HttpTokens, httpTokens_);
      DARABONBA_PTR_FROM_JSON(ImageFamily, imageFamily_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersion, launchTemplateVersion_);
      DARABONBA_PTR_FROM_JSON(MinAmount, minAmount_);
      DARABONBA_PTR_FROM_JSON(NetworkInterface, networkInterface_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceQueueNumber, networkInterfaceQueueNumber_);
      DARABONBA_PTR_FROM_JSON(NetworkOptions, networkOptions_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsNameOptions, privateDnsNameOptions_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotInterruptionBehavior, spotInterruptionBehavior_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(StorageSetId, storageSetId_);
      DARABONBA_PTR_FROM_JSON(StorageSetPartitionNumber, storageSetPartitionNumber_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Tenancy, tenancy_);
      DARABONBA_PTR_FROM_JSON(UniqueSuffix, uniqueSuffix_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    RunInstancesRequest() = default ;
    RunInstancesRequest(const RunInstancesRequest &) = default ;
    RunInstancesRequest(RunInstancesRequest &&) = default ;
    RunInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequest() = default ;
    RunInstancesRequest& operator=(const RunInstancesRequest &) = default ;
    RunInstancesRequest& operator=(RunInstancesRequest &&) = default ;
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
      // The tag key for the instance, disks, and primary ENI. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value for the instance, disks, and primary ENI. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

    class PrivateDnsNameOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PrivateDnsNameOptions& obj) { 
        DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
        DARABONBA_PTR_TO_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
        DARABONBA_PTR_TO_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
        DARABONBA_PTR_TO_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
        DARABONBA_PTR_TO_JSON(HostnameType, hostnameType_);
      };
      friend void from_json(const Darabonba::Json& j, PrivateDnsNameOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsAAAARecord, enableInstanceIdDnsAAAARecord_);
        DARABONBA_PTR_FROM_JSON(EnableInstanceIdDnsARecord, enableInstanceIdDnsARecord_);
        DARABONBA_PTR_FROM_JSON(EnableIpDnsARecord, enableIpDnsARecord_);
        DARABONBA_PTR_FROM_JSON(EnableIpDnsPtrRecord, enableIpDnsPtrRecord_);
        DARABONBA_PTR_FROM_JSON(HostnameType, hostnameType_);
      };
      PrivateDnsNameOptions() = default ;
      PrivateDnsNameOptions(const PrivateDnsNameOptions &) = default ;
      PrivateDnsNameOptions(PrivateDnsNameOptions &&) = default ;
      PrivateDnsNameOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PrivateDnsNameOptions() = default ;
      PrivateDnsNameOptions& operator=(const PrivateDnsNameOptions &) = default ;
      PrivateDnsNameOptions& operator=(PrivateDnsNameOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->enableInstanceIdDnsAAAARecord_ == nullptr
        && this->enableInstanceIdDnsARecord_ == nullptr && this->enableIpDnsARecord_ == nullptr && this->enableIpDnsPtrRecord_ == nullptr && this->hostnameType_ == nullptr; };
      // enableInstanceIdDnsAAAARecord Field Functions 
      bool hasEnableInstanceIdDnsAAAARecord() const { return this->enableInstanceIdDnsAAAARecord_ != nullptr;};
      void deleteEnableInstanceIdDnsAAAARecord() { this->enableInstanceIdDnsAAAARecord_ = nullptr;};
      inline bool getEnableInstanceIdDnsAAAARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsAAAARecord_, false) };
      inline PrivateDnsNameOptions& setEnableInstanceIdDnsAAAARecord(bool enableInstanceIdDnsAAAARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsAAAARecord_, enableInstanceIdDnsAAAARecord) };


      // enableInstanceIdDnsARecord Field Functions 
      bool hasEnableInstanceIdDnsARecord() const { return this->enableInstanceIdDnsARecord_ != nullptr;};
      void deleteEnableInstanceIdDnsARecord() { this->enableInstanceIdDnsARecord_ = nullptr;};
      inline bool getEnableInstanceIdDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableInstanceIdDnsARecord_, false) };
      inline PrivateDnsNameOptions& setEnableInstanceIdDnsARecord(bool enableInstanceIdDnsARecord) { DARABONBA_PTR_SET_VALUE(enableInstanceIdDnsARecord_, enableInstanceIdDnsARecord) };


      // enableIpDnsARecord Field Functions 
      bool hasEnableIpDnsARecord() const { return this->enableIpDnsARecord_ != nullptr;};
      void deleteEnableIpDnsARecord() { this->enableIpDnsARecord_ = nullptr;};
      inline bool getEnableIpDnsARecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsARecord_, false) };
      inline PrivateDnsNameOptions& setEnableIpDnsARecord(bool enableIpDnsARecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsARecord_, enableIpDnsARecord) };


      // enableIpDnsPtrRecord Field Functions 
      bool hasEnableIpDnsPtrRecord() const { return this->enableIpDnsPtrRecord_ != nullptr;};
      void deleteEnableIpDnsPtrRecord() { this->enableIpDnsPtrRecord_ = nullptr;};
      inline bool getEnableIpDnsPtrRecord() const { DARABONBA_PTR_GET_DEFAULT(enableIpDnsPtrRecord_, false) };
      inline PrivateDnsNameOptions& setEnableIpDnsPtrRecord(bool enableIpDnsPtrRecord) { DARABONBA_PTR_SET_VALUE(enableIpDnsPtrRecord_, enableIpDnsPtrRecord) };


      // hostnameType Field Functions 
      bool hasHostnameType() const { return this->hostnameType_ != nullptr;};
      void deleteHostnameType() { this->hostnameType_ = nullptr;};
      inline string getHostnameType() const { DARABONBA_PTR_GET_DEFAULT(hostnameType_, "") };
      inline PrivateDnsNameOptions& setHostnameType(string hostnameType) { DARABONBA_PTR_SET_VALUE(hostnameType_, hostnameType) };


    protected:
      // Specifies whether to enable DNS resolution from the instance ID-based domain name to the IPv6 address. Valid values:
      // 
      // - true: enables the resolution.
      // 
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsAAAARecord_ {};
      // Specifies whether to enable DNS resolution from the instance ID-based domain name to the IPv4 address. Valid values:
      // 
      // - true: enables the resolution.
      // 
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsARecord_ {};
      // Specifies whether to enable DNS resolution from the IP-based domain name to the IPv4 address. Valid values:
      // 
      // - true: enables the resolution.
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsARecord_ {};
      // Specifies whether to enable reverse DNS resolution from the IPv4 address to the IP-based domain name. Valid values:
      // 
      // - true: enables the resolution.
      // - false: disables the resolution.
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsPtrRecord_ {};
      // The hostname type. Valid values:
      // 
      // - Custom: custom.
      // - IpBased: IP-based hostname.
      // - InstanceIdBased: instance ID-based hostname.
      // 
      // Default value: Custom.
      shared_ptr<string> hostnameType_ {};
    };

    class NetworkOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkOptions& obj) { 
        DARABONBA_PTR_TO_JSON(BandwidthWeighting, bandwidthWeighting_);
        DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_TO_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(BandwidthWeighting, bandwidthWeighting_);
        DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_FROM_JSON(EnableNetworkEncryption, enableNetworkEncryption_);
      };
      NetworkOptions() = default ;
      NetworkOptions(const NetworkOptions &) = default ;
      NetworkOptions(NetworkOptions &&) = default ;
      NetworkOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkOptions() = default ;
      NetworkOptions& operator=(const NetworkOptions &) = default ;
      NetworkOptions& operator=(NetworkOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bandwidthWeighting_ == nullptr
        && this->enableJumboFrame_ == nullptr && this->enableNetworkEncryption_ == nullptr; };
      // bandwidthWeighting Field Functions 
      bool hasBandwidthWeighting() const { return this->bandwidthWeighting_ != nullptr;};
      void deleteBandwidthWeighting() { this->bandwidthWeighting_ = nullptr;};
      inline string getBandwidthWeighting() const { DARABONBA_PTR_GET_DEFAULT(bandwidthWeighting_, "") };
      inline NetworkOptions& setBandwidthWeighting(string bandwidthWeighting) { DARABONBA_PTR_SET_VALUE(bandwidthWeighting_, bandwidthWeighting) };


      // enableJumboFrame Field Functions 
      bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
      void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
      inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
      inline NetworkOptions& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


      // enableNetworkEncryption Field Functions 
      bool hasEnableNetworkEncryption() const { return this->enableNetworkEncryption_ != nullptr;};
      void deleteEnableNetworkEncryption() { this->enableNetworkEncryption_ = nullptr;};
      inline bool getEnableNetworkEncryption() const { DARABONBA_PTR_GET_DEFAULT(enableNetworkEncryption_, false) };
      inline NetworkOptions& setEnableNetworkEncryption(bool enableNetworkEncryption) { DARABONBA_PTR_SET_VALUE(enableNetworkEncryption_, enableNetworkEncryption) };


    protected:
      // The bandwidth weight value of the instance. Different instance types support different value ranges. You can call DescribeInstanceTypes to query the supported bandwidth weight tiers for a specific instance type. The returned BandwidthWeighting field indicates the supported bandwidth weight tiers for that instance type. The dictionary value can be the name field in the returned values, such as Vpc-L1 or Ebs-L1.
      shared_ptr<string> bandwidthWeighting_ {};
      // Specifies whether to enable the Jumbo frame feature for the instance. Valid values:
      // 
      // - false: disables Jumbo frame. The MTU of all ENIs (including the primary ENI and secondary ENIs) on the instance is set to 1500.
      // 
      // - true: enables Jumbo frame. The MTU of all ENIs (including the primary ENI and secondary ENIs) on the instance is set to 8500.
      // 
      // Default value: true.
      // 
      // >Only some instance types of the eighth generation and later support the Jumbo frame feature. For more information, see [ECS instance MTU](https://help.aliyun.com/document_detail/200512.html).
      shared_ptr<bool> enableJumboFrame_ {};
      // > This parameter is in invitational preview and is not publicly available.
      shared_ptr<bool> enableNetworkEncryption_ {};
    };

    class NetworkInterface : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterface& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(Ipv6Address, ipv6Address_);
        DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_TO_JSON(NetworkCardIndex, networkCardIndex_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
        DARABONBA_PTR_TO_JSON(QueueNumber, queueNumber_);
        DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
        DARABONBA_PTR_TO_JSON(RxQueueSize, rxQueueSize_);
        DARABONBA_PTR_TO_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(SourceDestCheck, sourceDestCheck_);
        DARABONBA_PTR_TO_JSON(TxQueueSize, txQueueSize_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterface& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(Ipv6Address, ipv6Address_);
        DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
        DARABONBA_PTR_FROM_JSON(NetworkCardIndex, networkCardIndex_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
        DARABONBA_PTR_FROM_JSON(QueueNumber, queueNumber_);
        DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
        DARABONBA_PTR_FROM_JSON(RxQueueSize, rxQueueSize_);
        DARABONBA_PTR_FROM_JSON(SecondaryPrivateIpAddressCount, secondaryPrivateIpAddressCount_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_FROM_JSON(SourceDestCheck, sourceDestCheck_);
        DARABONBA_PTR_FROM_JSON(TxQueueSize, txQueueSize_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      NetworkInterface() = default ;
      NetworkInterface(const NetworkInterface &) = default ;
      NetworkInterface(NetworkInterface &&) = default ;
      NetworkInterface(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NetworkInterface() = default ;
      NetworkInterface& operator=(const NetworkInterface &) = default ;
      NetworkInterface& operator=(NetworkInterface &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->deleteOnRelease_ == nullptr
        && this->description_ == nullptr && this->instanceType_ == nullptr && this->ipv6Address_ == nullptr && this->ipv6AddressCount_ == nullptr && this->networkCardIndex_ == nullptr
        && this->networkInterfaceId_ == nullptr && this->networkInterfaceName_ == nullptr && this->networkInterfaceTrafficMode_ == nullptr && this->primaryIpAddress_ == nullptr && this->queueNumber_ == nullptr
        && this->queuePairNumber_ == nullptr && this->rxQueueSize_ == nullptr && this->secondaryPrivateIpAddressCount_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr
        && this->sourceDestCheck_ == nullptr && this->txQueueSize_ == nullptr && this->vSwitchId_ == nullptr; };
      // deleteOnRelease Field Functions 
      bool hasDeleteOnRelease() const { return this->deleteOnRelease_ != nullptr;};
      void deleteDeleteOnRelease() { this->deleteOnRelease_ = nullptr;};
      inline bool getDeleteOnRelease() const { DARABONBA_PTR_GET_DEFAULT(deleteOnRelease_, false) };
      inline NetworkInterface& setDeleteOnRelease(bool deleteOnRelease) { DARABONBA_PTR_SET_VALUE(deleteOnRelease_, deleteOnRelease) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline NetworkInterface& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // instanceType Field Functions 
      bool hasInstanceType() const { return this->instanceType_ != nullptr;};
      void deleteInstanceType() { this->instanceType_ = nullptr;};
      inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
      inline NetworkInterface& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


      // ipv6Address Field Functions 
      bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
      void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
      inline const vector<string> & getIpv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
      inline vector<string> getIpv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
      inline NetworkInterface& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
      inline NetworkInterface& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


      // ipv6AddressCount Field Functions 
      bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
      void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
      inline int64_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0L) };
      inline NetworkInterface& setIpv6AddressCount(int64_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


      // networkCardIndex Field Functions 
      bool hasNetworkCardIndex() const { return this->networkCardIndex_ != nullptr;};
      void deleteNetworkCardIndex() { this->networkCardIndex_ = nullptr;};
      inline int32_t getNetworkCardIndex() const { DARABONBA_PTR_GET_DEFAULT(networkCardIndex_, 0) };
      inline NetworkInterface& setNetworkCardIndex(int32_t networkCardIndex) { DARABONBA_PTR_SET_VALUE(networkCardIndex_, networkCardIndex) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline NetworkInterface& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // networkInterfaceName Field Functions 
      bool hasNetworkInterfaceName() const { return this->networkInterfaceName_ != nullptr;};
      void deleteNetworkInterfaceName() { this->networkInterfaceName_ = nullptr;};
      inline string getNetworkInterfaceName() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceName_, "") };
      inline NetworkInterface& setNetworkInterfaceName(string networkInterfaceName) { DARABONBA_PTR_SET_VALUE(networkInterfaceName_, networkInterfaceName) };


      // networkInterfaceTrafficMode Field Functions 
      bool hasNetworkInterfaceTrafficMode() const { return this->networkInterfaceTrafficMode_ != nullptr;};
      void deleteNetworkInterfaceTrafficMode() { this->networkInterfaceTrafficMode_ = nullptr;};
      inline string getNetworkInterfaceTrafficMode() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceTrafficMode_, "") };
      inline NetworkInterface& setNetworkInterfaceTrafficMode(string networkInterfaceTrafficMode) { DARABONBA_PTR_SET_VALUE(networkInterfaceTrafficMode_, networkInterfaceTrafficMode) };


      // primaryIpAddress Field Functions 
      bool hasPrimaryIpAddress() const { return this->primaryIpAddress_ != nullptr;};
      void deletePrimaryIpAddress() { this->primaryIpAddress_ = nullptr;};
      inline string getPrimaryIpAddress() const { DARABONBA_PTR_GET_DEFAULT(primaryIpAddress_, "") };
      inline NetworkInterface& setPrimaryIpAddress(string primaryIpAddress) { DARABONBA_PTR_SET_VALUE(primaryIpAddress_, primaryIpAddress) };


      // queueNumber Field Functions 
      bool hasQueueNumber() const { return this->queueNumber_ != nullptr;};
      void deleteQueueNumber() { this->queueNumber_ = nullptr;};
      inline int32_t getQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(queueNumber_, 0) };
      inline NetworkInterface& setQueueNumber(int32_t queueNumber) { DARABONBA_PTR_SET_VALUE(queueNumber_, queueNumber) };


      // queuePairNumber Field Functions 
      bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
      void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
      inline int64_t getQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0L) };
      inline NetworkInterface& setQueuePairNumber(int64_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


      // rxQueueSize Field Functions 
      bool hasRxQueueSize() const { return this->rxQueueSize_ != nullptr;};
      void deleteRxQueueSize() { this->rxQueueSize_ = nullptr;};
      inline int32_t getRxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(rxQueueSize_, 0) };
      inline NetworkInterface& setRxQueueSize(int32_t rxQueueSize) { DARABONBA_PTR_SET_VALUE(rxQueueSize_, rxQueueSize) };


      // secondaryPrivateIpAddressCount Field Functions 
      bool hasSecondaryPrivateIpAddressCount() const { return this->secondaryPrivateIpAddressCount_ != nullptr;};
      void deleteSecondaryPrivateIpAddressCount() { this->secondaryPrivateIpAddressCount_ = nullptr;};
      inline int32_t getSecondaryPrivateIpAddressCount() const { DARABONBA_PTR_GET_DEFAULT(secondaryPrivateIpAddressCount_, 0) };
      inline NetworkInterface& setSecondaryPrivateIpAddressCount(int32_t secondaryPrivateIpAddressCount) { DARABONBA_PTR_SET_VALUE(secondaryPrivateIpAddressCount_, secondaryPrivateIpAddressCount) };


      // securityGroupId Field Functions 
      bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
      void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
      inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
      inline NetworkInterface& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


      // securityGroupIds Field Functions 
      bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
      void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
      inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
      inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
      inline NetworkInterface& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
      inline NetworkInterface& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


      // sourceDestCheck Field Functions 
      bool hasSourceDestCheck() const { return this->sourceDestCheck_ != nullptr;};
      void deleteSourceDestCheck() { this->sourceDestCheck_ = nullptr;};
      inline bool getSourceDestCheck() const { DARABONBA_PTR_GET_DEFAULT(sourceDestCheck_, false) };
      inline NetworkInterface& setSourceDestCheck(bool sourceDestCheck) { DARABONBA_PTR_SET_VALUE(sourceDestCheck_, sourceDestCheck) };


      // txQueueSize Field Functions 
      bool hasTxQueueSize() const { return this->txQueueSize_ != nullptr;};
      void deleteTxQueueSize() { this->txQueueSize_ = nullptr;};
      inline int32_t getTxQueueSize() const { DARABONBA_PTR_GET_DEFAULT(txQueueSize_, 0) };
      inline NetworkInterface& setTxQueueSize(int32_t txQueueSize) { DARABONBA_PTR_SET_VALUE(txQueueSize_, txQueueSize) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline NetworkInterface& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // Specifies whether to retain the ENI when the instance is released. Valid values:
      // 
      // - true: does not retain the ENI.
      // 
      // - false: retains the ENI.
      // 
      // Default value: true.
      // 
      // >This parameter takes effect only for secondary ENIs.
      shared_ptr<bool> deleteOnRelease_ {};
      // The description of the ENI.
      // 
      // Note the following items:
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      // - The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you do not need to set this parameter.
      shared_ptr<string> description_ {};
      // The type of the ENI. The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      // 
      // Valid values:
      // 
      // - Primary: primary ENI.
      // - Secondary: secondary ENI.
      // 
      // Default value: Secondary.
      shared_ptr<string> instanceType_ {};
      // Specifies one or more IPv6 addresses for the primary ENI. You can specify up to 10 IPv6 addresses. Valid values of the second N: 1 to 10.
      // 
      // Example: `Ipv6Address.1=2001:db8:1234:1a00::***`
      // 
      // Note the following items:
      // 
      // - This parameter takes effect only when `NetworkInterface.N.InstanceType` is set to `Primary`. If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, you cannot set this parameter.
      // 
      // - After you set this parameter, the value of `Amount` can only be 1, and you cannot set `Ipv6AddressCount`, `Ipv6Address.N`, or `NetworkInterface.N.Ipv6AddressCount`.
      shared_ptr<vector<string>> ipv6Address_ {};
      // The number of randomly generated IPv6 addresses for the primary ENI. Valid values: 1 to 10.
      // 
      // Note the following items:
      // 
      // - This parameter takes effect only when `NetworkInterface.N.InstanceType` is set to `Primary`. If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, you cannot set this parameter.
      // 
      // - After you set this parameter, you cannot set `Ipv6AddressCount`, `Ipv6Address.N`, or `NetworkInterface.N.Ipv6Address.N`.
      shared_ptr<int64_t> ipv6AddressCount_ {};
      // The index of the physical network card specified for the network interface controller (NIC).
      // 
      // Note the following items:
      // - Only specific instance types support specifying a physical network card index.
      // - If NetworkInterface.N.InstanceType is set to Primary, for instance types that support physical network cards, this parameter can only be set to 0.
      // - If NetworkInterface.N.InstanceType is set to Secondary or left empty, for instance types that support physical network cards, this parameter can be set based on the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<int32_t> networkCardIndex_ {};
      // The ID of the ENI to attach to the instance.
      // 
      // After you set this parameter, the value of `Amount` can only be 1.
      // 
      // >This parameter takes effect only for secondary ENIs. After you specify an existing secondary ENI, you cannot configure other network interface controller (NIC) creation parameters.
      shared_ptr<string> networkInterfaceId_ {};
      // The name of the ENI. The name must be 2 to 128 characters in length and can contain letters, digits, and characters that are supported by Unicode in the letter categorization. The name can contain colons (:), underscores (_), periods (.), or hyphens (-).
      // 
      // Note the following items:
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you do not need to set this parameter.
      shared_ptr<string> networkInterfaceName_ {};
      // The communication mode of the network interface controller (NIC). Valid values:
      // 
      // - Standard: uses the TCP communication mode.
      // - HighPerformance: enables the Elastic RDMA Interface (ERI) and uses the RDMA communication mode.
      // 
      // Default value: Standard.
      // 
      // >The number of Elastic Network Interfaces (ENIs) in RDMA mode cannot exceed the limit of the instance family. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // Adds an ENI and sets the primary IP address.
      // 
      // Note the following items:
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      //     - When you set one ENI, you can set one primary ENI or one secondary ENI. If the value of `Amount` is greater than 1 and you set the primary ENI with this parameter specified, consecutive primary IP addresses starting from the specified IP address are allocated to multiple ECS instances during batch creation. In this case, you cannot attach secondary ENIs to the instances.
      //     - If the value of `Amount` is greater than 1 and this parameter is set for the primary ENI, you cannot set a secondary ENI (that is, you cannot set `NetworkInterface.2.InstanceType=Secondary`).
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, this parameter has the same effect as `PrivateIpAddress`, but you cannot specify the `PrivateIpAddress` parameter at the same time.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, this parameter specifies the primary IP address of the secondary ENI. By default, an IP address is randomly selected from the CIDR block of the vSwitch to which the ENI belongs.
      // 
      // >- The first and last three IP addresses of each vSwitch CIDR block are system reserved IP addresses and cannot be specified.
      // For example, if the CIDR block of the vSwitch is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are system reserved IP addresses.
      shared_ptr<string> primaryIpAddress_ {};
      // The number of queues for the ENI.
      // 
      // Note the following items:
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      // 
      // - The value cannot exceed the maximum number of queues per ENI allowed by the instance type.
      // 
      // - The total number of queues for all ENIs on the instance cannot exceed the queue quota allowed by the instance type. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the `MaximumQueueNumberPerEni` and `TotalEniQueueQuantity` fields for the maximum number of queues per ENI and the total quota.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Primary` and this parameter is set, you cannot set the `NetworkInterfaceQueueNumber` parameter.
      shared_ptr<int32_t> queueNumber_ {};
      // The number of queues for the RDMA ENI.
      // 
      // If you want to attach multiple RDMA ENIs to the instance, we recommend that you manually specify QueuePairNumber for each ENI based on the upper limit of QueuePairNumber supported by the instance type and the number of ENIs you plan to use. Make sure that the total QueuePairNumber of all ENIs does not exceed the maximum value allowed by the instance type. Call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the upper limit of the instance type.
      // 
      // >Notice: If QueuePairNumber is not specified for an RDMA ENI, the upper limit of QueuePairNumber supported by the instance type is used by default. Therefore, after you attach one RDMA ENI without specifying QueuePairNumber, you cannot attach more RDMA ENIs (regular ENIs are not affected by this limit).
      shared_ptr<int64_t> queuePairNumber_ {};
      // The inbound queue depth of the network interface controller (NIC).
      // 
      // 
      // <props="china">
      // 
      // >This parameter is in invitational preview and is not publicly available. If you need to use this feature, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex) to request access.
      // 
      // 
      // 
      // 
      // 
      // 
      // <props="intl">
      // 
      // > This parameter is in invitational preview and is not publicly available. If you need to use this feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl) to request access.
      // 
      // 
      // 
      // Note the following items when you use this parameter:
      // 
      // - This parameter is applicable only to seventh-generation and later ECS instance types.
      // 
      // - This parameter is currently applicable only to Linux images.
      // 
      // - A larger inbound queue depth can improve inbound throughput and reduce packet loss, but consumes more memory.
      shared_ptr<int32_t> rxQueueSize_ {};
      // The number of secondary private IPv4 addresses to allocate to the network interface controller (NIC). Valid values: 1 to 49.
      // 
      // - The value cannot exceed the IP address limit for the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
      // - `NetworkInterface.N.SecondaryPrivateIpAddressCount` specifies the number of secondary private IPv4 addresses to allocate to the network interface controller (NIC) (excluding the primary private IP address of the NIC). The system randomly allocates IP addresses from the available CIDR block of the vSwitch (`NetworkInterface.N.VSwitchId`) to which the network interface controller (NIC) belongs.
      shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
      // The ID of the security group to which the ENI belongs.
      // 
      // Note the following items:
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you must set this parameter. In this case, this parameter has the same effect as `SecurityGroupId`, but you cannot specify `SecurityGroupId`, `SecurityGroupIds.N`, or `NetworkInterface.N.SecurityGroupIds.N`.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, this parameter is optional. Default value: the security group of the ECS instance.
      shared_ptr<string> securityGroupId_ {};
      // The IDs of one or more security groups to which the ENI belongs.
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      // - The second N indicates that you can specify one or more security group IDs. The valid values of N depend on the maximum number of security groups to which an instance can belong. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
      // 
      // Note the following items:
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you must set this parameter or `NetworkInterface.N.SecurityGroupId`. In this case, this parameter has the same effect as `SecurityGroupIds.N`, but you cannot specify `SecurityGroupId`, `SecurityGroupIds.N`, or `NetworkInterface.N.SecurityGroupId`.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, this parameter is optional. Default value: the security group of the ECS instance.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // Specifies whether to enable source/destination checking. We recommend that you enable this feature to improve network security. Valid values:
      // 
      // - true: enables source/destination checking.
      // 
      // - false: disables source/destination checking.
      // 
      // Default value: false.
      // 
      // > This feature is supported only in specific regions. Before you use this feature, read [Source/destination checking](https://help.aliyun.com/document_detail/2863210.html).
      shared_ptr<bool> sourceDestCheck_ {};
      // The outbound queue depth of the network interface controller (NIC).
      // 
      // 
      // <props="china">
      // 
      // >This parameter is in invitational preview and is not publicly available. If you need to use this feature, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex) to request access.
      // 
      // 
      // 
      // 
      // 
      // 
      // <props="intl">
      // 
      // > This parameter is in invitational preview and is not publicly available. If you need to use this feature, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl) to request access.
      // 
      // 
      // 
      // Note the following items when you use this parameter:
      // 
      // - This parameter is applicable only to seventh-generation and later ECS instance types.
      // 
      // - This parameter is currently applicable only to Linux images.
      // 
      // - A larger outbound queue depth can improve outbound throughput and reduce packet loss, but consumes more memory.
      shared_ptr<int32_t> txQueueSize_ {};
      // The ID of the vSwitch to which the ENI belongs.
      // 
      // Note the following items:
      // 
      // - The valid values of N do not exceed the number of network interface controllers (NICs) supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.  
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you must set this parameter. In this case, this parameter has the same effect as `VSwitchId`, but you cannot specify the `VSwitchId` parameter at the same time.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, this parameter is optional. Default value: the vSwitch to which the ECS instance belongs.
      shared_ptr<string> vSwitchId_ {};
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
      // Specifies whether the instance that uses this image supports logon with the ecs-user user. Valid values:
      // 
      // - true: supported.
      // 
      // - false: not supported.
      shared_ptr<bool> loginAsNonRoot_ {};
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
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_TO_JSON(StorageClusterId, storageClusterId_);
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
        DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(SnapshotId, snapshotId_);
        DARABONBA_PTR_FROM_JSON(StorageClusterId, storageClusterId_);
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
        && this->diskName_ == nullptr && this->encryptAlgorithm_ == nullptr && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr && this->performanceLevel_ == nullptr
        && this->provisionedIops_ == nullptr && this->size_ == nullptr && this->snapshotId_ == nullptr && this->storageClusterId_ == nullptr; };
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
      inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
      inline DataDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // KMSKeyId Field Functions 
      bool hasKMSKeyId() const { return this->KMSKeyId_ != nullptr;};
      void deleteKMSKeyId() { this->KMSKeyId_ = nullptr;};
      inline string getKMSKeyId() const { DARABONBA_PTR_GET_DEFAULT(KMSKeyId_, "") };
      inline DataDisk& setKMSKeyId(string KMSKeyId) { DARABONBA_PTR_SET_VALUE(KMSKeyId_, KMSKeyId) };


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


      // storageClusterId Field Functions 
      bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
      void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
      inline string getStorageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
      inline DataDisk& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    protected:
      // The ID of the automatic snapshot policy to apply to the data disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the performance burst feature. Valid values:
      // 
      // - true: enables the performance burst feature.
      // - false: does not enable the performance burst feature.
      // 
      // >This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The category of data disk N. Valid values:
      // 
      // - cloud_efficiency: ultra disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: enterprise SSD (ESSD).
      // - cloud: basic disk.
      // - cloud_auto: ESSD AutoPL disk.
      // - cloud_regional_disk_auto: regional ESSD.
      // - cloud_essd_entry: ESSD Entry disk.
      //   >The `cloud_essd_entry` value is supported only when `InstanceType` is set to an instance type in the `ecs.u1` or `ecs.e` instance family.
      // - elastic_ephemeral_disk_standard: elastic ephemeral disk - Standard Edition.
      // - elastic_ephemeral_disk_premium: elastic ephemeral disk - Premium Edition.
      // 
      // For I/O optimized instances, the default value is cloud_efficiency. For non-I/O optimized instances, the default value is cloud.
      // Default value description:
      // 
      // - If InstanceType is a retired instance type that is non-I/O optimized, the default value is `cloud`.
      // - In other cases, the default value is `cloud_efficiency`.<props="china">After January 30, 2026, if the I/O optimized instance type does not support cloud_auto, the default value is cloud_efficiency. Otherwise, the default value is cloud_auto, and performance burst is enabled by default (which incurs additional fees. For more information, see [Billing examples](~~368372#p_75k_2hp_7gp~~)). For more information, see [Change notice](https://www.aliyun.com/notice/117844).
      shared_ptr<string> category_ {};
      // Specifies whether to release the data disk when the instance is released. Valid values:
      // - true: releases the data disk when the instance is released.
      // - false: does not release the data disk when the instance is released.
      // 
      // Default value: true.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the data disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of the data disk. The naming conventions for mount points vary based on the number of data disks attached:
      // 
      // - 1 to 25 data disks: /dev/xvd`[b-z]`
      // 
      // - More than 25 data disks: /dev/xvd`[aa-zz]`. For example, the 26th data disk is named /dev/xvdaa, the 27th data disk is named /dev/xvdab, and so on.
      // 
      // > - This parameter is applicable only to full image (system image) scenarios. You can set this parameter to the mount point of a data disk in the full image and modify the corresponding `DataDisk.N.Size` and `DataDisk.N.Category` parameters to change the disk type and size of the data disk in the full image.
      // > - When you use a full image to create an instance, the data disks in the full image are created as the first 1 to n data disks of the ECS instance.
      shared_ptr<string> device_ {};
      // The name of the data disk. The name must be 2 to 128 characters in length and can contain letters, digits, and characters that are supported by Unicode in the letter category. The name can contain colons (:), underscores (_), periods (.), or hyphens (-).
      shared_ptr<string> diskName_ {};
      // >This parameter is not publicly available.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt data disk N. Valid values:
      // - true: encrypts the data disk.
      // - false: does not encrypt the data disk.
      // 
      // Default value: false.
      // 
      // 
      // >Notice: When you use a shared encrypted image to create a disk based on an encrypted snapshot, you must specify the request parameter Encrypted=true to ensure that the created disk uses the key of the image recipient.
      shared_ptr<string> encrypted_ {};
      // The ID of the Key Management Service (KMS) key for the data disk.
      // 
      // > If Encrypted is set to true and KMSKeyId is not specified, the default key is used for encryption. The KMSKeyId value is returned after the instance is created.
      // > - - If the disk is created from a non-shared encrypted snapshot: The encryption key used by the snapshot is used by default.
      // > - - If the disk is created from a shared encrypted snapshot: The service key is used by default.
      // > - - If the disk is created in a region where account-level default encryption for block storage is enabled: The specified account-level key is used by default.
      // > - - In other cases: The service key is used by default.
      shared_ptr<string> KMSKeyId_ {};
      // Settings the performance level of the data disk when you create an enterprise SSD as a data disk. The value of N must be consistent with the N in `DataDisk.N.Category=cloud_essd`. Valid values:
      // 
      // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
      // - PL1 (default): A single disk can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × Capacity - Baseline performance}.
      // 
      // Baseline performance = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // >This parameter is supported only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
      // 
      // - cloud_efficiency: 20 to 32768.
      // - cloud_ssd: 20 to 32768.
      // - cloud_essd: The valid value range depends on the value of `DataDisk.N.PerformanceLevel`. 
      //     - PL0: 1 to 65,536.
      //     - PL1: 20 to 65,536.
      //     - PL2: 461 to 65,536.
      //     - PL3: 1261 to 65,536.
      // - cloud: 5 to 2000.
      // - cloud_auto: 1 to 65,536.
      // - cloud_essd_entry: 10 to 32768.
      // 
      // >The value of this parameter must be greater than or equal to the size of the snapshot specified by `SnapshotId`.
      shared_ptr<int32_t> size_ {};
      // The ID of the snapshot to use to create data disk N. Valid values of N: 1 to 16.
      // 
      // After you specify `DataDisk.N.SnapshotId`, `DataDisk.N.Size` is ignored and the disk is created with the size of the specified snapshot. Snapshots created on or before July 15, 2013 cannot be used. Requests that use such snapshots are rejected.
      shared_ptr<string> snapshotId_ {};
      // The ID of the dedicated block storage cluster. If you want to use a disk in a dedicated block storage cluster as the data disk when you create an ECS instance, set this parameter.
      shared_ptr<string> storageClusterId_ {};
    };

    class ClockOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClockOptions& obj) { 
        DARABONBA_PTR_TO_JSON(PtpStatus, ptpStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ClockOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(PtpStatus, ptpStatus_);
      };
      ClockOptions() = default ;
      ClockOptions(const ClockOptions &) = default ;
      ClockOptions(ClockOptions &&) = default ;
      ClockOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClockOptions() = default ;
      ClockOptions& operator=(const ClockOptions &) = default ;
      ClockOptions& operator=(ClockOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ptpStatus_ == nullptr; };
      // ptpStatus Field Functions 
      bool hasPtpStatus() const { return this->ptpStatus_ != nullptr;};
      void deletePtpStatus() { this->ptpStatus_ = nullptr;};
      inline string getPtpStatus() const { DARABONBA_PTR_GET_DEFAULT(ptpStatus_, "") };
      inline ClockOptions& setPtpStatus(string ptpStatus) { DARABONBA_PTR_SET_VALUE(ptpStatus_, ptpStatus) };


    protected:
      // The PTP status. Valid values:
      // 
      // - enabled: enables PTP.
      // 
      // - disabled: disables PTP.
      // 
      // Default value: disabled.
      shared_ptr<string> ptpStatus_ {};
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
      // >This parameter is not publicly available.
      shared_ptr<int64_t> assumeRoleFor_ {};
      // >This parameter is not publicly available.
      shared_ptr<string> roleType_ {};
      // >This parameter is not publicly available.
      shared_ptr<string> rolearn_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskName, diskName_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
        DARABONBA_PTR_TO_JSON(EncryptAlgorithm, encryptAlgorithm_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_TO_JSON(StorageClusterId, storageClusterId_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
        DARABONBA_PTR_FROM_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
        DARABONBA_PTR_FROM_JSON(EncryptAlgorithm, encryptAlgorithm_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_FROM_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_FROM_JSON(StorageClusterId, storageClusterId_);
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
        && this->category_ == nullptr && this->description_ == nullptr && this->diskName_ == nullptr && this->performanceLevel_ == nullptr && this->size_ == nullptr
        && this->burstingEnabled_ == nullptr && this->encryptAlgorithm_ == nullptr && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr && this->provisionedIops_ == nullptr
        && this->storageClusterId_ == nullptr; };
      // autoSnapshotPolicyId Field Functions 
      bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
      void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
      inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
      inline SystemDisk& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


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


      // performanceLevel Field Functions 
      bool hasPerformanceLevel() const { return this->performanceLevel_ != nullptr;};
      void deletePerformanceLevel() { this->performanceLevel_ = nullptr;};
      inline string getPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(performanceLevel_, "") };
      inline SystemDisk& setPerformanceLevel(string performanceLevel) { DARABONBA_PTR_SET_VALUE(performanceLevel_, performanceLevel) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline SystemDisk& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


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


      // storageClusterId Field Functions 
      bool hasStorageClusterId() const { return this->storageClusterId_ != nullptr;};
      void deleteStorageClusterId() { this->storageClusterId_ = nullptr;};
      inline string getStorageClusterId() const { DARABONBA_PTR_GET_DEFAULT(storageClusterId_, "") };
      inline SystemDisk& setStorageClusterId(string storageClusterId) { DARABONBA_PTR_SET_VALUE(storageClusterId_, storageClusterId) };


    protected:
      // The ID of the automatic snapshot policy applied to the system disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // The category of the system disk. Valid values:
      // 
      // - cloud_efficiency: ultra disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: enterprise SSD (ESSD).
      // - cloud: basic disk.
      // - cloud_auto: ESSD AutoPL disk.
      // - cloud_essd_entry: ESSD Entry disk.
      // 
      // Default value description:
      // 
      // - If InstanceType is a retired instance type that is not I/O optimized, the default value is `cloud`.
      // - In other cases, the default value is `cloud_efficiency`.<props="china"> After January 30, 2026, for instance types that support only cloud_essd, the default value changes from cloud_efficiency to cloud_essd PL0. For more information, refer to [Change notice](https://www.aliyun.com/notice/117844).
      // 
      // >This parameter supports the value `cloud_essd_entry` only when `InstanceType` is set to the [u1, universal instance family](https://help.aliyun.com/document_detail/457079.html) (`ecs.u1`) or the [e, economy instance family](https://help.aliyun.com/document_detail/108489.html) (`ecs.e`).
      shared_ptr<string> category_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length and can contain characters from the Unicode letter category (including English letters, Chinese characters, and digits). It can also contain colons (:), underscores (_), periods (.), or hyphens (-).
      shared_ptr<string> diskName_ {};
      // The performance level of the enterprise SSD used as the system disk. This parameter takes effect only when you create an enterprise SSD as the system disk. Valid values:
      // 
      // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
      // - PL1 (default): A single disk can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For information about how to select an ESSD performance level, refer to [Enterprise SSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The size of the system disk, in GiB. Valid values:
      // 
      // - Basic disk: 20 to 500.
      // - Enterprise SSD:
      //   - PL0: 1 to 2048.
      //   - PL1: 20 to 2048.
      //   - PL2: 461 to 2048.
      //   - PL3: 1261 to 2048.
      // - ESSD AutoPL disk: 1 to 2048.
      // - Other disk types: 20 to 2048.
      // 
      // The value of this parameter must be greater than or equal to max{1, ImageSize}.
      // 
      // Default value: max{40, size of the image specified by the ImageId parameter}.
      shared_ptr<string> size_ {};
      // Specifies whether to enable the performance burst feature. Valid values:
      // 
      // - true: enables the performance burst feature.
      // - false: does not enable the performance burst feature.
      // 
      // >This parameter is supported only when `SystemDisk.Category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // >This parameter is not publicly available.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt the system disk. Valid values:
      // 
      // - true: encrypts the system disk.
      // 
      // - false: does not encrypt the system disk.
      // 
      // Default value: false.
      // 
      // >Hong Kong (China) Zone D and Singapore Zone A do not support system disk encryption during instance creation.
      // 
      // >Notice: When you use a shared encrypted image to create a disk based on an encrypted snapshot, you must specify the request parameter Encrypted=true to ensure that the created disk uses the key of the image recipient.
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key for the system disk.
      // 
      // > If Encrypted is set to true and KMSKeyId is not specified, the default key is used for encryption. The KMSKeyId value is returned after the instance is created.
      // > - - If the disk is created from a non-shared encrypted snapshot: The encryption key used by the snapshot is used by default.
      // > - - If the disk is created from a shared encrypted snapshot: The service key is used by default.
      // > - - If the disk is created in a region where account-level default encryption for block storage is enabled: The specified account-level key is used by default.
      // > - - In other cases: The service key is used by default.
      shared_ptr<string> KMSKeyId_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × Capacity - Baseline performance}.
      // 
      // Baseline performance = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // >This parameter is supported only when `SystemDisk.Category` is set to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> provisionedIops_ {};
      // The ID of the dedicated block storage cluster. If you want to use a disk in a dedicated block storage cluster as the system disk when you create an ECS instance, set this parameter.
      shared_ptr<string> storageClusterId_ {};
    };

    class SecurityOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityOptions& obj) { 
        DARABONBA_PTR_TO_JSON(ConfidentialComputingMode, confidentialComputingMode_);
        DARABONBA_PTR_TO_JSON(TrustedSystemMode, trustedSystemMode_);
        DARABONBA_PTR_TO_JSON(EnableSecureBoot, enableSecureBoot_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfidentialComputingMode, confidentialComputingMode_);
        DARABONBA_PTR_FROM_JSON(TrustedSystemMode, trustedSystemMode_);
        DARABONBA_PTR_FROM_JSON(EnableSecureBoot, enableSecureBoot_);
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
      virtual bool empty() const override { return this->confidentialComputingMode_ == nullptr
        && this->trustedSystemMode_ == nullptr && this->enableSecureBoot_ == nullptr; };
      // confidentialComputingMode Field Functions 
      bool hasConfidentialComputingMode() const { return this->confidentialComputingMode_ != nullptr;};
      void deleteConfidentialComputingMode() { this->confidentialComputingMode_ = nullptr;};
      inline string getConfidentialComputingMode() const { DARABONBA_PTR_GET_DEFAULT(confidentialComputingMode_, "") };
      inline SecurityOptions& setConfidentialComputingMode(string confidentialComputingMode) { DARABONBA_PTR_SET_VALUE(confidentialComputingMode_, confidentialComputingMode) };


      // trustedSystemMode Field Functions 
      bool hasTrustedSystemMode() const { return this->trustedSystemMode_ != nullptr;};
      void deleteTrustedSystemMode() { this->trustedSystemMode_ = nullptr;};
      inline string getTrustedSystemMode() const { DARABONBA_PTR_GET_DEFAULT(trustedSystemMode_, "") };
      inline SecurityOptions& setTrustedSystemMode(string trustedSystemMode) { DARABONBA_PTR_SET_VALUE(trustedSystemMode_, trustedSystemMode) };


      // enableSecureBoot Field Functions 
      bool hasEnableSecureBoot() const { return this->enableSecureBoot_ != nullptr;};
      void deleteEnableSecureBoot() { this->enableSecureBoot_ = nullptr;};
      inline bool getEnableSecureBoot() const { DARABONBA_PTR_GET_DEFAULT(enableSecureBoot_, false) };
      inline SecurityOptions& setEnableSecureBoot(bool enableSecureBoot) { DARABONBA_PTR_SET_VALUE(enableSecureBoot_, enableSecureBoot) };


    protected:
      // The confidential computing mode. Set the value to Enclave.
      // 
      // When this parameter is set to Enclave, the ECS instance uses Enclave to build a confidential computing environment. Currently, only instance families c7, g7, and r7 support specifying this parameter when you call `RunInstances` to use Enclave confidential computing. Take note of the following items:
      // 
      // - The confidential computing feature is in invitational preview.
      // 
      // - When you create an ECS instance with Enclave confidential computing by calling an OpenAPI operation, you can only call `RunInstances`. `CreateInstance` does not support the `SecurityOptions.ConfidentialComputingMode` parameter.
      // 
      // - Enclave confidential computing relies on the trusted system (vTPM). When you specify that an ECS instance uses Enclave to build a confidential computing environment, the trusted system is also enabled for the instance. Therefore, when you call this operation, if you set `SecurityOptions.ConfidentialComputingMode=Enclave`, the created ECS instance has both Enclave confidential computing mode and the trusted system enabled, regardless of whether you set `SecurityOptions.TrustedSystemMode=vTPM`.
      // 
      // For more information about confidential computing, see [Build a confidential computing environment by using Enclave](https://help.aliyun.com/document_detail/203433.html).
      shared_ptr<string> confidentialComputingMode_ {};
      // The trusted system mode. Set the value to vTPM.
      // 
      // The following instance families support the trusted system mode:
      // - g7, c7, and r7.
      // - Security-enhanced instance families (g7t, c7t, and r7t).
      // 
      // When you create instances of the preceding instance families, you must set this parameter. Take note of the following items:
      // 
      // - To use Alibaba Cloud Trusted System, set this parameter to vTPM. Then, Alibaba Cloud Trusted System performs trusted verification when the instance starts.
      // - If you do not want to use Alibaba Cloud Trusted System, you can leave this parameter empty. However, if the ECS instance that you create uses the Enclave confidential computing mode (`SecurityOptions.ConfidentialComputingMode=Enclave`), the trusted system is also enabled for the instance.
      // - When you create a trusted ECS instance by calling an OpenAPI operation, you can only call `RunInstances`. `CreateInstance` does not support the `SecurityOptions.TrustedSystemMode` parameter.
      // >If you specify the instance as a trusted instance during creation, you can only use images that support the trusted system when you replace the system disk.
      // 
      // For more information about the trusted system, see [Overview of the trusted feature for security-enhanced instance families](https://help.aliyun.com/document_detail/201394.html).
      shared_ptr<string> trustedSystemMode_ {};
      shared_ptr<bool> enableSecureBoot_ {};
    };

    class SchedulerOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SchedulerOptions& obj) { 
        DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      };
      friend void from_json(const Darabonba::Json& j, SchedulerOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
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
      virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr; };
      // dedicatedHostClusterId Field Functions 
      bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
      void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
      inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
      inline SchedulerOptions& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    protected:
      // Specifies the dedicated host cluster to which the ECS instance belongs. The system automatically selects a dedicated host in the cluster to deploy the ECS instance.
      // 
      // > This parameter takes effect only when `Tenancy` is set to `host`.
      // 
      // If you specify both a dedicated host (`DedicatedHostId`) and a dedicated host cluster (`SchedulerOptions.DedicatedHostClusterId`):
      // - If the dedicated host belongs to the dedicated host cluster, the ECS instance is preferentially deployed on the specified dedicated host.
      // - If the dedicated host does not belong to the dedicated host cluster, the ECS instance fails to be created.
      // 
      // <props="china">You can call the [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) operation to query the list of dedicated host cluster IDs.
      // 
      // <props="intl">You can call the [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) operation to query the list of dedicated host cluster IDs.
      // 
      // <props="partner">You can call the [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) operation to query the list of dedicated host cluster IDs.
      shared_ptr<string> dedicatedHostClusterId_ {};
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
      // The private pool ID, which is the ID of the elasticity assurance or capacity reservation.
      shared_ptr<string> id_ {};
      // The private pool option for launching the instance. After an elasticity assurance or capacity reservation takes effect, a private pool is generated for the instance to select during launch. Valid values:
      // 
      // - Open: open mode. The system automatically matches available open private pool capacity. If no matching private pool capacity is available, public pool resources are used to launch the instance. In this mode, you do not need to set `PrivatePoolOptions.Id`.
      // - Target: specified mode. The instance is launched by using the capacity of the specified private pool. If the specified private pool capacity is unavailable, the instance fails to launch. In this mode, you must specify the private pool ID, that is, `PrivatePoolOptions.Id` is required.
      // - None: none mode. The instance does not use private pool capacity for launch.
      // 
      // Default value: None.
      // 
      // In any of the following scenarios, the private pool option can only be set to `None` or left empty:
      // - Creating a spot instance.
      // - Creating an ECS instance on a dedicated host.
      shared_ptr<string> matchCriteria_ {};
    };

    class HibernationOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const HibernationOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Configured, configured_);
      };
      friend void from_json(const Darabonba::Json& j, HibernationOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Configured, configured_);
      };
      HibernationOptions() = default ;
      HibernationOptions(const HibernationOptions &) = default ;
      HibernationOptions(HibernationOptions &&) = default ;
      HibernationOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~HibernationOptions() = default ;
      HibernationOptions& operator=(const HibernationOptions &) = default ;
      HibernationOptions& operator=(HibernationOptions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configured_ == nullptr; };
      // configured Field Functions 
      bool hasConfigured() const { return this->configured_ != nullptr;};
      void deleteConfigured() { this->configured_ = nullptr;};
      inline bool getConfigured() const { DARABONBA_PTR_GET_DEFAULT(configured_, false) };
      inline HibernationOptions& setConfigured(bool configured) { DARABONBA_PTR_SET_VALUE(configured_, configured) };


    protected:
      // >This parameter is in invitational preview and is not publicly available.
      shared_ptr<bool> configured_ {};
    };

    class CpuOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CpuOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Core, core_);
        DARABONBA_PTR_TO_JSON(Numa, numa_);
        DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_TO_JSON(NestedVirtualization, nestedVirtualization_);
      };
      friend void from_json(const Darabonba::Json& j, CpuOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Core, core_);
        DARABONBA_PTR_FROM_JSON(Numa, numa_);
        DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
        DARABONBA_PTR_FROM_JSON(NestedVirtualization, nestedVirtualization_);
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
        && this->numa_ == nullptr && this->threadsPerCore_ == nullptr && this->topologyType_ == nullptr && this->nestedVirtualization_ == nullptr; };
      // core Field Functions 
      bool hasCore() const { return this->core_ != nullptr;};
      void deleteCore() { this->core_ = nullptr;};
      inline int32_t getCore() const { DARABONBA_PTR_GET_DEFAULT(core_, 0) };
      inline CpuOptions& setCore(int32_t core) { DARABONBA_PTR_SET_VALUE(core_, core) };


      // numa Field Functions 
      bool hasNuma() const { return this->numa_ != nullptr;};
      void deleteNuma() { this->numa_ = nullptr;};
      inline string getNuma() const { DARABONBA_PTR_GET_DEFAULT(numa_, "") };
      inline CpuOptions& setNuma(string numa) { DARABONBA_PTR_SET_VALUE(numa_, numa) };


      // threadsPerCore Field Functions 
      bool hasThreadsPerCore() const { return this->threadsPerCore_ != nullptr;};
      void deleteThreadsPerCore() { this->threadsPerCore_ = nullptr;};
      inline int32_t getThreadsPerCore() const { DARABONBA_PTR_GET_DEFAULT(threadsPerCore_, 0) };
      inline CpuOptions& setThreadsPerCore(int32_t threadsPerCore) { DARABONBA_PTR_SET_VALUE(threadsPerCore_, threadsPerCore) };


      // topologyType Field Functions 
      bool hasTopologyType() const { return this->topologyType_ != nullptr;};
      void deleteTopologyType() { this->topologyType_ = nullptr;};
      inline string getTopologyType() const { DARABONBA_PTR_GET_DEFAULT(topologyType_, "") };
      inline CpuOptions& setTopologyType(string topologyType) { DARABONBA_PTR_SET_VALUE(topologyType_, topologyType) };


      // nestedVirtualization Field Functions 
      bool hasNestedVirtualization() const { return this->nestedVirtualization_ != nullptr;};
      void deleteNestedVirtualization() { this->nestedVirtualization_ = nullptr;};
      inline string getNestedVirtualization() const { DARABONBA_PTR_GET_DEFAULT(nestedVirtualization_, "") };
      inline CpuOptions& setNestedVirtualization(string nestedVirtualization) { DARABONBA_PTR_SET_VALUE(nestedVirtualization_, nestedVirtualization) };


    protected:
      // The number of CPU cores.
      // 
      // <props="china">Default value: For more information, see [Customize CPU options](https://help.aliyun.com/document_detail/145895.html).
      shared_ptr<int32_t> core_ {};
      // This parameter is deprecated.
      shared_ptr<string> numa_ {};
      // The number of threads per CPU core. The number of vCPUs of the ECS instance = `CpuOptions.Core` value × `CpuOptions.ThreadsPerCore` value.
      // 
      // - `CpuOptions.ThreadsPerCore=1` indicates that CPU hyper-threading is disabled.
      // 
      // - Only specific instance types support setting the number of threads per CPU core.
      // 
      // <props="china">For information about valid values and default values, see [Customize CPU options](https://help.aliyun.com/document_detail/145895.html).
      shared_ptr<int32_t> threadsPerCore_ {};
      // The CPU topology type of the instance. Valid values:
      // 
      // - ContinuousCoreToHTMapping: The hyper-threads (HTs) within the same core of the instance CPU topology are continuous.
      // - DiscreteCoreToHTMapping: The HTs within the same core of the instance are discrete.
      // 
      // Default value: null.
      // 
      // >Only specific instance families support this parameter. For information about supported instance families, see [View and modify the CPU topology structure](https://help.aliyun.com/document_detail/2636059.html).
      shared_ptr<string> topologyType_ {};
      // > This parameter is in invitational preview and is not publicly available.
      shared_ptr<string> nestedVirtualization_ {};
    };

    virtual bool empty() const override { return this->cpuOptions_ == nullptr
        && this->hibernationOptions_ == nullptr && this->privatePoolOptions_ == nullptr && this->schedulerOptions_ == nullptr && this->securityOptions_ == nullptr && this->systemDisk_ == nullptr
        && this->affinity_ == nullptr && this->amount_ == nullptr && this->arn_ == nullptr && this->autoPay_ == nullptr && this->autoReleaseTime_ == nullptr
        && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->clientToken_ == nullptr && this->clockOptions_ == nullptr && this->creditSpecification_ == nullptr
        && this->dataDisk_ == nullptr && this->dedicatedHostId_ == nullptr && this->deletionProtection_ == nullptr && this->deploymentSetGroupNo_ == nullptr && this->deploymentSetId_ == nullptr
        && this->description_ == nullptr && this->dryRun_ == nullptr && this->hostName_ == nullptr && this->hostNames_ == nullptr && this->hpcClusterId_ == nullptr
        && this->httpEndpoint_ == nullptr && this->httpPutResponseHopLimit_ == nullptr && this->httpTokens_ == nullptr && this->imageFamily_ == nullptr && this->imageId_ == nullptr
        && this->imageOptions_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->ipv6Address_ == nullptr && this->ipv6AddressCount_ == nullptr
        && this->isp_ == nullptr && this->keyPairName_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateName_ == nullptr && this->launchTemplateVersion_ == nullptr
        && this->minAmount_ == nullptr && this->networkInterface_ == nullptr && this->networkInterfaceQueueNumber_ == nullptr && this->networkOptions_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->password_ == nullptr && this->passwordInherit_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->privateDnsNameOptions_ == nullptr && this->privateIpAddress_ == nullptr && this->ramRoleName_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr
        && this->spotDuration_ == nullptr && this->spotInterruptionBehavior_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr && this->storageSetId_ == nullptr
        && this->storageSetPartitionNumber_ == nullptr && this->tag_ == nullptr && this->tenancy_ == nullptr && this->uniqueSuffix_ == nullptr && this->userData_ == nullptr
        && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
    // cpuOptions Field Functions 
    bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
    void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
    inline const RunInstancesRequest::CpuOptions & getCpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, RunInstancesRequest::CpuOptions) };
    inline RunInstancesRequest::CpuOptions getCpuOptions() { DARABONBA_PTR_GET(cpuOptions_, RunInstancesRequest::CpuOptions) };
    inline RunInstancesRequest& setCpuOptions(const RunInstancesRequest::CpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
    inline RunInstancesRequest& setCpuOptions(RunInstancesRequest::CpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


    // hibernationOptions Field Functions 
    bool hasHibernationOptions() const { return this->hibernationOptions_ != nullptr;};
    void deleteHibernationOptions() { this->hibernationOptions_ = nullptr;};
    inline const RunInstancesRequest::HibernationOptions & getHibernationOptions() const { DARABONBA_PTR_GET_CONST(hibernationOptions_, RunInstancesRequest::HibernationOptions) };
    inline RunInstancesRequest::HibernationOptions getHibernationOptions() { DARABONBA_PTR_GET(hibernationOptions_, RunInstancesRequest::HibernationOptions) };
    inline RunInstancesRequest& setHibernationOptions(const RunInstancesRequest::HibernationOptions & hibernationOptions) { DARABONBA_PTR_SET_VALUE(hibernationOptions_, hibernationOptions) };
    inline RunInstancesRequest& setHibernationOptions(RunInstancesRequest::HibernationOptions && hibernationOptions) { DARABONBA_PTR_SET_RVALUE(hibernationOptions_, hibernationOptions) };


    // privatePoolOptions Field Functions 
    bool hasPrivatePoolOptions() const { return this->privatePoolOptions_ != nullptr;};
    void deletePrivatePoolOptions() { this->privatePoolOptions_ = nullptr;};
    inline const RunInstancesRequest::PrivatePoolOptions & getPrivatePoolOptions() const { DARABONBA_PTR_GET_CONST(privatePoolOptions_, RunInstancesRequest::PrivatePoolOptions) };
    inline RunInstancesRequest::PrivatePoolOptions getPrivatePoolOptions() { DARABONBA_PTR_GET(privatePoolOptions_, RunInstancesRequest::PrivatePoolOptions) };
    inline RunInstancesRequest& setPrivatePoolOptions(const RunInstancesRequest::PrivatePoolOptions & privatePoolOptions) { DARABONBA_PTR_SET_VALUE(privatePoolOptions_, privatePoolOptions) };
    inline RunInstancesRequest& setPrivatePoolOptions(RunInstancesRequest::PrivatePoolOptions && privatePoolOptions) { DARABONBA_PTR_SET_RVALUE(privatePoolOptions_, privatePoolOptions) };


    // schedulerOptions Field Functions 
    bool hasSchedulerOptions() const { return this->schedulerOptions_ != nullptr;};
    void deleteSchedulerOptions() { this->schedulerOptions_ = nullptr;};
    inline const RunInstancesRequest::SchedulerOptions & getSchedulerOptions() const { DARABONBA_PTR_GET_CONST(schedulerOptions_, RunInstancesRequest::SchedulerOptions) };
    inline RunInstancesRequest::SchedulerOptions getSchedulerOptions() { DARABONBA_PTR_GET(schedulerOptions_, RunInstancesRequest::SchedulerOptions) };
    inline RunInstancesRequest& setSchedulerOptions(const RunInstancesRequest::SchedulerOptions & schedulerOptions) { DARABONBA_PTR_SET_VALUE(schedulerOptions_, schedulerOptions) };
    inline RunInstancesRequest& setSchedulerOptions(RunInstancesRequest::SchedulerOptions && schedulerOptions) { DARABONBA_PTR_SET_RVALUE(schedulerOptions_, schedulerOptions) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const RunInstancesRequest::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, RunInstancesRequest::SecurityOptions) };
    inline RunInstancesRequest::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, RunInstancesRequest::SecurityOptions) };
    inline RunInstancesRequest& setSecurityOptions(const RunInstancesRequest::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline RunInstancesRequest& setSecurityOptions(RunInstancesRequest::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const RunInstancesRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, RunInstancesRequest::SystemDisk) };
    inline RunInstancesRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, RunInstancesRequest::SystemDisk) };
    inline RunInstancesRequest& setSystemDisk(const RunInstancesRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline RunInstancesRequest& setSystemDisk(RunInstancesRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // affinity Field Functions 
    bool hasAffinity() const { return this->affinity_ != nullptr;};
    void deleteAffinity() { this->affinity_ = nullptr;};
    inline string getAffinity() const { DARABONBA_PTR_GET_DEFAULT(affinity_, "") };
    inline RunInstancesRequest& setAffinity(string affinity) { DARABONBA_PTR_SET_VALUE(affinity_, affinity) };


    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline RunInstancesRequest& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline const vector<RunInstancesRequest::Arn> & getArn() const { DARABONBA_PTR_GET_CONST(arn_, vector<RunInstancesRequest::Arn>) };
    inline vector<RunInstancesRequest::Arn> getArn() { DARABONBA_PTR_GET(arn_, vector<RunInstancesRequest::Arn>) };
    inline RunInstancesRequest& setArn(const vector<RunInstancesRequest::Arn> & arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };
    inline RunInstancesRequest& setArn(vector<RunInstancesRequest::Arn> && arn) { DARABONBA_PTR_SET_RVALUE(arn_, arn) };


    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline RunInstancesRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline RunInstancesRequest& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline RunInstancesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline RunInstancesRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RunInstancesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // clockOptions Field Functions 
    bool hasClockOptions() const { return this->clockOptions_ != nullptr;};
    void deleteClockOptions() { this->clockOptions_ = nullptr;};
    inline const RunInstancesRequest::ClockOptions & getClockOptions() const { DARABONBA_PTR_GET_CONST(clockOptions_, RunInstancesRequest::ClockOptions) };
    inline RunInstancesRequest::ClockOptions getClockOptions() { DARABONBA_PTR_GET(clockOptions_, RunInstancesRequest::ClockOptions) };
    inline RunInstancesRequest& setClockOptions(const RunInstancesRequest::ClockOptions & clockOptions) { DARABONBA_PTR_SET_VALUE(clockOptions_, clockOptions) };
    inline RunInstancesRequest& setClockOptions(RunInstancesRequest::ClockOptions && clockOptions) { DARABONBA_PTR_SET_RVALUE(clockOptions_, clockOptions) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline RunInstancesRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<RunInstancesRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<RunInstancesRequest::DataDisk>) };
    inline vector<RunInstancesRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<RunInstancesRequest::DataDisk>) };
    inline RunInstancesRequest& setDataDisk(const vector<RunInstancesRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline RunInstancesRequest& setDataDisk(vector<RunInstancesRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline RunInstancesRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline RunInstancesRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetGroupNo Field Functions 
    bool hasDeploymentSetGroupNo() const { return this->deploymentSetGroupNo_ != nullptr;};
    void deleteDeploymentSetGroupNo() { this->deploymentSetGroupNo_ = nullptr;};
    inline int32_t getDeploymentSetGroupNo() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetGroupNo_, 0) };
    inline RunInstancesRequest& setDeploymentSetGroupNo(int32_t deploymentSetGroupNo) { DARABONBA_PTR_SET_VALUE(deploymentSetGroupNo_, deploymentSetGroupNo) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline RunInstancesRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RunInstancesRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline RunInstancesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline RunInstancesRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostNames Field Functions 
    bool hasHostNames() const { return this->hostNames_ != nullptr;};
    void deleteHostNames() { this->hostNames_ = nullptr;};
    inline const vector<string> & getHostNames() const { DARABONBA_PTR_GET_CONST(hostNames_, vector<string>) };
    inline vector<string> getHostNames() { DARABONBA_PTR_GET(hostNames_, vector<string>) };
    inline RunInstancesRequest& setHostNames(const vector<string> & hostNames) { DARABONBA_PTR_SET_VALUE(hostNames_, hostNames) };
    inline RunInstancesRequest& setHostNames(vector<string> && hostNames) { DARABONBA_PTR_SET_RVALUE(hostNames_, hostNames) };


    // hpcClusterId Field Functions 
    bool hasHpcClusterId() const { return this->hpcClusterId_ != nullptr;};
    void deleteHpcClusterId() { this->hpcClusterId_ = nullptr;};
    inline string getHpcClusterId() const { DARABONBA_PTR_GET_DEFAULT(hpcClusterId_, "") };
    inline RunInstancesRequest& setHpcClusterId(string hpcClusterId) { DARABONBA_PTR_SET_VALUE(hpcClusterId_, hpcClusterId) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline RunInstancesRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpPutResponseHopLimit Field Functions 
    bool hasHttpPutResponseHopLimit() const { return this->httpPutResponseHopLimit_ != nullptr;};
    void deleteHttpPutResponseHopLimit() { this->httpPutResponseHopLimit_ = nullptr;};
    inline int32_t getHttpPutResponseHopLimit() const { DARABONBA_PTR_GET_DEFAULT(httpPutResponseHopLimit_, 0) };
    inline RunInstancesRequest& setHttpPutResponseHopLimit(int32_t httpPutResponseHopLimit) { DARABONBA_PTR_SET_VALUE(httpPutResponseHopLimit_, httpPutResponseHopLimit) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline RunInstancesRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageFamily Field Functions 
    bool hasImageFamily() const { return this->imageFamily_ != nullptr;};
    void deleteImageFamily() { this->imageFamily_ = nullptr;};
    inline string getImageFamily() const { DARABONBA_PTR_GET_DEFAULT(imageFamily_, "") };
    inline RunInstancesRequest& setImageFamily(string imageFamily) { DARABONBA_PTR_SET_VALUE(imageFamily_, imageFamily) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline RunInstancesRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const RunInstancesRequest::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, RunInstancesRequest::ImageOptions) };
    inline RunInstancesRequest::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, RunInstancesRequest::ImageOptions) };
    inline RunInstancesRequest& setImageOptions(const RunInstancesRequest::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline RunInstancesRequest& setImageOptions(RunInstancesRequest::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline RunInstancesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline RunInstancesRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline RunInstancesRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline RunInstancesRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline RunInstancesRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline RunInstancesRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline RunInstancesRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6Address Field Functions 
    bool hasIpv6Address() const { return this->ipv6Address_ != nullptr;};
    void deleteIpv6Address() { this->ipv6Address_ = nullptr;};
    inline const vector<string> & getIpv6Address() const { DARABONBA_PTR_GET_CONST(ipv6Address_, vector<string>) };
    inline vector<string> getIpv6Address() { DARABONBA_PTR_GET(ipv6Address_, vector<string>) };
    inline RunInstancesRequest& setIpv6Address(const vector<string> & ipv6Address) { DARABONBA_PTR_SET_VALUE(ipv6Address_, ipv6Address) };
    inline RunInstancesRequest& setIpv6Address(vector<string> && ipv6Address) { DARABONBA_PTR_SET_RVALUE(ipv6Address_, ipv6Address) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline RunInstancesRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline RunInstancesRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline RunInstancesRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline RunInstancesRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline string getLaunchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
    inline RunInstancesRequest& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


    // launchTemplateVersion Field Functions 
    bool hasLaunchTemplateVersion() const { return this->launchTemplateVersion_ != nullptr;};
    void deleteLaunchTemplateVersion() { this->launchTemplateVersion_ = nullptr;};
    inline int64_t getLaunchTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateVersion_, 0L) };
    inline RunInstancesRequest& setLaunchTemplateVersion(int64_t launchTemplateVersion) { DARABONBA_PTR_SET_VALUE(launchTemplateVersion_, launchTemplateVersion) };


    // minAmount Field Functions 
    bool hasMinAmount() const { return this->minAmount_ != nullptr;};
    void deleteMinAmount() { this->minAmount_ = nullptr;};
    inline int32_t getMinAmount() const { DARABONBA_PTR_GET_DEFAULT(minAmount_, 0) };
    inline RunInstancesRequest& setMinAmount(int32_t minAmount) { DARABONBA_PTR_SET_VALUE(minAmount_, minAmount) };


    // networkInterface Field Functions 
    bool hasNetworkInterface() const { return this->networkInterface_ != nullptr;};
    void deleteNetworkInterface() { this->networkInterface_ = nullptr;};
    inline const vector<RunInstancesRequest::NetworkInterface> & getNetworkInterface() const { DARABONBA_PTR_GET_CONST(networkInterface_, vector<RunInstancesRequest::NetworkInterface>) };
    inline vector<RunInstancesRequest::NetworkInterface> getNetworkInterface() { DARABONBA_PTR_GET(networkInterface_, vector<RunInstancesRequest::NetworkInterface>) };
    inline RunInstancesRequest& setNetworkInterface(const vector<RunInstancesRequest::NetworkInterface> & networkInterface) { DARABONBA_PTR_SET_VALUE(networkInterface_, networkInterface) };
    inline RunInstancesRequest& setNetworkInterface(vector<RunInstancesRequest::NetworkInterface> && networkInterface) { DARABONBA_PTR_SET_RVALUE(networkInterface_, networkInterface) };


    // networkInterfaceQueueNumber Field Functions 
    bool hasNetworkInterfaceQueueNumber() const { return this->networkInterfaceQueueNumber_ != nullptr;};
    void deleteNetworkInterfaceQueueNumber() { this->networkInterfaceQueueNumber_ = nullptr;};
    inline int32_t getNetworkInterfaceQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceQueueNumber_, 0) };
    inline RunInstancesRequest& setNetworkInterfaceQueueNumber(int32_t networkInterfaceQueueNumber) { DARABONBA_PTR_SET_VALUE(networkInterfaceQueueNumber_, networkInterfaceQueueNumber) };


    // networkOptions Field Functions 
    bool hasNetworkOptions() const { return this->networkOptions_ != nullptr;};
    void deleteNetworkOptions() { this->networkOptions_ = nullptr;};
    inline const RunInstancesRequest::NetworkOptions & getNetworkOptions() const { DARABONBA_PTR_GET_CONST(networkOptions_, RunInstancesRequest::NetworkOptions) };
    inline RunInstancesRequest::NetworkOptions getNetworkOptions() { DARABONBA_PTR_GET(networkOptions_, RunInstancesRequest::NetworkOptions) };
    inline RunInstancesRequest& setNetworkOptions(const RunInstancesRequest::NetworkOptions & networkOptions) { DARABONBA_PTR_SET_VALUE(networkOptions_, networkOptions) };
    inline RunInstancesRequest& setNetworkOptions(RunInstancesRequest::NetworkOptions && networkOptions) { DARABONBA_PTR_SET_RVALUE(networkOptions_, networkOptions) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline RunInstancesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RunInstancesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline RunInstancesRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline RunInstancesRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline RunInstancesRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline RunInstancesRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // privateDnsNameOptions Field Functions 
    bool hasPrivateDnsNameOptions() const { return this->privateDnsNameOptions_ != nullptr;};
    void deletePrivateDnsNameOptions() { this->privateDnsNameOptions_ = nullptr;};
    inline const RunInstancesRequest::PrivateDnsNameOptions & getPrivateDnsNameOptions() const { DARABONBA_PTR_GET_CONST(privateDnsNameOptions_, RunInstancesRequest::PrivateDnsNameOptions) };
    inline RunInstancesRequest::PrivateDnsNameOptions getPrivateDnsNameOptions() { DARABONBA_PTR_GET(privateDnsNameOptions_, RunInstancesRequest::PrivateDnsNameOptions) };
    inline RunInstancesRequest& setPrivateDnsNameOptions(const RunInstancesRequest::PrivateDnsNameOptions & privateDnsNameOptions) { DARABONBA_PTR_SET_VALUE(privateDnsNameOptions_, privateDnsNameOptions) };
    inline RunInstancesRequest& setPrivateDnsNameOptions(RunInstancesRequest::PrivateDnsNameOptions && privateDnsNameOptions) { DARABONBA_PTR_SET_RVALUE(privateDnsNameOptions_, privateDnsNameOptions) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline RunInstancesRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline RunInstancesRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RunInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline RunInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline RunInstancesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline RunInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline RunInstancesRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline RunInstancesRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline RunInstancesRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline RunInstancesRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline RunInstancesRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotInterruptionBehavior Field Functions 
    bool hasSpotInterruptionBehavior() const { return this->spotInterruptionBehavior_ != nullptr;};
    void deleteSpotInterruptionBehavior() { this->spotInterruptionBehavior_ = nullptr;};
    inline string getSpotInterruptionBehavior() const { DARABONBA_PTR_GET_DEFAULT(spotInterruptionBehavior_, "") };
    inline RunInstancesRequest& setSpotInterruptionBehavior(string spotInterruptionBehavior) { DARABONBA_PTR_SET_VALUE(spotInterruptionBehavior_, spotInterruptionBehavior) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline RunInstancesRequest& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline RunInstancesRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // storageSetId Field Functions 
    bool hasStorageSetId() const { return this->storageSetId_ != nullptr;};
    void deleteStorageSetId() { this->storageSetId_ = nullptr;};
    inline string getStorageSetId() const { DARABONBA_PTR_GET_DEFAULT(storageSetId_, "") };
    inline RunInstancesRequest& setStorageSetId(string storageSetId) { DARABONBA_PTR_SET_VALUE(storageSetId_, storageSetId) };


    // storageSetPartitionNumber Field Functions 
    bool hasStorageSetPartitionNumber() const { return this->storageSetPartitionNumber_ != nullptr;};
    void deleteStorageSetPartitionNumber() { this->storageSetPartitionNumber_ = nullptr;};
    inline int32_t getStorageSetPartitionNumber() const { DARABONBA_PTR_GET_DEFAULT(storageSetPartitionNumber_, 0) };
    inline RunInstancesRequest& setStorageSetPartitionNumber(int32_t storageSetPartitionNumber) { DARABONBA_PTR_SET_VALUE(storageSetPartitionNumber_, storageSetPartitionNumber) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<RunInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<RunInstancesRequest::Tag>) };
    inline vector<RunInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<RunInstancesRequest::Tag>) };
    inline RunInstancesRequest& setTag(const vector<RunInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline RunInstancesRequest& setTag(vector<RunInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tenancy Field Functions 
    bool hasTenancy() const { return this->tenancy_ != nullptr;};
    void deleteTenancy() { this->tenancy_ = nullptr;};
    inline string getTenancy() const { DARABONBA_PTR_GET_DEFAULT(tenancy_, "") };
    inline RunInstancesRequest& setTenancy(string tenancy) { DARABONBA_PTR_SET_VALUE(tenancy_, tenancy) };


    // uniqueSuffix Field Functions 
    bool hasUniqueSuffix() const { return this->uniqueSuffix_ != nullptr;};
    void deleteUniqueSuffix() { this->uniqueSuffix_ = nullptr;};
    inline bool getUniqueSuffix() const { DARABONBA_PTR_GET_DEFAULT(uniqueSuffix_, false) };
    inline RunInstancesRequest& setUniqueSuffix(bool uniqueSuffix) { DARABONBA_PTR_SET_VALUE(uniqueSuffix_, uniqueSuffix) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline RunInstancesRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline RunInstancesRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline RunInstancesRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<RunInstancesRequest::CpuOptions> cpuOptions_ {};
    shared_ptr<RunInstancesRequest::HibernationOptions> hibernationOptions_ {};
    shared_ptr<RunInstancesRequest::PrivatePoolOptions> privatePoolOptions_ {};
    shared_ptr<RunInstancesRequest::SchedulerOptions> schedulerOptions_ {};
    shared_ptr<RunInstancesRequest::SecurityOptions> securityOptions_ {};
    shared_ptr<RunInstancesRequest::SystemDisk> systemDisk_ {};
    // Specifies whether the instance on a dedicated host is associated with the dedicated host. Valid values:
    // 
    // - default: The instance is not associated with the dedicated host. When an instance that has the economical mode enabled is restarted after it is stopped, if the original dedicated host has insufficient resources, the instance is placed on another dedicated host in the automatic deployment resource pool.
    // 
    // - host: The instance is associated with the dedicated host. When an instance that has the economical mode enabled is restarted after it is stopped, the instance remains on the original dedicated host. If the original dedicated host has insufficient resources, the instance fails to restart.
    // 
    // Default value: default.
    shared_ptr<string> affinity_ {};
    // The number of ECS instances to create. Valid values: 1 to 100.
    // 
    // The number of successfully created ECS instances depends on the specified Amount and minAmount values:
    // 
    // - If minAmount is not specified: Instances are created based on the Amount value. If inventory is insufficient, the API returns a failure and no instances are created.
    // 
    // - If minAmount is specified:
    //   - If ECS inventory < minAmount: No instances are created and the API returns a failure.
    //   - If minAmount ≤ ECS inventory < Amount: Instances are created based on the available inventory and the API returns success.
    //   - If ECS inventory ≥ Amount: Instances are created based on the specified Amount and the API returns success.
    // 
    // Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // >This parameter is not publicly available.
    shared_ptr<vector<RunInstancesRequest::Arn>> arn_ {};
    // Specifies whether to automatically complete automatic payment when you create the instance. Valid values:
    // 
    // - true: automatically completes automatic payment.
    // 
    //     > Make sure that your payment method has a sufficient balance. Otherwise, an abnormal order is generated and can only be canceled. If your payment method has an insufficient balance, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the ECS console to pay for the order.
    // 
    // - false: generates the order without completing automatic payment.
    // 
    //     > If `InstanceChargeType` is set to `PostPaid`, `AutoPay` cannot be set to `false`.
    // 
    // Default value: true.
    shared_ptr<bool> autoPay_ {};
    // The automatic release time of the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the UTC+0 time zone. The format is `yyyy-MM-ddTHH:mm:ssZ`.
    // 
    // - If the seconds (`ss`) value is not `00`, it is automatically set to the start of the current minute (`mm`).
    // 
    // - The earliest release time is 30 minutes after the current time.
    // 
    // - The latest release time cannot exceed three years from the current time.
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to enable auto-renewal. This parameter takes effect only when `InstanceChargeType` is set to `PrePaid`. Valid values:
    // 
    // - true: Enable auto-renewal.
    // - false: Disable auto-renewal.
    // 
    // Default value: false.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal period for each renewal. Valid values: 
    //          
    // <props="china">
    // - When PeriodUnit=Week: 1, 2, or 3.
    // - When PeriodUnit=Month: 1, 2, 3, 6, 12, 24, 36, 48, or 60.
    // 
    // 
    // 
    // <props="intl">When PeriodUnit=Month: 1, 2, 3, 6, 12, 24, 36, 48, or 60.
    // 
    // Default value: 1.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // A client token used to ensure the idempotence of the request. Generate a unique value from your client. **ClientToken** supports only ASCII characters and cannot exceed 64 characters in length. For more information, refer to [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The clock-related property parameters of the instance.
    shared_ptr<RunInstancesRequest::ClockOptions> clockOptions_ {};
    // The running mode of the burstable instance. Valid values:
    // 
    // - Standard: standard mode. For more information, see the "Performance constrained mode" section in [What are burstable instances?](https://help.aliyun.com/document_detail/59977.html).
    // - Unlimited: unlimited mode. For more information, see the "Unlimited mode" section in [What are burstable instances?](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The list of data disk information.
    shared_ptr<vector<RunInstancesRequest::DataDisk>> dataDisk_ {};
    // The ID of the dedicated host.
    // <props="china">You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the list of dedicated host IDs.
    // 
    // <props="intl">You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the list of dedicated host IDs.
    // 
    // >Notice: Dedicated hosts do not support the creation of spot instances. If you specify `DedicatedHostId`, the `SpotStrategy` and `SpotPriceLimit` settings in the request are automatically ignored.
    shared_ptr<string> dedicatedHostId_ {};
    // Specifies whether to enable release protection for the instance. This parameter determines whether the instance can be released from the console or by calling the [DeleteInstance](https://help.aliyun.com/document_detail/25507.html) operation. Valid values: 
    // 
    // - true: enables release protection.
    // - false: disables release protection.
    // 
    // Default value: false.
    // 
    // > This parameter is applicable only to pay-as-you-go instances. It can only restrict manual release operations but does not take effect on system-initiated release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The group number of the instance in the deployment set when the deployment set uses the high availability group strategy (AvailabilityGroup). Valid values: 1 to 7.
    shared_ptr<int32_t> deploymentSetGroupNo_ {};
    // The ID of the deployment set.
    shared_ptr<string> deploymentSetId_ {};
    // The description of the instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform only a dry run. Valid values:
    // 
    // - true: Only a dry run is performed. The system checks whether required parameters are specified, whether the request format is valid, whether business restrictions are met, and whether ECS inventory is sufficient. If the check fails, the corresponding error is returned. If the check succeeds, the error code `DryRunOperation` is returned.
    // - false (default): A request is sent. If the check succeeds, instances are created directly.
    shared_ptr<bool> dryRun_ {};
    // The hostname of the instance. The following limits apply:
    // 
    // - It cannot start or end with a period (.) or hyphen (-), and cannot contain consecutive periods or hyphens.
    // - Windows instances: The hostname must be 2 to 15 characters in length and cannot contain periods (.) or consist entirely of digits. It can contain uppercase and lowercase letters, digits, and hyphens (-).
    // - Other instances (such as Linux):
    //     - The hostname must be 2 to 64 characters in length and can contain multiple periods (.). Each segment between periods can contain uppercase and lowercase letters, digits, and hyphens (-).
    //     - You can use the placeholder `${instance_id}` to include the instance ID in the `HostName` parameter. For example, if `HostName=k8s-${instance_id}` and the created ECS instance ID is `i-123abc****`, the hostname is `k8s-i-123abc****`.
    // 
    // When creating multiple ECS instances, you can:
    // 
    // - Batch configure sequential hostnames. For more information, refer to [Batch configure sequential names or hostnames for instances](https://help.aliyun.com/document_detail/196048.html).
    // - Use the `HostNames.N` parameter to set hostnames for multiple instances individually. Note that `HostName` and `HostNames.N` cannot be set at the same time.
    shared_ptr<string> hostName_ {};
    // Specifies a different hostname for each instance when you create multiple instances.
    shared_ptr<vector<string>> hostNames_ {};
    // The ID of the HPC cluster to which the instance belongs. 
    // 
    // This parameter is required when you create Super Computing Cluster (SCC) instances. You can create an HPC cluster by referring to [CreateHpcCluster](https://help.aliyun.com/document_detail/109138.html).
    shared_ptr<string> hpcClusterId_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // - enabled: enables the access channel.
    // - disabled: disables the access channel.
    // 
    // Default value: enabled.
    // >For information about instance metadata, see [Overview of ECS instance metadata](https://help.aliyun.com/document_detail/49122.html).
    shared_ptr<string> httpEndpoint_ {};
    // >This parameter is not publicly available.
    shared_ptr<int32_t> httpPutResponseHopLimit_ {};
    // Specifies whether to forcefully use the security-hardened mode (IMDSv2) to access instance metadata. Valid values:
    // - optional: does not forcefully use the security-hardened mode.
    // - required: forcefully uses the security-hardened mode. After you set this value, the normal mode cannot be used to access instance metadata.
    // 
    // Default value: optional.
    // >For information about the modes for accessing instance metadata, see [Access mode of instance metadata](https://help.aliyun.com/document_detail/150575.html).
    shared_ptr<string> httpTokens_ {};
    // The name of the image family. When you set this parameter, the latest available image from the specified image family is used to create the instance.
    // 
    // The name must be 2 to 128 characters in length. It cannot start with a special character, digit, http://, or https://. It can contain only the following special characters: periods (.), underscores (_), hyphens (-), and colons (:).
    // 
    // Note the following items:
    // 
    // - If you set `ImageId`, you cannot set this parameter.
    // - If you do not set `ImageId`, but the launch template specified by `LaunchTemplateId` or `LaunchTemplateName` has `ImageId` configured, you cannot set this parameter.
    // - If you do not set `ImageId`, and the launch template specified by `LaunchTemplateId` or `LaunchTemplateName` does not have `ImageId` configured, you can set this parameter.
    // - If you do not set `ImageId` and do not set `LaunchTemplateId` or `LaunchTemplateName`, you can set this parameter.
    // > For information about image families associated with Alibaba Cloud public images, refer to [Public image overview](https://help.aliyun.com/document_detail/108393.html).
    shared_ptr<string> imageFamily_ {};
    // The image ID. Specifies the image resource used to start the instance. You can call [DescribeImages](https://help.aliyun.com/document_detail/25534.html) to query available image resources. If you do not specify `LaunchTemplateId` or `LaunchTemplateName` to use a launch template, and do not specify `ImageFamily` to use the latest available image from an image family, `ImageId` is required.
    shared_ptr<string> imageId_ {};
    // The image-related property information.
    shared_ptr<RunInstancesRequest::ImageOptions> imageOptions_ {};
    // The billing method of the instance. Valid values:
    // 
    // - PrePaid: subscription.
    // - PostPaid: pay-as-you-go.
    // 
    // Default value: PostPaid.
    // 
    // <props="china">If you select subscription, make sure that your account supports balance payment or credit payment. Otherwise, the error `InvalidPayMethod` is returned.
    // 
    // <props="intl">If you select subscription, make sure that your account supports credit payment. Otherwise, the error `InvalidPayMethod` is returned.
    shared_ptr<string> instanceChargeType_ {};
    // The instance name. The name must be 2 to 128 characters in length and can contain characters from the Unicode letter category (including English letters, Chinese characters, and digits). It can also contain colons (:), underscores (_), periods (.), or hyphens (-). The default value is the `InstanceId` of the instance.
    // 
    // When creating multiple ECS instances, you can batch configure sequential instance names that can contain brackets ([]) and commas (,). For more information, refer to [Batch configure sequential names or hostnames for instances](https://help.aliyun.com/document_detail/196048.html).
    shared_ptr<string> instanceName_ {};
    // The instance type. If you do not specify `LaunchTemplateId` or `LaunchTemplateName` to use a launch template, `InstanceType` is required.  
    // 
    // - Product selection: Refer to [Instance families](https://help.aliyun.com/document_detail/25378.html) or invoke [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query performance data of the target instance type. You can also refer to [Best practices for instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn how to select an instance type from the appropriate instance family.
    // - Inventory query: Invoke [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) to query active resource availability in a specific region or zone. Use the relevant parameters to filter results.
    shared_ptr<string> instanceType_ {};
    // The billing method for network usage. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth.
    // - PayByTraffic: pay-by-traffic.
    // 
    // Default value: PayByTraffic.
    // 
    // > In **pay-by-traffic** mode, the peak inbound and outbound bandwidths are upper limits and are not guaranteed. When resource contention occurs, the peak bandwidth may be throttled. If your workloads require guaranteed bandwidth, use **pay-by-bandwidth** mode.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth, in Mbit/s. Valid values:
    // 
    // - If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. Default value: 10.
    // - If the purchased outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `InternetMaxBandwidthOut`. Default value: the value of `InternetMaxBandwidthOut`.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth, in Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is I/O optimized. The default value for [retired instance types](https://help.aliyun.com/document_detail/55263.html) is none. The default value for other instance types is optimized. Valid values:
    // 
    // - none: The instance is not I/O optimized.
    // - optimized: The instance is I/O optimized.
    shared_ptr<string> ioOptimized_ {};
    // Specifies one or more IPv6 addresses for the primary ENI. You can specify up to 10 IPv6 addresses. Valid values of N: 1 to 10.
    // 
    // Example: `Ipv6Address.1=2001:db8:1234:1a00::***`.
    // 
    // Note the following items:
    // 
    // - If you set `Ipv6Address.N`, the value of `Amount` can only be 1, and you cannot set `Ipv6AddressCount` at the same time.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `Ipv6Addresses.N` or `Ipv6AddressCount`. Instead, set `NetworkInterface.N.Ipv6Addresses.N` or `NetworkInterface.N.Ipv6AddressCount`.
    shared_ptr<vector<string>> ipv6Address_ {};
    // The number of randomly generated IPv6 addresses to assign to the primary ENI. Valid values: 1 to 10.
    //          
    // Take note of the following items:
    // 
    // - You cannot set both `Ipv6Address.N` and `Ipv6AddressCount`.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `Ipv6Address.N` or `Ipv6AddressCount`. You can only set `NetworkInterface.N.Ipv6Address.N` or `NetworkInterface.N.Ipv6AddressCount`.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // >This parameter is in invitational preview and is not publicly available.
    shared_ptr<string> isp_ {};
    // The name of the key pair.
    // >For Windows instances, this parameter is ignored. The default value is empty. Even if you specify this parameter, only the `Password` content is used.
    shared_ptr<string> keyPairName_ {};
    // The ID of the launch template. For more information, call [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    // 
    // When you use a launch template to create instances, you must specify either `LaunchTemplateId` or `LaunchTemplateName` to determine the launch template.
    shared_ptr<string> launchTemplateId_ {};
    // The name of the launch template.
    // 
    // When you use a launch template to create instances, you must specify either `LaunchTemplateId` or `LaunchTemplateName` to determine the launch template.
    shared_ptr<string> launchTemplateName_ {};
    // The version of the launch template. If you specify `LaunchTemplateId` or `LaunchTemplateName` without specifying the launch template version, the default version is used.
    shared_ptr<int64_t> launchTemplateVersion_ {};
    // The minimum number of ECS instances to purchase. Valid values: 1 to 100.
    // 
    // The number of successfully created ECS instances depends on the specified Amount and minAmount values:
    // 
    // - If minAmount is not specified: Instances are created based on the Amount value. If inventory is insufficient, the API returns a failure and no instances are created.
    // 
    // - If minAmount is specified:
    //   - If ECS inventory < minAmount: No instances are created and the API returns a failure.
    //   - If minAmount ≤ ECS inventory < Amount: Instances are created based on the available inventory and the API returns success.
    //   - If ECS inventory ≥ Amount: Instances are created based on the specified Amount and the API returns success.
    shared_ptr<int32_t> minAmount_ {};
    // The network interface controller (NIC) information.
    shared_ptr<vector<RunInstancesRequest::NetworkInterface>> networkInterface_ {};
    // The number of queues supported by the primary ENI. Take note of the following items:
    // 
    // - The value cannot exceed the maximum number of queues per ENI allowed for the instance type.
    // 
    // - The total number of queues for all ENIs on the instance cannot exceed the queue quota allowed for the instance type. You can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the `MaximumQueueNumberPerEni` and `TotalEniQueueQuantity` fields for the maximum queue number per ENI and the total queue quota.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `NetworkInterfaceQueueNumber`. You can only set `NetworkInterface.N.QueueNumber`.
    shared_ptr<int32_t> networkInterfaceQueueNumber_ {};
    // The network-related property parameters.
    shared_ptr<RunInstancesRequest::NetworkOptions> networkOptions_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the instance. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported:
    // 
    // ```
    // ()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/
    // ```
    // 
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If you specify `Password`, use HTTPS to send the request to avoid password leaks.
    shared_ptr<string> password_ {};
    // Specifies whether to use the password preset in the image. Valid values:
    // 
    // - true: Use the preset password.
    // - false: Do not use the preset password.
    // 
    // Default value: false.
    // 
    // > When you use this parameter, the Password parameter must be empty. Make sure that the image you use has a password configured.
    shared_ptr<bool> passwordInherit_ {};
    // The subscription duration of the resource. The unit is specified by `PeriodUnit`. This parameter takes effect and is required only when `InstanceChargeType` is set to `PrePaid`. If `DedicatedHostId` is specified, the value cannot exceed the subscription duration of the dedicated host. Valid values:
    // 
    // <props="china">
    // - When PeriodUnit=Week: 1, 2, 3, or 4.
    // - When PeriodUnit=Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, or 60.
    // 
    // 
    // 
    // <props="intl">When PeriodUnit=Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, or 60.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription duration. Valid values: 
    // 
    // <props="china">
    // - Week.
    // - Month (default).
    // 
    // 
    // 
    // <props="intl">Month (default).
    shared_ptr<string> periodUnit_ {};
    // The private domain name configuration of the instance.
    // 
    // 
    // For more information about private private domain resolution, see [ECS private private domain resolution](https://help.aliyun.com/document_detail/2844797.html).
    shared_ptr<RunInstancesRequest::PrivateDnsNameOptions> privateDnsNameOptions_ {};
    // The private IP address of the instance. When you specify system reserved IP address for a VPC-type ECS instance, the IP address must be from the idle CIDR block of the vSwitch (`VSwitchId`).
    // 
    // Take note of the following items:
    // 
    // - After you set `PrivateIpAddress`:
    //     - If `Amount` is set to 1, system reserved IP address is assigned to the created ECS instance.
    //     - If `Amount` is set to a value greater than 1, consecutive private IP addresses are assigned to the instances in a batch creation, starting from the specified private IP address. In this case, you cannot attach secondary ENIs to the instances (that is, you cannot set `NetworkInterface.N.*` parameters).
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `PrivateIpAddress`. You can only set `NetworkInterface.N.PrimaryIpAddress`.
    // 
    // >The first and last three IP addresses of each vSwitch CIDR block are reserved by the system and cannot be specified.
    // For example, if the vSwitch CIDR block is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved by the system.
    shared_ptr<string> privateIpAddress_ {};
    // The name of the instance RAM role. You can call the RAM API [ListRoles](https://help.aliyun.com/document_detail/28713.html) to query the instance RAM roles that you have created.
    shared_ptr<string> ramRoleName_ {};
    // The region ID of the instance. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the enterprise resource group to which the instance belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable security hardening. Valid values:
    // 
    // - Active: Enable security hardening. This value is applicable only to public images.
    // - Deactive: Disable security hardening. This value is applicable to all image types.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which the new instance belongs. Instances in the same security group can communicate with each other. The maximum number of instances that a security group can contain varies based on the security group type. For more information, refer to the security group section in [Limits](~~25412#SecurityGroupQuota~~).
    // 
    // > `SecurityGroupId` determines the network type of the instance. For example, if the specified security group is of the VPC type, the instance is a VPC-type instance, and you must also specify `VSwitchId`.
    // 
    // If you do not set `LaunchTemplateId` or `LaunchTemplateName` to use a launch template, the security group ID is required. Note the following items:
    // 
    // - You can set one security group by using `SecurityGroupId`, or set one or more security groups by using `SecurityGroupIds.N`. However, you cannot set both `SecurityGroupId` and `SecurityGroupIds.N` at the same time.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `SecurityGroupId` or `SecurityGroupIds.N`. You can only set `NetworkInterface.N.SecurityGroupId` or `NetworkInterface.N.SecurityGroupIds.N`.
    shared_ptr<string> securityGroupId_ {};
    // Adds the instance to multiple security groups. The valid values of N depend on the maximum number of security groups to which an instance can belong. For more information, see [Security group limits](https://help.aliyun.com/document_detail/101348.html).
    // 
    // Note the following items:
    // 
    // - You cannot specify both `SecurityGroupId` and `SecurityGroupIds.N`.
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `SecurityGroupId` or `SecurityGroupIds.N`. Instead, specify `NetworkInterface.N.SecurityGroupId` or `NetworkInterface.N.SecurityGroupIds.N`.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The protection period of the spot instance, in hours. Valid values:
    // - 1: After the instance is created, Alibaba Cloud guarantees that the instance will not be automatically released for 1 hour. After 1 hour, the system compares the bid price with the marketplace price in real-time and checks resource inventory to determine whether to retain or revoke the instance.
    // - 0: After the instance is created, Alibaba Cloud does not guarantee a runtime. The system compares the bid price with the marketplace price in real-time and checks resource inventory to determine whether to retain or revoke the instance.
    // 
    // Default value: 1.
    // > 
    // > - This parameter currently supports only the values 0 and 1.
    // > - Spot instances are billed by second. Select an appropriate protection period based on the execution duration of your tasks.
    // > - Alibaba Cloud sends a notification through an ECS system event 5 minutes before the instance is revoked.
    shared_ptr<int32_t> spotDuration_ {};
    // The interruption mode of the spot instance. Valid values:
    // 
    // - Terminate: The instance is directly released.
    // - Stop: The instance enters economical mode.
    // 
    //   For more information about economical mode, refer to [Economical mode for pay-as-you-go instances](https://help.aliyun.com/document_detail/63353.html).
    // 
    // Default value: Terminate.
    shared_ptr<string> spotInterruptionBehavior_ {};
    // The maximum hourly price of the instance. This parameter supports up to three decimal places and takes effect when `SpotStrategy` is set to `SpotWithPriceLimit`.
    shared_ptr<float> spotPriceLimit_ {};
    // The bidding policy for the pay-as-you-go instance. This parameter takes effect when `InstanceChargeType` is set to `PostPaid`. Valid values:
    // 
    // - NoSpot: regular pay-as-you-go instance.
    // - SpotWithPriceLimit: spot instance with a maximum price limit.
    // - SpotAsPriceGo: spot instance priced at the market price at the time of purchase.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The ID of the storage set.
    shared_ptr<string> storageSetId_ {};
    // The maximum number of partitions in the storage set. Valid values: greater than or equal to 1.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // The tags for the instance, disks, and primary ENI.
    shared_ptr<vector<RunInstancesRequest::Tag>> tag_ {};
    // Specifies whether to create the instance on a dedicated host. Valid values:
    // 
    // - default: creates a non-dedicated-host instance.
    // 
    // - host: creates an instance on a dedicated host. If you do not specify `DedicatedHostId`, Alibaba Cloud automatically selects a dedicated host for the instance.
    // 
    // Default value: default.
    shared_ptr<string> tenancy_ {};
    // Specifies whether to automatically append sequential suffixes to `HostName` and `InstanceName` when creating multiple instances. Sequential suffixes start from 001 and cannot exceed 999. Valid values:
    // - true: Append sequential suffixes.
    // - false: Do not append sequential suffixes.
    // 
    // Default value: false.
    // 
    // When `HostName` or `InstanceName` is set in a specified sequential format without the `name_suffix` suffix (that is, the format is `name_prefix[begin_number,bits]`), `UniqueSuffix` does not take effect, and names are ordered only based on the specified sequence.
    // 
    // For more information, refer to [Batch configure sequential names or hostnames for instances](https://help.aliyun.com/document_detail/196048.html).
    shared_ptr<bool> uniqueSuffix_ {};
    // The user data of the instance. The data must be Base64-encoded. The maximum size of the raw data before Base64 encoding is 32 KB.
    // 
    // For more information about usage limits, formats, and execution frequency of instance user data, refer to [Instance user data](https://help.aliyun.com/document_detail/49121.html).
    // 
    // >To ensure the security of UserData during transmission, avoid passing sensitive data such as passwords and private keys in plaintext. If you need to pass such information, encrypt it first, encode it in Base64, and then decrypt it inside the instance.
    shared_ptr<string> userData_ {};
    // The vSwitch ID. If you are creating a VPC-type ECS instance, you must specify a vSwitch ID. The security group and the vSwitch must belong to the same VPC. You can call [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) to query created vSwitches.
    // 
    // Note the following items:
    // 
    // - If you set `VSwitchId`, the `ZoneId` parameter must match the zone of the vSwitch. You can also leave `ZoneId` unspecified, and the system automatically selects the zone of the specified vSwitch.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `VSwitchId`. You can only set `NetworkInterface.N.VSwitchId`.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID of the instance. You can call [DescribeZones](https://help.aliyun.com/document_detail/25610.html) to query available zones.
    // 
    // > If you specify `VSwitchId`, the specified `ZoneId` must match the zone of the vSwitch. You can also leave `ZoneId` unspecified, and the system automatically selects the zone of the specified vSwitch.
    // 
    // Default value: automatically selected by the system.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
