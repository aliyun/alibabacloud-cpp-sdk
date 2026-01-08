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
      // The key of tag N to add to the instance, disks, and primary ENI. Valid values of N: 1 to 20. The tag key cannot be an empty string. The tag key can be up to 128 characters in length and cannot contain http:// or https://. The tag key cannot start with acs: or aliyun.
      shared_ptr<string> key_ {};
      // The value of tag N to add to the instance, disks, and primary ENI. Valid values of N: 1 to 20. The tag value can be an empty string. The tag value can be up to 128 characters in length and cannot contain http:// or https://.
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
      // Specifies whether DNS Resolution from the Instance ID-based Hostname to the Instance Primary Private IPv6 Address (AAAA Record) is enabled. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsAAAARecord_ {};
      // Specifies whether DNS Resolution from the Instance ID-based Hostname to the Instance Primary Private IPv4 Address (A Record) is enabled. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> enableInstanceIdDnsARecord_ {};
      // Specifies whether DNS Resolution from the IP Address-based Hostname to the Instance Primary Private IPv4 Address (A Record) is enabled. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsARecord_ {};
      // Specifies whether Reverse DNS Resolution from the Instance Primary Private IPv4 Address to the IP Address-based Hostname (PTR Record) is enabled. Valid values:
      // 
      // *   true
      // *   false
      // 
      // Default value: false.
      shared_ptr<bool> enableIpDnsPtrRecord_ {};
      // The type of hostname. Valid values:
      // 
      // *   Custom: custom hostname
      // *   IpBased: IP address-based hostname
      // *   InstanceIdBased: instance ID-based hostname
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
      shared_ptr<string> bandwidthWeighting_ {};
      // Specifies whether to enable the Jumbo Frames feature for the instance. Valid values:
      // 
      // *   false: does not enable the Jumbo Frames feature for the instance. The maximum transmission unit (MTU) value of all ENIs on the instance is set to 1500.
      // *   true: enables the Jumbo Frames feature for the instance. The MTU value of all ENIs on the instance is set to 8500.
      // 
      // Default value: true.
      // 
      // >  The Jumbo Frames feature is supported by only 8th-generation or later instance types. For more information, see [Jumbo Frames](https://help.aliyun.com/document_detail/200512.html).
      shared_ptr<bool> enableJumboFrame_ {};
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
      // Specifies whether to release ENI N when the associated instance is released. Valid values:
      // 
      // *   true: releases the ENI when the associated instance is released.
      // *   false: retains the ENI when the associated instance is released.
      // 
      // Default value: true.
      // 
      // >  This parameter takes effect only for secondary ENIs.
      shared_ptr<bool> deleteOnRelease_ {};
      // The description of ENI N.
      // 
      // Take note of the following items:
      // 
      // *   The value of N cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // *   The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you do not need to specify this parameter.
      shared_ptr<string> description_ {};
      // The type of ENI N. The value of the first N in this parameter cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // 
      // Valid values:
      // 
      // *   Primary: the primary ENI
      // *   Secondary
      // 
      // Default value: Secondary.
      shared_ptr<string> instanceType_ {};
      // The IPv6 addresses to assign to the primary ENI. You can assign up to 10 IPv6 addresses to the primary ENI. Valid values of the second N: 1 to 10.
      // 
      // Example: `Ipv6Address.1=2001:db8:1234:1a00::***`.
      // 
      // Take note of the following items:
      // 
      // *   This parameter takes effect only when `NetworkInterface.N.InstanceType` is set to `Primary`. If you set `NetworkInterface.N.InstanceType` to `Secondary` or leave NetworkInterface.N.InstanceType empty, you cannot specify this parameter.
      // *   If you specify this parameter, you must set `Amount` to 1 and cannot specify `Ipv6AddressCount`, `Ipv6Address.N`, or `NetworkInterface.N.Ipv6AddressCount`.
      shared_ptr<vector<string>> ipv6Address_ {};
      // The number of IPv6 addresses to randomly generate for the primary ENI. Valid values: 1 to 10.
      // 
      // Take note of the following items:
      // 
      // *   This parameter takes effect only when `NetworkInterface.N.InstanceType` is set to `Primary`. If you set `NetworkInterface.N.InstanceType` to `Secondary` or leave NetworkInterface.N.InstanceType empty, you cannot specify this parameter.
      // *   If you specify this parameter, you cannot specify `Ipv6AddressCount`, `Ipv6Address.N`, or `NetworkInterface.N.Ipv6Address.N`.
      shared_ptr<int64_t> ipv6AddressCount_ {};
      // The index of the network card for ENI N.
      // 
      // Take note of the following items:
      // 
      // *   You can specify NIC indexes only for instances of specific instance types.
      // *   If you set NetworkInterface.N.InstanceType to Primary, you can set NetworkInterface.N.NetworkCardIndex only to 0 for instance types that support network cards.
      // *   If you set NetworkInterface.N.InstanceType to Secondary or leave NetworkInterface.N.InstanceType empty, you can specify NetworkInterface.N.NetworkCardIndex based on instance types if the instance types support network cards. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<int32_t> networkCardIndex_ {};
      // The ID of the ENI to attach to the instance.
      // 
      // If you specify this parameter, you must set `Amount` to 1.
      // 
      // >  This parameter takes effect only for secondary ENIs. After you specify an existing secondary ENI, you cannot specify other ENI creation parameters.
      shared_ptr<string> networkInterfaceId_ {};
      // The name of ENI N. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
      // 
      // Take note of the following items:
      // 
      // *   The value of N cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you do not need to specify this parameter.
      shared_ptr<string> networkInterfaceName_ {};
      // The communication mode of ENI N. Valid values:
      // 
      // *   Standard: uses the TCP communication mode.
      // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
      // 
      // Default value: Standard.
      // 
      // >  The number of ERIs on an instance cannot exceed the maximum number of ERIs that the instance type supports. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The primary IP address to assign to ENI N.
      // 
      // Take note of the following items:
      // 
      // *   The value of N cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // 
      //     *   If the value of N is 1, you can configure a primary or secondary ENI. If you specify this parameter, set `Amount` to a numeric value greater than 1, and set NetworkInterface.N.InstanceType to Primary, the specified number of instances are created and consecutive primary IP addresses starting from the specified IP address are assigned to the instances. In this case, you cannot attach secondary ENIs to the instances.
      //     *   If you specify this parameter, set `Amount` to a numeric value greater than 1, and set NetworkInterface.N.InstanceType to Primary, you cannot set `NetworkInterface.2.InstanceType` to Secondary to attach a secondary ENI.
      // 
      // *   If you set `NetworkInterface.N.InstanceType` to `Primary`, this parameter is equivalent to `PrivateIpAddress`. You cannot specify both this parameter and `PrivateIpAddress` in the same request.
      // 
      // *   If you set `NetworkInterface.N.InstanceType` to `Secondary` or leave NetworkInterface.N.InstanceType empty, the specified primary IP address is assigned to the secondary ENI. The default value is an IP address that is randomly selected from within the CIDR block of the vSwitch to which to connect the secondary ENI.
      // 
      // > 
      // 
      // *   The first IP address and last three IP addresses of each vSwitch CIDR block are reserved. You cannot specify the IP addresses. For example, if a vSwitch CIDR block is 192.168.1.0/24, the following IP addresses are reserved: 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255.
      shared_ptr<string> primaryIpAddress_ {};
      // The number of queues supported by ENI N.
      // 
      // Take note of the following items:
      // 
      // *   The value of N cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // *   The value of this parameter cannot exceed the maximum number of queues allowed per ENI.
      // *   The total number of queues for all ENIs of an instance cannot exceed the queue quota for the instance type. To query the maximum number of queues per ENI and the queue quota for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation and check the `MaximumQueueNumberPerEni` and `TotalEniQueueQuantity` values in the response.
      // *   If you specify this parameter and set `NetworkInterface.N.InstanceType` to `Primary`, you cannot specify `NetworkInterfaceQueueNumber`.
      shared_ptr<int32_t> queueNumber_ {};
      // The number of queue pairs (QPs) supported by the ERI.
      // 
      // If you want to attach multiple ERIs to a created instance, we recommend that you specify QueuePairNumber for each ERI based on the value of `QueuePairNumber` supported by the instance type and the number of ERIs that you want to use. Make sure that the total number of QPs of all ERIs does not exceed the maximum number of QPs supported by the instance type. For information about the maximum number of QPs supported by an instance type, see [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html).
      // 
      // >  If you do not specify QueuePairNumber for an ERI, the maximum number of QPs supported by the instance type is used as the number of QPs supported by the ERI. In this case, you cannot attach an additional ERI to the instance. However, you can attach other types of ENIs to the instance.
      shared_ptr<int64_t> queuePairNumber_ {};
      // The receive (Rx) queue depth of ENI N.
      // 
      // >  This parameter is in invitational preview and is not publicly available. To use this parameter, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
      // 
      // Take note of the following items:
      // 
      // *   This parameter is applicable only to 7th-generation or later ECS instance types.
      // *   This parameter is applicable to Linux images.
      // *   A larger Rx queue depth yields higher inbound throughput and reduces packet loss rates but consumes more memory.
      shared_ptr<int32_t> rxQueueSize_ {};
      shared_ptr<int32_t> secondaryPrivateIpAddressCount_ {};
      // The ID of the security group to which to assign ENI N.
      // 
      // Take note of the following items:
      // 
      // *   The value of N cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you must specify this parameter. In this case, this parameter is equivalent to `SecurityGroupId` and you cannot specify `SecurityGroupId`, `SecurityGroupIds.N`, or `NetworkInterface.N.SecurityGroupIds.N`.
      // *   If you set `NetworkInterface.N.InstanceType` to `Secondary` or leave NetworkInterface.N.InstanceType empty, you do not need to specify this parameter. The default value is the ID of the security group to which to assign the instance.
      shared_ptr<string> securityGroupId_ {};
      // The IDs of security groups to which to assign ENI N.
      // 
      // *   The value of the first N in this parameter cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // *   The second N in this parameter indicates that one or more security group IDs can be specified. The valid values of the second N vary based on the maximum number of security groups to which an instance can belong. For more information, see [Security group limits](~~25412#SecurityGroupQuota1~~).
      // 
      // Take note of the following items:
      // 
      // *   If you set `NetworkInterface.N.InstanceType` to `Primary`, you must specify this parameter or `NetworkInterface.N.SecurityGroupId`. In this case, this parameter is equivalent to `SecurityGroupIds.N`, and you cannot specify `SecurityGroupId`, `SecurityGroupIds.N`, or `NetworkInterface.N.SecurityGroupId`.
      // *   If you set `NetworkInterface.N.InstanceType` to `Secondary` or leave NetworkInterface.N.InstanceType empty, you do not need to specify this parameter. The default value is the ID of the security group to which to assign the instance.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // Specifies whether to enable the source and destination IP address check feature. We recommend that you enable the feature to improve network security. Valid value:
      // 
      // *   true: enables the performance burst feature for the system disk.
      // *   false: disables the performance burst feature for the data disk.
      // 
      // Default value: false.
      // 
      // >  This feature is available only in some regions. Before you use this method, read [Source and destination IP address check](https://help.aliyun.com/document_detail/2863210.html).
      shared_ptr<bool> sourceDestCheck_ {};
      // The Tx queue depth of ENI N.
      // 
      // >  This parameter is in invitational preview and is not publicly available. To use this parameter, [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl).
      // 
      // Take note of the following items:
      // 
      // *   This parameter is applicable only to 7th-generation or later ECS instance types.
      // *   This parameter is applicable to Linux images.
      // *   A larger Tx queue depth yields higher outbound throughput and reduces packet loss rates but consumes more memory.
      shared_ptr<int32_t> txQueueSize_ {};
      // The ID of the vSwitch to which to connect ENI N.
      // 
      // When you specify this parameter, take note of the following items:
      // 
      // *   The value of N cannot exceed the maximum number of ENIs per instance that the instance type supports. For the maximum number of ENIs per instance that an instance type supports, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/2679699.html) operation.
      // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you must specify this parameter. In this case, this parameter is equivalent to `VSwitchId`. You cannot specify both NetworkInterface.N.VSwitchId and `VSwitchId` in the same request.
      // *   If `NetworkInterface.N.InstanceType` is set to `Secondary` or left empty, you do not need to specify this parameter. The default value is the VSwitchId value.
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
      // Specifies whether the instance that uses the image supports logons of the ecs-user user. Valid values:
      // 
      // *   true
      // *   false
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
      // The ID of the automatic snapshot policy to apply to data disk N.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the performance burst feature for data disk N. Valid values:
      // 
      // *   true: enables the performance burst feature for the system disk.
      // *   false: disables the performance burst feature for the data disk.
      // 
      // >  This parameter is available only if you set DataDisk.N.Category to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // The category of data disk N. Valid values:
      // 
      // *   cloud_efficiency: utra disk.
      // 
      // *   cloud_ssd: standard SSD.
      // 
      // *   cloud_essd: ESSD.
      // 
      // *   cloud: basic disk.
      // 
      // *   cloud_auto: ESSD AutoPL disk.
      // 
      // *   cloud_regional_disk_auto: Regional ESSD.
      // 
      // *   cloud_essd_entry: ESSD Entry disk.
      // 
      //     **
      // 
      //     **Note** This parameter can be set to `cloud_essd_entry` only when `InstanceType` is set to `ecs.u1` or `ecs.e`.
      // 
      // *   elastic_ephemeral_disk_standard: standard elastic ephemeral disk.
      // 
      // *   elastic_ephemeral_disk_premium: premium elastic ephemeral disk
      // 
      // For I/O optimized instances, the default value is cloud_efficiency. For non-I/O optimized instances, the default value is cloud.
      shared_ptr<string> category_ {};
      // Specifies whether to release data disk N when the associated instance is released. Valid values:
      // 
      // *   true: releases the data disk when the associated instance is released.
      // *   false: does not release the data disk when the associated instance is released.
      // 
      // Default value: true.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of data disk N. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of data disk N. The mount points are named based on the number of data disks:
      // 
      // *   1st to 25th data disks: /dev/xvd`[b-z]`.
      // *   From the 26th data disk on: /dev/xvd`[aa-zz]`. For example, the 26th data disk is named /dev/xvdaa, the 27th data disk is named /dev/xvdab, and so on.
      // 
      // > 
      // 
      // *   This parameter is applicable to scenarios in which a full image is used to create instances. A full image is an image that contains an operating system, application software, and business data. For these scenarios, you can set this parameter to the mount point of data disk N in the full image and modify `DataDisk.N.Size` and `DataDisk.N.Category` to change the category and size of data disk N created based on the image.
      // 
      // *   When you use a full image to create an ECS instance, the data disks in the image are created as the first N data disks of the instance.
      shared_ptr<string> device_ {};
      // The name of data disk N. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt data disk N. Valid values:
      // 
      // *   true: encrypts the data disk.
      // *   false: does not encrypt the data disk.
      // 
      // Default value: false.
      // 
      // >  When you use a shared encrypted image to create the disk based on an encrypted snapshot, you must set Encrypted to true to ensure that the disk uses an encryption key of your own.
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key used for the data disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD to use as data disk N. The value of N must be the same as that in `DataDisk.N.Category` when DataDisk.N.Category is set to cloud_essd. Valid values:
      // 
      // *   PL0: A single ESSD can deliver up to 10000 random read/write IOPS.
      // *   PL1 (default): A single ESSD can deliver up to 50000 random read/write IOPS.
      // *   PL2: A single ESSD can deliver up to 100000 random read/write IOPS.
      // *   PL3: A single ESSD can deliver up to 1000000 random read/write IOPS.
      // 
      // For information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk to use as data disk N. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
      // 
      // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // >  This parameter is available only if you set DataDisk.N.Category to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
      // 
      // *   Valid values when DataDisk.N.Category is set to cloud_efficiency: 20 to 32768.
      // 
      // *   Valid values when DataDisk.N.Category is set to cloud_ssd: 20 to 32768.
      // 
      // *   Valid values when DataDisk.N.Category is set to cloud_essd: vary based on the value of `DataDisk.N.PerformanceLevel`.
      // 
      //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL0: 1 to 65536.
      //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL1: 20 to 65536.
      //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL2: 461 to 65536.
      //     *   Valid values when DataDisk.N.PerformanceLevel is set to PL3: 1261 to 65536.
      // 
      // *   Valid values when DataDisk.N.Category is set to cloud: 5 to 2000.
      // 
      // *   Valid values when DataDisk.N.Category is set to cloud_auto: 1 to 65536.
      // 
      // *   Valid values when DataDisk.N.Category is set to cloud_essd_entry: 10 to 32768.
      // 
      // >  The value of this parameter must be greater than or equal to the size of the snapshot specified by `DataDisk.N.SnapshotId`.
      shared_ptr<int32_t> size_ {};
      // The ID of the snapshot to use to create data disk N. Valid values of N: 1 to 16.
      // 
      // When `DataDisk.N.SnapshotId` is specified, `DataDisk.N.Size` is ignored. The data disk is created with the size of the specified snapshot. Use snapshots created on or after July 15, 2013. Otherwise, an error is returned and your request is rejected.
      shared_ptr<string> snapshotId_ {};
      // The ID of the dedicated block storage cluster to which data disk N belongs. If you want to use a disk in a dedicated block storage cluster as data disk N when you create the instance, you must specify this parameter.
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
      // >  This parameter is not publicly available.
      shared_ptr<int64_t> assumeRoleFor_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> roleType_ {};
      // >  This parameter is not publicly available.
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
      // The ID of the automatic snapshot policy to apply to the system disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // The category of the system disk. Valid values:
      // 
      // *   cloud_efficiency: utra disk
      // *   cloud_ssd: standard SSD
      // *   cloud_essd: enhanced SSD (ESSD)
      // *   cloud: basic disk
      // *   cloud_auto: ESSD AutoPL disk
      // *   cloud_essd_entry: ESSD Entry disk
      // 
      // >  The value of this parameter can be `cloud_essd_entry` only when `InstanceType` is set to `ecs.u1` or `ecs.e`. ecs.u1 indicates the u1 universal instance family and ecs.e indicates the e economy instance family. For information about the u1 and e instance families, see the [u1, universal instance family](https://help.aliyun.com/document_detail/457079.html) section in the "Universal instance families" topic and the [e, economy instance family](https://help.aliyun.com/document_detail/108489.html) section in the "Shared instance families" topic.
      // 
      // For non-I/O optimized instances of retired instance types, the default value is cloud. For other types of instances, the default value is cloud_efficiency.
      shared_ptr<string> category_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length. The description can contain letters but cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length and support Unicode characters under the Decimal Number category and the categories whose names contain Letter. The name can contain colons (:), underscores (_), periods (.), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // The performance level of the ESSD to use as the system disk. Default value: PL1. Valid values:
      // 
      // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
      // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
      // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
      // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For more information about ESSD performance levels, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The size of the system disk. Unit: GiB. Valid values:
      // 
      // *   Basic disk: 20 to 500.
      // 
      // *   ESSD: Valid values vary based on the performance level of the ESSD.
      // 
      //     *   PL0 ESSD: 1 to 2048.
      //     *   PL1 ESSD: 20 to 2048.
      //     *   PL2 ESSD: 461 to 2048.
      //     *   PL3 ESSD: 1261 to 2048.
      // 
      // *   ESSD AutoPL disk: 1 to 2048.
      // 
      // *   Other disk categories: 20 to 2048.
      // 
      // The value of this parameter must be at least 1 and greater than or equal to the image size.
      // 
      // Default value: 40 or the image size, whichever is greater.
      shared_ptr<string> size_ {};
      // Specifies whether to enable the performance burst feature for the system disk. Valid values:
      // 
      // *   true: enables the performance burst feature for the system disk.
      // *   false: disables the performance burst feature for the system disk.
      // 
      // >  This parameter is available only if you set `SystemDisk.Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<bool> burstingEnabled_ {};
      // >  This parameter is not publicly available.
      shared_ptr<string> encryptAlgorithm_ {};
      // Specifies whether to encrypt the system disk. Valid values:
      // 
      // *   true: encrypts the system disk.
      // *   false: does not encrypt the system disk.
      // 
      // Default value: false.
      // 
      // >  The system disks of instances cannot be encrypted during instance creation in Hong Kong Zone D or Singapore Zone A.
      // 
      // >  When you use a shared encrypted image to create the disk based on an encrypted snapshot, you must set Encrypted to true to ensure that the disk uses an encryption key of your own.
      shared_ptr<string> encrypted_ {};
      // The ID of the KMS key to use for the system disk.
      shared_ptr<string> KMSKeyId_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk to use as the system disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
      // 
      // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // >  This parameter is available only if you set `SystemDisk.Category` to `cloud_auto`. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html).
      shared_ptr<int64_t> provisionedIops_ {};
      // The ID of the dedicated block storage cluster to which the system disk belongs. If you want to use disks in a dedicated block storage cluster as system disks when you create instances, specify this parameter.
      shared_ptr<string> storageClusterId_ {};
    };

    class SecurityOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityOptions& obj) { 
        DARABONBA_PTR_TO_JSON(ConfidentialComputingMode, confidentialComputingMode_);
        DARABONBA_PTR_TO_JSON(TrustedSystemMode, trustedSystemMode_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfidentialComputingMode, confidentialComputingMode_);
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
      virtual bool empty() const override { return this->confidentialComputingMode_ == nullptr
        && this->trustedSystemMode_ == nullptr; };
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


    protected:
      // The confidential computing mode. Set the value to Enclave.
      // 
      // A value of Enclave indicates that an enclave-based confidential computing environment is built on the instance. When you call the `RunInstances` operation, you can set this parameter only for c7, g7, or r7 instances to use enclave-based confidential computing. Take note of the following items:
      // 
      // *   The confidential computing feature is in invitational preview.
      // *   When you use the ECS API to create instances that support enclave-based confidential computing, you can call only the `RunInstances` operation. The `CreateInstance` operation does not support the `SecurityOptions.ConfidentialComputingMode` parameter.
      // *   Enclave-based confidential computing is implemented based on Alibaba Cloud Trusted System (vTPM). When you build a confidential computing environment on an instance by using Enclave, Alibaba Cloud Trusted System is enabled for the instance. If you set `SecurityOptions.ConfidentialComputingMode` to Enclave when you call this operation, the created instances use enclave-based confidential computing and Alibaba Cloud Trusted System regardless of whether `SecurityOptions.TrustedSystemMode` is set to vTPM.
      // 
      // For more information about confidential computing, see [Build a confidential computing environment by using Enclave](https://help.aliyun.com/document_detail/203433.html).
      shared_ptr<string> confidentialComputingMode_ {};
      // The trusted system mode. Set the value to vTPM.
      // 
      // The trusted system mode supports the following instance families:
      // 
      // *   g7, c7, and r7
      // *   Security-enhanced instance families: g7t, c7t, and r7t
      // 
      // When you create instances of the preceding instance families, you must set this parameter. Take note of the following items:
      // 
      // *   To use the Alibaba Cloud trusted system, set this parameter to vTPM. Then, the Alibaba Cloud trusted system performs trust verifications when the instances start.
      // *   If you do not want to use the Alibaba Cloud trusted system, leave this parameter empty. Note that if your created instances use an enclave-based confidential computing environment (with `SecurityOptions.ConfidentialComputingMode` set to Enclave), the Alibaba Cloud trusted system is enabled for the instances.
      // *   When you use the ECS API to create instances that use the trusted system, you can call only the `RunInstances` operation. The `CreateInstance` operation does not support the `SecurityOptions.TrustedSystemMode` parameter.
      // 
      // > If you have configured an instance as a trusted one when you created the instance, you can use only an image that support the trusted system to replace the system disk of the instance.
      // 
      // For more information about the trusted system, see [Overview](https://help.aliyun.com/document_detail/201394.html).
      shared_ptr<string> trustedSystemMode_ {};
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
      // The ID of the dedicated host cluster in which to create the instance. After this parameter is specified, the system selects one dedicated host from the specified cluster to create the instance.
      // 
      // > This parameter is valid only when the `Tenancy` parameter is set to `host`.
      // 
      // When you specify both the `DedicatedHostId` and `SchedulerOptions.DedicatedHostClusterId` parameters, take note of the following items:
      // 
      // *   If the specified dedicated host belongs to the specified dedicated host cluster, the instance is preferentially deployed on the specified dedicated host.
      // *   If the specified dedicated host does not belong to the specified dedicated host cluster, the instance cannot be created.
      // 
      // You can call the [DescribeDedicatedHostClusters](https://help.aliyun.com/document_detail/184145.html) operation to query the list of dedicated host cluster IDs.
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
      // The ID of the private pool. The ID of a private pool is the same as that of the elasticity assurance or capacity reservation for which the private pool is generated.
      shared_ptr<string> id_ {};
      // The type of the private pool to use to create the instance. A private pool is generated after an elasticity assurance or a capacity reservation takes effect. You can select the private pool when you start an instance. Valid values:
      // 
      // *   Open: open private pool. The system selects a matching open private pool to create the instance. If no matching open private pools are found, resources in the public pool are used. When you set this parameter to Open, you can leave the `PrivatePoolOptions.Id` parameter empty.
      // *   Target: specified private pool. The system uses the capacity in a specified private pool to create the instance. If the specified private pool is unavailable, the instance cannot be created. If you set this parameter to Target, you must specify the `PrivatePoolOptions.Id` parameter.
      // *   None: no private pool. The capacity in private pools is not used.
      // 
      // Default value: None.
      // 
      // In the following scenarios, the PrivatePoolOptions.MatchCriteria parameter can be set only to `None` or left empty:
      // 
      // *   A spot instance is created.
      // *   The instance is created in the classic network.
      // *   The instance is created on a dedicated host.
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
      // > This parameter is in invitational preview and is unavailable.
      shared_ptr<bool> configured_ {};
    };

    class CpuOptions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CpuOptions& obj) { 
        DARABONBA_PTR_TO_JSON(Core, core_);
        DARABONBA_PTR_TO_JSON(Numa, numa_);
        DARABONBA_PTR_TO_JSON(ThreadsPerCore, threadsPerCore_);
        DARABONBA_PTR_TO_JSON(TopologyType, topologyType_);
      };
      friend void from_json(const Darabonba::Json& j, CpuOptions& obj) { 
        DARABONBA_PTR_FROM_JSON(Core, core_);
        DARABONBA_PTR_FROM_JSON(Numa, numa_);
        DARABONBA_PTR_FROM_JSON(ThreadsPerCore, threadsPerCore_);
        DARABONBA_PTR_FROM_JSON(TopologyType, topologyType_);
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
        && this->numa_ == nullptr && this->threadsPerCore_ == nullptr && this->topologyType_ == nullptr; };
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


    protected:
      // The number of CPU cores.
      shared_ptr<int32_t> core_ {};
      // This parameter is no longer used.
      shared_ptr<string> numa_ {};
      // The number of threads per CPU core. The following formula is used to calculate the number of vCPUs of the instance: `CpuOptions.Core` value × `CpuOptions.ThreadsPerCore` value.
      // 
      // *   If `CpuOptionsThreadPerCore` is set to 1, Hyper-Threading (HT) is disabled.
      // *   This parameter is applicable only to specific instance types.
      shared_ptr<int32_t> threadsPerCore_ {};
      // The CPU topology type of the instance. Valid values:
      // 
      // *   ContinuousCoreToHTMapping: The HT technology allows continuous threads to run on the same core in the CPU topology of the instance.``
      // *   DiscreteCoreToHTMapping: The HT technology allows discrete threads to run on the same core in the CPU topology of the instance.``
      // 
      // This parameter is empty by default.
      // 
      // >  This parameter is supported only for specific instance families. For more information about the supported instance families, see [View and modify the CPU topology](https://help.aliyun.com/document_detail/2636059.html).
      shared_ptr<string> topologyType_ {};
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
    // Specifies whether to associate an instance on a dedicated host with the dedicated host. Valid values:
    // 
    // *   default: does not associate the instance with the dedicated host. When you start an instance that was stopped in economical mode, the instance is automatically deployed to another dedicated host in the automatic deployment resource pool if the available resources of the original dedicated host are insufficient.
    // *   host: associates the instance with the dedicated host. When you start an instance that was stopped in economical mode, the instance remains on the original dedicated host. If the available resources of the original dedicated host are insufficient, the instance cannot be started.
    // 
    // Default value: default.
    shared_ptr<string> affinity_ {};
    // The desired number of ECS instances that you want to create. Valid values: 1 to 100.
    // 
    // The number of ECS instances that can be created varies based on the Amount and MinAmount values.
    // 
    // *   If you do not specify MinAmount, the RunInstances operation creates ECS instances based on the Amount value. If the available resources are insufficient to create the desired number of ECS instances, the RunInstances operation returns an error response and no ECS instances are created.
    // 
    // *   If you specify MinAmount, take note of the following items:
    // 
    //     *   If the available resources are insufficient to create the minimum number of ECS instances, no ECS instances are created and the RunInstances operation returns an error response.
    //     *   If the available resources are insufficient to create the desired number of ECS instances but are sufficient to create the minimum number of ECS instances, the RunInstances operation uses the available resources to create ECS instances and returns a success response. In this case, the number of ECS instances that can be created is less than the desired number of ECS instances.
    //     *   If the available resources are sufficient to create the desired number of ECS instances, the RunInstances operation uses the available resources to create the desired number of ECS instances and returns a success response.
    // 
    // Default value: 1.
    shared_ptr<int32_t> amount_ {};
    // >  This parameter is not publicly available.
    shared_ptr<vector<RunInstancesRequest::Arn>> arn_ {};
    // Specifies whether to automatically complete the payment for instance creation. Valid values:
    // 
    // *   true: The payment is automatically completed.
    // 
    //     **
    // 
    //     **Note** Make sure that your account balance is sufficient. Otherwise, your order becomes invalid and is canceled. If your account balance is insufficient, you can set `AutoPay` to `false` to generate an unpaid order. Then, you can log on to the ECS console to pay for the order.
    // 
    // *   false: An order is generated but no payment is made.
    // 
    //     **
    // 
    //     **Note** When `InstanceChargeType` is set to `PostPaid`, `AutoPay` cannot be set to `false`.
    // 
    // Default value: true.
    shared_ptr<bool> autoPay_ {};
    // The time when to automatically release the pay-as-you-go instance. Specify the time in the [ISO 8601 standard](https://help.aliyun.com/document_detail/25696.html) in the `yyyy-MM-ddTHH:mm:ssZ` format. The time must be in UTC.
    // 
    // *   If the value of seconds (`ss`) is not `00`, the start time is automatically rounded to the nearest minute based on the value of minutes (`mm`).
    // *   The specified time must be at least 30 minutes later than the current time.
    // *   The specified time can be at most three years later than the current time.
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to enable auto-renewal for the instance. This parameter is valid only when the `InstanceChargeType` parameter is set to `PrePaid`. Valid values:
    // 
    // *   true: enables auto-renewal.
    // *   false: does not enable auto-renewal.
    // 
    // Default value: false.
    shared_ptr<bool> autoRenew_ {};
    // The auto-renewal period of the instance. Valid values:
    // 
    // *   Valid values when PeriodUnit is set to Week: 1, 2, and 3.
    // *   Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    shared_ptr<int32_t> autoRenewPeriod_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.**** For more information, see [How to ensure idempotence](https://help.aliyun.com/document_detail/25693.html).
    shared_ptr<string> clientToken_ {};
    shared_ptr<RunInstancesRequest::ClockOptions> clockOptions_ {};
    // The performance mode of the burstable instance. Valid values:
    // 
    // *   Standard: the standard mode. For more information, see the "Standard mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in [Burstable instances](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The data disks.
    shared_ptr<vector<RunInstancesRequest::DataDisk>> dataDisk_ {};
    // The ID of the dedicated host.
    // 
    // You can call the [DescribeDedicatedHosts](https://help.aliyun.com/document_detail/134242.html) operation to query the list of dedicated host IDs.
    // 
    // > Spot instances cannot be created on dedicated hosts. If you specify DedicatedHostId, SpotStrategy and SpotPriceLimit are automatically ignored.
    shared_ptr<string> dedicatedHostId_ {};
    // Specifies whether to enable release protection for the instance. This parameter determines whether you can use the ECS console or call the [DeleteInstance](https://help.aliyun.com/document_detail/25507.html) operation to release the instance. Valid values:
    // 
    // *   true: enables release protection for the instance.
    // *   false: disables release protection for the instance.
    // 
    // Default value: false.
    // 
    // > This parameter is applicable to only pay-as-you-go instances. It can protect instances against manual releases, but not against automatic releases.
    shared_ptr<bool> deletionProtection_ {};
    // The number of the deployment set group to which to deploy the instance. If the deployment set specified by the DeploymentSetId parameter uses the high availability group strategy (AvailabilityGroup), you can use the DeploymentSetGroupNo parameter to specify a deployment set group in the deployment set. Valid values: 1 to 7.
    shared_ptr<int32_t> deploymentSetGroupNo_ {};
    // The ID of the deployment set to which to deploy the instance.
    shared_ptr<string> deploymentSetId_ {};
    // The description of the instance. The description must be 2 to 256 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to check the validity of the request without actually making the request. Default value: false. Valid values:
    // 
    // *   true: The validity of the request is checked but the request is not made. Check items include whether required parameters are specified, the request format, service limits, and available ECS resources. If the check fails, the corresponding error code is returned. If the check succeeds, the `DryRunOperation` error code is returned.
    // *   false: The validity of the request is checked, and the request is made if the check succeeds.
    shared_ptr<bool> dryRun_ {};
    // The hostname of the instance. Take note of the following items:
    // 
    // *   The hostname cannot start or end with a period (.) or hyphen (-). It cannot contain consecutive periods (.) or hyphens (-).
    // 
    // *   For Windows instances, the hostname must be 2 to 15 characters in length and cannot contain periods (.) or contain only digits. It can contain letters, digits, and hyphens (-).
    // 
    // *   For instances that run other operating systems such as Linux, take note of the following items:
    // 
    //     *   The hostname must be 2 to 64 characters in length. You can use periods (.) to separate a hostname into multiple segments. Each segment can contain letters, digits, and hyphens (-).
    //     *   You can use the `${instance_id}` placeholder to pass instance IDs into the hostname specified by `HostName`. For example, if you set `HostName` to k8s-${instance_id} and the instance is assigned an ID of `i-123abc****`, the hostname of the instance is `k8s-i-123abc****`.
    // 
    // When you create multiple instances, you can perform the following operations:
    // 
    // *   Batch configure sequential hostnames for the instances. For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
    // *   Use the `HostNames.N` parameter to configure different hostnames for instances. You cannot specify both the `HostName` and `HostNames.N` parameters.
    shared_ptr<string> hostName_ {};
    // The hostname of instance N. You can use this parameter to specify different hostnames for multiple instances.
    shared_ptr<vector<string>> hostNames_ {};
    // The ID of the high performance computing (HPC) cluster to which the instance belongs.
    // 
    // This parameter is required when you create instances of a Supper Computing Cluster (SCC) instance type. For information about how to create an HPC cluster, see [CreateHpcCluster](https://help.aliyun.com/document_detail/109138.html).
    shared_ptr<string> hpcClusterId_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // 
    // *   enabled
    // *   disabled
    // 
    // Default value: enabled.
    // 
    // > For more information about instance metadata, see [Overview of ECS instance metadata](https://help.aliyun.com/document_detail/49122.html).
    shared_ptr<string> httpEndpoint_ {};
    // >  This parameter is not publicly available.
    shared_ptr<int32_t> httpPutResponseHopLimit_ {};
    // Specifies whether to forcefully use the security-enhanced mode (IMDSv2) to access instance metadata. Valid values:
    // 
    // *   optional: does not forcefully use the security-enhanced mode (IMDSv2).
    // *   required: forcefully uses the security-enhanced mode (IMDSv2). After you set this parameter to required, you cannot access instance metadata in normal mode.
    // 
    // Default value: optional.
    // 
    // > For more information about the modes of accessing instance metadata, see [Access mode of instance metadata](https://help.aliyun.com/document_detail/150575.html).
    shared_ptr<string> httpTokens_ {};
    // The name of the image family. You can set this parameter to obtain the latest available custom image from the specified image family to create instances.
    // 
    // The name must be 2 to 128 characters in length. The name cannot start with a digit, a special character, http://, or https://. The name can contain letters, digits, periods (.), underscores (_), hyphens (-), and colons (:).
    // 
    // Take note of the following items:
    // 
    // *   If you specify `ImageId`, you cannot specify ImageFamily.
    // *   If you do not specify `ImageId` but use `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template that has `ImageId` specified, you cannot specify ImageFamily.
    // *   If you do not specify `ImageId` but use `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template that does not have `ImageId` specified, you can specify ImageFamily.
    // *   If you do not specify `ImageId`, `LaunchTemplateId`, or `LaunchTemplateName`, you can specify ImageFamily.
    // 
    // >  For information about image families that are associated with Alibaba Cloud official images, see [Overview of public images](https://help.aliyun.com/document_detail/108393.html).
    shared_ptr<string> imageFamily_ {};
    // The ID of the image. You can call the [DescribeImages](https://help.aliyun.com/document_detail/25534.html) operation to query available images. If you do not use `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template and do not set `ImageFamily` to obtain the latest available custom image from a specified image family, you must specify `ImageId`.
    shared_ptr<string> imageId_ {};
    // Details about the image options.
    shared_ptr<RunInstancesRequest::ImageOptions> imageOptions_ {};
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription
    // *   PostPaid: pay-as-you-go
    // 
    // Default value: PostPaid.
    // 
    // If you set this parameter to PrePaid, make sure that your account has sufficient balance or credit. Otherwise, an `InvalidPayMethod` error is returned.
    shared_ptr<string> instanceChargeType_ {};
    // The name of the ECS instance. The name must be 2 to 128 characters in length and can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-). The default value of this parameter is the `InstanceId` value.
    // 
    // When you batch create instances, you can batch configure sequential names for the instances. The sequential names can contain brackets ([ ]) and commas (,). For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
    shared_ptr<string> instanceName_ {};
    // The instance type. If you do not use `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template, you must set the `InstanceType` parameter.
    // 
    // *   Select an instance type. See [Instance families](https://help.aliyun.com/document_detail/25378.html) or call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the performance data of an instance type, or see [Best practices for instance type selection](https://help.aliyun.com/document_detail/58291.html) to learn about how to select instance types.
    // *   Query available resources. Call the [DescribeAvailableResource](https://help.aliyun.com/document_detail/66186.html) operation to query available resources in a specific region or zone.
    shared_ptr<string> instanceType_ {};
    // The billing method for network usage. Valid values:
    // 
    // *   PayByBandwidth: pay-by-bandwidth
    // *   PayByTraffic: pay-by-traffic
    // 
    // Default value: PayByTraffic.
    // 
    // > When the **pay-by-traffic** billing method for network usage is used, the maximum inbound and outbound bandwidths are used as the upper limits of bandwidths instead of guaranteed performance specifications. In scenarios where demand outstrips resource supplies, these maximum bandwidth values may not be reached. If you want guaranteed bandwidths for your instance, use the **pay-by-bandwidth** billing method for network usage.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // *   When the purchased outbound public bandwidth is less than or equal to 10 Mbit/s, the valid values of InternetMaxBandwidthIn are 1 to 10, and the default value is 10.
    // *   When the purchased outbound public bandwidth is greater than 10 Mbit/s, the valid values of this parameter are 1 to the `InternetMaxBandwidthOut` value and the default value is the `InternetMaxBandwidthOut` value.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    // 
    // Default value: 0.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is I/O optimized. For instances of [retired instance types](https://help.aliyun.com/document_detail/55263.html), the default value is none. For instances of other instance types, the default value is optimized. Valid values:
    // 
    // *   none: The instance is not I/O optimized.
    // *   optimized: The instance is I/O optimized.
    shared_ptr<string> ioOptimized_ {};
    // IPv6 address N to be assigned to the primary ENI. Valid values of N: 1 to 10.
    // 
    // Example: `Ipv6Address.1=2001:db8:1234:1a00::***`.
    // 
    // Take note of the following items:
    // 
    // *   If the `Ipv6Address.N` parameter is specified, you must set the `Amount` parameter to 1 and leave the `Ipv6AddressCount` parameter empty.
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot set `Ipv6Addresses.N` or `Ipv6AddressCount` and must set `NetworkInterface.N.Ipv6Addresses.N` or `NetworkInterface.N.Ipv6AddressCount`.
    shared_ptr<vector<string>> ipv6Address_ {};
    // The number of IPv6 addresses to randomly generate for the primary ENI. Valid values: 1 to 10.
    // 
    // Take note of the following items:
    // 
    // *   You cannot specify both the `Ipv6Addresses.N` and `Ipv6AddressCount` parameters.
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `Ipv6Address.N` or `Ipv6AddressCount` but can specify `NetworkInterface.N.Ipv6Address.N` or `NetworkInterface.N.Ipv6AddressCount`.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // > This parameter is in invitational preview and is unavailable.
    shared_ptr<string> isp_ {};
    // The name of the key pair.
    // 
    // > For Windows instances, this parameter is ignored. This parameter is empty by default. The `Password` parameter takes effect even if the KeyPairName parameter is specified.
    shared_ptr<string> keyPairName_ {};
    // The ID of the launch template. For more information, call the [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html) operation.
    // 
    // To use a launch template to create an instance, you must use the `LaunchTemplateId` or `LaunchTemplateName` parameter to specify the launch template.
    shared_ptr<string> launchTemplateId_ {};
    // The name of the launch template.
    // 
    // To use a launch template to create an instance, you must use the `LaunchTemplateId` or `LaunchTemplateName` parameter to specify the launch template.
    shared_ptr<string> launchTemplateName_ {};
    // The version of the launch template. If you set the `LaunchTemplateId` or `LaunchTemplateName` parameter but do not set the version number of the launch template, the default template version is used.
    shared_ptr<int64_t> launchTemplateVersion_ {};
    // The minimum number of ECS instances that you want to create. Valid values: 1 to 100.
    // 
    // The number of ECS instances that can be created varies based on the Amount and MinAmount values.
    // 
    // *   If you do not specify MinAmount, the RunInstances operation creates ECS instances based on the Amount value. If the available resources are insufficient to create the desired number of ECS instances, the RunInstances operation returns an error response and no ECS instances are created.
    // 
    // *   If you specify MinAmount, take note of the following items:
    // 
    //     *   If the available resources are insufficient to create the minimum number of ECS instances, no ECS instances are created and the RunInstances operation returns an error response.
    //     *   If the available resources are insufficient to create the desired number of ECS instances but are sufficient to create the minimum number of ECS instances, the RunInstances operation uses the available resources to create ECS instances and returns a success response. In this case, the number of ECS instances that can be created is less than the desired number of ECS instances.
    //     *   If the available resources are sufficient to create the desired number of ECS instances, the RunInstances operation uses the available resources to create the desired number of ECS instances and returns a success response.
    shared_ptr<int32_t> minAmount_ {};
    // The information of the elastic network interfaces (ENIs).
    shared_ptr<vector<RunInstancesRequest::NetworkInterface>> networkInterface_ {};
    // The number of queues supported by the primary ENI. Take note of the following items:
    // 
    // *   The value of this parameter cannot exceed the maximum number of queues per ENI allowed for the instance type.
    // *   The total number of queues for all ENIs on the instance cannot exceed the queue quota for the instance type. To query the maximum number of queues per ENI and the queue quota for an instance type, you can call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the `MaximumQueueNumberPerEni` and `TotalEniQueueQuantity` values.
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `NetworkInterfaceQueueNumber` but can specify `NetworkInterface.N.QueueNumber`.
    shared_ptr<int32_t> networkInterfaceQueueNumber_ {};
    // Details about network options.
    shared_ptr<RunInstancesRequest::NetworkOptions> networkOptions_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The password of the instance. The password must be 8 to 30 characters in length and contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters include:
    // 
    //     ()`~!@#$%^&*-_+=|{}[]:;\\"<>,.?/
    // 
    // For Windows instances, the password cannot start with a forward slash (/).
    // 
    // > If the `Password` parameter is specified, we recommend that you send requests over HTTPS to prevent password leaks.
    shared_ptr<string> password_ {};
    // Specifies whether to use the password preset in the image. Valid values:
    // 
    // *   true: uses the preset password.
    // *   false: does not use the preset password.
    // 
    // Default value: false.
    // 
    // > If you set this parameter to true, make sure that you leave the Password parameter empty and the selected image has a preset password.
    shared_ptr<bool> passwordInherit_ {};
    // The subscription period of the instance. The unit is specified by the `PeriodUnit` parameter. This parameter is valid and required only when `InstanceChargeType` is set to `PrePaid`. If the `DedicatedHostId` parameter is specified, the value of Period must not exceed the subscription period of the specified dedicated host. Valid values:
    // 
    // *   Valid values when PeriodUnit is set to Week: 1, 2, 3, and 4.
    // *   Valid values when PeriodUnit is set to Month: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    shared_ptr<int32_t> period_ {};
    // The unit of the subscription period. Default value: Month. Valid values:
    // 
    // *   Week
    // *   Month
    shared_ptr<string> periodUnit_ {};
    // The private domain name options of the instance.
    // 
    // For information about the resolution of ECS private domain names, see [ECS private DNS resolution](https://help.aliyun.com/document_detail/2844797.html).
    shared_ptr<RunInstancesRequest::PrivateDnsNameOptions> privateDnsNameOptions_ {};
    // The private IP address to assign to the instance. To assign a private IP address to an instance that resides in a VPC, make sure that the IP address is an idle IP address within the CIDR block of the vSwitch specified by `VSwitchId`.
    // 
    // Take note of the following items:
    // 
    // *   If `PrivateIpAddress` is specified, take note of the following items:
    // 
    //     *   If `Amount` is set to 1, a single instance is created and the specified private IP address is assigned to the instance.
    //     *   If `Amount` is set to a numeric value greater than 1, the specified number of instances are created and consecutive private IP addresses starting from the specified one are assigned to the instances. In this case, you cannot specify parameters that start with `NetworkInterface.N` to attach secondary ENIs to the instances.
    // 
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `PrivateIpAddress` but can specify `NetworkInterface.N.PrimaryIpAddress`.
    // 
    // >  The first IP address and last three IP addresses of each vSwitch CIDR block are reserved. You cannot specify the IP addresses. For example, if a vSwitch CIDR block is 192.168.1.0/24, the IP addresses 192.168.1.0, 192.168.1.253, 192.168.1.254, and 192.168.1.255 are reserved.
    shared_ptr<string> privateIpAddress_ {};
    // The name of the Resource Access Management (RAM) role. You can call the [ListRoles](https://help.aliyun.com/document_detail/28713.html) operation provided by RAM to query the instance RAM roles that you created.
    shared_ptr<string> ramRoleName_ {};
    // The ID of the region in which to create the instance. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which to assign the instance.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable security hardening. Valid values:
    // 
    // *   Active: enables security hardening. This value is applicable only to public images.
    // *   Deactive: does not enable security hardening. This value is applicable to all images.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which you want to assign the instance. Instances in the same security group can communicate with each other. The maximum number of instances allowed in a security group varies based on the type of the security group. For more information, see the "Security group limits" section in [Limits and quotas](~~25412#SecurityGroupQuota~~).
    // 
    // >  The network type of the new instance is the same as the network type of the security group specified by `SecurityGroupId`. For example, if the specified security group is of the VPC type, the new instance is also of the VPC type and you must specify `VSwitchId`.
    // 
    // If you do not use `LaunchTemplateId` or `LaunchTemplateName` to specify a launch template, you must specify a security group ID. When you specify this parameter, take note of the following items:
    // 
    // *   You can set `SecurityGroupId` to specify a single security group or set `SecurityGroupIds.N` to specify one or more security groups. However, you cannot specify both `SecurityGroupId` and `SecurityGroupIds.N` in the same request.
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `SecurityGroupId` or `SecurityGroupIds.N` but can specify `NetworkInterface.N.SecurityGroupId` or `NetworkInterface.N.SecurityGroupIds.N`.
    shared_ptr<string> securityGroupId_ {};
    // The IDs of security groups to which to assign the instance. The valid values of N vary based on the maximum number of security groups to which an instance can belong. For more information, see the [Security group limits](https://help.aliyun.com/document_detail/101348.html) section of the "Limits" topic.
    // 
    // When you specify this parameter, take note of the following items:
    // 
    // *   You cannot specify both `SecurityGroupId` and `SecurityGroupIds.N` in the same request.
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `SecurityGroupId` or `SecurityGroupIds.N` but can specify `NetworkInterface.N.SecurityGroupId` or `NetworkInterface.N.SecurityGroupIds.N`.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The protection period of the spot instance. Unit: hours. Valid values:
    // 
    // *   1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
    // *   0: After a spot instance is created, Alibaba Cloud does not ensure that the instance can run for one hour. The system compares the biding price with the market prices and checks the resource inventory to determine whether to retain or release the instance.
    // 
    // Default value: 1.
    // 
    // > 
    // 
    // *   You can set this parameter only to 0 or 1.
    // 
    // *   The spot instance is billed by second. Specify an appropriate protection period.
    // 
    // *   Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released.
    shared_ptr<int32_t> spotDuration_ {};
    // The interruption mode of the spot instance. Valid values:
    // 
    // *   Terminate: The instance is released.
    // 
    // *   Stop: The instance is stopped in economical mode.
    // 
    //     For information about the economical mode, see [Economical mode](https://help.aliyun.com/document_detail/63353.html).
    // 
    // Default value: Terminate.
    shared_ptr<string> spotInterruptionBehavior_ {};
    // The maximum hourly price of the instance. The value is accurate to three decimal places. This parameter is valid only when the `SpotStrategy` parameter is set to `SpotWithPriceLimit`.
    shared_ptr<float> spotPriceLimit_ {};
    // The bidding policy for the pay-as-you-go instance. This parameter is valid only when the `InstanceChargeType` parameter is set to `PostPaid`. Valid values:
    // 
    // *   NoSpot: The instance is created as a pay-as-you-go instance.
    // *   SpotWithPriceLimit: The instance is created as a spot instance with a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instance is created as a spot instance for which the market price at the time of purchase is automatically used as the bid price.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The ID of the storage set.
    shared_ptr<string> storageSetId_ {};
    // The maximum number of partitions in the storage set. Valid values: integers greater than or equal to 1.
    shared_ptr<int32_t> storageSetPartitionNumber_ {};
    // The tags to add to the instance, disks, and primary ENI.
    shared_ptr<vector<RunInstancesRequest::Tag>> tag_ {};
    // Specifies whether to create the instance on a dedicated host. Valid values:
    // 
    // *   default: creates the instance on a non-dedicated host.
    // *   host: creates the instance on a dedicated host. If you do not set the `DedicatedHostId` parameter, Alibaba Cloud selects a dedicated host for the instance.
    // 
    // Default value: default.
    shared_ptr<string> tenancy_ {};
    // Specifies whether to automatically append incremental suffixes to the hostname specified by the `HostName` parameter and to the instance name specified by the `InstanceName` parameter when you batch create instances. The incremental suffixes can range from 001 to 999. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    // 
    // When the `HostName` or `InstanceName` value is set in the `name_prefix[begin_number,bits]` format without `name_suffix`, the `UniqueSuffix` parameter does not take effect. The names are sorted in the specified sequence.
    // 
    // For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
    shared_ptr<bool> uniqueSuffix_ {};
    // The user data of the instance. You must specify Base64-encoded data. The instance user data cannot exceed 32 KB in size before Base64 encoding.
    // 
    // For information about the limits, formats, and running frequencies of instance user data, see [Instance user data](https://help.aliyun.com/document_detail/49121.html).
    // 
    // >  To ensure security, we recommend that you do not use plaintext to pass in confidential information, such as passwords or private keys, as user data. If you need to pass in confidential information, we recommend that you encrypt and encode the information in Base64 and then decode and decrypt the information in the same manner in the instance.
    shared_ptr<string> userData_ {};
    // The ID of the vSwitch to which to connect to the instance. You must set this parameter when you create an instance of the VPC type. The specified vSwitch and security group must belong to the same VPC. You can call the [DescribeVSwitches](https://help.aliyun.com/document_detail/35748.html) operation to query available vSwitches.
    // 
    // Take note of the following items:
    // 
    // *   If you specify the `VSwitchId` parameter, the zone specified by the `ZoneId` parameter must be the zone where the specified vSwitch is located. You can also leave the `ZoneId` parameter empty. Then, the system selects the zone where the specified vSwitch resides.
    // *   If `NetworkInterface.N.InstanceType` is set to `Primary`, you cannot specify `VSwitchId` but can specify `NetworkInterface.N.VSwitchId`.
    shared_ptr<string> vSwitchId_ {};
    // The ID of the zone in which to create the instance. You can call the [DescribeZones](https://help.aliyun.com/document_detail/25610.html) operation to query the most recent zone list.
    // 
    // > If you specify the `VSwitchId` parameter, the zone specified by the `ZoneId` parameter must be the zone where the vSwitch is located. You can also leave the `ZoneId` parameter empty. Then, the system selects the zone where the specified vSwitch is located.
    // 
    // This parameter is empty by default.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
