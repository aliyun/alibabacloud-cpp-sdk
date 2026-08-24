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
      // The tag key for the instance, disks, and primary ENI. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with aliyun or acs:. The tag key cannot contain http:// or https://.
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
      // Specifies whether to enable DNS AAAA record resolution from the instance ID-based domain name to IPv6. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsAAAARecord_ {};
      // Specifies whether to enable DNS resolution from the instance ID-based domain name to the IPv4 address. Valid values:
      // 
      // - true: Enabled.
      // 
      // - false: Disabled.
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsARecord_ {};
      // Specifies whether to enable DNS resolution from IP-based domain names to IPv4 addresses. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsARecord_ {};
      // Specifies whether to enable reverse DNS resolution from IPv4 addresses to IP-type domain names. Valid values:
      // 
      // - true: Enabled.
      // - false: Disabled.
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsPtrRecord_ {};
      // The hostname type. Valid values:
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
      // The bandwidth weight value of the instance. The valid values vary by instance type. To query the supported bandwidth weight levels for a specific instance type, call DescribeInstanceTypes. The BandwidthWeighting field in the response indicates the supported bandwidth weight levels. You can use the name field in the returned values as the dictionary value, such as Vpc-L1 or Ebs-L1.
      shared_ptr<string> bandwidthWeighting_ {};
      // Specifies whether to enable the Jumbo Frame feature for the instance. Valid values:
      // 
      // - false: does not enable Jumbo Frame. The MTU of all NICs (including the primary ENI and secondary ENIs) on the instance is set to 1500.
      // 
      // - true: enables Jumbo Frame. The MTU of all NICs (including the primary ENI and secondary ENIs) on the instance is set to 8500.
      // 
      // Default value: true.
      // 
      // >Only some instance types of the eighth generation or later support the Jumbo Frame feature. For more information, see [ECS instance MTU](https://help.aliyun.com/document_detail/200512.html).
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
      // Specifies whether to retain the network interface when the instance is released. Valid values:
      // 
      // - true: The network interface is not retained.
      // 
      // - false: The network interface is retained.
      // 
      // Default value: true.
      // 
      // >This parameter takes effect only on secondary ENIs.
      shared_ptr<bool> deleteOnRelease_ {};
      // The description of the network interface controller (NIC).
      shared_ptr<string> description_ {};
      // The type of the network interface controller (NIC). The valid values of N cannot exceed the number of network interface controllers (NICs) supported by the instance family. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or invoke [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of network interface controllers (NICs) supported by the target instance type.
      shared_ptr<string> instanceType_ {};
      // Specifies one or more IPv6 addresses for the primary ENI. You can specify up to 10 IPv6 addresses. Valid values of the second N: 1 to 10.
      // 
      // Example: `Ipv6Address.1=2001:db8:1234:1a00::***`
      // 
      // Take note of the following items:
      // 
      // - This parameter takes effect only when `NetworkInterface.N.InstanceType` is set to `Primary`. If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, this parameter cannot be specified.
      // 
      // - If you specify this parameter, `Amount` can only be set to 1, and you cannot specify `Ipv6AddressCount`, `Ipv6Address.N`, or `NetworkInterface.N.Ipv6AddressCount`.
      shared_ptr<vector<string>> ipv6Address_ {};
      // The number of randomly generated IPv6 addresses for the primary ENI. Valid values: 1 to 10.
      shared_ptr<int64_t> ipv6AddressCount_ {};
      // The index of the physical network card specified for the ENI.
      shared_ptr<int32_t> networkCardIndex_ {};
      // The ID of the Elastic Network Interface (ENI) to attach to the instance.
      // 
      // If you set this parameter, the value of `Amount` can only be 1.
      // 
      // >This parameter takes effect only for secondary ENIs. After you specify an existing secondary ENI, you cannot configure other ENI creation parameters.
      shared_ptr<string> networkInterfaceId_ {};
      // The name of the network interface controller (NIC). The name must be 2 to 128 characters in length and can contain letters, digits, and characters that are supported by Unicode in the letter categorization. The name can contain colons (:), underscores (_), periods (.), or hyphens (-).
      shared_ptr<string> networkInterfaceName_ {};
      // The communication mode of the ENI. Valid values:
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // Adds a network interface controller (NIC) and sets the primary IP address.
      shared_ptr<string> primaryIpAddress_ {};
      // The number of queues supported by the ENI.
      // 
      // Take note of the following items:
      // 
      // - The value of N cannot exceed the maximum number of ENIs supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the maximum number of ENIs supported by the target instance type.
      // 
      // - The value cannot exceed the maximum number of queues per ENI allowed by the instance type.
      // 
      // - The total number of queues across all ENIs on the instance cannot exceed the total queue quota allowed by the instance type. You can call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the MaximumQueueNumberPerEni and TotalEniQueueQuantity fields for the maximum number of queues per ENI and the total queue quota of the instance type.
      // 
      // - If NetworkInterface.N.InstanceType is set to Primary and this parameter is specified, you cannot specify the NetworkInterfaceQueueNumber parameter.
      shared_ptr<int32_t> queueNumber_ {};
      // The number of queue pairs for the RDMA network interface.
      // 
      // If you want to attach multiple RDMA network interfaces to the instance being created, we recommend that you manually specify QueuePairNumber for each network interface based on the upper limit of `QueuePairNumber` supported by the instance type and the number of network interfaces you plan to use. Ensure that the total QueuePairNumber across all network interfaces does not exceed the maximum value allowed by the instance type. Call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the upper limits of the instance type.
      // 
      // >Notice: If QueuePairNumber is not specified for an RDMA network interface, the upper limit of QueuePairNumber for all RDMA network interfaces supported by the instance type is used by default. Therefore, once an RDMA network interface without QueuePairNumber specified is attached, no more RDMA network interfaces can be added (regular network interfaces are not affected by this restriction).</notice>
      shared_ptr<int64_t> queuePairNumber_ {};
      // The inbound queue depth of the network interface controller (NIC).
      shared_ptr<int32_t> rxQueueSize_ {};
      // The number of secondary private IPv4 addresses to assign to the network interface. Valid values: 1 to 49.
      // 
      // - The value cannot exceed the maximum number of IP addresses allowed for the instance type. For more information, see [Instance families](~~~25378~~).
      // - NetworkInterface.N.SecondaryPrivateIpAddressCount specifies the number of secondary private IPv4 addresses to assign to the network interface (excluding the primary private IP address of the network interface). The system randomly assigns IP addresses from the available CIDR block of the vSwitch (NetworkInterface.N.VSwitchId) to which the network interface belongs.
      shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
      // The ID of the security group to which the network interface controller (NIC) belongs.
      shared_ptr<string> securityGroupId_ {};
      // One or more security group IDs to which the ENI belongs.
      // 
      // - The valid values of N for the first dimension do not exceed the number of ENIs supported by the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) to query the number of ENIs supported by the target instance type.
      // - The second N indicates that you can specify one or more security group IDs. The valid values of N are related to the quota for the number of security groups to which an instance can belong. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
      // 
      // Take note of the following items:
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you must specify this parameter or `NetworkInterface.N.SecurityGroupId`. In this case, this parameter has the same effect as `SecurityGroupIds.N`, but you cannot specify `SecurityGroupId`, `SecurityGroupIds.N`, or `NetworkInterface.N.SecurityGroupId` at the same time.
      // 
      // - If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, this parameter is optional. Default value: the security group to which the ECS instance belongs.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // Specifies whether to enable source/destination checking. We recommend that you enable this feature to improve network security. Valid values:
      // 
      // - true: enabled.
      // 
      // - false: disabled.
      // 
      // Default value: false.
      // 
      // > Only some regions support this feature. Before you use this feature, read [Source/destination checking](https://help.aliyun.com/document_detail/2863210.html).
      shared_ptr<bool> sourceDestCheck_ {};
      // The outbound queue depth of the network interface controller (NIC).
      shared_ptr<int32_t> txQueueSize_ {};
      // The ID of the vSwitch to which the network interface controller (NIC) belongs.
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
      // Indicates whether instances that use this image support logon as the ecs-user user. Valid values:
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
      shared_ptr<bool> burstingEnabled_ {};
      // The category of data disk N. Valid values:
      // 
      // - cloud_efficiency: ultra disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: enterprise SSD.
      // - cloud: basic disk.
      // - cloud_auto: ESSD AutoPL disk.
      // - cloud_regional_disk_auto: regional Enterprise SSD (ESSD).
      // - cloud_essd_entry: ESSD Entry disk.
      //   >cloud_essd_entry is supported only when `InstanceType` is set to an instance type in the `ecs.u1` or `ecs.e` instance family.
      // - elastic_ephemeral_disk_standard: elastic ephemeral disk - Standard Edition.
      // - elastic_ephemeral_disk_premium: elastic ephemeral disk - Premium Edition.
      // 
      // For I/O optimized instances, the default value is cloud_efficiency. For non-I/O optimized instances, the default value is cloud.
      // Notes on default values:
      // 
      // - If InstanceType is set to a retired instance type that is not I/O optimized, the default value is `cloud`.
      // - In other cases, the default value is `cloud_efficiency`.<props="china">After January 30, 2026, if the I/O optimized instance type does not support cloud_auto, the default value is cloud_efficiency. Otherwise, the default value is cloud_auto, and performance burst is enabled by default (which incurs additional fees. For more information, see [Billing examples](~~368372#p_75k_2hp_7gp~~)). For more information, see [Change notice](https://www.aliyun.com/notice/117844).
      shared_ptr<string> category_ {};
      // Specifies whether to release the data disk when the instance is released. Valid values:
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the data disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of the data disk. The naming conventions for mount points vary based on the number of data disks attached:
      shared_ptr<string> device_ {};
      // The name of the data disk. The name must be 2 to 128 characters in length and can contain letters, digits, and characters that are supported by Unicode in the letter category. The name can contain colons (:), underscores (_), periods (.), or hyphens (-).
      shared_ptr<string> diskName_ {};
      // >This parameter is not publicly available.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt data disk N. Valid values:
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key for the data disk.
      // 
      // > If Encrypted is set to true and KMSKeyId is not specified, the default key is used for encryption, and the KMSKeyId value is returned after the instance is created.
      // > - - The disk is created from a non-shared encrypted snapshot: The encryption key used by the snapshot is used by default.
      // > - - The disk is created from a shared encrypted snapshot: The service key is used by default.
      // > - - The disk is created in a region where block storage account-level default encryption is enabled: The specified account-level key is used by default.
      // > - - Other cases: The service key is used by default.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the data disk when you create an enterprise SSD as a data disk. The value of N must be the same as the N in `DataDisk.N.Category=cloud_essd`. Valid values:
      // 
      // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
      // - PL1 (default): A single disk can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For more information about how to select an ESSD performance level, see [ESSD](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × Capacity - baseline performance}.
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
      // 
      // - cloud_efficiency: 20 to 32768.
      // - cloud_ssd: 20 to 32768.
      // - cloud_essd: The valid values depend on the value of `DataDisk.N.PerformanceLevel`. 
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
      shared_ptr<string> snapshotId_ {};
      // The ID of the dedicated block storage cluster. If you want to use a disk in a dedicated block storage cluster as the data disk when you create an ECS instance, specify this parameter.
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
      // The Precision Time Protocol (PTP) status. Valid values:
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
      // - cloud_essd: enterprise SSD.
      // - cloud: basic disk.
      // - cloud_auto: ESSD AutoPL disk.
      // - cloud_essd_entry: ESSD Entry disk.
      // 
      // Default value description:
      // 
      // - If InstanceType is set to a retired instance type that is not I/O optimized, the default value is `cloud`.
      // - In other cases, the default value is `cloud_efficiency`.<props="china">After January 30, 2026, for instance types that support only cloud_essd, the default value is changed from cloud_efficiency to cloud_essd PL0. For more information, see [Change announcement](https://www.aliyun.com/notice/117844).
      // 
      // >This parameter supports the `cloud_essd_entry` value only when `InstanceType` is set to the [u1, universal instance family](https://help.aliyun.com/document_detail/457079.html) (`ecs.u1`) or the [e, economy instance family](https://help.aliyun.com/document_detail/108489.html) (`ecs.e`).
      shared_ptr<string> category_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length and can contain characters from the Unicode letter category (including English and Chinese characters and digits). The name can contain colons (:), underscores (_), periods (.), or hyphens (-).
      shared_ptr<string> diskName_ {};
      // The performance level of the enterprise SSD (ESSD) used as the system disk. When you create an ESSD as the system disk, you can set the performance level of the disk. Valid values:
      shared_ptr<string> performanceLevel_ {};
      // The size of the system disk. Unit: GiB. Valid values:
      // 
      // - Basic disk: 20 to 500.
      // - Enterprise SSD (ESSD):
      //   - PL0: 1 to 2048.
      //   - PL1: 20 to 2048.
      //   - PL2: 461 to 2048.
      //   - PL3: 1261 to 2048.
      // - ESSD AutoPL disk: 1 to 2048.
      // - Other disk types: 20 to 2048.
      // 
      // The value of this parameter must be greater than or equal to max{1, ImageSize}.
      // 
      // Default value: max{40, size of the image specified by ImageId}.
      shared_ptr<string> size_ {};
      // Specifies whether to enable the performance burst feature. Valid values:
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
      // >China (Hong Kong) Zone D and Singapore Zone A do not support encrypting the system disk when you create an instance.
      // 
      // >Notice: When you use a shared encrypted image to create a disk based on an encrypted snapshot, you must set the Encrypted parameter to true for the disk to ensure that the created disk uses the key of the account with which the image is shared.
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key for the system disk.
      // 
      // > If Encrypted is set to true and KMSKeyId is not specified, the default key is used for encryption, and the KMSKeyId value is returned after the instance is created.
      // > - - The disk is created from a non-shared encrypted snapshot: The encryption key used by the snapshot is used by default.
      // > - - The disk is created from a shared encrypted snapshot: The service key is used by default.
      // > - - The disk is created in a region where block storage account-level default encryption is enabled: The specified account-level key is used by default.
      // > - - Other cases: The service key is used by default.
      shared_ptr<string> KMSKeyId_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1000 × Capacity - baseline performance}.
      shared_ptr<int64_t> provisionedIops_ {};
      // The ID of the dedicated block storage cluster. If you want to use a disk in a dedicated block storage cluster as the system disk when you create an ECS instance, specify this parameter.
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
      // The confidential computing mode. Valid value: Enclave.
      shared_ptr<string> confidentialComputingMode_ {};
      // The trusted system mode. Valid value: vTPM.
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
      // The ID of the dedicated host cluster to which the ECS instance belongs. The system automatically selects a dedicated host in the cluster to deploy the ECS instance.
      // 
      // > This parameter takes effect only when `Tenancy` is set to `host`.
      // 
      // If you specify both a dedicated host (`DedicatedHostId`) and a dedicated host cluster (`SchedulerOptions.DedicatedHostClusterId`):
      // - If the dedicated host belongs to the dedicated host cluster, the ECS instance is preferentially deployed on the specified dedicated host.
      // - If the dedicated host does not belong to the dedicated host cluster, the ECS instance fails to be created.
      // 
      // <props="china">You can call [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) to query the list of dedicated host cluster IDs.
      // 
      // <props="intl">You can call [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) to query the list of dedicated host cluster IDs.
      // 
      // <props="partner">You can call [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) to query the list of dedicated host cluster IDs.
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
      // The private pool options for instance startup. A private pool is generated after an elasticity assurance or capacity reservation takes effect. You can select a private pool when you start an instance. Valid values:
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
      // The number of threads per CPU core. The number of vCPUs of an ECS instance = `CpuOptions.Core` value × `CpuOptions.ThreadsPerCore` value.
      // 
      // - `CpuOptions.ThreadsPerCore=1` indicates that hyper-threading is disabled.
      // 
      // - Only specific instance types support custom CPU thread counts.
      // 
      // <props="china">For the valid values and default value, see [Custom CPU options](https://help.aliyun.com/document_detail/145895.html).
      shared_ptr<int32_t> threadsPerCore_ {};
      // The CPU topology type of the instance. Valid values:
      // 
      // - ContinuousCoreToHTMapping: The hyper-threads (HTs) within the same core in the CPU topology of the instance are continuous.
      // - DiscreteCoreToHTMapping: The HTs within the same core in the CPU topology of the instance are discrete.
      // 
      // Default value: null.
      // 
      // > Only specific instance families support this parameter. For more information about the supported instance families, see [View and modify CPU topology](https://help.aliyun.com/document_detail/2636059.html).
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
    shared_ptr<string> affinity_ {};
    // The number of ECS instances to create. Valid values: 1 to 100.
    // 
    // The number of ECS instances that are created depends on the values of Amount and MinAmount:
    // 
    // - If MinAmount is not specified: instances are created based on the Amount value. If the inventory is insufficient, the API returns a failure and no instances are created.
    // 
    // - If MinAmount is specified:
    //   - If the available inventory < MinAmount: no ECS instances are created, and the API returns a failure.
    //   - If MinAmount ≤ available inventory < Amount: instances are created based on the available inventory, and the API returns a success.
    //   - If the available inventory ≥ Amount: instances are created based on the specified Amount value, and the API returns a success.
    // 
    // Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // >This parameter is not publicly available.
    shared_ptr<vector<RunInstancesRequest::Arn>> arn_ {};
    // Specifies whether to automatically complete the payment when you create the instance. Valid values:
    // 
    // - true: The payment is automatically completed.
    // 
    //     > If the balance of your payment method is insufficient, an abnormal order is generated and can only be canceled. If the balance of your payment method is insufficient, set AutoPay to `false`. In this case, an unpaid order is generated. You can then log on to the ECS console to complete the payment.
    // 
    // - false: An order is generated but the payment is not completed.
    // 
    //     > When `InstanceChargeType` is set to `PostPaid`, `AutoPay` cannot be set to `false`.
    // 
    // Default value: true.
    shared_ptr<bool> autoPay_ {};
    // The automatic release time of the pay-as-you-go instance. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the UTC+0 time zone. The format is `yyyy-MM-ddTHH:mm:ssZ`.
    // 
    // - If the value of seconds (`ss`) is not `00`, the start time of the current minute (`mm`) is used.
    // 
    // - The earliest release time is half an hour after the current time.
    // 
    // - The latest release time cannot be more than three years from the current time.
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to enable auto-renewal. This parameter takes effect only when InstanceChargeType is set to PrePaid. Valid values:
    // 
    // - true: Auto-renewal is enabled.
    // - false: Auto-renewal is not enabled.
    // 
    // Default value: false.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal period. Valid values:
    // 
    // <props="china">
    // - PeriodUnit=Week: 1, 2, and 3.
    // - PeriodUnit=Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // 
    // 
    // <props="intl">PeriodUnit=Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but make sure that the token is unique among different requests. The **ClientToken** value can contain only ASCII characters and cannot exceed 64 characters in length. For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    // The clock-related property parameters of the instance.
    shared_ptr<RunInstancesRequest::ClockOptions> clockOptions_ {};
    // The running mode of the burstable instance. Valid values:
    shared_ptr<string> creditSpecification_ {};
    // The list of data disk information.
    shared_ptr<vector<RunInstancesRequest::DataDisk>> dataDisk_ {};
    // The ID of the dedicated host.
    // <props="china">You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the list of dedicated host IDs.
    // 
    // <props="intl">You can call [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) to query the list of dedicated host IDs.
    // 
    // >Notice: Dedicated hosts do not support spot instances. If you specify the DedicatedHostId parameter, the SpotStrategy and SpotPriceLimit settings in the request are automatically ignored.
    shared_ptr<string> dedicatedHostId_ {};
    // The release protection property of the instance. Specifies whether the instance can be released from the console or by calling the [DeleteInstance](https://help.aliyun.com/document_detail/25507.html) operation. Valid values:
    // 
    // -  true: Enables release protection for the instance.
    // -  false: Disables release protection for the instance.
    // 
    // Default value: false.
    // 
    // > This property applies only to pay-as-you-go instances and only restricts manual release operations. It does not take effect on system-initiated release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The group number of the instance in the deployment set. If the deployment set uses the high availability group strategy (AvailabilityGroup), you can use this parameter to specify the group number. Valid values: 1 to 7.
    shared_ptr<int32_t> deploymentSetGroupNo_ {};
    // The ID of the deployment set.
    shared_ptr<string> deploymentSetId_ {};
    // The description of the instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to perform only a dry run. Valid values:
    shared_ptr<bool> dryRun_ {};
    // The hostname of the instance. The following limits apply:
    shared_ptr<string> hostName_ {};
    // Specifies a different hostname for each instance when you create multiple instances.
    shared_ptr<vector<string>> hostNames_ {};
    // The ID of the HPC cluster to which the instance belongs.
    shared_ptr<string> hpcClusterId_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    shared_ptr<string> httpEndpoint_ {};
    // >This parameter is not publicly available.
    shared_ptr<int32_t> httpPutResponseHopLimit_ {};
    // Specifies whether to forcefully use the China Reinforced Mode (IMDSv2) for accessing instance metadata. Valid values:
    // - optional: does not forcefully use the China Reinforced Mode.
    // - required: forcefully uses the China Reinforced Mode. After this value is set, the normal mode cannot be used to access instance metadata.
    // 
    // Default value: optional.
    // >For more information about the modes for accessing instance metadata, see [Instance metadata access mode](https://help.aliyun.com/document_detail/150575.html).
    shared_ptr<string> httpTokens_ {};
    // The name of the image family. You can set this parameter to obtain the latest available image from the specified image family to create the instance.
    // 
    // The name must be 2 to 128 characters in length. The name cannot start with a special character, a digit, http://, or https://. The name can contain only the following special characters: periods (.), underscores (_), hyphens (-), and colons (:).
    // 
    // Take note of the following items:
    // 
    // - If you set the ImageId parameter, you cannot set this parameter.
    // - If you do not set the ImageId parameter but the launch template specified by LaunchTemplateId or LaunchTemplateName has ImageId configured, you cannot set this parameter.
    // - If you do not set ImageId and the launch template specified by LaunchTemplateId or LaunchTemplateName does not have ImageId configured, you can set this parameter.
    // - If you do not set ImageId and do not set LaunchTemplateId or LaunchTemplateName, you can set this parameter.
    // > For information about image families associated with Alibaba Cloud public images, see [Public image overview](https://help.aliyun.com/document_detail/108393.html).
    shared_ptr<string> imageFamily_ {};
    // The image ID. Specifies the image resource used to start the instance. You can call [DescribeImages](https://help.aliyun.com/document_detail/25534.html) to query available image resources. If you do not specify `LaunchTemplateId` or `LaunchTemplateName` to determine a launch template, and do not specify `ImageFamily` to use the latest available image from an image family, `ImageId` is required.
    shared_ptr<string> imageId_ {};
    // The image-related property information.
    shared_ptr<RunInstancesRequest::ImageOptions> imageOptions_ {};
    // The billing method of the instance. Valid values:
    // 
    // -  PrePaid: subscription.
    // -  PostPaid: pay-as-you-go.
    // 
    // Default value: PostPaid.
    // 
    // <props="china">If you set this parameter to PrePaid, make sure that your account supports balance payment or credit payment. Otherwise, the `InvalidPayMethod` error is returned.
    // 
    // <props="intl">If you set this parameter to PrePaid, make sure that your account supports credit payment. Otherwise, the `InvalidPayMethod` error is returned.
    shared_ptr<string> instanceChargeType_ {};
    // The instance name. The name must be 2 to 128 characters in length and can contain characters from the Unicode letter category (including English and Chinese characters) and digits. The name can contain colons (:), underscores (_), periods (.), or hyphens (-). Default value: the `InstanceId` of the instance.
    shared_ptr<string> instanceName_ {};
    // The instance type of the instance. If you do not specify `LaunchTemplateId` or `LaunchTemplateName` to determine the launch template, `InstanceType` is required.
    // 
    // - Instance type selection: See [Instance families](https://help.aliyun.com/document_detail/25378.html) or call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the performance data of the target instance type, or see [Best practices for instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn how to select an instance type.
    // - Inventory query: Call [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) to query the resource availability in a specific region or zone.
    shared_ptr<string> instanceType_ {};
    // The billing method for network usage. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth.
    // - PayByTraffic: pay-by-traffic.
    // 
    // Default value: PayByTraffic.
    // 
    // > In **pay-by-traffic** mode, the peak inbound and outbound bandwidths are both upper limits and are not guaranteed. When resource contention occurs, the peak bandwidth may be throttled. If your business requires guaranteed bandwidth, use the **pay-by-bandwidth** mode.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth, in Mbit/s. Valid values:
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth, in Mbit/s. Valid values: 0 to 100.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is I/O optimization enabled. The default value for [retired instance types](https://help.aliyun.com/document_detail/55263.html) is none. The default value for other instance types is optimized. Valid values:
    shared_ptr<string> ioOptimized_ {};
    // Specifies one or more IPv6 addresses for the primary ENI. You can specify up to 10 IPv6 addresses. Valid values of N: 1 to 10.
    // 
    // Example: `Ipv6Address.1=2001:db8:1234:1a00::***`.
    // 
    // Take note of the following items:
    // 
    // - If you set `Ipv6Address.N`, you must set `Amount` to 1 and cannot set `Ipv6AddressCount`.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `Ipv6Addresses.N` or `Ipv6AddressCount`. Instead, set `NetworkInterface.N.Ipv6Addresses.N` or `NetworkInterface.N.Ipv6AddressCount`.
    shared_ptr<vector<string>> ipv6Address_ {};
    // The number of randomly generated IPv6 addresses for the primary ENI. Valid values: 1 to 10.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // >This parameter is in invitational preview and is not publicly available.
    shared_ptr<string> isp_ {};
    // The name of the key pair.
    shared_ptr<string> keyPairName_ {};
    // The launch template ID. For more information, call [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    shared_ptr<string> launchTemplateId_ {};
    // The launch template name.
    shared_ptr<string> launchTemplateName_ {};
    // The launch template version. If you specify `LaunchTemplateId` or `LaunchTemplateName` but do not specify the launch template version, the default version is used.
    shared_ptr<int64_t> launchTemplateVersion_ {};
    // The minimum Quantity of ECS instances to purchase. Valid values: 1 to 100.
    shared_ptr<int32_t> minAmount_ {};
    // The network interface controller (NIC) information.
    shared_ptr<vector<RunInstancesRequest::NetworkInterface>> networkInterface_ {};
    // The number of queues supported by the primary ENI. Take note of the following items:
    // 
    // - The value cannot exceed the maximum number of queues per ENI allowed by the instance type.
    // 
    // - The total number of queues for all ENIs on the instance cannot exceed the queue quota allowed by the instance type. You can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the MaximumQueueNumberPerEni and TotalEniQueueQuantity fields to obtain the maximum number of queues per ENI and the total queue quota for an instance type.
    // 
    // - If NetworkInterface.N.InstanceType is set to Primary, you cannot set NetworkInterfaceQueueNumber. Set NetworkInterface.N.QueueNumber instead.
    shared_ptr<int32_t> networkInterfaceQueueNumber_ {};
    // The network-related property parameters.
    shared_ptr<RunInstancesRequest::NetworkOptions> networkOptions_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the instance. The password must be 8 to 30 characters in length and must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. The following special characters are supported:
    shared_ptr<string> password_ {};
    // Specifies whether to use the password preset in the image. Valid values:
    shared_ptr<bool> passwordInherit_ {};
    // The duration of the subscription. Unit: specified by `PeriodUnit`. This parameter is required and takes effect only when `InstanceChargeType` is set to `PrePaid`. If `DedicatedHostId` is specified, the value of this parameter cannot exceed the subscription duration of the dedicated host. Valid values:
    // 
    // <props="china">
    // - PeriodUnit=Week: 1, 2, 3, and 4.
    // - PeriodUnit=Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    // 
    // 
    // 
    // <props="intl">PeriodUnit=Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription billable methods duration. Valid values:
    shared_ptr<string> periodUnit_ {};
    // The private DNS name configuration of the instance.
    shared_ptr<RunInstancesRequest::PrivateDnsNameOptions> privateDnsNameOptions_ {};
    // The private IP address of the instance. When you specify a private IP address for a VPC-connected ECS instance, the IP address must be an available address within the CIDR block of the vSwitch specified by `VSwitchId`.
    // 
    // Take note of the following items:
    // 
    // - After you set `PrivateIpAddress`:
    //     - If `Amount` is set to 1, the specified private IP address is assigned to the created ECS instance.
    //     - If `Amount` is set to a value greater than 1, the specified private IP address is used as the start address to sequentially assign consecutive private IP addresses to multiple ECS instances during batch creation. In this case, you cannot attach secondary ENIs to the instances (that is, you cannot set `NetworkInterface.N.*` parameters).
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `PrivateIpAddress`. Set `NetworkInterface.N.PrimaryIpAddress` instead.
    // 
    // >The first and last three IP addresses of each vSwitch CIDR block are reserved by the system and cannot be specified.
    // For example, if the CIDR block of a vSwitch is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved by the system.
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
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which the new instance belongs. Instances within the same security group can communicate with each other. The maximum number of instances that a security group can contain varies based on the security group type. For more information, see the security group section in [Limits](~~25412#SecurityGroupQuota~~).
    // 
    // > `SecurityGroupId` determines the network type of the instance. For example, if the specified security group is of the Virtual Private Cloud (VPC) type, the instance is a VPC-type instance, and you must also specify the `VSwitchId` parameter.
    // 
    // If you do not set `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template, the security group ID is required. Note the following items:
    // 
    // - You can set one security group by using `SecurityGroupId`, or set one or more security groups by using `SecurityGroupIds.N`. However, you cannot specify both `SecurityGroupId` and `SecurityGroupIds.N` at the same time.
    // 
    // - If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `SecurityGroupId` or `SecurityGroupIds.N`. In this case, you can only set `NetworkInterface.N.SecurityGroupId` or `NetworkInterface.N.SecurityGroupIds.N`.
    shared_ptr<string> securityGroupId_ {};
    // Adds the instance to multiple security groups. The valid values of N depend on the maximum number of security groups to which an instance can belong. For more information, see [Security group limits](https://help.aliyun.com/document_detail/101348.html).
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The protection period of the spot instance. Unit: hours. Valid values:
    // - 1: After the instance is created, Alibaba Cloud guarantees that the instance runs for 1 hour without being automatically released. After 1 hour, the system compares the bid price with the market price and checks resource inventory to determine whether to retain or reclaim the instance.
    // - 0: After the instance is created, Alibaba Cloud does not guarantee the instance running duration. The system compares the bid price with the market price and checks resource inventory to determine whether to retain or reclaim the instance.
    // 
    // Default value: 1.
    // > 
    // > - This parameter supports only the value 0 or 1.
    // > - Spot instances are billed by second. Set an appropriate protection period based on the expected task execution duration.
    // > - Alibaba Cloud sends a notification to you through an ECS system event 5 minutes before the instance is reclaimed.
    shared_ptr<int32_t> spotDuration_ {};
    // The interruption pattern of the spot instance. Valid values:
    shared_ptr<string> spotInterruptionBehavior_ {};
    // The maximum hourly price of the instance. A maximum of three decimal places is supported. This parameter takes effect when the `SpotStrategy` parameter is set to `SpotWithPriceLimit`.
    shared_ptr<float> spotPriceLimit_ {};
    // The bidding policy for the pay-as-you-go instance. This parameter takes effect when the `InstanceChargeType` parameter is set to `PostPaid`. Valid values:
    shared_ptr<string> spotStrategy_ {};
    // The storage set ID.
    shared_ptr<string> storageSetId_ {};
    // The maximum number of partitions in the storage set. Valid values: greater than or equal to 1.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // The tag information for the instance, disks, and primary ENI.
    shared_ptr<vector<RunInstancesRequest::Tag>> tag_ {};
    // Specifies whether to create the instance on a dedicated host. Valid values:
    shared_ptr<string> tenancy_ {};
    // Specifies whether to automatically append sequential suffixes to `HostName` and `InstanceName` when you create multiple instances. Sequential suffixes start from 001 and can be up to 999. Valid values:
    // - true: Appends sequential suffixes.
    // - false: Does not append sequential suffixes.
    // 
    // Default value: false.
    // 
    // If `HostName` or `InstanceName` is configured in a specified sorting format without the naming suffix `name_suffix`, that is, the naming format is `name_prefix[begin_number,bits]`, `UniqueSuffix` does not take effect, and names are sorted only in the specified order.
    // 
    // For more information, see [Batch configure sequential instance names or hostnames](https://help.aliyun.com/document_detail/196048.html).
    shared_ptr<bool> uniqueSuffix_ {};
    // The instance user data. The data must be Base64-encoded. The maximum size of the raw data before Base64 encoding is 32 KB.
    shared_ptr<string> userData_ {};
    // The vSwitch ID. If you are creating a VPC-type ECS instance, you must specify a vSwitch ID. The security group and the vSwitch must belong to the same VPC. You can call [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) to query created vSwitches.
    shared_ptr<string> vSwitchId_ {};
    // The zone ID of the instance. You can call [DescribeZones](https://help.aliyun.com/document_detail/25610.html) to query the zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
