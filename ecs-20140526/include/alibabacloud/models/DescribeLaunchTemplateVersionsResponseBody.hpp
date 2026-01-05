// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELAUNCHTEMPLATEVERSIONSRESPONSEBODY_HPP_
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
  class DescribeLaunchTemplateVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLaunchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LaunchTemplateVersionSets, launchTemplateVersionSets_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLaunchTemplateVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionSets, launchTemplateVersionSets_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLaunchTemplateVersionsResponseBody() = default ;
    DescribeLaunchTemplateVersionsResponseBody(const DescribeLaunchTemplateVersionsResponseBody &) = default ;
    DescribeLaunchTemplateVersionsResponseBody(DescribeLaunchTemplateVersionsResponseBody &&) = default ;
    DescribeLaunchTemplateVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLaunchTemplateVersionsResponseBody() = default ;
    DescribeLaunchTemplateVersionsResponseBody& operator=(const DescribeLaunchTemplateVersionsResponseBody &) = default ;
    DescribeLaunchTemplateVersionsResponseBody& operator=(DescribeLaunchTemplateVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LaunchTemplateVersionSets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LaunchTemplateVersionSets& obj) { 
        DARABONBA_PTR_TO_JSON(LaunchTemplateVersionSet, launchTemplateVersionSet_);
      };
      friend void from_json(const Darabonba::Json& j, LaunchTemplateVersionSets& obj) { 
        DARABONBA_PTR_FROM_JSON(LaunchTemplateVersionSet, launchTemplateVersionSet_);
      };
      LaunchTemplateVersionSets() = default ;
      LaunchTemplateVersionSets(const LaunchTemplateVersionSets &) = default ;
      LaunchTemplateVersionSets(LaunchTemplateVersionSets &&) = default ;
      LaunchTemplateVersionSets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LaunchTemplateVersionSets() = default ;
      LaunchTemplateVersionSets& operator=(const LaunchTemplateVersionSets &) = default ;
      LaunchTemplateVersionSets& operator=(LaunchTemplateVersionSets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class LaunchTemplateVersionSet : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LaunchTemplateVersionSet& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreatedBy, createdBy_);
          DARABONBA_PTR_TO_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_TO_JSON(LaunchTemplateData, launchTemplateData_);
          DARABONBA_PTR_TO_JSON(LaunchTemplateId, launchTemplateId_);
          DARABONBA_PTR_TO_JSON(LaunchTemplateName, launchTemplateName_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(VersionDescription, versionDescription_);
          DARABONBA_PTR_TO_JSON(VersionNumber, versionNumber_);
        };
        friend void from_json(const Darabonba::Json& j, LaunchTemplateVersionSet& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreatedBy, createdBy_);
          DARABONBA_PTR_FROM_JSON(DefaultVersion, defaultVersion_);
          DARABONBA_PTR_FROM_JSON(LaunchTemplateData, launchTemplateData_);
          DARABONBA_PTR_FROM_JSON(LaunchTemplateId, launchTemplateId_);
          DARABONBA_PTR_FROM_JSON(LaunchTemplateName, launchTemplateName_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(VersionDescription, versionDescription_);
          DARABONBA_PTR_FROM_JSON(VersionNumber, versionNumber_);
        };
        LaunchTemplateVersionSet() = default ;
        LaunchTemplateVersionSet(const LaunchTemplateVersionSet &) = default ;
        LaunchTemplateVersionSet(LaunchTemplateVersionSet &&) = default ;
        LaunchTemplateVersionSet(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LaunchTemplateVersionSet() = default ;
        LaunchTemplateVersionSet& operator=(const LaunchTemplateVersionSet &) = default ;
        LaunchTemplateVersionSet& operator=(LaunchTemplateVersionSet &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class LaunchTemplateData : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const LaunchTemplateData& obj) { 
            DARABONBA_PTR_TO_JSON(SystemDisk, systemDisk_);
            DARABONBA_PTR_TO_JSON(AutoReleaseTime, autoReleaseTime_);
            DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
            DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
            DARABONBA_PTR_TO_JSON(CreditSpecification, creditSpecification_);
            DARABONBA_PTR_TO_JSON(DataDisks, dataDisks_);
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
            DARABONBA_PTR_TO_JSON(NetworkInterfaces, networkInterfaces_);
            DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
            DARABONBA_PTR_TO_JSON(PasswordInherit, passwordInherit_);
            DARABONBA_PTR_TO_JSON(Period, period_);
            DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
            DARABONBA_PTR_TO_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_TO_JSON(RamRoleName, ramRoleName_);
            DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
            DARABONBA_PTR_TO_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
            DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
            DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIds_);
            DARABONBA_PTR_TO_JSON(SecurityOptions, securityOptions_);
            DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
            DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
            DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
            DARABONBA_PTR_TO_JSON(Tags, tags_);
            DARABONBA_PTR_TO_JSON(UserData, userData_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, LaunchTemplateData& obj) { 
            DARABONBA_PTR_FROM_JSON(SystemDisk, systemDisk_);
            DARABONBA_PTR_FROM_JSON(AutoReleaseTime, autoReleaseTime_);
            DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
            DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
            DARABONBA_PTR_FROM_JSON(CreditSpecification, creditSpecification_);
            DARABONBA_PTR_FROM_JSON(DataDisks, dataDisks_);
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
            DARABONBA_PTR_FROM_JSON(NetworkInterfaces, networkInterfaces_);
            DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
            DARABONBA_PTR_FROM_JSON(PasswordInherit, passwordInherit_);
            DARABONBA_PTR_FROM_JSON(Period, period_);
            DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
            DARABONBA_PTR_FROM_JSON(PrivateIpAddress, privateIpAddress_);
            DARABONBA_PTR_FROM_JSON(RamRoleName, ramRoleName_);
            DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
            DARABONBA_PTR_FROM_JSON(SecurityEnhancementStrategy, securityEnhancementStrategy_);
            DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
            DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIds_);
            DARABONBA_PTR_FROM_JSON(SecurityOptions, securityOptions_);
            DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
            DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
            DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
            DARABONBA_PTR_FROM_JSON(Tags, tags_);
            DARABONBA_PTR_FROM_JSON(UserData, userData_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          LaunchTemplateData() = default ;
          LaunchTemplateData(const LaunchTemplateData &) = default ;
          LaunchTemplateData(LaunchTemplateData &&) = default ;
          LaunchTemplateData(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~LaunchTemplateData() = default ;
          LaunchTemplateData& operator=(const LaunchTemplateData &) = default ;
          LaunchTemplateData& operator=(LaunchTemplateData &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Tags : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Tags& obj) { 
              DARABONBA_PTR_TO_JSON(InstanceTag, instanceTag_);
            };
            friend void from_json(const Darabonba::Json& j, Tags& obj) { 
              DARABONBA_PTR_FROM_JSON(InstanceTag, instanceTag_);
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
            class InstanceTag : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const InstanceTag& obj) { 
                DARABONBA_PTR_TO_JSON(Key, key_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, InstanceTag& obj) { 
                DARABONBA_PTR_FROM_JSON(Key, key_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              InstanceTag() = default ;
              InstanceTag(const InstanceTag &) = default ;
              InstanceTag(InstanceTag &&) = default ;
              InstanceTag(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~InstanceTag() = default ;
              InstanceTag& operator=(const InstanceTag &) = default ;
              InstanceTag& operator=(InstanceTag &&) = default ;
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
              inline InstanceTag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline InstanceTag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // The key of the tag to add to the instance.
              shared_ptr<string> key_ {};
              // The value of the tag to add to the instance.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->instanceTag_ == nullptr; };
            // instanceTag Field Functions 
            bool hasInstanceTag() const { return this->instanceTag_ != nullptr;};
            void deleteInstanceTag() { this->instanceTag_ = nullptr;};
            inline const vector<Tags::InstanceTag> & getInstanceTag() const { DARABONBA_PTR_GET_CONST(instanceTag_, vector<Tags::InstanceTag>) };
            inline vector<Tags::InstanceTag> getInstanceTag() { DARABONBA_PTR_GET(instanceTag_, vector<Tags::InstanceTag>) };
            inline Tags& setInstanceTag(const vector<Tags::InstanceTag> & instanceTag) { DARABONBA_PTR_SET_VALUE(instanceTag_, instanceTag) };
            inline Tags& setInstanceTag(vector<Tags::InstanceTag> && instanceTag) { DARABONBA_PTR_SET_RVALUE(instanceTag_, instanceTag) };


          protected:
            shared_ptr<vector<Tags::InstanceTag>> instanceTag_ {};
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
            shared_ptr<string> trustedSystemMode_ {};
          };

          class SecurityGroupIds : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
              DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
            };
            friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
              DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
            };
            SecurityGroupIds() = default ;
            SecurityGroupIds(const SecurityGroupIds &) = default ;
            SecurityGroupIds(SecurityGroupIds &&) = default ;
            SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SecurityGroupIds() = default ;
            SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
            SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
            // securityGroupId Field Functions 
            bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
            void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
            inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
            inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
            inline SecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
            inline SecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


          protected:
            shared_ptr<vector<string>> securityGroupId_ {};
          };

          class NetworkInterfaces : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const NetworkInterfaces& obj) { 
              DARABONBA_PTR_TO_JSON(NetworkInterface, networkInterface_);
            };
            friend void from_json(const Darabonba::Json& j, NetworkInterfaces& obj) { 
              DARABONBA_PTR_FROM_JSON(NetworkInterface, networkInterface_);
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
              class SecurityGroupIds : public Darabonba::Model {
              public:
                friend void to_json(Darabonba::Json& j, const SecurityGroupIds& obj) { 
                  DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
                };
                friend void from_json(const Darabonba::Json& j, SecurityGroupIds& obj) { 
                  DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
                };
                SecurityGroupIds() = default ;
                SecurityGroupIds(const SecurityGroupIds &) = default ;
                SecurityGroupIds(SecurityGroupIds &&) = default ;
                SecurityGroupIds(const Darabonba::Json & obj) { from_json(obj, *this); };
                virtual ~SecurityGroupIds() = default ;
                SecurityGroupIds& operator=(const SecurityGroupIds &) = default ;
                SecurityGroupIds& operator=(SecurityGroupIds &&) = default ;
                virtual void validate() const override {
                };
                virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
                virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
                virtual bool empty() const override { return this->securityGroupId_ == nullptr; };
                // securityGroupId Field Functions 
                bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
                void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
                inline const vector<string> & getSecurityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, vector<string>) };
                inline vector<string> getSecurityGroupId() { DARABONBA_PTR_GET(securityGroupId_, vector<string>) };
                inline SecurityGroupIds& setSecurityGroupId(const vector<string> & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
                inline SecurityGroupIds& setSecurityGroupId(vector<string> && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


              protected:
                shared_ptr<vector<string>> securityGroupId_ {};
              };

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
              inline const NetworkInterface::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, NetworkInterface::SecurityGroupIds) };
              inline NetworkInterface::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, NetworkInterface::SecurityGroupIds) };
              inline NetworkInterface& setSecurityGroupIds(const NetworkInterface::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
              inline NetworkInterface& setSecurityGroupIds(NetworkInterface::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


              // vSwitchId Field Functions 
              bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
              void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
              inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
              inline NetworkInterface& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


            protected:
              // Indicates whether to retain the ENI when the associated instance is released. Valid values:
              // 
              // *   true
              // *   false
              shared_ptr<bool> deleteOnRelease_ {};
              // The description of the secondary ENI.
              shared_ptr<string> description_ {};
              // The instance type of the instance.
              shared_ptr<string> instanceType_ {};
              // The name of the secondary ENI.
              shared_ptr<string> networkInterfaceName_ {};
              // The communication mode of the primary ENI. Valid values:
              // 
              // *   Standard: uses the TCP communication mode.
              // *   HighPerformance: uses the remote direct memory access (RDMA) communication mode with Elastic RDMA Interface (ERI) enabled.
              shared_ptr<string> networkInterfaceTrafficMode_ {};
              // The primary private IP address of the secondary ENI.
              shared_ptr<string> primaryIpAddress_ {};
              // The ID of the security group to which to assign the secondary ENI. The security group and the ENI must belong to the same VPC.
              // 
              // >  SecurityGroupId and SecurityGroupIds are mutually exclusive in the response.
              shared_ptr<string> securityGroupId_ {};
              // The IDs of the security groups to which to assign the secondary ENI.
              // 
              // >  SecurityGroupId and SecurityGroupIds are mutually exclusive in the response.
              shared_ptr<NetworkInterface::SecurityGroupIds> securityGroupIds_ {};
              // The ID of the vSwitch to which to connect the ENI.
              shared_ptr<string> vSwitchId_ {};
            };

            virtual bool empty() const override { return this->networkInterface_ == nullptr; };
            // networkInterface Field Functions 
            bool hasNetworkInterface() const { return this->networkInterface_ != nullptr;};
            void deleteNetworkInterface() { this->networkInterface_ = nullptr;};
            inline const vector<NetworkInterfaces::NetworkInterface> & getNetworkInterface() const { DARABONBA_PTR_GET_CONST(networkInterface_, vector<NetworkInterfaces::NetworkInterface>) };
            inline vector<NetworkInterfaces::NetworkInterface> getNetworkInterface() { DARABONBA_PTR_GET(networkInterface_, vector<NetworkInterfaces::NetworkInterface>) };
            inline NetworkInterfaces& setNetworkInterface(const vector<NetworkInterfaces::NetworkInterface> & networkInterface) { DARABONBA_PTR_SET_VALUE(networkInterface_, networkInterface) };
            inline NetworkInterfaces& setNetworkInterface(vector<NetworkInterfaces::NetworkInterface> && networkInterface) { DARABONBA_PTR_SET_RVALUE(networkInterface_, networkInterface) };


          protected:
            shared_ptr<vector<NetworkInterfaces::NetworkInterface>> networkInterface_ {};
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
            // - true
            // - false
            shared_ptr<bool> loginAsNonRoot_ {};
          };

          class DataDisks : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DataDisks& obj) { 
              DARABONBA_PTR_TO_JSON(DataDisk, dataDisk_);
            };
            friend void from_json(const Darabonba::Json& j, DataDisks& obj) { 
              DARABONBA_PTR_FROM_JSON(DataDisk, dataDisk_);
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
              // The ID of the automatic snapshot policy.
              shared_ptr<string> autoSnapshotPolicyId_ {};
              // Indicates whether the performance burst feature is enabled. Valid values:
              // 
              // *   true
              // *   false
              shared_ptr<bool> burstingEnabled_ {};
              // The category of the data disk.
              shared_ptr<string> category_ {};
              // Indicates whether to release the data disk when the instance is released.
              shared_ptr<bool> deleteWithInstance_ {};
              // The description of the data disk.
              shared_ptr<string> description_ {};
              // The mount point of the data disk. The mount points are named based on the number of data disks:
              // 
              // *   1st to 25th data disks: /dev/xvd`[b-z]`.
              // *   From the 26th data disk on: /dev/xvd`[aa-zz]`. For example, the 26th data disk is named /dev/xvdaa, the 27th data disk is named /dev/xvdab, and so on.
              // 
              // >  This parameter is applicable to scenarios in which a full image is used to create instances. A full image is an image that contains an operating system, application software, and business data. For these scenarios, you can set the parameter to the mount point of data disk N contained in the full image and modify `DataDisk.N.Size` and `DataDisk.N.Category` to change the category and size of data disk N created based on the image.
              shared_ptr<string> device_ {};
              // The name of the data disk.
              shared_ptr<string> diskName_ {};
              // Indicates whether the data disk is encrypted.
              shared_ptr<string> encrypted_ {};
              // The ID of the KMS key used for the data disk.
              shared_ptr<string> KMSKeyId_ {};
              // The performance level of the ESSD to use as a data disk. This parameter is returned only when the value of `Category` is cloud_essd. Valid values:
              // 
              // *   PL0: A single ESSD can deliver up to 10,000 random read/write IOPS.
              // *   PL1: A single ESSD can deliver up to 50,000 random read/write IOPS.
              // *   PL2: A single ESSD can deliver up to 100,000 random read/write IOPS.
              // *   PL3: A single ESSD can deliver up to 1,000,000 random read/write IOPS.
              shared_ptr<string> performanceLevel_ {};
              // The provisioned read/write IOPS of the ESSD AutoPL disk. Valid values: 0 to min{50,000, 1,000 × Capacity - Baseline IOPS}.
              // 
              // Baseline IOPS = min{1,800 + 50 × Capacity, 50,000}.
              // 
              // >  This parameter is available only if you set DataDisk.N.Category to cloud_auto. For more information, see [ESSD AutoPL disks](https://help.aliyun.com/document_detail/368372.html) and [Modify the performance configurations of an ESSD AutoPL disk](https://help.aliyun.com/document_detail/413275.html).
              shared_ptr<int64_t> provisionedIops_ {};
              // The size of the data disk.
              shared_ptr<int32_t> size_ {};
              // The ID of the snapshot to use to create the data disk.
              shared_ptr<string> snapshotId_ {};
            };

            virtual bool empty() const override { return this->dataDisk_ == nullptr; };
            // dataDisk Field Functions 
            bool hasDataDisk() const { return this->dataDisk_ != nullptr;};
            void deleteDataDisk() { this->dataDisk_ = nullptr;};
            inline const vector<DataDisks::DataDisk> & getDataDisk() const { DARABONBA_PTR_GET_CONST(dataDisk_, vector<DataDisks::DataDisk>) };
            inline vector<DataDisks::DataDisk> getDataDisk() { DARABONBA_PTR_GET(dataDisk_, vector<DataDisks::DataDisk>) };
            inline DataDisks& setDataDisk(const vector<DataDisks::DataDisk> & dataDisk) { DARABONBA_PTR_SET_VALUE(dataDisk_, dataDisk) };
            inline DataDisks& setDataDisk(vector<DataDisks::DataDisk> && dataDisk) { DARABONBA_PTR_SET_RVALUE(dataDisk_, dataDisk) };


          protected:
            shared_ptr<vector<DataDisks::DataDisk>> dataDisk_ {};
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
            shared_ptr<string> autoSnapshotPolicyId_ {};
            shared_ptr<bool> burstingEnabled_ {};
            shared_ptr<string> category_ {};
            shared_ptr<bool> deleteWithInstance_ {};
            shared_ptr<string> description_ {};
            shared_ptr<string> diskName_ {};
            shared_ptr<string> encrypted_ {};
            shared_ptr<int32_t> iops_ {};
            shared_ptr<string> KMSKeyId_ {};
            shared_ptr<string> performanceLevel_ {};
            shared_ptr<int64_t> provisionedIops_ {};
            shared_ptr<int32_t> size_ {};
          };

          virtual bool empty() const override { return this->systemDisk_ == nullptr
        && this->autoReleaseTime_ == nullptr && this->autoRenew_ == nullptr && this->autoRenewPeriod_ == nullptr && this->creditSpecification_ == nullptr && this->dataDisks_ == nullptr
        && this->deletionProtection_ == nullptr && this->deploymentSetId_ == nullptr && this->description_ == nullptr && this->enableVmOsConfig_ == nullptr && this->hostName_ == nullptr
        && this->httpEndpoint_ == nullptr && this->httpPutResponseHopLimit_ == nullptr && this->httpTokens_ == nullptr && this->imageId_ == nullptr && this->imageOptions_ == nullptr
        && this->imageOwnerAlias_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceName_ == nullptr && this->instanceType_ == nullptr && this->internetChargeType_ == nullptr
        && this->internetMaxBandwidthIn_ == nullptr && this->internetMaxBandwidthOut_ == nullptr && this->ioOptimized_ == nullptr && this->ipv6AddressCount_ == nullptr && this->keyPairName_ == nullptr
        && this->networkInterfaces_ == nullptr && this->networkType_ == nullptr && this->passwordInherit_ == nullptr && this->period_ == nullptr && this->periodUnit_ == nullptr
        && this->privateIpAddress_ == nullptr && this->ramRoleName_ == nullptr && this->resourceGroupId_ == nullptr && this->securityEnhancementStrategy_ == nullptr && this->securityGroupId_ == nullptr
        && this->securityGroupIds_ == nullptr && this->securityOptions_ == nullptr && this->spotDuration_ == nullptr && this->spotPriceLimit_ == nullptr && this->spotStrategy_ == nullptr
        && this->tags_ == nullptr && this->userData_ == nullptr && this->vSwitchId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
          // systemDisk Field Functions 
          bool hasSystemDisk() const { return this->systemDisk_ != nullptr;};
          void deleteSystemDisk() { this->systemDisk_ = nullptr;};
          inline const LaunchTemplateData::SystemDisk & getSystemDisk() const { DARABONBA_PTR_GET_CONST(systemDisk_, LaunchTemplateData::SystemDisk) };
          inline LaunchTemplateData::SystemDisk getSystemDisk() { DARABONBA_PTR_GET(systemDisk_, LaunchTemplateData::SystemDisk) };
          inline LaunchTemplateData& setSystemDisk(const LaunchTemplateData::SystemDisk & systemDisk) { DARABONBA_PTR_SET_VALUE(systemDisk_, systemDisk) };
          inline LaunchTemplateData& setSystemDisk(LaunchTemplateData::SystemDisk && systemDisk) { DARABONBA_PTR_SET_RVALUE(systemDisk_, systemDisk) };


          // autoReleaseTime Field Functions 
          bool hasAutoReleaseTime() const { return this->autoReleaseTime_ != nullptr;};
          void deleteAutoReleaseTime() { this->autoReleaseTime_ = nullptr;};
          inline string getAutoReleaseTime() const { DARABONBA_PTR_GET_DEFAULT(autoReleaseTime_, "") };
          inline LaunchTemplateData& setAutoReleaseTime(string autoReleaseTime) { DARABONBA_PTR_SET_VALUE(autoReleaseTime_, autoReleaseTime) };


          // autoRenew Field Functions 
          bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
          void deleteAutoRenew() { this->autoRenew_ = nullptr;};
          inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
          inline LaunchTemplateData& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


          // autoRenewPeriod Field Functions 
          bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
          void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
          inline int32_t getAutoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
          inline LaunchTemplateData& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


          // creditSpecification Field Functions 
          bool hasCreditSpecification() const { return this->creditSpecification_ != nullptr;};
          void deleteCreditSpecification() { this->creditSpecification_ = nullptr;};
          inline string getCreditSpecification() const { DARABONBA_PTR_GET_DEFAULT(creditSpecification_, "") };
          inline LaunchTemplateData& setCreditSpecification(string creditSpecification) { DARABONBA_PTR_SET_VALUE(creditSpecification_, creditSpecification) };


          // dataDisks Field Functions 
          bool hasDataDisks() const { return this->dataDisks_ != nullptr;};
          void deleteDataDisks() { this->dataDisks_ = nullptr;};
          inline const LaunchTemplateData::DataDisks & getDataDisks() const { DARABONBA_PTR_GET_CONST(dataDisks_, LaunchTemplateData::DataDisks) };
          inline LaunchTemplateData::DataDisks getDataDisks() { DARABONBA_PTR_GET(dataDisks_, LaunchTemplateData::DataDisks) };
          inline LaunchTemplateData& setDataDisks(const LaunchTemplateData::DataDisks & dataDisks) { DARABONBA_PTR_SET_VALUE(dataDisks_, dataDisks) };
          inline LaunchTemplateData& setDataDisks(LaunchTemplateData::DataDisks && dataDisks) { DARABONBA_PTR_SET_RVALUE(dataDisks_, dataDisks) };


          // deletionProtection Field Functions 
          bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
          void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
          inline bool getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
          inline LaunchTemplateData& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


          // deploymentSetId Field Functions 
          bool hasDeploymentSetId() const { return this->deploymentSetId_ != nullptr;};
          void deleteDeploymentSetId() { this->deploymentSetId_ = nullptr;};
          inline string getDeploymentSetId() const { DARABONBA_PTR_GET_DEFAULT(deploymentSetId_, "") };
          inline LaunchTemplateData& setDeploymentSetId(string deploymentSetId) { DARABONBA_PTR_SET_VALUE(deploymentSetId_, deploymentSetId) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline LaunchTemplateData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // enableVmOsConfig Field Functions 
          bool hasEnableVmOsConfig() const { return this->enableVmOsConfig_ != nullptr;};
          void deleteEnableVmOsConfig() { this->enableVmOsConfig_ = nullptr;};
          inline bool getEnableVmOsConfig() const { DARABONBA_PTR_GET_DEFAULT(enableVmOsConfig_, false) };
          inline LaunchTemplateData& setEnableVmOsConfig(bool enableVmOsConfig) { DARABONBA_PTR_SET_VALUE(enableVmOsConfig_, enableVmOsConfig) };


          // hostName Field Functions 
          bool hasHostName() const { return this->hostName_ != nullptr;};
          void deleteHostName() { this->hostName_ = nullptr;};
          inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
          inline LaunchTemplateData& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


          // httpEndpoint Field Functions 
          bool hasHttpEndpoint() const { return this->httpEndpoint_ != nullptr;};
          void deleteHttpEndpoint() { this->httpEndpoint_ = nullptr;};
          inline string getHttpEndpoint() const { DARABONBA_PTR_GET_DEFAULT(httpEndpoint_, "") };
          inline LaunchTemplateData& setHttpEndpoint(string httpEndpoint) { DARABONBA_PTR_SET_VALUE(httpEndpoint_, httpEndpoint) };


          // httpPutResponseHopLimit Field Functions 
          bool hasHttpPutResponseHopLimit() const { return this->httpPutResponseHopLimit_ != nullptr;};
          void deleteHttpPutResponseHopLimit() { this->httpPutResponseHopLimit_ = nullptr;};
          inline int32_t getHttpPutResponseHopLimit() const { DARABONBA_PTR_GET_DEFAULT(httpPutResponseHopLimit_, 0) };
          inline LaunchTemplateData& setHttpPutResponseHopLimit(int32_t httpPutResponseHopLimit) { DARABONBA_PTR_SET_VALUE(httpPutResponseHopLimit_, httpPutResponseHopLimit) };


          // httpTokens Field Functions 
          bool hasHttpTokens() const { return this->httpTokens_ != nullptr;};
          void deleteHttpTokens() { this->httpTokens_ = nullptr;};
          inline string getHttpTokens() const { DARABONBA_PTR_GET_DEFAULT(httpTokens_, "") };
          inline LaunchTemplateData& setHttpTokens(string httpTokens) { DARABONBA_PTR_SET_VALUE(httpTokens_, httpTokens) };


          // imageId Field Functions 
          bool hasImageId() const { return this->imageId_ != nullptr;};
          void deleteImageId() { this->imageId_ = nullptr;};
          inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
          inline LaunchTemplateData& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


          // imageOptions Field Functions 
          bool hasImageOptions() const { return this->imageOptions_ != nullptr;};
          void deleteImageOptions() { this->imageOptions_ = nullptr;};
          inline const LaunchTemplateData::ImageOptions & getImageOptions() const { DARABONBA_PTR_GET_CONST(imageOptions_, LaunchTemplateData::ImageOptions) };
          inline LaunchTemplateData::ImageOptions getImageOptions() { DARABONBA_PTR_GET(imageOptions_, LaunchTemplateData::ImageOptions) };
          inline LaunchTemplateData& setImageOptions(const LaunchTemplateData::ImageOptions & imageOptions) { DARABONBA_PTR_SET_VALUE(imageOptions_, imageOptions) };
          inline LaunchTemplateData& setImageOptions(LaunchTemplateData::ImageOptions && imageOptions) { DARABONBA_PTR_SET_RVALUE(imageOptions_, imageOptions) };


          // imageOwnerAlias Field Functions 
          bool hasImageOwnerAlias() const { return this->imageOwnerAlias_ != nullptr;};
          void deleteImageOwnerAlias() { this->imageOwnerAlias_ = nullptr;};
          inline string getImageOwnerAlias() const { DARABONBA_PTR_GET_DEFAULT(imageOwnerAlias_, "") };
          inline LaunchTemplateData& setImageOwnerAlias(string imageOwnerAlias) { DARABONBA_PTR_SET_VALUE(imageOwnerAlias_, imageOwnerAlias) };


          // instanceChargeType Field Functions 
          bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
          void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
          inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
          inline LaunchTemplateData& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


          // instanceName Field Functions 
          bool hasInstanceName() const { return this->instanceName_ != nullptr;};
          void deleteInstanceName() { this->instanceName_ = nullptr;};
          inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
          inline LaunchTemplateData& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


          // instanceType Field Functions 
          bool hasInstanceType() const { return this->instanceType_ != nullptr;};
          void deleteInstanceType() { this->instanceType_ = nullptr;};
          inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
          inline LaunchTemplateData& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


          // internetChargeType Field Functions 
          bool hasInternetChargeType() const { return this->internetChargeType_ != nullptr;};
          void deleteInternetChargeType() { this->internetChargeType_ = nullptr;};
          inline string getInternetChargeType() const { DARABONBA_PTR_GET_DEFAULT(internetChargeType_, "") };
          inline LaunchTemplateData& setInternetChargeType(string internetChargeType) { DARABONBA_PTR_SET_VALUE(internetChargeType_, internetChargeType) };


          // internetMaxBandwidthIn Field Functions 
          bool hasInternetMaxBandwidthIn() const { return this->internetMaxBandwidthIn_ != nullptr;};
          void deleteInternetMaxBandwidthIn() { this->internetMaxBandwidthIn_ = nullptr;};
          inline int32_t getInternetMaxBandwidthIn() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthIn_, 0) };
          inline LaunchTemplateData& setInternetMaxBandwidthIn(int32_t internetMaxBandwidthIn) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthIn_, internetMaxBandwidthIn) };


          // internetMaxBandwidthOut Field Functions 
          bool hasInternetMaxBandwidthOut() const { return this->internetMaxBandwidthOut_ != nullptr;};
          void deleteInternetMaxBandwidthOut() { this->internetMaxBandwidthOut_ = nullptr;};
          inline int32_t getInternetMaxBandwidthOut() const { DARABONBA_PTR_GET_DEFAULT(internetMaxBandwidthOut_, 0) };
          inline LaunchTemplateData& setInternetMaxBandwidthOut(int32_t internetMaxBandwidthOut) { DARABONBA_PTR_SET_VALUE(internetMaxBandwidthOut_, internetMaxBandwidthOut) };


          // ioOptimized Field Functions 
          bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
          void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
          inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
          inline LaunchTemplateData& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


          // ipv6AddressCount Field Functions 
          bool hasIpv6AddressCount() const { return this->ipv6AddressCount_ != nullptr;};
          void deleteIpv6AddressCount() { this->ipv6AddressCount_ = nullptr;};
          inline int32_t getIpv6AddressCount() const { DARABONBA_PTR_GET_DEFAULT(ipv6AddressCount_, 0) };
          inline LaunchTemplateData& setIpv6AddressCount(int32_t ipv6AddressCount) { DARABONBA_PTR_SET_VALUE(ipv6AddressCount_, ipv6AddressCount) };


          // keyPairName Field Functions 
          bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
          void deleteKeyPairName() { this->keyPairName_ = nullptr;};
          inline string getKeyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
          inline LaunchTemplateData& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


          // networkInterfaces Field Functions 
          bool hasNetworkInterfaces() const { return this->networkInterfaces_ != nullptr;};
          void deleteNetworkInterfaces() { this->networkInterfaces_ = nullptr;};
          inline const LaunchTemplateData::NetworkInterfaces & getNetworkInterfaces() const { DARABONBA_PTR_GET_CONST(networkInterfaces_, LaunchTemplateData::NetworkInterfaces) };
          inline LaunchTemplateData::NetworkInterfaces getNetworkInterfaces() { DARABONBA_PTR_GET(networkInterfaces_, LaunchTemplateData::NetworkInterfaces) };
          inline LaunchTemplateData& setNetworkInterfaces(const LaunchTemplateData::NetworkInterfaces & networkInterfaces) { DARABONBA_PTR_SET_VALUE(networkInterfaces_, networkInterfaces) };
          inline LaunchTemplateData& setNetworkInterfaces(LaunchTemplateData::NetworkInterfaces && networkInterfaces) { DARABONBA_PTR_SET_RVALUE(networkInterfaces_, networkInterfaces) };


          // networkType Field Functions 
          bool hasNetworkType() const { return this->networkType_ != nullptr;};
          void deleteNetworkType() { this->networkType_ = nullptr;};
          inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
          inline LaunchTemplateData& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


          // passwordInherit Field Functions 
          bool hasPasswordInherit() const { return this->passwordInherit_ != nullptr;};
          void deletePasswordInherit() { this->passwordInherit_ = nullptr;};
          inline bool getPasswordInherit() const { DARABONBA_PTR_GET_DEFAULT(passwordInherit_, false) };
          inline LaunchTemplateData& setPasswordInherit(bool passwordInherit) { DARABONBA_PTR_SET_VALUE(passwordInherit_, passwordInherit) };


          // period Field Functions 
          bool hasPeriod() const { return this->period_ != nullptr;};
          void deletePeriod() { this->period_ = nullptr;};
          inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
          inline LaunchTemplateData& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


          // periodUnit Field Functions 
          bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
          void deletePeriodUnit() { this->periodUnit_ = nullptr;};
          inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
          inline LaunchTemplateData& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


          // privateIpAddress Field Functions 
          bool hasPrivateIpAddress() const { return this->privateIpAddress_ != nullptr;};
          void deletePrivateIpAddress() { this->privateIpAddress_ = nullptr;};
          inline string getPrivateIpAddress() const { DARABONBA_PTR_GET_DEFAULT(privateIpAddress_, "") };
          inline LaunchTemplateData& setPrivateIpAddress(string privateIpAddress) { DARABONBA_PTR_SET_VALUE(privateIpAddress_, privateIpAddress) };


          // ramRoleName Field Functions 
          bool hasRamRoleName() const { return this->ramRoleName_ != nullptr;};
          void deleteRamRoleName() { this->ramRoleName_ = nullptr;};
          inline string getRamRoleName() const { DARABONBA_PTR_GET_DEFAULT(ramRoleName_, "") };
          inline LaunchTemplateData& setRamRoleName(string ramRoleName) { DARABONBA_PTR_SET_VALUE(ramRoleName_, ramRoleName) };


          // resourceGroupId Field Functions 
          bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
          void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
          inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
          inline LaunchTemplateData& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


          // securityEnhancementStrategy Field Functions 
          bool hasSecurityEnhancementStrategy() const { return this->securityEnhancementStrategy_ != nullptr;};
          void deleteSecurityEnhancementStrategy() { this->securityEnhancementStrategy_ = nullptr;};
          inline string getSecurityEnhancementStrategy() const { DARABONBA_PTR_GET_DEFAULT(securityEnhancementStrategy_, "") };
          inline LaunchTemplateData& setSecurityEnhancementStrategy(string securityEnhancementStrategy) { DARABONBA_PTR_SET_VALUE(securityEnhancementStrategy_, securityEnhancementStrategy) };


          // securityGroupId Field Functions 
          bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
          void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
          inline string getSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
          inline LaunchTemplateData& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


          // securityGroupIds Field Functions 
          bool hasSecurityGroupIds() const { return this->securityGroupIds_ != nullptr;};
          void deleteSecurityGroupIds() { this->securityGroupIds_ = nullptr;};
          inline const LaunchTemplateData::SecurityGroupIds & getSecurityGroupIds() const { DARABONBA_PTR_GET_CONST(securityGroupIds_, LaunchTemplateData::SecurityGroupIds) };
          inline LaunchTemplateData::SecurityGroupIds getSecurityGroupIds() { DARABONBA_PTR_GET(securityGroupIds_, LaunchTemplateData::SecurityGroupIds) };
          inline LaunchTemplateData& setSecurityGroupIds(const LaunchTemplateData::SecurityGroupIds & securityGroupIds) { DARABONBA_PTR_SET_VALUE(securityGroupIds_, securityGroupIds) };
          inline LaunchTemplateData& setSecurityGroupIds(LaunchTemplateData::SecurityGroupIds && securityGroupIds) { DARABONBA_PTR_SET_RVALUE(securityGroupIds_, securityGroupIds) };


          // securityOptions Field Functions 
          bool hasSecurityOptions() const { return this->securityOptions_ != nullptr;};
          void deleteSecurityOptions() { this->securityOptions_ = nullptr;};
          inline const LaunchTemplateData::SecurityOptions & getSecurityOptions() const { DARABONBA_PTR_GET_CONST(securityOptions_, LaunchTemplateData::SecurityOptions) };
          inline LaunchTemplateData::SecurityOptions getSecurityOptions() { DARABONBA_PTR_GET(securityOptions_, LaunchTemplateData::SecurityOptions) };
          inline LaunchTemplateData& setSecurityOptions(const LaunchTemplateData::SecurityOptions & securityOptions) { DARABONBA_PTR_SET_VALUE(securityOptions_, securityOptions) };
          inline LaunchTemplateData& setSecurityOptions(LaunchTemplateData::SecurityOptions && securityOptions) { DARABONBA_PTR_SET_RVALUE(securityOptions_, securityOptions) };


          // spotDuration Field Functions 
          bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
          void deleteSpotDuration() { this->spotDuration_ = nullptr;};
          inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
          inline LaunchTemplateData& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


          // spotPriceLimit Field Functions 
          bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
          void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
          inline float getSpotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
          inline LaunchTemplateData& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


          // spotStrategy Field Functions 
          bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
          void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
          inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
          inline LaunchTemplateData& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


          // tags Field Functions 
          bool hasTags() const { return this->tags_ != nullptr;};
          void deleteTags() { this->tags_ = nullptr;};
          inline const LaunchTemplateData::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, LaunchTemplateData::Tags) };
          inline LaunchTemplateData::Tags getTags() { DARABONBA_PTR_GET(tags_, LaunchTemplateData::Tags) };
          inline LaunchTemplateData& setTags(const LaunchTemplateData::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
          inline LaunchTemplateData& setTags(LaunchTemplateData::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


          // userData Field Functions 
          bool hasUserData() const { return this->userData_ != nullptr;};
          void deleteUserData() { this->userData_ = nullptr;};
          inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
          inline LaunchTemplateData& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline LaunchTemplateData& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vpcId Field Functions 
          bool hasVpcId() const { return this->vpcId_ != nullptr;};
          void deleteVpcId() { this->vpcId_ = nullptr;};
          inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
          inline LaunchTemplateData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline LaunchTemplateData& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<LaunchTemplateData::SystemDisk> systemDisk_ {};
          // The automatic release time of the instance.
          shared_ptr<string> autoReleaseTime_ {};
          // Indicates whether auto-renewal is enabled for the instance. This parameter is valid only if `InstanceChargeType` is set to `PrePaid`. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          shared_ptr<bool> autoRenew_ {};
          // The auto-renewal period of the instance. Valid values:
          // 
          // Valid values when PeriodUnit is set to Month: 1, 2, 3, 6, 12, 24, 36, 48, and 60.
          // 
          // Default value: 1.
          shared_ptr<int32_t> autoRenewPeriod_ {};
          // The performance mode of the burstable instance. Valid values:
          // 
          // *   Standard: the standard mode. For more information, see the "Standard mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
          // *   Unlimited: the unlimited mode. For more information, see the "Unlimited mode" section in [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
          shared_ptr<string> creditSpecification_ {};
          // Details about the data disks.
          shared_ptr<LaunchTemplateData::DataDisks> dataDisks_ {};
          // Indicates whether release protection is enabled for the instance. This parameter indicates whether you can use the ECS console or call the [DeleteInstance](https://help.aliyun.com/document_detail/25507.html) operation to release the instance. Valid values:
          // 
          // *   true
          // *   false
          // 
          // Default value: false.
          // 
          // >  This parameter is applicable only to pay-as-you-go instances. The release protection feature can protect instances against manual releases, but not against automatic releases.
          shared_ptr<bool> deletionProtection_ {};
          // The ID of the deployment set.
          shared_ptr<string> deploymentSetId_ {};
          // The description of the system disk.
          shared_ptr<string> description_ {};
          // Indicates whether the operating system configuration of the instance is enabled.
          shared_ptr<bool> enableVmOsConfig_ {};
          // The hostname of the instance.
          shared_ptr<string> hostName_ {};
          // Indicates whether the access channel is enabled for instance metadata. Valid values:
          // 
          // *   enabled
          // *   disabled
          // 
          // Default value: enabled.
          // 
          // >  For information about instance metadata, see [Obtain information about an ECS instance, such as instance attributes, by using instance metadata](https://help.aliyun.com/document_detail/108460.html).
          shared_ptr<string> httpEndpoint_ {};
          // >  This parameter is not publicly available.
          shared_ptr<int32_t> httpPutResponseHopLimit_ {};
          // Indicates whether the security hardening mode (IMDSv2) is forcefully used to access instance metadata. Valid values:
          // 
          // *   optional: The security hardening mode (IMDSv2) is not forcefully used.
          // *   required: The security hardening mode (IMDSv2) is forcefully used. After you set this parameter to required, you cannot access instance metadata in normal mode.
          // 
          // Default value: optional.
          // 
          // >  For more information about the modes of accessing instance metadata, see [Obtain information about an ECS instance, such as instance attributes, by using instance metadata](https://help.aliyun.com/document_detail/108460.html).
          shared_ptr<string> httpTokens_ {};
          // The ID of the image.
          shared_ptr<string> imageId_ {};
          // Details about the image options.
          shared_ptr<LaunchTemplateData::ImageOptions> imageOptions_ {};
          // The source of the image. Valid values:
          // 
          // *   system: public image provided by Alibaba Cloud
          // *   self: custom image that you created
          // *   others: shared image from another Alibaba Cloud account
          // *   marketplace: Alibaba Cloud Marketplace image
          shared_ptr<string> imageOwnerAlias_ {};
          // The billing method of the instance. Valid values:
          // 
          // *   PrePaid: subscription
          // *   PostPaid: pay-as-you-go
          shared_ptr<string> instanceChargeType_ {};
          // The name of the instance.
          shared_ptr<string> instanceName_ {};
          // The instance type of the instance.
          shared_ptr<string> instanceType_ {};
          // The billing method for network usage.
          shared_ptr<string> internetChargeType_ {};
          // The maximum inbound public bandwidth.
          shared_ptr<int32_t> internetMaxBandwidthIn_ {};
          // The maximum outbound public bandwidth.
          shared_ptr<int32_t> internetMaxBandwidthOut_ {};
          // Indicates whether the instance is I/O optimized.
          shared_ptr<string> ioOptimized_ {};
          // The number of IPv6 addresses to assign to the instance.
          shared_ptr<int32_t> ipv6AddressCount_ {};
          // The name of the key pair.
          shared_ptr<string> keyPairName_ {};
          // Details about the secondary elastic network interfaces (ENIs).
          shared_ptr<LaunchTemplateData::NetworkInterfaces> networkInterfaces_ {};
          // The network type. Valid values:
          // 
          // *   classic: classic network
          // *   vpc: VPC
          shared_ptr<string> networkType_ {};
          // Indicates whether the username and password preset in the image are used.
          shared_ptr<bool> passwordInherit_ {};
          // The subscription duration of the instance.
          shared_ptr<int32_t> period_ {};
          // The unit of the subscription period. Valid values:
          // 
          // Month (default)
          shared_ptr<string> periodUnit_ {};
          // The private IP address to assign to the instance.
          shared_ptr<string> privateIpAddress_ {};
          // The name of the instance Resource Access Management (RAM) role.
          shared_ptr<string> ramRoleName_ {};
          // The ID of the resource group to which the launch template belongs.
          shared_ptr<string> resourceGroupId_ {};
          // Indicates whether Security Hardening is enabled.
          shared_ptr<string> securityEnhancementStrategy_ {};
          // The ID of the security group to which to assign the instance.
          // 
          // >  `SecurityGroupId` and `SecurityGroupIds` are mutually exclusive in the response.
          shared_ptr<string> securityGroupId_ {};
          // The IDs of the security groups to which to assign the instance.
          // 
          // >  `SecurityGroupId` and `SecurityGroupIds` are mutually exclusive in the response.
          shared_ptr<LaunchTemplateData::SecurityGroupIds> securityGroupIds_ {};
          shared_ptr<LaunchTemplateData::SecurityOptions> securityOptions_ {};
          // The protection period of the spot instance. Unit: hours. Valid values:
          // 
          // *   1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After the 1-hour protection period ends, the system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
          // *   0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the resource inventory to determine whether to retain or release the instance.
          // 
          // Alibaba Cloud sends an ECS system event to notify you 5 minutes before the instance is released. Spot instances are billed by second. We recommend that you specify a protection period based on your business requirements.
          // 
          // >  This parameter is returned when SpotStrategy is set to SpotWithPriceLimit or SpotAsPriceGo.
          shared_ptr<int32_t> spotDuration_ {};
          // The maximum hourly price of the spot instance.
          shared_ptr<float> spotPriceLimit_ {};
          // The bidding policy for the pay-as-you-go instance. Valid values:
          // 
          // *   NoSpot: The instance is a regular pay-as-you-go instance.
          // *   SpotWithPriceLimit: The instance is a spot instance with a user-defined maximum hourly price.
          // *   SpotAsPriceGo: The instance is a spot instance for which the market price at the time of purchase is automatically used as the bid price. The market price can be up to the pay-as-you-go price.
          shared_ptr<string> spotStrategy_ {};
          // The tags to add to the instance.
          shared_ptr<LaunchTemplateData::Tags> tags_ {};
          // The user data of the instance, which is Base64-encoded.
          shared_ptr<string> userData_ {};
          // The ID of the vSwitch to which to connect the instance.
          shared_ptr<string> vSwitchId_ {};
          // The ID of the virtual private cloud (VPC).
          shared_ptr<string> vpcId_ {};
          // The zone ID of the instance.
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createdBy_ == nullptr && this->defaultVersion_ == nullptr && this->launchTemplateData_ == nullptr && this->launchTemplateId_ == nullptr && this->launchTemplateName_ == nullptr
        && this->modifiedTime_ == nullptr && this->versionDescription_ == nullptr && this->versionNumber_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline LaunchTemplateVersionSet& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createdBy Field Functions 
        bool hasCreatedBy() const { return this->createdBy_ != nullptr;};
        void deleteCreatedBy() { this->createdBy_ = nullptr;};
        inline string getCreatedBy() const { DARABONBA_PTR_GET_DEFAULT(createdBy_, "") };
        inline LaunchTemplateVersionSet& setCreatedBy(string createdBy) { DARABONBA_PTR_SET_VALUE(createdBy_, createdBy) };


        // defaultVersion Field Functions 
        bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
        void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
        inline bool getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, false) };
        inline LaunchTemplateVersionSet& setDefaultVersion(bool defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


        // launchTemplateData Field Functions 
        bool hasLaunchTemplateData() const { return this->launchTemplateData_ != nullptr;};
        void deleteLaunchTemplateData() { this->launchTemplateData_ = nullptr;};
        inline const LaunchTemplateVersionSet::LaunchTemplateData & getLaunchTemplateData() const { DARABONBA_PTR_GET_CONST(launchTemplateData_, LaunchTemplateVersionSet::LaunchTemplateData) };
        inline LaunchTemplateVersionSet::LaunchTemplateData getLaunchTemplateData() { DARABONBA_PTR_GET(launchTemplateData_, LaunchTemplateVersionSet::LaunchTemplateData) };
        inline LaunchTemplateVersionSet& setLaunchTemplateData(const LaunchTemplateVersionSet::LaunchTemplateData & launchTemplateData) { DARABONBA_PTR_SET_VALUE(launchTemplateData_, launchTemplateData) };
        inline LaunchTemplateVersionSet& setLaunchTemplateData(LaunchTemplateVersionSet::LaunchTemplateData && launchTemplateData) { DARABONBA_PTR_SET_RVALUE(launchTemplateData_, launchTemplateData) };


        // launchTemplateId Field Functions 
        bool hasLaunchTemplateId() const { return this->launchTemplateId_ != nullptr;};
        void deleteLaunchTemplateId() { this->launchTemplateId_ = nullptr;};
        inline string getLaunchTemplateId() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateId_, "") };
        inline LaunchTemplateVersionSet& setLaunchTemplateId(string launchTemplateId) { DARABONBA_PTR_SET_VALUE(launchTemplateId_, launchTemplateId) };


        // launchTemplateName Field Functions 
        bool hasLaunchTemplateName() const { return this->launchTemplateName_ != nullptr;};
        void deleteLaunchTemplateName() { this->launchTemplateName_ = nullptr;};
        inline string getLaunchTemplateName() const { DARABONBA_PTR_GET_DEFAULT(launchTemplateName_, "") };
        inline LaunchTemplateVersionSet& setLaunchTemplateName(string launchTemplateName) { DARABONBA_PTR_SET_VALUE(launchTemplateName_, launchTemplateName) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline LaunchTemplateVersionSet& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // versionDescription Field Functions 
        bool hasVersionDescription() const { return this->versionDescription_ != nullptr;};
        void deleteVersionDescription() { this->versionDescription_ = nullptr;};
        inline string getVersionDescription() const { DARABONBA_PTR_GET_DEFAULT(versionDescription_, "") };
        inline LaunchTemplateVersionSet& setVersionDescription(string versionDescription) { DARABONBA_PTR_SET_VALUE(versionDescription_, versionDescription) };


        // versionNumber Field Functions 
        bool hasVersionNumber() const { return this->versionNumber_ != nullptr;};
        void deleteVersionNumber() { this->versionNumber_ = nullptr;};
        inline int64_t getVersionNumber() const { DARABONBA_PTR_GET_DEFAULT(versionNumber_, 0L) };
        inline LaunchTemplateVersionSet& setVersionNumber(int64_t versionNumber) { DARABONBA_PTR_SET_VALUE(versionNumber_, versionNumber) };


      protected:
        // The time when the launch template version was created.
        shared_ptr<string> createTime_ {};
        // The ID of the Alibaba Cloud account that created the launch template.
        shared_ptr<string> createdBy_ {};
        // Indicates whether the launch template version is the default version.
        shared_ptr<bool> defaultVersion_ {};
        // The configurations of the launch template.
        shared_ptr<LaunchTemplateVersionSet::LaunchTemplateData> launchTemplateData_ {};
        // The ID of the launch template.
        shared_ptr<string> launchTemplateId_ {};
        // The name of the launch template.
        shared_ptr<string> launchTemplateName_ {};
        // The time when the launch template version was modified.
        shared_ptr<string> modifiedTime_ {};
        // The description of the launch template version.
        shared_ptr<string> versionDescription_ {};
        // The number of the launch template version.
        shared_ptr<int64_t> versionNumber_ {};
      };

      virtual bool empty() const override { return this->launchTemplateVersionSet_ == nullptr; };
      // launchTemplateVersionSet Field Functions 
      bool hasLaunchTemplateVersionSet() const { return this->launchTemplateVersionSet_ != nullptr;};
      void deleteLaunchTemplateVersionSet() { this->launchTemplateVersionSet_ = nullptr;};
      inline const vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet> & getLaunchTemplateVersionSet() const { DARABONBA_PTR_GET_CONST(launchTemplateVersionSet_, vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet>) };
      inline vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet> getLaunchTemplateVersionSet() { DARABONBA_PTR_GET(launchTemplateVersionSet_, vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet>) };
      inline LaunchTemplateVersionSets& setLaunchTemplateVersionSet(const vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet> & launchTemplateVersionSet) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionSet_, launchTemplateVersionSet) };
      inline LaunchTemplateVersionSets& setLaunchTemplateVersionSet(vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet> && launchTemplateVersionSet) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersionSet_, launchTemplateVersionSet) };


    protected:
      shared_ptr<vector<LaunchTemplateVersionSets::LaunchTemplateVersionSet>> launchTemplateVersionSet_ {};
    };

    virtual bool empty() const override { return this->launchTemplateVersionSets_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // launchTemplateVersionSets Field Functions 
    bool hasLaunchTemplateVersionSets() const { return this->launchTemplateVersionSets_ != nullptr;};
    void deleteLaunchTemplateVersionSets() { this->launchTemplateVersionSets_ = nullptr;};
    inline const DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets & getLaunchTemplateVersionSets() const { DARABONBA_PTR_GET_CONST(launchTemplateVersionSets_, DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets) };
    inline DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets getLaunchTemplateVersionSets() { DARABONBA_PTR_GET(launchTemplateVersionSets_, DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets) };
    inline DescribeLaunchTemplateVersionsResponseBody& setLaunchTemplateVersionSets(const DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets & launchTemplateVersionSets) { DARABONBA_PTR_SET_VALUE(launchTemplateVersionSets_, launchTemplateVersionSets) };
    inline DescribeLaunchTemplateVersionsResponseBody& setLaunchTemplateVersionSets(DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets && launchTemplateVersionSets) { DARABONBA_PTR_SET_RVALUE(launchTemplateVersionSets_, launchTemplateVersionSets) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeLaunchTemplateVersionsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeLaunchTemplateVersionsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLaunchTemplateVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLaunchTemplateVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Details about the launch template versions.
    shared_ptr<DescribeLaunchTemplateVersionsResponseBody::LaunchTemplateVersionSets> launchTemplateVersionSets_ {};
    // The page number of the returned page.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of launch templates.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
