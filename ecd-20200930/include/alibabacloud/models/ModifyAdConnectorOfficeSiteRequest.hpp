// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADCONNECTOROFFICESITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADCONNECTOROFFICESITEREQUEST_HPP_
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
  class ModifyADConnectorOfficeSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyADConnectorOfficeSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_TO_JSON(BackupDCHostname, backupDCHostname_);
      DARABONBA_PTR_TO_JSON(BackupDns, backupDns_);
      DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_TO_JSON(OUName, OUName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_TO_JSON(SubDomainName, subDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyADConnectorOfficeSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_FROM_JSON(BackupDCHostname, backupDCHostname_);
      DARABONBA_PTR_FROM_JSON(BackupDns, backupDns_);
      DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_FROM_JSON(OUName, OUName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_FROM_JSON(SubDomainName, subDomainName_);
    };
    ModifyADConnectorOfficeSiteRequest() = default ;
    ModifyADConnectorOfficeSiteRequest(const ModifyADConnectorOfficeSiteRequest &) = default ;
    ModifyADConnectorOfficeSiteRequest(ModifyADConnectorOfficeSiteRequest &&) = default ;
    ModifyADConnectorOfficeSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyADConnectorOfficeSiteRequest() = default ;
    ModifyADConnectorOfficeSiteRequest& operator=(const ModifyADConnectorOfficeSiteRequest &) = default ;
    ModifyADConnectorOfficeSiteRequest& operator=(ModifyADConnectorOfficeSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adHostname_ == nullptr
        && return this->backupDCHostname_ == nullptr && return this->backupDns_ == nullptr && return this->dnsAddress_ == nullptr && return this->domainName_ == nullptr && return this->domainPassword_ == nullptr
        && return this->domainUserName_ == nullptr && return this->mfaEnabled_ == nullptr && return this->OUName_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteName_ == nullptr
        && return this->regionId_ == nullptr && return this->subDomainDnsAddress_ == nullptr && return this->subDomainName_ == nullptr; };
    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string adHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // backupDCHostname Field Functions 
    bool hasBackupDCHostname() const { return this->backupDCHostname_ != nullptr;};
    void deleteBackupDCHostname() { this->backupDCHostname_ = nullptr;};
    inline string backupDCHostname() const { DARABONBA_PTR_GET_DEFAULT(backupDCHostname_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setBackupDCHostname(string backupDCHostname) { DARABONBA_PTR_SET_VALUE(backupDCHostname_, backupDCHostname) };


    // backupDns Field Functions 
    bool hasBackupDns() const { return this->backupDns_ != nullptr;};
    void deleteBackupDns() { this->backupDns_ = nullptr;};
    inline string backupDns() const { DARABONBA_PTR_GET_DEFAULT(backupDns_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setBackupDns(string backupDns) { DARABONBA_PTR_SET_VALUE(backupDns_, backupDns) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline ModifyADConnectorOfficeSiteRequest& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline ModifyADConnectorOfficeSiteRequest& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string domainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string domainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool mfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline ModifyADConnectorOfficeSiteRequest& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // OUName Field Functions 
    bool hasOUName() const { return this->OUName_ != nullptr;};
    void deleteOUName() { this->OUName_ = nullptr;};
    inline string OUName() const { DARABONBA_PTR_GET_DEFAULT(OUName_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setOUName(string OUName) { DARABONBA_PTR_SET_VALUE(OUName_, OUName) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subDomainDnsAddress Field Functions 
    bool hasSubDomainDnsAddress() const { return this->subDomainDnsAddress_ != nullptr;};
    void deleteSubDomainDnsAddress() { this->subDomainDnsAddress_ = nullptr;};
    inline const vector<string> & subDomainDnsAddress() const { DARABONBA_PTR_GET_CONST(subDomainDnsAddress_, vector<string>) };
    inline vector<string> subDomainDnsAddress() { DARABONBA_PTR_GET(subDomainDnsAddress_, vector<string>) };
    inline ModifyADConnectorOfficeSiteRequest& setSubDomainDnsAddress(const vector<string> & subDomainDnsAddress) { DARABONBA_PTR_SET_VALUE(subDomainDnsAddress_, subDomainDnsAddress) };
    inline ModifyADConnectorOfficeSiteRequest& setSubDomainDnsAddress(vector<string> && subDomainDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDomainDnsAddress_, subDomainDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string subDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline ModifyADConnectorOfficeSiteRequest& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


  protected:
    // The hostname of the domain controller. The hostname must comply with the naming conventions for hostnames in Windows.
    std::shared_ptr<string> adHostname_ = nullptr;
    // The hostname of the secondary domain controller.
    std::shared_ptr<string> backupDCHostname_ = nullptr;
    // The IP address of the DNS server corresponding to the secondary domain controller.
    std::shared_ptr<string> backupDns_ = nullptr;
    // The IP addresses of the DNS servers corresponding to the enterprise ADs. You can specify only one DNS IP address.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The domain name of the enterprise AD system. You can register each domain name only once.
    std::shared_ptr<string> domainName_ = nullptr;
    // The password of the domain administrator. The username can be up to 64 characters in length.
    std::shared_ptr<string> domainPassword_ = nullptr;
    // The username of the domain administrator. The username can be up to 64 characters in length.
    // 
    // > Specify the value of the sAMAccountName parameter instead of the value of the userPrincipalName parameter as the username.
    std::shared_ptr<string> domainUserName_ = nullptr;
    // Specifies whether to enable multi-factor authentication (MFA).
    // 
    // Valid values:
    // 
    // *   true
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   false
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> mfaEnabled_ = nullptr;
    // The name of the organizational unit (OU) in the AD domain. You can call the [ListUserAdOrganizationUnits](https://help.aliyun.com/document_detail/311259.html) operation to obtain OUs.
    std::shared_ptr<string> OUName_ = nullptr;
    // The office network ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The office network name. The name must be 2 to 255 characters in length. It can contain letters, digits, colons (:), underscores (_), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The IP addresses of the DNS servers corresponding to the enterprise AD subdomains. You can specify only one DNS IP address. If you specify `SubDomainName` and leave this parameter empty, the value is the same as that of the enterprise AD domain.
    std::shared_ptr<vector<string>> subDomainDnsAddress_ = nullptr;
    // The name of the subdomain in the enterprise AD domain.
    std::shared_ptr<string> subDomainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
