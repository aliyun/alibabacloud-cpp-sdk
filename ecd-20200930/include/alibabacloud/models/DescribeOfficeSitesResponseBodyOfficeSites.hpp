// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOFFICESITESRESPONSEBODYOFFICESITES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOfficeSitesResponseBodyOfficeSitesADConnectors.hpp>
#include <alibabacloud/models/DescribeOfficeSitesResponseBodyOfficeSitesLogs.hpp>
#include <alibabacloud/models/DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeOfficeSitesResponseBodyOfficeSites : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOfficeSitesResponseBodyOfficeSites& obj) { 
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
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
      DARABONBA_PTR_TO_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_TO_JSON(EnableServiceRoute, enableServiceRoute_);
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
    friend void from_json(const Darabonba::Json& j, DescribeOfficeSitesResponseBodyOfficeSites& obj) { 
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
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(EnableCrossDesktopAccess, enableCrossDesktopAccess_);
      DARABONBA_PTR_FROM_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_FROM_JSON(EnableServiceRoute, enableServiceRoute_);
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
    DescribeOfficeSitesResponseBodyOfficeSites() = default ;
    DescribeOfficeSitesResponseBodyOfficeSites(const DescribeOfficeSitesResponseBodyOfficeSites &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSites(DescribeOfficeSitesResponseBodyOfficeSites &&) = default ;
    DescribeOfficeSitesResponseBodyOfficeSites(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOfficeSitesResponseBodyOfficeSites() = default ;
    DescribeOfficeSitesResponseBodyOfficeSites& operator=(const DescribeOfficeSitesResponseBodyOfficeSites &) = default ;
    DescribeOfficeSitesResponseBodyOfficeSites& operator=(DescribeOfficeSitesResponseBodyOfficeSites &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ADConnectors_ == nullptr
        && return this->acceleratorId_ == nullptr && return this->accountType_ == nullptr && return this->adHostname_ == nullptr && return this->authorityHost_ == nullptr && return this->backupDCHostname_ == nullptr
        && return this->backupDns_ == nullptr && return this->bandwidth_ == nullptr && return this->cenAttachStatus_ == nullptr && return this->cenId_ == nullptr && return this->cidrBlock_ == nullptr
        && return this->clientId_ == nullptr && return this->clientSecret_ == nullptr && return this->cloudBoxOfficeSite_ == nullptr && return this->creationTime_ == nullptr && return this->customAccessPoint_ == nullptr
        && return this->customDnsAddress_ == nullptr && return this->customSecurityGroupId_ == nullptr && return this->desktopAccessType_ == nullptr && return this->desktopCount_ == nullptr && return this->desktopVpcEndpoint_ == nullptr
        && return this->dnsAddress_ == nullptr && return this->dnsUserName_ == nullptr && return this->domainName_ == nullptr && return this->domainPassword_ == nullptr && return this->domainUserName_ == nullptr
        && return this->enableAdminAccess_ == nullptr && return this->enableCrossDesktopAccess_ == nullptr && return this->enableInternetAccess_ == nullptr && return this->enableServiceRoute_ == nullptr && return this->fileSystemIds_ == nullptr
        && return this->isLdap_ == nullptr && return this->ldapUrl_ == nullptr && return this->logs_ == nullptr && return this->mfaEnabled_ == nullptr && return this->name_ == nullptr
        && return this->needVerifyLoginRisk_ == nullptr && return this->needVerifyZeroDevice_ == nullptr && return this->networkPackageId_ == nullptr && return this->nmVersion_ == nullptr && return this->officeSiteId_ == nullptr
        && return this->officeSiteType_ == nullptr && return this->ouName_ == nullptr && return this->protocolType_ == nullptr && return this->rdsLicenseAddress_ == nullptr && return this->rdsLicenseDomainName_ == nullptr
        && return this->rdsLicenseStatus_ == nullptr && return this->resourceAmounts_ == nullptr && return this->securityProtection_ == nullptr && return this->ssoEnabled_ == nullptr && return this->ssoType_ == nullptr
        && return this->status_ == nullptr && return this->subDnsAddress_ == nullptr && return this->subDomainName_ == nullptr && return this->subnetMode_ == nullptr && return this->tenantId_ == nullptr
        && return this->totalEdsCount_ == nullptr && return this->totalEdsCountForGroup_ == nullptr && return this->totalResourceAmount_ == nullptr && return this->trustPassword_ == nullptr && return this->vSwitchIds_ == nullptr
        && return this->vpcId_ == nullptr && return this->vpcType_ == nullptr; };
    // ADConnectors Field Functions 
    bool hasADConnectors() const { return this->ADConnectors_ != nullptr;};
    void deleteADConnectors() { this->ADConnectors_ = nullptr;};
    inline const vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors> & ADConnectors() const { DARABONBA_PTR_GET_CONST(ADConnectors_, vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors>) };
    inline vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors> ADConnectors() { DARABONBA_PTR_GET(ADConnectors_, vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setADConnectors(const vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors> & ADConnectors) { DARABONBA_PTR_SET_VALUE(ADConnectors_, ADConnectors) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setADConnectors(vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors> && ADConnectors) { DARABONBA_PTR_SET_RVALUE(ADConnectors_, ADConnectors) };


    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string acceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string accountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string adHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // authorityHost Field Functions 
    bool hasAuthorityHost() const { return this->authorityHost_ != nullptr;};
    void deleteAuthorityHost() { this->authorityHost_ = nullptr;};
    inline string authorityHost() const { DARABONBA_PTR_GET_DEFAULT(authorityHost_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setAuthorityHost(string authorityHost) { DARABONBA_PTR_SET_VALUE(authorityHost_, authorityHost) };


    // backupDCHostname Field Functions 
    bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
    void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
    inline string backupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


    // backupDns Field Functions 
    bool hasBackupDns() const { return this->backupDns_ != nullptr;};
    void deleteBackupDns() { this->backupDns_ = nullptr;};
    inline string backupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenAttachStatus Field Functions 
    bool hasCenAttachStatus() const { return this->cenAttachStatus_ != nullptr;};
    void deleteCenAttachStatus() { this->cenAttachStatus_ = nullptr;};
    inline string cenAttachStatus() const { DARABONBA_PTR_GET_DEFAULT(cenAttachStatus_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCenAttachStatus(string cenAttachStatus) { DARABONBA_PTR_SET_VALUE(cenAttachStatus_, cenAttachStatus) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string clientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string clientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // cloudBoxOfficeSite Field Functions 
    bool hasCloudBoxOfficeSite() const { return this->cloudBoxOfficeSite_ != nullptr;};
    void deleteCloudBoxOfficeSite() { this->cloudBoxOfficeSite_ = nullptr;};
    inline bool cloudBoxOfficeSite() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxOfficeSite_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCloudBoxOfficeSite(bool cloudBoxOfficeSite) { DARABONBA_PTR_SET_VALUE(cloudBoxOfficeSite_, cloudBoxOfficeSite) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // customAccessPoint Field Functions 
    bool hasCustomAccessPoint() const { return this->customAccessPoint_ != nullptr;};
    void deleteCustomAccessPoint() { this->customAccessPoint_ = nullptr;};
    inline string customAccessPoint() const { DARABONBA_PTR_GET_DEFAULT(customAccessPoint_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCustomAccessPoint(string customAccessPoint) { DARABONBA_PTR_SET_VALUE(customAccessPoint_, customAccessPoint) };


    // customDnsAddress Field Functions 
    bool hasCustomDnsAddress() const { return this->customDnsAddress_ != nullptr;};
    void deleteCustomDnsAddress() { this->customDnsAddress_ = nullptr;};
    inline const vector<string> & customDnsAddress() const { DARABONBA_PTR_GET_CONST(customDnsAddress_, vector<string>) };
    inline vector<string> customDnsAddress() { DARABONBA_PTR_GET(customDnsAddress_, vector<string>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCustomDnsAddress(const vector<string> & customDnsAddress) { DARABONBA_PTR_SET_VALUE(customDnsAddress_, customDnsAddress) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCustomDnsAddress(vector<string> && customDnsAddress) { DARABONBA_PTR_SET_RVALUE(customDnsAddress_, customDnsAddress) };


    // customSecurityGroupId Field Functions 
    bool hasCustomSecurityGroupId() const { return this->customSecurityGroupId_ != nullptr;};
    void deleteCustomSecurityGroupId() { this->customSecurityGroupId_ = nullptr;};
    inline string customSecurityGroupId() const { DARABONBA_PTR_GET_DEFAULT(customSecurityGroupId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setCustomSecurityGroupId(string customSecurityGroupId) { DARABONBA_PTR_SET_VALUE(customSecurityGroupId_, customSecurityGroupId) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string desktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // desktopCount Field Functions 
    bool hasDesktopCount() const { return this->desktopCount_ != nullptr;};
    void deleteDesktopCount() { this->desktopCount_ = nullptr;};
    inline int64_t desktopCount() const { DARABONBA_PTR_GET_DEFAULT(desktopCount_, 0L) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDesktopCount(int64_t desktopCount) { DARABONBA_PTR_SET_VALUE(desktopCount_, desktopCount) };


    // desktopVpcEndpoint Field Functions 
    bool hasDesktopVpcEndpoint() const { return this->desktopVpcEndpoint_ != nullptr;};
    void deleteDesktopVpcEndpoint() { this->desktopVpcEndpoint_ = nullptr;};
    inline string desktopVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(desktopVpcEndpoint_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDesktopVpcEndpoint(string desktopVpcEndpoint) { DARABONBA_PTR_SET_VALUE(desktopVpcEndpoint_, desktopVpcEndpoint) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // dnsUserName Field Functions 
    bool hasDnsUserName() const { return this->dnsUserName_ != nullptr;};
    void deleteDnsUserName() { this->dnsUserName_ = nullptr;};
    inline string dnsUserName() const { DARABONBA_PTR_GET_DEFAULT(dnsUserName_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDnsUserName(string dnsUserName) { DARABONBA_PTR_SET_VALUE(dnsUserName_, dnsUserName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string domainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string domainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool enableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // enableCrossDesktopAccess Field Functions 
    bool hasEnableCrossDesktopAccess() const { return this->enableCrossDesktopAccess_ != nullptr;};
    void deleteEnableCrossDesktopAccess() { this->enableCrossDesktopAccess_ = nullptr;};
    inline bool enableCrossDesktopAccess() const { DARABONBA_PTR_GET_DEFAULT(enableCrossDesktopAccess_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setEnableCrossDesktopAccess(bool enableCrossDesktopAccess) { DARABONBA_PTR_SET_VALUE(enableCrossDesktopAccess_, enableCrossDesktopAccess) };


    // enableInternetAccess Field Functions 
    bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
    void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
    inline bool enableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


    // enableServiceRoute Field Functions 
    bool hasEnableServiceRoute() const { return this->enableServiceRoute_ != nullptr;};
    void deleteEnableServiceRoute() { this->enableServiceRoute_ = nullptr;};
    inline bool enableServiceRoute() const { DARABONBA_PTR_GET_DEFAULT(enableServiceRoute_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setEnableServiceRoute(bool enableServiceRoute) { DARABONBA_PTR_SET_VALUE(enableServiceRoute_, enableServiceRoute) };


    // fileSystemIds Field Functions 
    bool hasFileSystemIds() const { return this->fileSystemIds_ != nullptr;};
    void deleteFileSystemIds() { this->fileSystemIds_ = nullptr;};
    inline const vector<string> & fileSystemIds() const { DARABONBA_PTR_GET_CONST(fileSystemIds_, vector<string>) };
    inline vector<string> fileSystemIds() { DARABONBA_PTR_GET(fileSystemIds_, vector<string>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setFileSystemIds(const vector<string> & fileSystemIds) { DARABONBA_PTR_SET_VALUE(fileSystemIds_, fileSystemIds) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setFileSystemIds(vector<string> && fileSystemIds) { DARABONBA_PTR_SET_RVALUE(fileSystemIds_, fileSystemIds) };


    // isLdap Field Functions 
    bool hasIsLdap() const { return this->isLdap_ != nullptr;};
    void deleteIsLdap() { this->isLdap_ = nullptr;};
    inline bool isLdap() const { DARABONBA_PTR_GET_DEFAULT(isLdap_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setIsLdap(bool isLdap) { DARABONBA_PTR_SET_VALUE(isLdap_, isLdap) };


    // ldapUrl Field Functions 
    bool hasLdapUrl() const { return this->ldapUrl_ != nullptr;};
    void deleteLdapUrl() { this->ldapUrl_ = nullptr;};
    inline string ldapUrl() const { DARABONBA_PTR_GET_DEFAULT(ldapUrl_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setLdapUrl(string ldapUrl) { DARABONBA_PTR_SET_VALUE(ldapUrl_, ldapUrl) };


    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs> & logs() const { DARABONBA_PTR_GET_CONST(logs_, vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs>) };
    inline vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs> logs() { DARABONBA_PTR_GET(logs_, vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setLogs(const vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setLogs(vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool mfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needVerifyLoginRisk Field Functions 
    bool hasNeedVerifyLoginRisk() const { return this->needVerifyLoginRisk_ != nullptr;};
    void deleteNeedVerifyLoginRisk() { this->needVerifyLoginRisk_ = nullptr;};
    inline bool needVerifyLoginRisk() const { DARABONBA_PTR_GET_DEFAULT(needVerifyLoginRisk_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setNeedVerifyLoginRisk(bool needVerifyLoginRisk) { DARABONBA_PTR_SET_VALUE(needVerifyLoginRisk_, needVerifyLoginRisk) };


    // needVerifyZeroDevice Field Functions 
    bool hasNeedVerifyZeroDevice() const { return this->needVerifyZeroDevice_ != nullptr;};
    void deleteNeedVerifyZeroDevice() { this->needVerifyZeroDevice_ = nullptr;};
    inline bool needVerifyZeroDevice() const { DARABONBA_PTR_GET_DEFAULT(needVerifyZeroDevice_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setNeedVerifyZeroDevice(bool needVerifyZeroDevice) { DARABONBA_PTR_SET_VALUE(needVerifyZeroDevice_, needVerifyZeroDevice) };


    // networkPackageId Field Functions 
    bool hasNetworkPackageId() const { return this->networkPackageId_ != nullptr;};
    void deleteNetworkPackageId() { this->networkPackageId_ = nullptr;};
    inline string networkPackageId() const { DARABONBA_PTR_GET_DEFAULT(networkPackageId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setNetworkPackageId(string networkPackageId) { DARABONBA_PTR_SET_VALUE(networkPackageId_, networkPackageId) };


    // nmVersion Field Functions 
    bool hasNmVersion() const { return this->nmVersion_ != nullptr;};
    void deleteNmVersion() { this->nmVersion_ = nullptr;};
    inline string nmVersion() const { DARABONBA_PTR_GET_DEFAULT(nmVersion_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setNmVersion(string nmVersion) { DARABONBA_PTR_SET_VALUE(nmVersion_, nmVersion) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string officeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // ouName Field Functions 
    bool hasOuName() const { return this->ouName_ != nullptr;};
    void deleteOuName() { this->ouName_ = nullptr;};
    inline string ouName() const { DARABONBA_PTR_GET_DEFAULT(ouName_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setOuName(string ouName) { DARABONBA_PTR_SET_VALUE(ouName_, ouName) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // rdsLicenseAddress Field Functions 
    bool hasRdsLicenseAddress() const { return this->rdsLicenseAddress_ != nullptr;};
    void deleteRdsLicenseAddress() { this->rdsLicenseAddress_ = nullptr;};
    inline string rdsLicenseAddress() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseAddress_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setRdsLicenseAddress(string rdsLicenseAddress) { DARABONBA_PTR_SET_VALUE(rdsLicenseAddress_, rdsLicenseAddress) };


    // rdsLicenseDomainName Field Functions 
    bool hasRdsLicenseDomainName() const { return this->rdsLicenseDomainName_ != nullptr;};
    void deleteRdsLicenseDomainName() { this->rdsLicenseDomainName_ = nullptr;};
    inline string rdsLicenseDomainName() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseDomainName_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setRdsLicenseDomainName(string rdsLicenseDomainName) { DARABONBA_PTR_SET_VALUE(rdsLicenseDomainName_, rdsLicenseDomainName) };


    // rdsLicenseStatus Field Functions 
    bool hasRdsLicenseStatus() const { return this->rdsLicenseStatus_ != nullptr;};
    void deleteRdsLicenseStatus() { this->rdsLicenseStatus_ = nullptr;};
    inline string rdsLicenseStatus() const { DARABONBA_PTR_GET_DEFAULT(rdsLicenseStatus_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setRdsLicenseStatus(string rdsLicenseStatus) { DARABONBA_PTR_SET_VALUE(rdsLicenseStatus_, rdsLicenseStatus) };


    // resourceAmounts Field Functions 
    bool hasResourceAmounts() const { return this->resourceAmounts_ != nullptr;};
    void deleteResourceAmounts() { this->resourceAmounts_ = nullptr;};
    inline const vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts> & resourceAmounts() const { DARABONBA_PTR_GET_CONST(resourceAmounts_, vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts>) };
    inline vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts> resourceAmounts() { DARABONBA_PTR_GET(resourceAmounts_, vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setResourceAmounts(const vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts> & resourceAmounts) { DARABONBA_PTR_SET_VALUE(resourceAmounts_, resourceAmounts) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setResourceAmounts(vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts> && resourceAmounts) { DARABONBA_PTR_SET_RVALUE(resourceAmounts_, resourceAmounts) };


    // securityProtection Field Functions 
    bool hasSecurityProtection() const { return this->securityProtection_ != nullptr;};
    void deleteSecurityProtection() { this->securityProtection_ = nullptr;};
    inline string securityProtection() const { DARABONBA_PTR_GET_DEFAULT(securityProtection_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSecurityProtection(string securityProtection) { DARABONBA_PTR_SET_VALUE(securityProtection_, securityProtection) };


    // ssoEnabled Field Functions 
    bool hasSsoEnabled() const { return this->ssoEnabled_ != nullptr;};
    void deleteSsoEnabled() { this->ssoEnabled_ = nullptr;};
    inline bool ssoEnabled() const { DARABONBA_PTR_GET_DEFAULT(ssoEnabled_, false) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSsoEnabled(bool ssoEnabled) { DARABONBA_PTR_SET_VALUE(ssoEnabled_, ssoEnabled) };


    // ssoType Field Functions 
    bool hasSsoType() const { return this->ssoType_ != nullptr;};
    void deleteSsoType() { this->ssoType_ = nullptr;};
    inline string ssoType() const { DARABONBA_PTR_GET_DEFAULT(ssoType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSsoType(string ssoType) { DARABONBA_PTR_SET_VALUE(ssoType_, ssoType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subDnsAddress Field Functions 
    bool hasSubDnsAddress() const { return this->subDnsAddress_ != nullptr;};
    void deleteSubDnsAddress() { this->subDnsAddress_ = nullptr;};
    inline const vector<string> & subDnsAddress() const { DARABONBA_PTR_GET_CONST(subDnsAddress_, vector<string>) };
    inline vector<string> subDnsAddress() { DARABONBA_PTR_GET(subDnsAddress_, vector<string>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSubDnsAddress(const vector<string> & subDnsAddress) { DARABONBA_PTR_SET_VALUE(subDnsAddress_, subDnsAddress) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSubDnsAddress(vector<string> && subDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDnsAddress_, subDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string subDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


    // subnetMode Field Functions 
    bool hasSubnetMode() const { return this->subnetMode_ != nullptr;};
    void deleteSubnetMode() { this->subnetMode_ = nullptr;};
    inline string subnetMode() const { DARABONBA_PTR_GET_DEFAULT(subnetMode_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setSubnetMode(string subnetMode) { DARABONBA_PTR_SET_VALUE(subnetMode_, subnetMode) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // totalEdsCount Field Functions 
    bool hasTotalEdsCount() const { return this->totalEdsCount_ != nullptr;};
    void deleteTotalEdsCount() { this->totalEdsCount_ = nullptr;};
    inline int64_t totalEdsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCount_, 0L) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setTotalEdsCount(int64_t totalEdsCount) { DARABONBA_PTR_SET_VALUE(totalEdsCount_, totalEdsCount) };


    // totalEdsCountForGroup Field Functions 
    bool hasTotalEdsCountForGroup() const { return this->totalEdsCountForGroup_ != nullptr;};
    void deleteTotalEdsCountForGroup() { this->totalEdsCountForGroup_ = nullptr;};
    inline int64_t totalEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCountForGroup_, 0L) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setTotalEdsCountForGroup(int64_t totalEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(totalEdsCountForGroup_, totalEdsCountForGroup) };


    // totalResourceAmount Field Functions 
    bool hasTotalResourceAmount() const { return this->totalResourceAmount_ != nullptr;};
    void deleteTotalResourceAmount() { this->totalResourceAmount_ = nullptr;};
    inline int64_t totalResourceAmount() const { DARABONBA_PTR_GET_DEFAULT(totalResourceAmount_, 0L) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setTotalResourceAmount(int64_t totalResourceAmount) { DARABONBA_PTR_SET_VALUE(totalResourceAmount_, totalResourceAmount) };


    // trustPassword Field Functions 
    bool hasTrustPassword() const { return this->trustPassword_ != nullptr;};
    void deleteTrustPassword() { this->trustPassword_ = nullptr;};
    inline string trustPassword() const { DARABONBA_PTR_GET_DEFAULT(trustPassword_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setTrustPassword(string trustPassword) { DARABONBA_PTR_SET_VALUE(trustPassword_, trustPassword) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcType Field Functions 
    bool hasVpcType() const { return this->vpcType_ != nullptr;};
    void deleteVpcType() { this->vpcType_ = nullptr;};
    inline string vpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
    inline DescribeOfficeSitesResponseBodyOfficeSites& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


  protected:
    // Details of AD connectors.
    std::shared_ptr<vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesADConnectors>> ADConnectors_ = nullptr;
    // The ID of the GA instance.
    std::shared_ptr<string> acceleratorId_ = nullptr;
    std::shared_ptr<string> accountType_ = nullptr;
    // The hostname of the domain controller. The hostname must comply with the hostname naming convention of Windows.
    std::shared_ptr<string> adHostname_ = nullptr;
    std::shared_ptr<string> authorityHost_ = nullptr;
    // The hostname of the secondary domain controller.
    std::shared_ptr<string> backupDCHostname_ = nullptr;
    // The DNS address of the secondary domain controller.
    std::shared_ptr<string> backupDns_ = nullptr;
    // The maximum public bandwidth value. Valid values: 0 to 1000.\\
    // If you leave this parameter empty or set this parameter to 0, Internet access is not enabled.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The CEN instance status.
    std::shared_ptr<string> cenAttachStatus_ = nullptr;
    // The CEN instance ID.
    std::shared_ptr<string> cenId_ = nullptr;
    // The IPv4 CIDR block of the VPC that the office network uses.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    std::shared_ptr<string> clientId_ = nullptr;
    std::shared_ptr<string> clientSecret_ = nullptr;
    // Indicates whether the CloudBox-based office network is created.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> cloudBoxOfficeSite_ = nullptr;
    // The time when the office network was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The custom endpoint of the access gateway.
    std::shared_ptr<string> customAccessPoint_ = nullptr;
    // The custom DNS addresses.
    std::shared_ptr<vector<string>> customDnsAddress_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<string> customSecurityGroupId_ = nullptr;
    // The method that is used to connect cloud computers that reside in the office network from Alibaba Cloud Workspace clients.
    // 
    // >  The VPC connection depends on Alibaba Cloud PrivateLink. You can use Alibaba Cloud PrivateLink for free. When you set this parameter to `VPC` or `Any`, PrivateLink is automatically activated.
    // 
    // Valid values:
    // 
    // *   INTERNET (default): Cloud computers are connected from Alibaba Cloud Workspace clients over the Internet.
    // *   VPC: Cloud computers are connected from Alibaba Cloud Workspace clients over the VPC.
    // *   ANY: Cloud computers are connected from Alibaba Cloud Workspace clients over the Internet or the VPC. When end users connect to cloud computers from Alibaba Cloud Workspace clients, you can choose a connection method based on your business requirements.
    std::shared_ptr<string> desktopAccessType_ = nullptr;
    // The number of cloud computers that are created.
    std::shared_ptr<int64_t> desktopCount_ = nullptr;
    // The endpoint that is used to connect to cloud computers in the directory over a VPC.
    std::shared_ptr<string> desktopVpcEndpoint_ = nullptr;
    // The DNS addresses for the AD domains.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The username of a Domain Name System (DNS) user.
    std::shared_ptr<string> dnsUserName_ = nullptr;
    // The domain name of the enterprise AD.
    std::shared_ptr<string> domainName_ = nullptr;
    // The password of the domain administrator.
    std::shared_ptr<string> domainPassword_ = nullptr;
    // The username of the domain administrator.
    std::shared_ptr<string> domainUserName_ = nullptr;
    // Indicates whether the local administrator permissions are granted to users that are authorized to use cloud computers in the office network.
    // 
    // Valid values:
    // 
    // *   true (default)
    // *   false
    std::shared_ptr<bool> enableAdminAccess_ = nullptr;
    // Indicates whether the connection between cloud computers in the office network is enabled. After you enable the connection between cloud computers in the office network, cloud computers in the office network can access each other.
    std::shared_ptr<bool> enableCrossDesktopAccess_ = nullptr;
    // Indicates whether Internet access is enabled.
    std::shared_ptr<bool> enableInternetAccess_ = nullptr;
    // Indicates whether route access control is enabled for cloud services.
    std::shared_ptr<bool> enableServiceRoute_ = nullptr;
    // An array of File Storage NAS (NAS) file system IDs.
    std::shared_ptr<vector<string>> fileSystemIds_ = nullptr;
    std::shared_ptr<bool> isLdap_ = nullptr;
    std::shared_ptr<string> ldapUrl_ = nullptr;
    // Details about registration logs.
    std::shared_ptr<vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesLogs>> logs_ = nullptr;
    // Indicates whether multi-factor authentication (MFA) is enabled.
    std::shared_ptr<bool> mfaEnabled_ = nullptr;
    // The name of the office network. The name is unique in a region.
    std::shared_ptr<string> name_ = nullptr;
    // Indicates whether two-factor verification is enabled when an end user logs on to an Alibaba Cloud Workspace client. This parameter is required only for convenience office networks. If two-factor verification is enabled, the system checks whether security risks exist within the logon account when a convenience user logs on to the client. If risks are detected, the system sends a verification code to the email address that is associated with the account. Then, the convenience user can log on to the client only after the user enters the correct verification code.
    std::shared_ptr<bool> needVerifyLoginRisk_ = nullptr;
    // Indicates whether the trusted device verification is enabled.
    // 
    // Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> needVerifyZeroDevice_ = nullptr;
    // The premium bandwidth plan ID.
    std::shared_ptr<string> networkPackageId_ = nullptr;
    // The network version. The new version supports App Streaming.
    // 
    // Valid values:
    // 
    // *   DEFAULT: the old version.
    // *   NM: the new version.
    std::shared_ptr<string> nmVersion_ = nullptr;
    // The IDs of the office networks.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The account type of the office network.
    // 
    // Valid values:
    // 
    // *   SIMPLE: the convenience account
    // *   AD_CONNECTOR: the enterprise AD account
    std::shared_ptr<string> officeSiteType_ = nullptr;
    // The organizational unit (OU) in the AD domain to which the office network is connected.
    std::shared_ptr<string> ouName_ = nullptr;
    // The protocol type.
    // 
    // Valid values:
    // 
    // *   HDX
    // *   ASP
    std::shared_ptr<string> protocolType_ = nullptr;
    // The IP address of the RDS license.
    std::shared_ptr<string> rdsLicenseAddress_ = nullptr;
    // The domain name of the RDS license.
    std::shared_ptr<string> rdsLicenseDomainName_ = nullptr;
    // The remote desktop service (RDS) license status.
    std::shared_ptr<string> rdsLicenseStatus_ = nullptr;
    // The number of resources.
    std::shared_ptr<vector<Models::DescribeOfficeSitesResponseBodyOfficeSitesResourceAmounts>> resourceAmounts_ = nullptr;
    // The security protection setting of the office network.
    // 
    // Valid values:
    // 
    // *   SASE: SASE is configured.
    // *   OFF: No security protection setting is configured.
    std::shared_ptr<string> securityProtection_ = nullptr;
    // Indicates whether single sign-on (SSO) is enabled.
    std::shared_ptr<bool> ssoEnabled_ = nullptr;
    // The SSO type.
    // 
    // Valid values:
    // 
    // *   SAML.
    std::shared_ptr<string> ssoType_ = nullptr;
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
    std::shared_ptr<string> status_ = nullptr;
    // The DNS addresses for the AD subdomains.
    std::shared_ptr<vector<string>> subDnsAddress_ = nullptr;
    // The username of enterprise AD subdomain.
    std::shared_ptr<string> subDomainName_ = nullptr;
    // The subnet mode of the office network.
    // 
    // Valid values:
    // 
    // *   0: disabled.
    // *   1: enabled.
    std::shared_ptr<string> subnetMode_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    // The total number of cloud computers.
    std::shared_ptr<int64_t> totalEdsCount_ = nullptr;
    // The number of cloud computers in the cloud computer share.
    std::shared_ptr<int64_t> totalEdsCountForGroup_ = nullptr;
    // The number of network interface controllers (NICs).
    std::shared_ptr<int64_t> totalResourceAmount_ = nullptr;
    // >  This parameter is unavailable.
    std::shared_ptr<string> trustPassword_ = nullptr;
    // An array of VSwitch IDs.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
    // The VPC ID.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The VPC type.
    // 
    // Valid values:
    // 
    // *   Basic
    // *   Customized
    // *   Standard
    std::shared_ptr<string> vpcType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
