// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADCONNECTOROFFICESITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADCONNECTOROFFICESITEREQUEST_HPP_
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
  class CreateADConnectorOfficeSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateADConnectorOfficeSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_TO_JSON(BackupDCHostname, backupDCHostname_);
      DARABONBA_PTR_TO_JSON(BackupDns, backupDns_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_TO_JSON(SubDomainName, subDomainName_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, CreateADConnectorOfficeSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_FROM_JSON(BackupDCHostname, backupDCHostname_);
      DARABONBA_PTR_FROM_JSON(BackupDns, backupDns_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(ProtocolType, protocolType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_FROM_JSON(SubDomainName, subDomainName_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    CreateADConnectorOfficeSiteRequest() = default ;
    CreateADConnectorOfficeSiteRequest(const CreateADConnectorOfficeSiteRequest &) = default ;
    CreateADConnectorOfficeSiteRequest(CreateADConnectorOfficeSiteRequest &&) = default ;
    CreateADConnectorOfficeSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateADConnectorOfficeSiteRequest() = default ;
    CreateADConnectorOfficeSiteRequest& operator=(const CreateADConnectorOfficeSiteRequest &) = default ;
    CreateADConnectorOfficeSiteRequest& operator=(CreateADConnectorOfficeSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adHostname_ == nullptr
        && return this->backupDCHostname_ == nullptr && return this->backupDns_ == nullptr && return this->bandwidth_ == nullptr && return this->cenId_ == nullptr && return this->cenOwnerId_ == nullptr
        && return this->cidrBlock_ == nullptr && return this->desktopAccessType_ == nullptr && return this->dnsAddress_ == nullptr && return this->domainName_ == nullptr && return this->domainPassword_ == nullptr
        && return this->domainUserName_ == nullptr && return this->enableAdminAccess_ == nullptr && return this->enableInternetAccess_ == nullptr && return this->mfaEnabled_ == nullptr && return this->officeSiteName_ == nullptr
        && return this->protocolType_ == nullptr && return this->regionId_ == nullptr && return this->specification_ == nullptr && return this->subDomainDnsAddress_ == nullptr && return this->subDomainName_ == nullptr
        && return this->vSwitchId_ == nullptr && return this->verifyCode_ == nullptr; };
    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string adHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline CreateADConnectorOfficeSiteRequest& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // backupDCHostname Field Functions 
    bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
    void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
    inline string backupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
    inline CreateADConnectorOfficeSiteRequest& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


    // backupDns Field Functions 
    bool hasBackupDns() const { return this->backupDns_ != nullptr;};
    void deleteBackupDns() { this->backupDns_ = nullptr;};
    inline string backupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
    inline CreateADConnectorOfficeSiteRequest& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateADConnectorOfficeSiteRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string cenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateADConnectorOfficeSiteRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t cenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline CreateADConnectorOfficeSiteRequest& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateADConnectorOfficeSiteRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string desktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline CreateADConnectorOfficeSiteRequest& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline CreateADConnectorOfficeSiteRequest& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string domainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string domainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool enableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline CreateADConnectorOfficeSiteRequest& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // enableInternetAccess Field Functions 
    bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
    void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
    inline bool enableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
    inline CreateADConnectorOfficeSiteRequest& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool mfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline CreateADConnectorOfficeSiteRequest& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string protocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateADConnectorOfficeSiteRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateADConnectorOfficeSiteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline int64_t specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, 0L) };
    inline CreateADConnectorOfficeSiteRequest& setSpecification(int64_t specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // subDomainDnsAddress Field Functions 
    bool hasSubDomainDnsAddress() const { return this->subDomainDnsAddress_ != nullptr;};
    void deleteSubDomainDnsAddress() { this->subDomainDnsAddress_ = nullptr;};
    inline const vector<string> & subDomainDnsAddress() const { DARABONBA_PTR_GET_CONST(subDomainDnsAddress_, vector<string>) };
    inline vector<string> subDomainDnsAddress() { DARABONBA_PTR_GET(subDomainDnsAddress_, vector<string>) };
    inline CreateADConnectorOfficeSiteRequest& setSubDomainDnsAddress(const vector<string> & subDomainDnsAddress) { DARABONBA_PTR_SET_VALUE(subDomainDnsAddress_, subDomainDnsAddress) };
    inline CreateADConnectorOfficeSiteRequest& setSubDomainDnsAddress(vector<string> && subDomainDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDomainDnsAddress_, subDomainDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string subDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline CreateADConnectorOfficeSiteRequest& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline CreateADConnectorOfficeSiteRequest& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string verifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline CreateADConnectorOfficeSiteRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The hostname of the domain controller. The hostname must comply with the naming conventions for Windows hosts.
    std::shared_ptr<string> adHostname_ = nullptr;
    // The hostname of the backup domain controller.
    std::shared_ptr<string> backupDCHostname_ = nullptr;
    // The DNS address of the backup domain controller.
    std::shared_ptr<string> backupDns_ = nullptr;
    // The maximum public bandwidth of the Internet access package. Valid values: 0 to 200.\\
    // If you do not specify this parameter or you set this parameter to 0, Internet access is disabled.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The ID of the CEN instance.
    std::shared_ptr<string> cenId_ = nullptr;
    // The Alibaba Cloud account that creates the Cloud Enterprise Network (CEN) instance.
    // 
    // *   If you do not specify the CenId parameter, or the CEN instance that is specified by the CenId parameter belongs to the current Alibaba Cloud account, skip this parameter.
    // *   If you specify the CenId parameter and the CEN instance that you specify for the CenId parameter belongs to another Alibaba Cloud account, enter the ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> cenOwnerId_ = nullptr;
    // The IPv4 CIDR block of the virtual private cloud (VPC) that your office network uses. The system creates a VPC for your office network based on the IPv4 CIDR block. We recommend that you set this parameter to one of the following CIDR blocks and their subnets:
    // 
    // *   `10.0.0.0/12` (subnet mask range: 12 to 24 bits)
    // *   `172.16.0.0/12` (subnet mask range: 12 to 24 bits)
    // *   `192.168.0.0/16` (subnet mask range: 16 to 24 bits)
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The method to connect to cloud computers from Alibaba Cloud Workspace clients.
    // 
    // >  The VPC connection depends on Alibaba Cloud PrivateLink. You can use PrivateLink for free. When you set this parameter to `VPC` or `Any`, PrivateLink is automatically activated.
    // 
    // Valid values:
    // 
    // - Internet: connects clients to cloud desktops only over the Internet. [Default]
    // - VPC: connects clients to cloud desktops only over a VPC.
    // - Any: connects clients to cloud desktops over the Internet or a VPC. You can select a connection method based on your business requirements when you connect to your cloud desktop from a client.
    std::shared_ptr<string> desktopAccessType_ = nullptr;
    // The IP address of the DNS server of the enterprise AD system. You can specify only one IP address.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The domain name of the enterprise AD system. You can register each domain name only once.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The password of the domain administrator. The password can be up to 64 characters in length.
    std::shared_ptr<string> domainPassword_ = nullptr;
    // The username of the domain administrator. The username can be up to 64 characters in length.
    // 
    // > Specify the username by using sAMAccountName instead of userPrincipalName.
    std::shared_ptr<string> domainUserName_ = nullptr;
    // Specifies whether to grant the local administrator permissions to users that are authorized to use cloud computers in the office network.
    // 
    // Valid values:
    // 
    // *   <!-- -->
    // 
    //     true
    // 
    //     <!-- -->
    // 
    //     (default)
    // 
    //     <!-- -->
    // 
    // *   <!-- -->
    // 
    //     false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> enableAdminAccess_ = nullptr;
    // Specifies whether to enable Internet access.
    std::shared_ptr<bool> enableInternetAccess_ = nullptr;
    // Specifies whether to enable multi-factor authentication (MFA).
    std::shared_ptr<bool> mfaEnabled_ = nullptr;
    // The office network name. The name must be 2 to 255 characters in length. It can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.\\
    // This parameter is empty by default.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The protocol type.
    // 
    // Valid value:
    // 
    // *   Adaptive Streaming Protocol (ASP)
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> protocolType_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The AD connector type.
    // 
    // Valid values:
    // 
    // *   1: General
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   2: Advanced
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<int64_t> specification_ = nullptr;
    // The DNS address of the enterprise AD subdomain. If you specify `SubDomainName` but do not specify this parameter, the DNS address of the subdomain is the same as the DNS address of the parent domain.
    std::shared_ptr<vector<string>> subDomainDnsAddress_ = nullptr;
    // The domain name of the enterprise AD subdomain.
    std::shared_ptr<string> subDomainName_ = nullptr;
    // The array of the vSwitch IDs.
    std::shared_ptr<vector<string>> vSwitchId_ = nullptr;
    // The verification code. If the CEN instance that you specify for the CenId parameter belongs to another Alibaba Cloud account, you must call the [SendVerifyCode](https://help.aliyun.com/document_detail/436847.html) operation to obtain the verification code.
    std::shared_ptr<string> verifyCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
