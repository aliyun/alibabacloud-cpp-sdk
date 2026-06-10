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
      DARABONBA_PTR_TO_JSON(AccessAttribute, accessAttribute_);
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
      DARABONBA_PTR_FROM_JSON(AccessAttribute, accessAttribute_);
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
    virtual bool empty() const override { return this->accessAttribute_ == nullptr
        && this->adHostname_ == nullptr && this->backupDCHostname_ == nullptr && this->backupDns_ == nullptr && this->bandwidth_ == nullptr && this->cenId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->cidrBlock_ == nullptr && this->desktopAccessType_ == nullptr && this->dnsAddress_ == nullptr && this->domainName_ == nullptr
        && this->domainPassword_ == nullptr && this->domainUserName_ == nullptr && this->enableAdminAccess_ == nullptr && this->enableInternetAccess_ == nullptr && this->mfaEnabled_ == nullptr
        && this->officeSiteName_ == nullptr && this->protocolType_ == nullptr && this->regionId_ == nullptr && this->specification_ == nullptr && this->subDomainDnsAddress_ == nullptr
        && this->subDomainName_ == nullptr && this->vSwitchId_ == nullptr && this->verifyCode_ == nullptr; };
    // accessAttribute Field Functions 
    bool hasAccessAttribute() const { return this->accessAttribute_ != nullptr;};
    void deleteAccessAttribute() { this->accessAttribute_ = nullptr;};
    inline string getAccessAttribute() const { DARABONBA_PTR_GET_DEFAULT(accessAttribute_, "") };
    inline CreateADConnectorOfficeSiteRequest& setAccessAttribute(string accessAttribute) { DARABONBA_PTR_SET_VALUE(accessAttribute_, accessAttribute) };


    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string getAdHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline CreateADConnectorOfficeSiteRequest& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // backupDCHostname Field Functions 
    bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
    void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
    inline string getBackupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
    inline CreateADConnectorOfficeSiteRequest& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


    // backupDns Field Functions 
    bool hasBackupDns() const { return this->backupDns_ != nullptr;};
    void deleteBackupDns() { this->backupDns_ = nullptr;};
    inline string getBackupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
    inline CreateADConnectorOfficeSiteRequest& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateADConnectorOfficeSiteRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateADConnectorOfficeSiteRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline CreateADConnectorOfficeSiteRequest& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateADConnectorOfficeSiteRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & getDnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> getDnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline CreateADConnectorOfficeSiteRequest& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline CreateADConnectorOfficeSiteRequest& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string getDomainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string getDomainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool getEnableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline CreateADConnectorOfficeSiteRequest& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // enableInternetAccess Field Functions 
    bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
    void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
    inline bool getEnableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
    inline CreateADConnectorOfficeSiteRequest& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool getMfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline CreateADConnectorOfficeSiteRequest& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // protocolType Field Functions 
    bool hasProtocolType() const { return this->protocolType_ != nullptr;};
    void deleteProtocolType() { this->protocolType_ = nullptr;};
    inline string getProtocolType() const { DARABONBA_PTR_GET_DEFAULT(protocolType_, "") };
    inline CreateADConnectorOfficeSiteRequest& setProtocolType(string protocolType) { DARABONBA_PTR_SET_VALUE(protocolType_, protocolType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateADConnectorOfficeSiteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline int64_t getSpecification() const { DARABONBA_PTR_GET_DEFAULT(specification_, 0L) };
    inline CreateADConnectorOfficeSiteRequest& setSpecification(int64_t specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // subDomainDnsAddress Field Functions 
    bool hasSubDomainDnsAddress() const { return this->subDomainDnsAddress_ != nullptr;};
    void deleteSubDomainDnsAddress() { this->subDomainDnsAddress_ = nullptr;};
    inline const vector<string> & getSubDomainDnsAddress() const { DARABONBA_PTR_GET_CONST(subDomainDnsAddress_, vector<string>) };
    inline vector<string> getSubDomainDnsAddress() { DARABONBA_PTR_GET(subDomainDnsAddress_, vector<string>) };
    inline CreateADConnectorOfficeSiteRequest& setSubDomainDnsAddress(const vector<string> & subDomainDnsAddress) { DARABONBA_PTR_SET_VALUE(subDomainDnsAddress_, subDomainDnsAddress) };
    inline CreateADConnectorOfficeSiteRequest& setSubDomainDnsAddress(vector<string> && subDomainDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDomainDnsAddress_, subDomainDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string getSubDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline CreateADConnectorOfficeSiteRequest& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & getVSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> getVSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline CreateADConnectorOfficeSiteRequest& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline CreateADConnectorOfficeSiteRequest& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline CreateADConnectorOfficeSiteRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    shared_ptr<string> accessAttribute_ {};
    // The domain controller hostname.
    // The hostname must comply with Windows hostname naming conventions.
    shared_ptr<string> adHostname_ {};
    // The hostname of the backup domain controller.
    shared_ptr<string> backupDCHostname_ {};
    // The DNS address of the backup domain controller.
    shared_ptr<string> backupDns_ {};
    // The peak public bandwidth, specified in Mbit/s. The value can range from 0 to 200.<br>
    // If you omit this parameter or set it to 0, internet access is disabled.<br>
    shared_ptr<int32_t> bandwidth_ {};
    // The ID of the CEN instance.
    shared_ptr<string> cenId_ {};
    // The ID of the Alibaba Cloud account that owns the Cloud Enterprise Network (CEN) instance.
    // 
    // - If you do not specify `CenId`, or the specified CEN instance belongs to your Alibaba Cloud account, you do not need to specify this parameter.
    // 
    // - If the specified CEN instance belongs to another Alibaba Cloud account, you must specify that account\\"s ID.
    shared_ptr<int64_t> cenOwnerId_ {};
    // The IPv4 CIDR block for the office site\\"s VPC. The system uses this IPv4 CIDR block to automatically create a VPC. We recommend that you use one of the following CIDR blocks or their subnets:
    // 
    // - `10.0.0.0/12` (The subnet mask length must be 12 to 24 bits.)
    // 
    // - `172.16.0.0/12` (The subnet mask length must be 12 to 24 bits.)
    // 
    // - `192.168.0.0/16` (The subnet mask length must be 16 to 24 bits.)
    shared_ptr<string> cidrBlock_ {};
    // The method for connecting to cloud desktops.
    // 
    // > VPC connections are established using Alibaba Cloud PrivateLink, which is a free service. If you set this parameter to `VPC` or `Any`, PrivateLink is automatically enabled.
    shared_ptr<string> desktopAccessType_ {};
    // An array that contains the IP address of the DNS server for the enterprise AD. You can specify only one IP address.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> dnsAddress_ {};
    // The domain name for the enterprise AD. Each domain name must be unique.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The domain administrator\\"s password. The password cannot exceed 64 characters in length.
    shared_ptr<string> domainPassword_ {};
    // The domain administrator\\"s username. The username cannot exceed 64 characters in length.
    // 
    // > Use the sAMAccountName, not the userPrincipalName.
    shared_ptr<string> domainUserName_ {};
    // Specifies whether to grant local administrator permissions to cloud desktop users. Default: true.
    shared_ptr<bool> enableAdminAccess_ {};
    // This parameter is deprecated. Use the `Bandwidth` parameter to manage internet access.
    shared_ptr<bool> enableInternetAccess_ {};
    // Specifies whether to enable multi-factor authentication (MFA).
    shared_ptr<bool> mfaEnabled_ {};
    // The name of the office site. The name must be 2 to 255 characters in length. It must start with a letter or a Chinese character and cannot start with `http://` or `https://`. The name can contain digits, colons (:), underscores (_), and hyphens (-).<br>
    // This parameter is empty by default.<br>
    shared_ptr<string> officeSiteName_ {};
    // The protocol type.
    shared_ptr<string> protocolType_ {};
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the regions supported by Elastic Desktop Service (EDS).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The AD Connector type.
    shared_ptr<int64_t> specification_ {};
    // The DNS address of the enterprise AD child domain. If you specify `SubDomainName` but not this parameter, the DNS address of the child domain is considered the same as that of the parent domain.
    shared_ptr<vector<string>> subDomainDnsAddress_ {};
    // The domain name of the enterprise AD child domain.
    shared_ptr<string> subDomainName_ {};
    // The list of vSwitch IDs.
    shared_ptr<vector<string>> vSwitchId_ {};
    // The verification code. If the `CenId` that you specify belongs to another Alibaba Cloud account, you must first call the [SendVerifyCode](https://help.aliyun.com/document_detail/436847.html) operation to obtain the verification code.
    shared_ptr<string> verifyCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
