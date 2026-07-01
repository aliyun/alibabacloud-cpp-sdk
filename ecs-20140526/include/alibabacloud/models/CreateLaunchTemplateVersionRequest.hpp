// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELAUNCHTEMPLATEVERSIONREQUEST_HPP_
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
  class CreateLaunchTemplateVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLaunchTemplateVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableVmOsConfig, enableVmOsConfig_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_TO_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
      DARABONBA_PTR_TO_JSON(HttpTokens, httpTokens_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_TO_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_TO_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_TO_JSON(NetworkInterface, networkInterface_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLaunchTemplateVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
      DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
      DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(DeploymentSetId, deploymentSetId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableVmOsConfig, enableVmOsConfig_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HttpEndpoint, httpEndpoint_);
      DARABONBA_PTR_FROM_JSON(HttpPutResponseHopLimit, httpPutResponseHopLimit_);
      DARABONBA_PTR_FROM_JSON(HttpTokens, httpTokens_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(ImageOptions, imageOptions_);
      DARABONBA_PTR_FROM_JSON(ImageOwnerAlias, imageOwnerAlias_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InternetChargeType, internetChargeType_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthIn, internetMaxBandwidthIn_);
      DARABONBA_PTR_FROM_JSON(InternetMaxBandwidthOut, internetMaxBandwidthOut_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Ipv6AddressCount, ipv6AddressCount_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
      DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
      DARABONBA_PTR_FROM_JSON(NetworkInterface, networkInterface_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
      DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
      DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    CreateLaunchTemplateVersionRequest() = default ;
    CreateLaunchTemplateVersionRequest(const CreateLaunchTemplateVersionRequest &) = default ;
    CreateLaunchTemplateVersionRequest(CreateLaunchTemplateVersionRequest &&) = default ;
    CreateLaunchTemplateVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLaunchTemplateVersionRequest() = default ;
    CreateLaunchTemplateVersionRequest& operator=(const CreateLaunchTemplateVersionRequest &) = default ;
    CreateLaunchTemplateVersionRequest& operator=(CreateLaunchTemplateVersionRequest &&) = default ;
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
      // The tag key of the instances, disks, and primary ENIs created by using this version. Valid values of N: 1 to 20. The tag key cannot be an empty string. It can be up to 128 characters in length and cannot start with aliyun or acs:. It cannot contain http:// or https://.
      shared_ptr<string> key_ {};
      // The tag value of the instances, disks, and primary ENIs created by using this version. Valid values of N: 1 to 20. The tag value can be an empty string. It can be up to 128 characters in length and cannot contain http:// or https://.
      shared_ptr<string> value_ {};
    };

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
      // The trusted system mode. Set the value to vTPM.
      // 
      // The following instance families support trusted system mode:
      // - g7, c7, and r7.
      // - Security-enhanced instance family (g7t, c7t, and r7t).
      // 
      // When you create ECS instances of the preceding instance families, you must configure this parameter. Details:
      // 
      // - To use the Alibaba Cloud Trusted System, set this parameter to vTPM. The trusted verification is completed by the Alibaba Cloud Trusted System when the instance starts.
      // - If you do not use the Alibaba Cloud Trusted System, you can leave this parameter empty. However, if the ECS instance that you create uses the Enclave-based confidential computing mode (`SecurityOptions.ConfidentialComputingMode=Enclave`), the trusted system is also enabled for the instance.
      // - When you create a trusted ECS instance by invoking an API operation, you can only invoke `RunInstances`. `CreateInstance` does not support configuring the `SecurityOptions.TrustedSystemMode` parameter.
      // > If you specify an instance as a trusted instance during creation, you can only use images that support the trusted system when you replace the system disk.
      // 
      // For more information about the trusted system, see [Overview of trusted features for security-enhanced instances](https://help.aliyun.com/document_detail/201394.html).
      shared_ptr<string> trustedSystemMode_ {};
    };

    class NetworkInterface : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NetworkInterface& obj) { 
        DARABONBA_PTR_TO_JSON(DeleteOnRelease, deleteOnRelease_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceName, networkInterfaceName_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_TO_JSON(PrimaryIpAddress, primaryIpAddress_);
        DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, NetworkInterface& obj) { 
        DARABONBA_PTR_FROM_JSON(DeleteOnRelease, deleteOnRelease_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceName, networkInterfaceName_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceTrafficMode, networkInterfaceTrafficMode_);
        DARABONBA_PTR_FROM_JSON(PrimaryIpAddress, primaryIpAddress_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
        DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
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
        && this->description_ == nullptr && this->instanceType_ == nullptr && this->networkInterfaceName_ == nullptr && this->networkInterfaceTrafficMode_ == nullptr && this->primaryIpAddress_ == nullptr
        && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->vSwitchId_ == nullptr; };
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
      // > This parameter takes effect only for secondary ENIs.
      shared_ptr<bool> deleteOnRelease_ {};
      // The description of the secondary network interface controller (NIC). The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`. The value of N in `NetworkInterface.N` cannot be greater than 1.
      shared_ptr<string> description_ {};
      // The type of the ENI. Valid values of N: 1 to 2. If you configure one ENI, you can configure either a primary network interface controller (NIC) or a secondary ENI. If you configure two ENIs, you must configure one primary NIC and one secondary ENI.
      // 
      // Valid values:
      // 
      // - Primary: primary NIC.
      // - Secondary: secondary ENI.
      // 
      // Default value: Secondary.
      shared_ptr<string> instanceType_ {};
      // The name of the secondary network interface controller (NIC). The value of N in `NetworkInterface.N` cannot be greater than 1.
      shared_ptr<string> networkInterfaceName_ {};
      // The communication mode of the primary ENI. Valid values:
      // 
      // - Standard: uses the TCP communication mode.
      // - HighPerformance: enables the Elastic RDMA Interface (ERI) and uses the RDMA communication mode.
      shared_ptr<string> networkInterfaceTrafficMode_ {};
      // The primary private IP address of the secondary network interface controller (NIC). The value of N in `NetworkInterface.N` cannot be greater than 1.
      shared_ptr<string> primaryIpAddress_ {};
      // The ID of the security group to which the secondary network interface controller (NIC) belongs. The security group of the secondary NIC must belong to the same VPC as the instance. The value of N in `NetworkInterface.N` cannot be greater than 1.
      // 
      // > You cannot specify both `NetworkInterface.N.SecurityGroupId` and `NetworkInterface.N.SecurityGroupIds.N`.
      shared_ptr<string> securityGroupId_ {};
      // The IDs of one or more security groups to which the secondary network interface controller (NIC) belongs. The security groups and the secondary NIC must belong to the same VPC. The valid values of N in `SecurityGroupIds.N` depend on the quota for the maximum number of security groups to which a secondary NIC can belong. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html). The value of N in `NetworkInterface.N` cannot be greater than 1.
      // 
      // > You cannot specify both `NetworkInterface.N.SecurityGroupId` and `NetworkInterface.N.SecurityGroupIds.N`.
      shared_ptr<vector<string>> securityGroupIds_ {};
      // The ID of the vSwitch to which the secondary network interface controller (NIC) belongs. The instance and the secondary NIC must be in the same VPC and the same active zone but can belong to different vSwitches. The value of N in `NetworkInterface.N` cannot be greater than 1.
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
      // Specifies whether instances that use this image support logon with the ecs-user user.
      // Valid values:
      // - true: supported.
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
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
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
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(KMSKeyId, KMSKeyId_);
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
        && this->diskName_ == nullptr && this->encrypted_ == nullptr && this->KMSKeyId_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr
        && this->size_ == nullptr && this->snapshotId_ == nullptr; };
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


    protected:
      // The ID of the automatic snapshot policy applied to the data disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the performance burst feature. Valid values:
      // 
      // - true: enables the performance burst feature.
      // - false: does not enable the performance burst feature.
      shared_ptr<bool> burstingEnabled_ {};
      // The category of data disk N. Valid values:
      // 
      // - cloud_efficiency: ultra disk.
      // - cloud_ssd: standard SSD.
      // - cloud_essd: enterprise SSD.
      // - cloud: basic disk.
      // - cloud_auto: ESSD AutoPL disk.
      // - cloud_regional_disk_auto: regional ESSD.
      // - cloud_essd_entry: ESSD Entry disk.
      //   >The cloud_essd_entry value is supported only when `InstanceType` is configured as an instance type in the `ecs.u1` or `ecs.e` family.
      // - elastic_ephemeral_disk_standard: elastic ephemeral disk - Standard.
      // - elastic_ephemeral_disk_premium: elastic ephemeral disk - Premium Edition.
      // 
      // For I/O optimization instances, the default value is cloud_efficiency. For non-I/O optimization instances, the default value is cloud.
      // Default value details:
      // 
      // - When InstanceType is set to a retired instance type that is not I/O optimized, the default parameter value is `cloud`.
      // - In other cases, the default value is `cloud_efficiency`.<props="china">After January 30, 2026, when the I/O optimized instance type does not support cloud_auto, the default value is cloud_efficiency. Otherwise, the default value is cloud_auto, and the performance burst feature is enabled by default (which incurs additional fees. For details, see [Billing examples](~~368372#p_75k_2hp_7gp~~)). For more information, see [Change notice](https://www.aliyun.com/notice/117844).
      shared_ptr<string> category_ {};
      // Specifies whether to release the data disk when the instance is released. Valid values:
      // 
      // - true: releases the data disk when the instance is released.
      // - false: does not release the data disk when the instance is released.
      // 
      // Default value: true.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the data disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The mount point of the data disk. The naming conventions for mount points vary based on the number of data disks attached:
      // - 1 to 25 data disks: /dev/xvd`[b-z]`
      // 
      // - More than 25 data disks: /dev/xvd`[aa-zz]`. For example, the 26th data disk is named /dev/xvdaa, the 27th data disk is named /dev/xvdab, and so on.
      // 
      // > This parameter is applicable only to full image (system image) scenarios. You can set this parameter to the mount point of the data disk in the full image and modify the corresponding `DataDisk.N.Size` and `DataDisk.N.Category` parameters to change the disk category and size of the data disk in the full image.
      shared_ptr<string> device_ {};
      // The name of the data disk. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // Specifies whether to encrypt the data disk.
      shared_ptr<string> encrypted_ {};
      // The KMS key ID for the data disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD used as a data disk. The value of N must be the same as that in `DataDisk.N.Category=cloud_essd`. Configure the performance level based on the following valid values:
      // 
      // - PL0: A single disk can deliver up to 10,000 random read/write IOPS.
      // - PL1 (default): A single disk can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk used as the system disk. Valid values: 0 to min{50000, 1000 × Capacity - Baseline Performance}.
      // 
      // Baseline Performance = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // > This parameter is available only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the provisioned performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of data disk N. Valid values of N: 1 to 16. Unit: GiB. Valid values:
      // 
      // -   cloud: 5 to 2000.
      // -   cloud_efficiency: 20 to 32768.
      // -   cloud_ssd: 20 to 32768.
      // -   cloud_essd: The valid value range depends on the value of `DataDisk.N.PerformanceLevel`.   
      //     - PL0: 1 to 32768.
      //     - PL1: 20 to 32768.
      //     - PL2: 461 to 32768.
      //     - PL3: 1261 to 32768.
      // - cloud_auto: 1 to 32,768.
      // - cloud_essd_entry: 10 to 32,768.
      // 
      // The value of this parameter must be greater than or equal to the size of the snapshot specified by `SnapshotId`.
      shared_ptr<int32_t> size_ {};
      // The ID of the snapshot used to create data disk N. Valid values of N: 1 to 16. When `DataDisk.N.SnapshotId` is specified, `DataDisk.N.Size` is ignored. The actual size of the created disk is the size of the specified snapshot.
      // 
      // Snapshots created on or before July 15, 2013 cannot be used. Requests that use such snapshots are rejected.
      shared_ptr<string> snapshotId_ {};
    };

    class SystemDisk : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SystemDisk& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
        DARABONBA_PTR_TO_JSON(BurstingEnabled, burstingEnabled_);
        DARABONBA_PTR_TO_JSON(Category, category_);
        DARABONBA_PTR_TO_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DiskName, diskName_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(Iops, iops_);
        DARABONBA_PTR_TO_JSON(KMSKeyId, KMSKeyId_);
        DARABONBA_PTR_TO_JSON(PerformanceLevel, performanceLevel_);
        DARABONBA_PTR_TO_JSON(ProvisionedIops, provisionedIops_);
        DARABONBA_PTR_TO_JSON(Size, size_);
      };
      friend void from_json(const Darabonba::Json& j, SystemDisk& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
        DARABONBA_PTR_FROM_JSON(BurstingEnabled, burstingEnabled_);
        DARABONBA_PTR_FROM_JSON(Category, category_);
        DARABONBA_PTR_FROM_JSON(DeleteWithInstance, deleteWithInstance_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DiskName, diskName_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(Iops, iops_);
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
        && this->burstingEnabled_ == nullptr && this->category_ == nullptr && this->deleteWithInstance_ == nullptr && this->description_ == nullptr && this->diskName_ == nullptr
        && this->encrypted_ == nullptr && this->iops_ == nullptr && this->KMSKeyId_ == nullptr && this->performanceLevel_ == nullptr && this->provisionedIops_ == nullptr
        && this->size_ == nullptr; };
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


      // deleteWithInstance Field Functions 
      bool hasDeleteWithInstance() const { return this->deleteWithInstance_ != nullptr;};
      void deleteDeleteWithInstance() { this->deleteWithInstance_ = nullptr;};
      inline bool getDeleteWithInstance() const { DARABONBA_PTR_GET_DEFAULT(deleteWithInstance_, false) };
      inline SystemDisk& setDeleteWithInstance(bool deleteWithInstance) { DARABONBA_PTR_SET_VALUE(deleteWithInstance_, deleteWithInstance) };


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


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
      inline SystemDisk& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // iops Field Functions 
      bool hasIops() const { return this->iops_ != nullptr;};
      void deleteIops() { this->iops_ = nullptr;};
      inline int32_t getIops() const { DARABONBA_PTR_GET_DEFAULT(iops_, 0) };
      inline SystemDisk& setIops(int32_t iops) { DARABONBA_PTR_SET_VALUE(iops_, iops) };


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
      // The ID of the automatic snapshot policy applied to the system disk.
      shared_ptr<string> autoSnapshotPolicyId_ {};
      // Specifies whether to enable the performance burst feature. Valid values:
      // 
      // - true: enables the performance burst feature.
      // - false: does not enable the performance burst feature.
      shared_ptr<bool> burstingEnabled_ {};
      // The category of the system disk. Valid values:
      // 
      // -   cloud: basic disk.
      // -   cloud_efficiency: ultra disk.
      // -   cloud_ssd: standard SSD.
      // -   cloud_auto: ESSD AutoPL disk.
      // -   cloud_essd: enterprise SSD (ESSD). You can use the `SystemDisk.PerformanceLevel` parameter to configure the performance level of the disk.
      // - cloud_essd_entry: ESSD Entry disk.
      // 
      // For retired instance types that are not I/O optimization instances, the default value is cloud. For other instance types, the default value is cloud_efficiency.
      shared_ptr<string> category_ {};
      // Specifies whether to release the system disk when the instance is released. Valid values:
      // 
      // - true: releases the system disk when the instance is released.
      // - false: does not release the system disk when the instance is released.
      // 
      // Default value: true.
      shared_ptr<bool> deleteWithInstance_ {};
      // The description of the system disk. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The name of the system disk. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
      shared_ptr<string> diskName_ {};
      // Specifies whether to encrypt the system disk. Valid values:
      // 
      // - true: encrypts the system disk.
      // 
      // - false: does not encrypt the system disk.
      // 
      // Default value: false.
      // 
      // > System disk encryption is not supported in Zone D of the Hong Kong (China) region or Zone A of the Singapore region when you create an instance.
      shared_ptr<string> encrypted_ {};
      // > This parameter is not publicly available.
      shared_ptr<int32_t> iops_ {};
      // The KMS key ID of the system disk.
      shared_ptr<string> KMSKeyId_ {};
      // The performance level of the ESSD used as the system disk. Configure the performance level based on the following valid values:
      // 
      // - PL0 (default): A single disk can deliver up to 10,000 random read/write IOPS.
      // - PL1: A single disk can deliver up to 50,000 random read/write IOPS.
      // - PL2: A single disk can deliver up to 100,000 random read/write IOPS.
      // - PL3: A single disk can deliver up to 1,000,000 random read/write IOPS.
      // 
      // For information about how to select an ESSD performance level, see [ESSDs](https://help.aliyun.com/document_detail/122389.html).
      shared_ptr<string> performanceLevel_ {};
      // The provisioned read/write IOPS of the ESSD AutoPL disk used as the system disk. Valid values: 0 to min{50000, 1000 × Capacity - Baseline Performance}.
      // 
      // Baseline Performance = min{1,800 + 50 × Capacity, 50,000}.
      // 
      // > This parameter is available only when DiskCategory is set to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the provisioned performance of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
      shared_ptr<int64_t> provisionedIops_ {};
      // The size of the system disk. Unit: GiB. Valid values:
      // 
      // - cloud: 20 to 500.
      // - Other disk categories: 20 to 2048.
      // 
      // The value of this parameter must be greater than or equal to max{20, ImageSize}.
      shared_ptr<int32_t> size_ {};
    };

    virtual bool empty() const override { return this->systemDisk_ == nullptr
        && this->autoReleaseTime_ == nullptr && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->creditSpecification_ == nullptr && this->dataDisk_ == nullptr
        && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr && this->description_ == nullptr && this->enableVmOsConfig_ == nullptr && this->hostName_ == nullptr
        && this->httpEndpoint_ == nullptr && this->httpPutResponseHopLimit_ == nullptr && this->httpTokens_ == nullptr && this->imageId_ == nullptr && this->imageOptions_ == nullptr
        && this->imageOwnerAlias_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr
        && this->launchTemplateId_ == nullptr && this->launchTemplateName_ == nullptr && this->networkInterface_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->passwordInherit_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr && this->privateIpAddress_ == nullptr
        && this->ramRoleName_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr && this->securityGroupIds_ == nullptr && this->securityOptions_ == nullptr && this->spotDuration_ == nullptr
        && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr && this->tag_ == nullptr && this->userData_ == nullptr && this->vSwitchId_ == nullptr
        && this->versionDescription_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
    // systemDisk Field Functions 
    bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
    void deleteSystemDisk() { this->systemDisk_ = nullptr;};
    inline const CreateLaunchTemplateVersionRequest::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, CreateLaunchTemplateVersionRequest::SystemDisk) };
    inline CreateLaunchTemplateVersionRequest::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, CreateLaunchTemplateVersionRequest::SystemDisk) };
    inline CreateLaunchTemplateVersionRequest& setSystemDisk(const CreateLaunchTemplateVersionRequest::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
    inline CreateLaunchTemplateVersionRequest& setSystemDisk(CreateLaunchTemplateVersionRequest::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


    // autoReleaseTime Field Functions 
    bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
    void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
    inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
    inline CreateLaunchTemplateVersionRequest& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateLaunchTemplateVersionRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline CreateLaunchTemplateVersionRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // creditSpecification Field Functions 
    bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
    void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
    inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
    inline CreateLaunchTemplateVersionRequest& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


    // dataDisk Field Functions 
    bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
    void deleteDataDisk() { this->dataDisk_ = nullptr;};
    inline const vector<CreateLaunchTemplateVersionRequest::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<CreateLaunchTemplateVersionRequest::DataDisk>) };
    inline vector<CreateLaunchTemplateVersionRequest::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<CreateLaunchTemplateVersionRequest::DataDisk>) };
    inline CreateLaunchTemplateVersionRequest& setDataDisk(const vector<CreateLaunchTemplateVersionRequest::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
    inline CreateLaunchTemplateVersionRequest& setDataDisk(vector<CreateLaunchTemplateVersionRequest::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline CreateLaunchTemplateVersionRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deploymentSetId Field Functions 
    bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
    void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
    inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
    inline CreateLaunchTemplateVersionRequest& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateLaunchTemplateVersionRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableVmOsConfig Field Functions 
    bool hasEnableVmOsConfig() const { return this->enableVmOsConfig_ != nullptr;};
    void deleteEnableVmOsConfig() { this->enableVmOsConfig_ = nullptr;};
    inline bool getEnableVmOsConfig() const { DARABONBA_PTR_GET_DEFAULT(enableVmOsConfig_, false) };
    inline CreateLaunchTemplateVersionRequest& setEnableVmOsConfig(bool enableVmOsConfig) { DARABONBA_PTR_SET_VALUE(enableVmOsConfig_, enableVmOsConfig) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateLaunchTemplateVersionRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // httpEndpoint Field Functions 
    bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
    void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
    inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
    inline CreateLaunchTemplateVersionRequest& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


    // httpPutResponseHopLimit Field Functions 
    bool hasHttpPutResponseHopLimit() const { return this->httpPutResponseHopLimit_ != nullptr;};
    void deleteHttpPutResponseHopLimit() { this->httpPutResponseHopLimit_ = nullptr;};
    inline int32_t getHttpPutResponseHopLimit() const { DARABONBA_PTR_GET_DEFAULT(httpPutResponseHopLimit_, 0) };
    inline CreateLaunchTemplateVersionRequest& setHttpPutResponseHopLimit(int32_t httpPutResponseHopLimit) { DARABONBA_PTR_SET_VALUE(httpPutResponseHopLimit_, httpPutResponseHopLimit) };


    // httpTokens Field Functions 
    bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
    void deleteHttpTokens() { this->httpTokens_ = nullptr;};
    inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
    inline CreateLaunchTemplateVersionRequest& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateLaunchTemplateVersionRequest& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // imageOptions Field Functions 
    bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
    void deleteImageOptions() { this->imageOptions_ = nullptr;};
    inline const CreateLaunchTemplateVersionRequest::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, CreateLaunchTemplateVersionRequest::ImageOptions) };
    inline CreateLaunchTemplateVersionRequest::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, CreateLaunchTemplateVersionRequest::ImageOptions) };
    inline CreateLaunchTemplateVersionRequest& setImageOptions(const CreateLaunchTemplateVersionRequest::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
    inline CreateLaunchTemplateVersionRequest& setImageOptions(CreateLaunchTemplateVersionRequest::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


    // imageOwnerAlias Field Functions 
    bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
    void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
    inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
    inline CreateLaunchTemplateVersionRequest& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline CreateLaunchTemplateVersionRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateLaunchTemplateVersionRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateLaunchTemplateVersionRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // internetChargeType Field Functions 
    bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
    void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
    inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
    inline CreateLaunchTemplateVersionRequest& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


    // internetMaxBandwidthIn Field Functions 
    bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
    void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
    inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
    inline CreateLaunchTemplateVersionRequest& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


    // internetMaxBandwidthOut Field Functions 
    bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
    void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
    inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
    inline CreateLaunchTemplateVersionRequest& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline CreateLaunchTemplateVersionRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // ipv6AddressCount Field Functions 
    bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
    void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
    inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
    inline CreateLaunchTemplateVersionRequest& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline CreateLaunchTemplateVersionRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // launchTemplateId Field Functions 
    bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
    void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
    inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
    inline CreateLaunchTemplateVersionRequest& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


    // launchTemplateName Field Functions 
    bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
    void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
    inline string getLaunchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
    inline CreateLaunchTemplateVersionRequest& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


    // networkInterface Field Functions 
    bool hasNetworkInterface() const { return this->networkInterface_ != nullptr;};
    void deleteNetworkInterface() { this->networkInterface_ = nullptr;};
    inline const vector<CreateLaunchTemplateVersionRequest::NetworkInterface> & getNetworkInterface() const { DARABONBA_PTR_GET_CONST(networkInterface_, vector<CreateLaunchTemplateVersionRequest::NetworkInterface>) };
    inline vector<CreateLaunchTemplateVersionRequest::NetworkInterface> getNetworkInterface() { DARABONBA_PTR_GET(networkInterface_, vector<CreateLaunchTemplateVersionRequest::NetworkInterface>) };
    inline CreateLaunchTemplateVersionRequest& setNetworkInterface(const vector<CreateLaunchTemplateVersionRequest::NetworkInterface> & networkInterface) { DARABONBA_PTR_SET_VALUE(networkInterface_, networkInterface) };
    inline CreateLaunchTemplateVersionRequest& setNetworkInterface(vector<CreateLaunchTemplateVersionRequest::NetworkInterface> && networkInterface) { DARABONBA_PTR_SET_RVALUE(networkInterface_, networkInterface) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline CreateLaunchTemplateVersionRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateLaunchTemplateVersionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateLaunchTemplateVersionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // passwordInherit Field Functions 
    bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
    void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
    inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
    inline CreateLaunchTemplateVersionRequest& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline CreateLaunchTemplateVersionRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateLaunchTemplateVersionRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // privateIpAddress Field Functions 
    bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
    void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
    inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
    inline CreateLaunchTemplateVersionRequest& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


    // ramRoleName Field Functions 
    bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
    void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
    inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
    inline CreateLaunchTemplateVersionRequest& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateLaunchTemplateVersionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateLaunchTemplateVersionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateLaunchTemplateVersionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateLaunchTemplateVersionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityEnhancementStrategy Field Functions 
    bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
    void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
    inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
    inline CreateLaunchTemplateVersionRequest& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline CreateLaunchTemplateVersionRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIds Field Functions 
    bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
    void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
    inline const vector<string> & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, vector<string>) };
    inline vector<string> getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, vector<string>) };
    inline CreateLaunchTemplateVersionRequest& setSecurityGroupIds(const vector<string> & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
    inline CreateLaunchTemplateVersionRequest& setSecurityGroupIds(vector<string> && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


    // securityOptions Field Functions 
    bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
    void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
    inline const CreateLaunchTemplateVersionRequest::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, CreateLaunchTemplateVersionRequest::SecurityOptions) };
    inline CreateLaunchTemplateVersionRequest::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, CreateLaunchTemplateVersionRequest::SecurityOptions) };
    inline CreateLaunchTemplateVersionRequest& setSecurityOptions(const CreateLaunchTemplateVersionRequest::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
    inline CreateLaunchTemplateVersionRequest& setSecurityOptions(CreateLaunchTemplateVersionRequest::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline CreateLaunchTemplateVersionRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline CreateLaunchTemplateVersionRequest& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline CreateLaunchTemplateVersionRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateLaunchTemplateVersionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateLaunchTemplateVersionRequest::Tag>) };
    inline vector<CreateLaunchTemplateVersionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateLaunchTemplateVersionRequest::Tag>) };
    inline CreateLaunchTemplateVersionRequest& setTag(const vector<CreateLaunchTemplateVersionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateLaunchTemplateVersionRequest& setTag(vector<CreateLaunchTemplateVersionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline CreateLaunchTemplateVersionRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateLaunchTemplateVersionRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // versionDescription Field Functions 
    bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
    void deleteVersionDescription() { this->versionDescription_ = nullptr;};
    inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
    inline CreateLaunchTemplateVersionRequest& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateLaunchTemplateVersionRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline CreateLaunchTemplateVersionRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<CreateLaunchTemplateVersionRequest::SystemDisk> systemDisk_ {};
    // The automatic release time. Specify the time in the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // - If the value of seconds (`ss`) is not `00`, the time is automatically rounded to the start of the current minute (`mm`).
    // 
    // - The earliest release time is 30 minutes after the current time.
    // 
    // - The latest release time cannot be more than three years from the current time.
    shared_ptr<string> autoReleaseTime_ {};
    // Specifies whether to enable auto-renewal. This parameter takes effect only when `InstanceChargeType` is set to `PrePaid`. Valid values:
    // 
    // - true: enables auto-renewal.
    // - false: does not enable auto-renewal.
    // 
    // Default value: false.
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
    // The running mode of the burstable instance. Valid values:
    // 
    // - Standard: standard mode. For more information, see the performance constrained mode section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    // - Unlimited: unlimited mode. For more information, see the unlimited mode section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> creditSpecification_ {};
    // The list of data disks.
    shared_ptr<vector<CreateLaunchTemplateVersionRequest::DataDisk>> dataDisk_ {};
    // The release protection attribute of the instance. Specifies whether the instance can be released from the console or by calling [DeleteInstance](https://help.aliyun.com/document_detail/25507.html). Valid values:
    // - true: enables release protection.
    // 
    // - false: disables release protection.
    // 
    // Default value: false.
    // 
    // > This attribute is applicable only to pay-as-you-go instances. It can only restrict manual release operations and does not take effect on system-initiated release operations.
    shared_ptr<bool> deletionProtection_ {};
    // The ID of the deployment set.
    shared_ptr<string> deploymentSetId_ {};
    // The description of the instance. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // Specifies whether to enable the operating system configuration of the instance.
    shared_ptr<bool> enableVmOsConfig_ {};
    // The hostname of the Elastic Compute Service (ECS) server.
    // 
    // -   The hostname cannot start or end with a period (.) or hyphen (-), and cannot contain consecutive periods or hyphens.
    // -   Windows instances: The hostname must be 2 to 15 characters in length and cannot contain periods (.) or consist entirely of digits. It can contain letters, digits, and hyphens (-).
    // -   Other instances (such as Linux): The hostname must be 2 to 64 characters in length. It can contain multiple periods (.), with each segment between periods allowing letters, digits, and hyphens (-).
    shared_ptr<string> hostName_ {};
    // Specifies whether to enable the access channel for instance metadata. Valid values:
    // 
    // - enabled: enables the access channel.
    // - disabled: disables the access channel.
    // 
    // Default value: enabled.
    // 
    // > For more information about instance metadata, see [Overview of ECS instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpEndpoint_ {};
    // > This parameter is not publicly available.
    shared_ptr<int32_t> httpPutResponseHopLimit_ {};
    // Specifies whether to forcefully use the security-hardened mode (IMDSv2) to access instance metadata. Valid values:
    // 
    // - optional: does not forcefully use the security-hardened mode.
    // - required: forcefully uses the security-hardened mode. After you set this value, the normal mode cannot be used to access instance metadata.
    // 
    // Default value: optional.
    // 
    // > For more information about the modes for accessing instance metadata, see [Overview of ECS instance metadata](https://help.aliyun.com/document_detail/108460.html).
    shared_ptr<string> httpTokens_ {};
    // The ID of the image used to create the instance. You can call [DescribeImages](https://help.aliyun.com/document_detail/25534.html) to query available image resources.
    shared_ptr<string> imageId_ {};
    // The image-related property information.
    shared_ptr<CreateLaunchTemplateVersionRequest::ImageOptions> imageOptions_ {};
    // The source of the image.
    // > This parameter will be deprecated. To improve compatibility, use other parameters.
    shared_ptr<string> imageOwnerAlias_ {};
    // The billing method of the instance. Valid values:
    // 
    // <props="china">
    // - PrePaid: subscription. If you set this parameter to PrePaid, confirm that your account supports balance payment or credit payment. Otherwise, an `InvalidPayMethod` fault is returned.
    // - PostPaid: pay-as-you-go.
    // 
    // 
    // <props="intl">
    // - PrePaid: subscription. If you set this parameter to PrePaid, confirm that your account supports credit payment. Otherwise, an `InvalidPayMethod` fault is returned.
    // - PostPaid: pay-as-you-go.
    // 
    // 
    // <props="partner">
    // - PrePaid: subscription. If you set this parameter to PrePaid, confirm that your account supports credit payment. Otherwise, an `InvalidPayMethod` fault is returned.
    // - PostPaid: pay-as-you-go.
    shared_ptr<string> instanceChargeType_ {};
    // The name of the instance. The name must be 2 to 128 characters in length and can contain letters, digits, and characters from the Unicode letter category (which includes characters from various languages). The name can contain colons (:), underscores (_), periods (.), and hyphens (-). The default value is the `InstanceId` of the instance.
    // 
    // When you create multiple ECS instances at a time, you can batch configure sequential instance names that contain brackets ([]) and commas (,). For more information, see [Batch configure sequential names or hostnames for multiple instances](https://help.aliyun.com/document_detail/196048.html).
    shared_ptr<string> instanceName_ {};
    // The instance type. For more information, see [Instance family](https://help.aliyun.com/document_detail/25378.html). You can also call [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the most recent instance type list.
    shared_ptr<string> instanceType_ {};
    // The billing method for outbound Internet bandwidth. Valid values:
    // 
    // - PayByBandwidth: pay-by-bandwidth.
    // - PayByTraffic: pay-by-traffic.
    // 
    // > In **pay-by-traffic** mode, the peak inbound and outbound bandwidths are used as upper limits of bandwidths instead of guaranteed performance specifications. When resource contention occurs, the peak bandwidths may be limited. If you want guaranteed bandwidth, use the **pay-by-bandwidth** mode.
    shared_ptr<string> internetChargeType_ {};
    // The maximum inbound public bandwidth. Unit: Mbit/s. Valid values:
    // 
    // - If the purchased outbound public bandwidth is less than or equal to 10 Mbit/s: 1 to 10. Default value: 10.
    // - If the purchased outbound public bandwidth is greater than 10 Mbit/s: 1 to the value of `InternetMaxBandwidthOut`. Default value: the value of `InternetMaxBandwidthOut`.
    shared_ptr<int32_t> internetMaxBandwidthIn_ {};
    // The maximum outbound public bandwidth. Unit: Mbit/s. Valid values: 0 to 100.
    shared_ptr<int32_t> internetMaxBandwidthOut_ {};
    // Specifies whether the instance is an I/O optimized instance. Valid values:
    // 
    // -   none: The instance is not I/O optimized.
    // -   optimized: The instance is I/O optimization enabled.
    shared_ptr<string> ioOptimized_ {};
    // The number of IPv6 addresses to randomly generate for the primary ENI. Valid values: 1 to 10.
    shared_ptr<int32_t> ipv6AddressCount_ {};
    // The name of the key pair.
    // 
    // -   For Windows instances, this parameter is ignored. Even if you specify this parameter, only the `Password` content is used.
    // -   For Linux instances, password-based logon is disabled during initialization.
    shared_ptr<string> keyPairName_ {};
    // The ID of the launch template. For more information, call [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html). You must specify `LaunchTemplateId` or `LaunchTemplateName` to determine the launch template.
    shared_ptr<string> launchTemplateId_ {};
    // The name of the launch template. The name must be 2 to 128 characters in length. It must start with a letter and cannot start with `http://` or `https://`. It can contain digits, colons (:), underscores (_), and hyphens (-).
    shared_ptr<string> launchTemplateName_ {};
    // The network interface controller (NIC) information.
    shared_ptr<vector<CreateLaunchTemplateVersionRequest::NetworkInterface>> networkInterface_ {};
    // The network type of the instance. Valid values:
    // 
    // - vpc: VPC.
    // - classic: classic network. The classic network has been retired. For more information, see [Retirement notice](https://help.aliyun.com/document_detail/2833134.html).
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Specifies whether to use the preset password of the image. Valid values:
    // - true
    // - false
    // 
    // Default value: false.
    // 
    // > When you use this parameter, the Password parameter must be empty. You must also make sure that the image has a preset password.
    shared_ptr<bool> passwordInherit_ {};
    // The subscription duration of the resource. Unit: months. This parameter takes effect and is required only when `InstanceChargeType` is set to `PrePaid`. Valid values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
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
    // The private IP address of the instance.
    // 
    // When you specify a private IP address for a VPC-connected ECS instance, the IP address must be from the idle CIDR block of the vSwitch (`VSwitchId`).
    shared_ptr<string> privateIpAddress_ {};
    // The name of the instance RAM role. You can call the RAM API [ListRoles](https://help.aliyun.com/document_detail/28713.html) to query the instance RAM roles that you have created.
    shared_ptr<string> ramRoleName_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to enable security hardening for the operating system. Valid values:
    // 
    // -   Active: enables security hardening. This value is applicable only to public images.
    // -   Deactive: does not enable security hardening. This value is applicable to all image types.
    shared_ptr<string> securityEnhancementStrategy_ {};
    // The ID of the security group to which the instance created by using this version belongs. Instances in the same security group can communicate with each other.
    // 
    // > You cannot specify both `SecurityGroupId` and `SecurityGroupIds.N`.
    shared_ptr<string> securityGroupId_ {};
    // The IDs of one or more security groups to which the instance belongs. The valid values of N depend on the maximum number of security groups to which an instance can belong. For more information, see [Limits](https://help.aliyun.com/document_detail/25412.html).
    // 
    // > You cannot specify both `SecurityGroupId` and `SecurityGroupIds.N`.
    shared_ptr<vector<string>> securityGroupIds_ {};
    // The security options.
    shared_ptr<CreateLaunchTemplateVersionRequest::SecurityOptions> securityOptions_ {};
    // The protection period of the spot instance. Unit: hours. Default value: 1. Valid values:
    // - 1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain automatic release the instance.
    // - 0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain automatic release the instance.
    // 
    // Alibaba Cloud sends an ECS system event notification 5 minutes before the instance is released. Spot instances are billed by second. We recommend that you select an appropriate protection period based on the expected task execution duration.
    // 
    // > This parameter takes effect only when SpotStrategy is set to SpotWithPriceLimit or SpotAsPriceGo.
    shared_ptr<int32_t> spotDuration_ {};
    // The maximum hourly price of the instance. A maximum of three decimal places are supported.
    shared_ptr<float> spotPriceLimit_ {};
    // The preemption policy for the pay-as-you-go instance. This parameter takes effect when `InstanceChargeType` is set to `PostPaid`. Valid values:
    // 
    // -   NoSpot: The instance is a regular pay-as-you-go instance.
    // -   SpotWithPriceLimit: The instance is a spot instance with a user-defined maximum hourly price.
    // -   SpotAsPriceGo: The instance is a spot instance for which the market price at the time of purchase is automatically used as the bid price.
    shared_ptr<string> spotStrategy_ {};
    // The tags of the instances, disks, and primary ENIs created by using this version.
    shared_ptr<vector<CreateLaunchTemplateVersionRequest::Tag>> tag_ {};
    // Instance user data of the instance. Instance user data must be encoded in Base64. The raw data can be up to 32 KB in size.
    shared_ptr<string> userData_ {};
    // The ID of the vSwitch. You must specify this parameter when you create a VPC-connected instance.
    shared_ptr<string> vSwitchId_ {};
    // The description of the launch template version. The description must be 2 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> versionDescription_ {};
    // The ID of the virtual private cloud (VPC) to which the instance belongs.
    shared_ptr<string> vpcId_ {};
    // The zone ID of the instance.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
