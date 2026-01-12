// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OfficeSites, officeSites_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody(DescribeOfficeSitesResponseBody &&) = default ;
    DescribeOfficeSitesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBody() = default ;
    DescribeOfficeSitesResponseBody& operator=(const DescribeOfficeSitesResponseBody &) = default ;
    DescribeOfficeSitesResponseBody& operator=(DescribeOfficeSitesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OfficeSites : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OfficeSites& obj) { 
        DARABONBA_PTR_TO_JSON(ADConnectors, ADConnectors_);
        DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_TO_JSON(AccountType, accountType_);
        DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
        DARABONBA_PTR_TO_JSON(AuthorityHost, authorityHost_);
        DARABONBA_PTR_TO_JSON(BackupDCHostname, backupDCHostname_);
        DARABONBA_PTR_TO_JSON(BackupDns, backupDns_);
        DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_TO_JSON(CenAttachStatus, cenAttachStatus_);
        DARABONBA_PTR_TO_JSON(CenId, cenId_);
        DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_TO_JSON(ClientId, clientId_);
        DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_TO_JSON(CloudBoxOfficeSite, cloudBoxOfficeSite_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(CustomAccessPoint, customAccessPoint_);
        DARABONBA_PTR_TO_JSON(CustomDnsAddress, customDnsAddress_);
        DARABONBA_PTR_TO_JSON(CustomSecurityGroupId, customSecurityGroupId_);
        DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
        DARABONBA_PTR_TO_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_TO_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
        DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
        DARABONBA_PTR_TO_JSON(DnsUserName, dnsUserName_);
        DARABONBA_PTR_TO_JSON(DomainName, domainName_);
        DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
        DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
        DARABONBA_PTR_TO_JSON(Eid, eid_);
        DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
        DARABONBA_PTR_TO_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
        DARABONBA_PTR_TO_JSON(EnableInternetAccess, enableInternetAccess_);
        DARABONBA_PTR_TO_JSON(EnableServiceRoute, enableServiceRoute_);
        DARABONBA_PTR_TO_JSON(EnvType, envType_);
        DARABONBA_PTR_TO_JSON(FileSystemIds, fileSystemIds_);
        DARABONBA_PTR_TO_JSON(IsLdap, isLdap_);
        DARABONBA_PTR_TO_JSON(LdapUrl, ldapUrl_);
        DARABONBA_PTR_TO_JSON(Logs, logs_);
        DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NeedVerifyLoginRisk, needVerifyLoginRisk_);
        DARABONBA_PTR_TO_JSON(NeedVerifyZeroDevice, needVerifyZeroDevice_);
        DARABONBA_PTR_TO_JSON(NetworkPackageId, networkPackageId_);
        DARABONBA_PTR_TO_JSON(NmVersion, nmVersion_);
        DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_TO_JSON(OuName, ouName_);
        DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_TO_JSON(RdsLicenseAddress, rdsLicenseAddress_);
        DARABONBA_PTR_TO_JSON(RdsLicenseDomainName, rdsLicenseDomainName_);
        DARABONBA_PTR_TO_JSON(RdsLicenseStatus, rdsLicenseStatus_);
        DARABONBA_PTR_TO_JSON(ResourceAmounts, resourceAmounts_);
        DARABONBA_PTR_TO_JSON(SecurityProtection, securityProtection_);
        DARABONBA_PTR_TO_JSON(SsoEnabled, ssoEnabled_);
        DARABONBA_PTR_TO_JSON(SsoType, ssoType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubDnsAddress, subDnsAddress_);
        DARABONBA_PTR_TO_JSON(SubDomainName, subDomainName_);
        DARABONBA_PTR_TO_JSON(SubnetMode, subnetMode_);
        DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
        DARABONBA_PTR_TO_JSON(TotalEdsCount, totalEdsCount_);
        DARABONBA_PTR_TO_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
        DARABONBA_PTR_TO_JSON(TotalResourceAmount, totalResourceAmount_);
        DARABONBA_PTR_TO_JSON(TrustPassword, trustPassword_);
        DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
      };
      friend void from_json(const Darabonba::Json& j, OfficeSites& obj) { 
        DARABONBA_PTR_FROM_JSON(ADConnectors, ADConnectors_);
        DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
        DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
        DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
        DARABONBA_PTR_FROM_JSON(AuthorityHost, authorityHost_);
        DARABONBA_PTR_FROM_JSON(BackupDCHostname, backupDCHostname_);
        DARABONBA_PTR_FROM_JSON(BackupDns, backupDns_);
        DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
        DARABONBA_PTR_FROM_JSON(CenAttachStatus, cenAttachStatus_);
        DARABONBA_PTR_FROM_JSON(CenId, cenId_);
        DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
        DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
        DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
        DARABONBA_PTR_FROM_JSON(CloudBoxOfficeSite, cloudBoxOfficeSite_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(CustomAccessPoint, customAccessPoint_);
        DARABONBA_PTR_FROM_JSON(CustomDnsAddress, customDnsAddress_);
        DARABONBA_PTR_FROM_JSON(CustomSecurityGroupId, customSecurityGroupId_);
        DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
        DARABONBA_PTR_FROM_JSON(DesktopCount, desktopCount_);
        DARABONBA_PTR_FROM_JSON(DesktopVpcEndpoint, desktopVpcEndpoint_);
        DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
        DARABONBA_PTR_FROM_JSON(DnsUserName, dnsUserName_);
        DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
        DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
        DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
        DARABONBA_PTR_FROM_JSON(Eid, eid_);
        DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
        DARABONBA_PTR_FROM_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
        DARABONBA_PTR_FROM_JSON(EnableInternetAccess, enableInternetAccess_);
        DARABONBA_PTR_FROM_JSON(EnableServiceRoute, enableServiceRoute_);
        DARABONBA_PTR_FROM_JSON(EnvType, envType_);
        DARABONBA_PTR_FROM_JSON(FileSystemIds, fileSystemIds_);
        DARABONBA_PTR_FROM_JSON(IsLdap, isLdap_);
        DARABONBA_PTR_FROM_JSON(LdapUrl, ldapUrl_);
        DARABONBA_PTR_FROM_JSON(Logs, logs_);
        DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NeedVerifyLoginRisk, needVerifyLoginRisk_);
        DARABONBA_PTR_FROM_JSON(NeedVerifyZeroDevice, needVerifyZeroDevice_);
        DARABONBA_PTR_FROM_JSON(NetworkPackageId, networkPackageId_);
        DARABONBA_PTR_FROM_JSON(NmVersion, nmVersion_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
        DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
        DARABONBA_PTR_FROM_JSON(OuName, ouName_);
        DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
        DARABONBA_PTR_FROM_JSON(RdsLicenseAddress, rdsLicenseAddress_);
        DARABONBA_PTR_FROM_JSON(RdsLicenseDomainName, rdsLicenseDomainName_);
        DARABONBA_PTR_FROM_JSON(RdsLicenseStatus, rdsLicenseStatus_);
        DARABONBA_PTR_FROM_JSON(ResourceAmounts, resourceAmounts_);
        DARABONBA_PTR_FROM_JSON(SecurityProtection, securityProtection_);
        DARABONBA_PTR_FROM_JSON(SsoEnabled, ssoEnabled_);
        DARABONBA_PTR_FROM_JSON(SsoType, ssoType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubDnsAddress, subDnsAddress_);
        DARABONBA_PTR_FROM_JSON(SubDomainName, subDomainName_);
        DARABONBA_PTR_FROM_JSON(SubnetMode, subnetMode_);
        DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
        DARABONBA_PTR_FROM_JSON(TotalEdsCount, totalEdsCount_);
        DARABONBA_PTR_FROM_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
        DARABONBA_PTR_FROM_JSON(TotalResourceAmount, totalResourceAmount_);
        DARABONBA_PTR_FROM_JSON(TrustPassword, trustPassword_);
        DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
      };
      OfficeSites() = default ;
      OfficeSites(const OfficeSites &) = default ;
      OfficeSites(OfficeSites &&) = default ;
      OfficeSites(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OfficeSites() = default ;
      OfficeSites& operator=(const OfficeSites &) = default ;
      OfficeSites& operator=(OfficeSites &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceAmounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceAmounts& obj) { 
          DARABONBA_PTR_TO_JSON(amount, amount_);
          DARABONBA_PTR_TO_JSON(resourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceAmounts& obj) { 
          DARABONBA_PTR_FROM_JSON(amount, amount_);
          DARABONBA_PTR_FROM_JSON(resourceType, resourceType_);
        };
        ResourceAmounts() = default ;
        ResourceAmounts(const ResourceAmounts &) = default ;
        ResourceAmounts(ResourceAmounts &&) = default ;
        ResourceAmounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceAmounts() = default ;
        ResourceAmounts& operator=(const ResourceAmounts &) = default ;
        ResourceAmounts& operator=(ResourceAmounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->amount_ == nullptr
        && this->resourceType_ == nullptr; };
        // amount Field Functions 
        bool hasAmount() const { return this->amount_ != nullptr;};
        void deleteAmount() { this->amount_ = nullptr;};
        inline int64_t getAmount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0L) };
        inline ResourceAmounts& setAmount(int64_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ResourceAmounts& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The number of resources.
        shared_ptr<int64_t> amount_ {};
        // The resource type.
        // 
        // Valid values:
        // 
        // *   desktop: the cloud computer.
        // *   DesktopGroup: the cloud computer share.
        shared_ptr<string> resourceType_ {};
      };

      class Logs : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Logs& obj) { 
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(Message, message_);
          DARABONBA_PTR_TO_JSON(Step, step_);
          DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
        };
        friend void from_json(const Darabonba::Json& j, Logs& obj) { 
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(Message, message_);
          DARABONBA_PTR_FROM_JSON(Step, step_);
          DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
        };
        Logs() = default ;
        Logs(const Logs &) = default ;
        Logs(Logs &&) = default ;
        Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Logs() = default ;
        Logs& operator=(const Logs &) = default ;
        Logs& operator=(Logs &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->level_ == nullptr
        && this->message_ == nullptr && this->step_ == nullptr && this->timeStamp_ == nullptr; };
        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Logs& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Logs& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // step Field Functions 
        bool hasStep() const { return this->step_ != nullptr;};
        void deleteStep() { this->step_ = nullptr;};
        inline string getStep() const { DARABONBA_PTR_GET_DEFAULT(step_, "") };
        inline Logs& setStep(string step) { DARABONBA_PTR_SET_VALUE(step_, step) };


        // timeStamp Field Functions 
        bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
        void deleteTimeStamp() { this->timeStamp_ = nullptr;};
        inline string getTimeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
        inline Logs& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


      protected:
        // The log severity.
        // 
        // Valid values:
        // 
        // *   ERROR
        // *   INFO
        // *   WARN
        shared_ptr<string> level_ {};
        // Details of the log entry.
        shared_ptr<string> message_ {};
        // The step in the log entry.
        shared_ptr<string> step_ {};
        // The time when the log entry was printed.
        shared_ptr<string> timeStamp_ {};
      };

      class ADConnectors : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ADConnectors& obj) { 
          DARABONBA_PTR_TO_JSON(ADConnectorAddress, ADConnectorAddress_);
          DARABONBA_PTR_TO_JSON(ConnectorStatus, connectorStatus_);
          DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_TO_JSON(Specification, specification_);
          DARABONBA_PTR_TO_JSON(TrustKey, trustKey_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        };
        friend void from_json(const Darabonba::Json& j, ADConnectors& obj) { 
          DARABONBA_PTR_FROM_JSON(ADConnectorAddress, ADConnectorAddress_);
          DARABONBA_PTR_FROM_JSON(ConnectorStatus, connectorStatus_);
          DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
          DARABONBA_PTR_FROM_JSON(Specification, specification_);
          DARABONBA_PTR_FROM_JSON(TrustKey, trustKey_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        };
        ADConnectors() = default ;
        ADConnectors(const ADConnectors &) = default ;
        ADConnectors(ADConnectors &&) = default ;
        ADConnectors(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ADConnectors() = default ;
        ADConnectors& operator=(const ADConnectors &) = default ;
        ADConnectors& operator=(ADConnectors &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->ADConnectorAddress_ == nullptr
        && this->connectorStatus_ == nullptr && this->networkInterfaceId_ == nullptr && this->specification_ == nullptr && this->trustKey_ == nullptr && this->vSwitchId_ == nullptr; };
        // ADConnectorAddress Field Functions 
        bool hasADConnectorAddress() const { return this->ADConnectorAddress_ != nullptr;};
        void deleteADConnectorAddress() { this->ADConnectorAddress_ = nullptr;};
        inline string getADConnectorAddress() const { DARABONBA_PTR_GET_DEFAULT(ADConnectorAddress_, "") };
        inline ADConnectors& setADConnectorAddress(string ADConnectorAddress) { DARABONBA_PTR_SET_VALUE(ADConnectorAddress_, ADConnectorAddress) };


        // connectorStatus Field Functions 
        bool hasConnectorStatus() const { return this->connectorStatus_ != nullptr;};
        void deleteConnectorStatus() { this->connectorStatus_ = nullptr;};
        inline string getConnectorStatus() const { DARABONBA_PTR_GET_DEFAULT(connectorStatus_, "") };
        inline ADConnectors& setConnectorStatus(string connectorStatus) { DARABONBA_PTR_SET_VALUE(connectorStatus_, connectorStatus) };


        // networkInterfaceId Field Functions 
        bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
        void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
        inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
        inline ADConnectors& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


        // specification Field Functions 
        bool hasSpecification() const { return this->specification_ != nullptr;};
        void deleteSpecification() { this->specification_ = nullptr;};
        inline string getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, "") };
        inline ADConnectors& setSpecification(string specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


        // trustKey Field Functions 
        bool hasTrustKey() const { return this->trustKey_ != nullptr;};
        void deleteTrustKey() { this->trustKey_ = nullptr;};
        inline string getTrustKey() const { DARABONBA_PTR_GET_DEFAULT(trustKey_, "") };
        inline ADConnectors& setTrustKey(string trustKey) { DARABONBA_PTR_SET_VALUE(trustKey_, trustKey) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline ADConnectors& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      protected:
        // The connection address of the AD connector.
        shared_ptr<string> ADConnectorAddress_ {};
        // The status of the AD connector.
        // 
        // Valid values:
        // 
        // *   CONNECT_ERROR
        // *   RUNNING
        // *   CONNECTING (You must configure the AD domain in which the AD connector is used.)
        // *   EXPIRED
        // *   CREATING
        shared_ptr<string> connectorStatus_ {};
        // The ID of an elastic network interface (ENI) to which the AD connector is mounted.
        shared_ptr<string> networkInterfaceId_ {};
        // The AD connector type.
        // 
        // Valid values:
        // 
        // *   1: General
        // *   2: Advanced
        shared_ptr<string> specification_ {};
        // The trust password that is specified when you configure the AD trust relationship.
        shared_ptr<string> trustKey_ {};
        // The ID of the vSwitch that resides in the network of the AD connector.
        shared_ptr<string> vSwitchId_ {};
      };

      virtual bool empty() const override { return this->ADConnectors_ == nullptr
        && this->acceleratorId_ == nullptr && this->accountType_ == nullptr && this->adHostname_ == nullptr && this->authorityHost_ == nullptr && this->backupDCHostname_ == nullptr
        && this->backupDns_ == nullptr && this->bandwidth_ == nullptr && this->cenAttachStatus_ == nullptr && this->cenId_ == nullptr && this->cidrBlock_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->cloudBoxOfficeSite_ == nullptr && this->creationTime_ == nullptr && this->customAccessPoint_ == nullptr
        && this->customDnsAddress_ == nullptr && this->customSecurityGroupId_ == nullptr && this->desktopAccessType_ == nullptr && this->desktopCount_ == nullptr && this->desktopVpcEndpoint_ == nullptr
        && this->dnsAddress_ == nullptr && this->dnsUserName_ == nullptr && this->domainName_ == nullptr && this->domainPassword_ == nullptr && this->domainUserName_ == nullptr
        && this->eid_ == nullptr && this->enableAdminAccess_ == nullptr && this->enableCrossDesktopAccess_ == nullptr && this->enableInternetAccess_ == nullptr && this->enableServiceRoute_ == nullptr
        && this->envType_ == nullptr && this->fileSystemIds_ == nullptr && this->isLdap_ == nullptr && this->ldapUrl_ == nullptr && this->logs_ == nullptr
        && this->mfaEnabled_ == nullptr && this->name_ == nullptr && this->needVerifyLoginRisk_ == nullptr && this->needVerifyZeroDevice_ == nullptr && this->networkPackageId_ == nullptr
        && this->nmVersion_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteType_ == nullptr && this->ouName_ == nullptr && this->protocolType_ == nullptr
        && this->rdsLicenseAddress_ == nullptr && this->rdsLicenseDomainName_ == nullptr && this->rdsLicenseStatus_ == nullptr && this->resourceAmounts_ == nullptr && this->securityProtection_ == nullptr
        && this->ssoEnabled_ == nullptr && this->ssoType_ == nullptr && this->status_ == nullptr && this->subDnsAddress_ == nullptr && this->subDomainName_ == nullptr
        && this->subnetMode_ == nullptr && this->tenantId_ == nullptr && this->totalEdsCount_ == nullptr && this->totalEdsCountForGroup_ == nullptr && this->totalResourceAmount_ == nullptr
        && this->trustPassword_ == nullptr && this->vSwitchIds_ == nullptr && this->vpcId_ == nullptr && this->vpcType_ == nullptr; };
      // ADConnectors Field Functions 
      bool hasADConnectors() const { return this->ADConnectors_ != nullptr;};
      void deleteADConnectors() { this->ADConnectors_ = nullptr;};
      inline const vector<OfficeSites::ADConnectors> & getADConnectors() const { DARABONBA_PTR_GET_CONST(ADConnectors_, vector<OfficeSites::ADConnectors>) };
      inline vector<OfficeSites::ADConnectors> getADConnectors() { DARABONBA_PTR_GET(ADConnectors_, vector<OfficeSites::ADConnectors>) };
      inline OfficeSites& setADConnectors(const vector<OfficeSites::ADConnectors> & aDConnectors) { DARABONBA_PTR_SET_VALUE(ADConnectors_, aDConnectors) };
      inline OfficeSites& setADConnectors(vector<OfficeSites::ADConnectors> && aDConnectors) { DARABONBA_PTR_SET_RVALUE(ADConnectors_, aDConnectors) };


      // acceleratorId Field Functions 
      bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
      void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
      inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
      inline OfficeSites& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


      // accountType Field Functions 
      bool hasAccountType() const { return this->accountType_ != nullptr;};
      void deleteAccountType() { this->accountType_ = nullptr;};
      inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
      inline OfficeSites& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


      // adHostname Field Functions 
      bool hasAdHostname() const { return this->adHostname_ != nullptr;};
      void deleteAdHostname() { this->adHostname_ = nullptr;};
      inline string getAdHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
      inline OfficeSites& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


      // authorityHost Field Functions 
      bool hasAuthorityHost() const { return this->authorityHost_ != nullptr;};
      void deleteAuthorityHost() { this->authorityHost_ = nullptr;};
      inline string getAuthorityHost() const { DARABONBA_PTR_GET_DEFAULT(authorityHost_, "") };
      inline OfficeSites& setAuthorityHost(string authorityHost) { DARABONBA_PTR_SET_VALUE(authorityHost_, authorityHost) };


      // backupDCHostname Field Functions 
      bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
      void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
      inline string getBackupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
      inline OfficeSites& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


      // backupDns Field Functions 
      bool hasBackupDns() const { return this->backupDns_ != nullptr;};
      void deleteBackupDns() { this->backupDns_ = nullptr;};
      inline string getBackupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
      inline OfficeSites& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


      // bandwidth Field Functions 
      bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
      void deleteBandwidth() { this->bandwidth_ = nullptr;};
      inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
      inline OfficeSites& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


      // cenAttachStatus Field Functions 
      bool hasCenAttachStatus() const { return this->cenAttachStatus_ != nullptr;};
      void deleteCenAttachStatus() { this->cenAttachStatus_ = nullptr;};
      inline string getCenAttachStatus() const { DARABONBA_PTR_GET_DEFAULT(cenAttachStatus_, "") };
      inline OfficeSites& setCenAttachStatus(string cenAttachStatus) { DARABONBA_PTR_SET_VALUE(cenAttachStatus_, cenAttachStatus) };


      // cenId Field Functions 
      bool hasCenId() const { return this->cenId_ != nullptr;};
      void deleteCenId() { this->cenId_ = nullptr;};
      inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
      inline OfficeSites& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


      // cidrBlock Field Functions 
      bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
      void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
      inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
      inline OfficeSites& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


      // clientId Field Functions 
      bool hasClientId() const { return this->clientId_ != nullptr;};
      void deleteClientId() { this->clientId_ = nullptr;};
      inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
      inline OfficeSites& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


      // clientSecret Field Functions 
      bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
      void deleteClientSecret() { this->clientSecret_ = nullptr;};
      inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
      inline OfficeSites& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


      // cloudBoxOfficeSite Field Functions 
      bool hasCloudBoxOfficeSite() const { return this->cloudBoxOfficeSite_ != nullptr;};
      void deleteCloudBoxOfficeSite() { this->cloudBoxOfficeSite_ = nullptr;};
      inline bool getCloudBoxOfficeSite() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxOfficeSite_, false) };
      inline OfficeSites& setCloudBoxOfficeSite(bool cloudBoxOfficeSite) { DARABONBA_PTR_SET_VALUE(cloudBoxOfficeSite_, cloudBoxOfficeSite) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline OfficeSites& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // customAccessPoint Field Functions 
      bool hasCustomAccessPoint() const { return this->customAccessPoint_ != nullptr;};
      void deleteCustomAccessPoint() { this->customAccessPoint_ = nullptr;};
      inline string getCustomAccessPoint() const { DARABONBA_PTR_GET_DEFAULT(customAccessPoint_, "") };
      inline OfficeSites& setCustomAccessPoint(string customAccessPoint) { DARABONBA_PTR_SET_VALUE(customAccessPoint_, customAccessPoint) };


      // customDnsAddress Field Functions 
      bool hasCustomDnsAddress() const { return this->customDnsAddress_ != nullptr;};
      void deleteCustomDnsAddress() { this->customDnsAddress_ = nullptr;};
      inline const vector<string> & getCustomDnsAddress() const { DARABONBA_PTR_GET_CONST(customDnsAddress_, vector<string>) };
      inline vector<string> getCustomDnsAddress() { DARABONBA_PTR_GET(customDnsAddress_, vector<string>) };
      inline OfficeSites& setCustomDnsAddress(const vector<string> & customDnsAddress) { DARABONBA_PTR_SET_VALUE(customDnsAddress_, customDnsAddress) };
      inline OfficeSites& setCustomDnsAddress(vector<string> && customDnsAddress) { DARABONBA_PTR_SET_RVALUE(customDnsAddress_, customDnsAddress) };


      // customSecurityGroupId Field Functions 
      bool hasCustomSecurityGroupId() const { return this->customSecurityGroupId_ != nullptr;};
      void deleteCustomSecurityGroupId() { this->customSecurityGroupId_ = nullptr;};
      inline string getCustomSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(customSecurityGroupId_, "") };
      inline OfficeSites& setCustomSecurityGroupId(string customSecurityGroupId) { DARABONBA_PTR_SET_VALUE(customSecurityGroupId_, customSecurityGroupId) };


      // desktopAccessType Field Functions 
      bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
      void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
      inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
      inline OfficeSites& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


      // desktopCount Field Functions 
      bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
      void deleteDesktopCount() { this->desktopCount_ = nullptr;};
      inline int64_t getDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0L) };
      inline OfficeSites& setDesktopCount(int64_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


      // desktopVpcEndpoint Field Functions 
      bool hasDesktopVpcEndpoint() const { return this->desktopVpcEndpoint_ != nullptr;};
      void deleteDesktopVpcEndpoint() { this->desktopVpcEndpoint_ = nullptr;};
      inline string getDesktopVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(desktopVpcEndpoint_, "") };
      inline OfficeSites& setDesktopVpcEndpoint(string desktopVpcEndpoint) { DARABONBA_PTR_SET_VALUE(desktopVpcEndpoint_, desktopVpcEndpoint) };


      // dnsAddress Field Functions 
      bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
      void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
      inline const vector<string> & getDnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
      inline vector<string> getDnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
      inline OfficeSites& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
      inline OfficeSites& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


      // dnsUserName Field Functions 
      bool hasDnsUserName() const { return this->dnsUserName_ != nullptr;};
      void deleteDnsUserName() { this->dnsUserName_ = nullptr;};
      inline string getDnsUserName() const { DARABONBA_PTR_GET_DEFAULT(dnsUserName_, "") };
      inline OfficeSites& setDnsUserName(string dnsUserName) { DARABONBA_PTR_SET_VALUE(dnsUserName_, dnsUserName) };


      // domainName Field Functions 
      bool hasDomainName() const { return this->domainName_ != nullptr;};
      void deleteDomainName() { this->domainName_ = nullptr;};
      inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
      inline OfficeSites& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


      // domainPassword Field Functions 
      bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
      void deleteDomainPassword() { this->domainPassword_ = nullptr;};
      inline string getDomainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
      inline OfficeSites& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


      // domainUserName Field Functions 
      bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
      void deleteDomainUserName() { this->domainUserName_ = nullptr;};
      inline string getDomainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
      inline OfficeSites& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


      // eid Field Functions 
      bool hasEid() const { return this->eid_ != nullptr;};
      void deleteEid() { this->eid_ = nullptr;};
      inline string getEid() const { DARABONBA_PTR_GET_DEFAULT(eid_, "") };
      inline OfficeSites& setEid(string eid) { DARABONBA_PTR_SET_VALUE(eid_, eid) };


      // enableAdminAccess Field Functions 
      bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
      void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
      inline bool getEnableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
      inline OfficeSites& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


      // enableCrossDesktopAccess Field Functions 
      bool hasEnableCrossDesktopAccess() const { return this->enableCrossDesktopAccess_ != nullptr;};
      void deleteEnableCrossDesktopAccess() { this->enableCrossDesktopAccess_ = nullptr;};
      inline bool getEnableCrossDesktopAccess() const { DARABONBA_PTR_GET_DEFAULT(enableCrossDesktopAccess_, false) };
      inline OfficeSites& setEnableCrossDesktopAccess(bool enableCrossDesktopAccess) { DARABONBA_PTR_SET_VALUE(enableCrossDesktopAccess_, enableCrossDesktopAccess) };


      // enableInternetAccess Field Functions 
      bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
      void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
      inline bool getEnableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
      inline OfficeSites& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


      // enableServiceRoute Field Functions 
      bool hasEnableServiceRoute() const { return this->enableServiceRoute_ != nullptr;};
      void deleteEnableServiceRoute() { this->enableServiceRoute_ = nullptr;};
      inline bool getEnableServiceRoute() const { DARABONBA_PTR_GET_DEFAULT(enableServiceRoute_, false) };
      inline OfficeSites& setEnableServiceRoute(bool enableServiceRoute) { DARABONBA_PTR_SET_VALUE(enableServiceRoute_, enableServiceRoute) };


      // envType Field Functions 
      bool hasEnvType() const { return this->envType_ != nullptr;};
      void deleteEnvType() { this->envType_ = nullptr;};
      inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
      inline OfficeSites& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


      // fileSystemIds Field Functions 
      bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
      void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
      inline const vector<string> & getFileSystemIds() const { DARABONBA_PTR_GET_CONST(fileSystemIds_, vector<string>) };
      inline vector<string> getFileSystemIds() { DARABONBA_PTR_GET(fileSystemIds_, vector<string>) };
      inline OfficeSites& setFileSystemIds(const vector<string> & fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };
      inline OfficeSites& setFileSystemIds(vector<string> && fileSystemIds) { DARABONBA_PTR_SET_RVALUE(fileSystemIds_, fileSystemIds) };


      // isLdap Field Functions 
      bool hasIsLdap() const { return this->isLdap_ != nullptr;};
      void deleteIsLdap() { this->isLdap_ = nullptr;};
      inline bool getIsLdap() const { DARABONBA_PTR_GET_DEFAULT(isLdap_, false) };
      inline OfficeSites& setIsLdap(bool isLdap) { DARABONBA_PTR_SET_VALUE(isLdap_, isLdap) };


      // ldapUrl Field Functions 
      bool hasLdapUrl() const { return this->ldapUrl_ != nullptr;};
      void deleteLdapUrl() { this->ldapUrl_ = nullptr;};
      inline string getLdapUrl() const { DARABONBA_PTR_GET_DEFAULT(ldapUrl_, "") };
      inline OfficeSites& setLdapUrl(string ldapUrl) { DARABONBA_PTR_SET_VALUE(ldapUrl_, ldapUrl) };


      // logs Field Functions 
      bool hasLogs() const { return this->logs_ != nullptr;};
      void deleteLogs() { this->logs_ = nullptr;};
      inline const vector<OfficeSites::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<OfficeSites::Logs>) };
      inline vector<OfficeSites::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<OfficeSites::Logs>) };
      inline OfficeSites& setLogs(const vector<OfficeSites::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
      inline OfficeSites& setLogs(vector<OfficeSites::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


      // mfaEnabled Field Functions 
      bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
      void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
      inline bool getMfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
      inline OfficeSites& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline OfficeSites& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // needVerifyLoginRisk Field Functions 
      bool hasNeedVerifyLoginRisk() const { return this->needVerifyLoginRisk_ != nullptr;};
      void deleteNeedVerifyLoginRisk() { this->needVerifyLoginRisk_ = nullptr;};
      inline bool getNeedVerifyLoginRisk() const { DARABONBA_PTR_GET_DEFAULT(needVerifyLoginRisk_, false) };
      inline OfficeSites& setNeedVerifyLoginRisk(bool needVerifyLoginRisk) { DARABONBA_PTR_SET_VALUE(needVerifyLoginRisk_, needVerifyLoginRisk) };


      // needVerifyZeroDevice Field Functions 
      bool hasNeedVerifyZeroDevice() const { return this->needVerifyZeroDevice_ != nullptr;};
      void deleteNeedVerifyZeroDevice() { this->needVerifyZeroDevice_ = nullptr;};
      inline bool getNeedVerifyZeroDevice() const { DARABONBA_PTR_GET_DEFAULT(needVerifyZeroDevice_, false) };
      inline OfficeSites& setNeedVerifyZeroDevice(bool needVerifyZeroDevice) { DARABONBA_PTR_SET_VALUE(needVerifyZeroDevice_, needVerifyZeroDevice) };


      // networkPackageId Field Functions 
      bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
      void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
      inline string getNetworkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
      inline OfficeSites& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


      // nmVersion Field Functions 
      bool hasNmVersion() const { return this->nmVersion_ != nullptr;};
      void deleteNmVersion() { this->nmVersion_ = nullptr;};
      inline string getNmVersion() const { DARABONBA_PTR_GET_DEFAULT(nmVersion_, "") };
      inline OfficeSites& setNmVersion(string nmVersion) { DARABONBA_PTR_SET_VALUE(nmVersion_, nmVersion) };


      // officeSiteId Field Functions 
      bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
      void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
      inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
      inline OfficeSites& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


      // officeSiteType Field Functions 
      bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
      void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
      inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
      inline OfficeSites& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


      // ouName Field Functions 
      bool hasOuName() const { return this->ouName_ != nullptr;};
      void deleteOuName() { this->ouName_ = nullptr;};
      inline string getOuName() const { DARABONBA_PTR_GET_DEFAULT(ouName_, "") };
      inline OfficeSites& setOuName(string ouName) { DARABONBA_PTR_SET_VALUE(ouName_, ouName) };


      // protocolType Field Functions 
      bool hasProtocolType() const { return this->protocolType_ != nullptr;};
      void deleteProtocolType() { this->protocolType_ = nullptr;};
      inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
      inline OfficeSites& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


      // rdsLicenseAddress Field Functions 
      bool hasRdsLicenseAddress() const { return this->rdsLicenseAddress_ != nullptr;};
      void deleteRdsLicenseAddress() { this->rdsLicenseAddress_ = nullptr;};
      inline string getRdsLicenseAddress() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseAddress_, "") };
      inline OfficeSites& setRdsLicenseAddress(string rdsLicenseAddress) { DARABONBA_PTR_SET_VALUE(rdsLicenseAddress_, rdsLicenseAddress) };


      // rdsLicenseDomainName Field Functions 
      bool hasRdsLicenseDomainName() const { return this->rdsLicenseDomainName_ != nullptr;};
      void deleteRdsLicenseDomainName() { this->rdsLicenseDomainName_ = nullptr;};
      inline string getRdsLicenseDomainName() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseDomainName_, "") };
      inline OfficeSites& setRdsLicenseDomainName(string rdsLicenseDomainName) { DARABONBA_PTR_SET_VALUE(rdsLicenseDomainName_, rdsLicenseDomainName) };


      // rdsLicenseStatus Field Functions 
      bool hasRdsLicenseStatus() const { return this->rdsLicenseStatus_ != nullptr;};
      void deleteRdsLicenseStatus() { this->rdsLicenseStatus_ = nullptr;};
      inline string getRdsLicenseStatus() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseStatus_, "") };
      inline OfficeSites& setRdsLicenseStatus(string rdsLicenseStatus) { DARABONBA_PTR_SET_VALUE(rdsLicenseStatus_, rdsLicenseStatus) };


      // resourceAmounts Field Functions 
      bool hasResourceAmounts() const { return this->resourceAmounts_ != nullptr;};
      void deleteResourceAmounts() { this->resourceAmounts_ = nullptr;};
      inline const vector<OfficeSites::ResourceAmounts> & getResourceAmounts() const { DARABONBA_PTR_GET_CONST(resourceAmounts_, vector<OfficeSites::ResourceAmounts>) };
      inline vector<OfficeSites::ResourceAmounts> getResourceAmounts() { DARABONBA_PTR_GET(resourceAmounts_, vector<OfficeSites::ResourceAmounts>) };
      inline OfficeSites& setResourceAmounts(const vector<OfficeSites::ResourceAmounts> & resourceAmounts) { DARABONBA_PTR_SET_VALUE(resourceAmounts_, resourceAmounts) };
      inline OfficeSites& setResourceAmounts(vector<OfficeSites::ResourceAmounts> && resourceAmounts) { DARABONBA_PTR_SET_RVALUE(resourceAmounts_, resourceAmounts) };


      // securityProtection Field Functions 
      bool hasSecurityProtection() const { return this->securityProtection_ != nullptr;};
      void deleteSecurityProtection() { this->securityProtection_ = nullptr;};
      inline string getSecurityProtection() const { DARABONBA_PTR_GET_DEFAULT(securityProtection_, "") };
      inline OfficeSites& setSecurityProtection(string securityProtection) { DARABONBA_PTR_SET_VALUE(securityProtection_, securityProtection) };


      // ssoEnabled Field Functions 
      bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
      void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
      inline bool getSsoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
      inline OfficeSites& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


      // ssoType Field Functions 
      bool hasSsoType() const { return this->ssoType_ != nullptr;};
      void deleteSsoType() { this->ssoType_ = nullptr;};
      inline string getSsoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
      inline OfficeSites& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline OfficeSites& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subDnsAddress Field Functions 
      bool hasSubDnsAddress() const { return this->subDnsAddress_ != nullptr;};
      void deleteSubDnsAddress() { this->subDnsAddress_ = nullptr;};
      inline const vector<string> & getSubDnsAddress() const { DARABONBA_PTR_GET_CONST(subDnsAddress_, vector<string>) };
      inline vector<string> getSubDnsAddress() { DARABONBA_PTR_GET(subDnsAddress_, vector<string>) };
      inline OfficeSites& setSubDnsAddress(const vector<string> & subDnsAddress) { DARABONBA_PTR_SET_VALUE(subDnsAddress_, subDnsAddress) };
      inline OfficeSites& setSubDnsAddress(vector<string> && subDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDnsAddress_, subDnsAddress) };


      // subDomainName Field Functions 
      bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
      void deleteSubDomainName() { this->subDomainName_ = nullptr;};
      inline string getSubDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
      inline OfficeSites& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


      // subnetMode Field Functions 
      bool hasSubnetMode() const { return this->subnetMode_ != nullptr;};
      void deleteSubnetMode() { this->subnetMode_ = nullptr;};
      inline string getSubnetMode() const { DARABONBA_PTR_GET_DEFAULT(subnetMode_, "") };
      inline OfficeSites& setSubnetMode(string subnetMode) { DARABONBA_PTR_SET_VALUE(subnetMode_, subnetMode) };


      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline OfficeSites& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


      // totalEdsCount Field Functions 
      bool hasTotalEdsCount() const { return this->totalEdsCount_ != nullptr;};
      void deleteTotalEdsCount() { this->totalEdsCount_ = nullptr;};
      inline int64_t getTotalEdsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCount_, 0L) };
      inline OfficeSites& setTotalEdsCount(int64_t totalEdsCount) { DARABONBA_PTR_SET_VALUE(totalEdsCount_, totalEdsCount) };


      // totalEdsCountForGroup Field Functions 
      bool hasTotalEdsCountForGroup() const { return this->totalEdsCountForGroup_ != nullptr;};
      void deleteTotalEdsCountForGroup() { this->totalEdsCountForGroup_ = nullptr;};
      inline int64_t getTotalEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCountForGroup_, 0L) };
      inline OfficeSites& setTotalEdsCountForGroup(int64_t totalEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(totalEdsCountForGroup_, totalEdsCountForGroup) };


      // totalResourceAmount Field Functions 
      bool hasTotalResourceAmount() const { return this->totalResourceAmount_ != nullptr;};
      void deleteTotalResourceAmount() { this->totalResourceAmount_ = nullptr;};
      inline int64_t getTotalResourceAmount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceAmount_, 0L) };
      inline OfficeSites& setTotalResourceAmount(int64_t totalResourceAmount) { DARABONBA_PTR_SET_VALUE(totalResourceAmount_, totalResourceAmount) };


      // trustPassword Field Functions 
      bool hasTrustPassword() const { return this->trustPassword_ != nullptr;};
      void deleteTrustPassword() { this->trustPassword_ = nullptr;};
      inline string getTrustPassword() const { DARABONBA_PTR_GET_DEFAULT(trustPassword_, "") };
      inline OfficeSites& setTrustPassword(string trustPassword) { DARABONBA_PTR_SET_VALUE(trustPassword_, trustPassword) };


      // vSwitchIds Field Functions 
      bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
      void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
      inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
      inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
      inline OfficeSites& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
      inline OfficeSites& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline OfficeSites& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vpcType Field Functions 
      bool hasVpcType() const { return this->vpcType_ != nullptr;};
      void deleteVpcType() { this->vpcType_ = nullptr;};
      inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
      inline OfficeSites& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


    protected:
      // Details of AD connectors.
      shared_ptr<vector<OfficeSites::ADConnectors>> ADConnectors_ {};
      // The ID of the GA instance.
      shared_ptr<string> acceleratorId_ {};
      shared_ptr<string> accountType_ {};
      // The hostname of the domain controller. The hostname must comply with the hostname naming convention of Windows.
      shared_ptr<string> adHostname_ {};
      shared_ptr<string> authorityHost_ {};
      // The hostname of the secondary domain controller.
      shared_ptr<string> backupDCHostname_ {};
      // The DNS address of the secondary domain controller.
      shared_ptr<string> backupDns_ {};
      // The maximum public bandwidth value. Valid values: 0 to 1000.\\
      // If you leave this parameter empty or set this parameter to 0, Internet access is not enabled.
      shared_ptr<int32_t> bandwidth_ {};
      // The CEN instance status.
      shared_ptr<string> cenAttachStatus_ {};
      // The CEN instance ID.
      shared_ptr<string> cenId_ {};
      // The IPv4 CIDR block of the VPC that the office network uses.
      shared_ptr<string> cidrBlock_ {};
      shared_ptr<string> clientId_ {};
      shared_ptr<string> clientSecret_ {};
      // Indicates whether the CloudBox-based office network is created.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> cloudBoxOfficeSite_ {};
      // The time when the office network was created.
      shared_ptr<string> creationTime_ {};
      // The custom endpoint of the access gateway.
      shared_ptr<string> customAccessPoint_ {};
      // The custom DNS addresses.
      shared_ptr<vector<string>> customDnsAddress_ {};
      // The ID of the security group.
      shared_ptr<string> customSecurityGroupId_ {};
      // The method that is used to connect cloud computers that reside in the office network from Alibaba Cloud Workspace clients.
      // 
      // >  The VPC connection depends on Alibaba Cloud PrivateLink. You can use Alibaba Cloud PrivateLink for free. When you set this parameter to `VPC` or `Any`, PrivateLink is automatically activated.
      // 
      // Valid values:
      // 
      // *   INTERNET (default): Cloud computers are connected from Alibaba Cloud Workspace clients over the Internet.
      // *   VPC: Cloud computers are connected from Alibaba Cloud Workspace clients over the VPC.
      // *   ANY: Cloud computers are connected from Alibaba Cloud Workspace clients over the Internet or the VPC. When end users connect to cloud computers from Alibaba Cloud Workspace clients, you can choose a connection method based on your business requirements.
      shared_ptr<string> desktopAccessType_ {};
      // The number of cloud computers that are created.
      shared_ptr<int64_t> desktopCount_ {};
      // The endpoint that is used to connect to cloud computers in the directory over a VPC.
      shared_ptr<string> desktopVpcEndpoint_ {};
      // The DNS addresses for the AD domains.
      shared_ptr<vector<string>> dnsAddress_ {};
      // The username of a Domain Name System (DNS) user.
      shared_ptr<string> dnsUserName_ {};
      // The domain name of the enterprise AD.
      shared_ptr<string> domainName_ {};
      // The password of the domain administrator.
      shared_ptr<string> domainPassword_ {};
      // The username of the domain administrator.
      shared_ptr<string> domainUserName_ {};
      shared_ptr<string> eid_ {};
      // Indicates whether the local administrator permissions are granted to users that are authorized to use cloud computers in the office network.
      // 
      // Valid values:
      // 
      // *   true (default)
      // *   false
      shared_ptr<bool> enableAdminAccess_ {};
      // Indicates whether the connection between cloud computers in the office network is enabled. After you enable the connection between cloud computers in the office network, cloud computers in the office network can access each other.
      shared_ptr<bool> enableCrossDesktopAccess_ {};
      // Indicates whether Internet access is enabled.
      shared_ptr<bool> enableInternetAccess_ {};
      // Indicates whether route access control is enabled for cloud services.
      shared_ptr<bool> enableServiceRoute_ {};
      shared_ptr<string> envType_ {};
      // An array of File Storage NAS (NAS) file system IDs.
      shared_ptr<vector<string>> fileSystemIds_ {};
      shared_ptr<bool> isLdap_ {};
      shared_ptr<string> ldapUrl_ {};
      // Details about registration logs.
      shared_ptr<vector<OfficeSites::Logs>> logs_ {};
      // Indicates whether multi-factor authentication (MFA) is enabled.
      shared_ptr<bool> mfaEnabled_ {};
      // The name of the office network. The name is unique in a region.
      shared_ptr<string> name_ {};
      // Indicates whether two-factor verification is enabled when an end user logs on to an Alibaba Cloud Workspace client. This parameter is required only for convenience office networks. If two-factor verification is enabled, the system checks whether security risks exist within the logon account when a convenience user logs on to the client. If risks are detected, the system sends a verification code to the email address that is associated with the account. Then, the convenience user can log on to the client only after the user enters the correct verification code.
      shared_ptr<bool> needVerifyLoginRisk_ {};
      // Indicates whether the trusted device verification is enabled.
      // 
      // Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> needVerifyZeroDevice_ {};
      // The premium bandwidth plan ID.
      shared_ptr<string> networkPackageId_ {};
      // The network version. The new version supports App Streaming.
      // 
      // Valid values:
      // 
      // *   DEFAULT: the old version.
      // *   NM: the new version.
      shared_ptr<string> nmVersion_ {};
      // The IDs of the office networks.
      shared_ptr<string> officeSiteId_ {};
      // The account type of the office network.
      // 
      // Valid values:
      // 
      // *   SIMPLE: the convenience account
      // *   AD_CONNECTOR: the enterprise AD account
      shared_ptr<string> officeSiteType_ {};
      // The organizational unit (OU) in the AD domain to which the office network is connected.
      shared_ptr<string> ouName_ {};
      // The protocol type.
      // 
      // Valid values:
      // 
      // *   HDX
      // *   ASP
      shared_ptr<string> protocolType_ {};
      // The IP address of the RDS license.
      shared_ptr<string> rdsLicenseAddress_ {};
      // The domain name of the RDS license.
      shared_ptr<string> rdsLicenseDomainName_ {};
      // The remote desktop service (RDS) license status.
      shared_ptr<string> rdsLicenseStatus_ {};
      // The number of resources.
      shared_ptr<vector<OfficeSites::ResourceAmounts>> resourceAmounts_ {};
      // The security protection setting of the office network.
      // 
      // Valid values:
      // 
      // *   SASE: SASE is configured.
      // *   OFF: No security protection setting is configured.
      shared_ptr<string> securityProtection_ {};
      // Indicates whether single sign-on (SSO) is enabled.
      shared_ptr<bool> ssoEnabled_ {};
      // The SSO type.
      // 
      // Valid values:
      // 
      // *   SAML.
      shared_ptr<string> ssoType_ {};
      // The office network status.
      // 
      // Valid values:
      // 
      // *   REGISTERING: The office network is being registered.
      // *   DEREGISTERING: The office network is being deregistered.
      // *   REGISTERED: The office network is registered.
      // *   NEEDCONFIGTRUST: A trust relationship is required for the office network.
      // *   CONFIGTRUSTFAILED: A trust relationship fails to be configured for the office network.
      // *   DEREGISTERED: The office network is deregistered.
      // *   ERROR: One or more configurations of the office network are invalid.
      // *   CONFIGTRUSTING: A trust relationship is being configured for the office network.
      // *   NEEDCONFIGUSER: Users are required for the office network.
      shared_ptr<string> status_ {};
      // The DNS addresses for the AD subdomains.
      shared_ptr<vector<string>> subDnsAddress_ {};
      // The username of enterprise AD subdomain.
      shared_ptr<string> subDomainName_ {};
      // The subnet mode of the office network.
      // 
      // Valid values:
      // 
      // *   0: disabled.
      // *   1: enabled.
      shared_ptr<string> subnetMode_ {};
      shared_ptr<string> tenantId_ {};
      // The total number of cloud computers.
      shared_ptr<int64_t> totalEdsCount_ {};
      // The number of cloud computers in the cloud computer share.
      shared_ptr<int64_t> totalEdsCountForGroup_ {};
      // The number of network interface controllers (NICs).
      shared_ptr<int64_t> totalResourceAmount_ {};
      // >  This parameter is unavailable.
      shared_ptr<string> trustPassword_ {};
      // An array of VSwitch IDs.
      shared_ptr<vector<string>> vSwitchIds_ {};
      // The VPC ID.
      shared_ptr<string> vpcId_ {};
      // The VPC type.
      // 
      // Valid values:
      // 
      // *   Basic
      // *   Customized
      // *   Standard
      shared_ptr<string> vpcType_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->officeSites_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeOfficeSitesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // officeSites Field Functions 
    bool hasOfficeSites() const { return this->officeSites_ != nullptr;};
    void deleteOfficeSites() { this->officeSites_ = nullptr;};
    inline const vector<DescribeOfficeSitesResponseBody::OfficeSites> & getOfficeSites() const { DARABONBA_PTR_GET_CONST(officeSites_, vector<DescribeOfficeSitesResponseBody::OfficeSites>) };
    inline vector<DescribeOfficeSitesResponseBody::OfficeSites> getOfficeSites() { DARABONBA_PTR_GET(officeSites_, vector<DescribeOfficeSitesResponseBody::OfficeSites>) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(const vector<DescribeOfficeSitesResponseBody::OfficeSites> & officeSites) { DARABONBA_PTR_SET_VALUE(officeSites_, officeSites) };
    inline DescribeOfficeSitesResponseBody& setOfficeSites(vector<DescribeOfficeSitesResponseBody::OfficeSites> && officeSites) { DARABONBA_PTR_SET_RVALUE(officeSites_, officeSites) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOfficeSitesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOfficeSitesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The token that determines the start point of the next query. If this parameter is empty, all results are returned.
    shared_ptr<string> nextToken_ {};
    // The office networks.
    shared_ptr<vector<DescribeOfficeSitesResponseBody::OfficeSites>> officeSites_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
