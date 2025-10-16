// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYADCONNECTORDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYADCONNECTORDIRECTORYREQUEST_HPP_
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
  class ModifyADConnectorDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyADConnectorDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_TO_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_TO_JSON(OUName, OUName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_TO_JSON(SubDomainName, subDomainName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyADConnectorDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdHostname, adHostname_);
      DARABONBA_PTR_FROM_JSON(DirectoryId, directoryId_);
      DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_FROM_JSON(OUName, OUName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_FROM_JSON(SubDomainName, subDomainName_);
    };
    ModifyADConnectorDirectoryRequest() = default ;
    ModifyADConnectorDirectoryRequest(const ModifyADConnectorDirectoryRequest &) = default ;
    ModifyADConnectorDirectoryRequest(ModifyADConnectorDirectoryRequest &&) = default ;
    ModifyADConnectorDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyADConnectorDirectoryRequest() = default ;
    ModifyADConnectorDirectoryRequest& operator=(const ModifyADConnectorDirectoryRequest &) = default ;
    ModifyADConnectorDirectoryRequest& operator=(ModifyADConnectorDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adHostname_ == nullptr
        && return this->directoryId_ == nullptr && return this->directoryName_ == nullptr && return this->dnsAddress_ == nullptr && return this->domainName_ == nullptr && return this->domainPassword_ == nullptr
        && return this->domainUserName_ == nullptr && return this->mfaEnabled_ == nullptr && return this->OUName_ == nullptr && return this->regionId_ == nullptr && return this->subDomainDnsAddress_ == nullptr
        && return this->subDomainName_ == nullptr; };
    // adHostname Field Functions 
    bool hasAdHostname() const { return this->adHostname_ != nullptr;};
    void deleteAdHostname() { this->adHostname_ = nullptr;};
    inline string adHostname() const { DARABONBA_PTR_GET_DEFAULT(adHostname_, "") };
    inline ModifyADConnectorDirectoryRequest& setAdHostname(string adHostname) { DARABONBA_PTR_SET_VALUE(adHostname_, adHostname) };


    // directoryId Field Functions 
    bool hasDirectoryId() const { return this->directoryId_ != nullptr;};
    void deleteDirectoryId() { this->directoryId_ = nullptr;};
    inline string directoryId() const { DARABONBA_PTR_GET_DEFAULT(directoryId_, "") };
    inline ModifyADConnectorDirectoryRequest& setDirectoryId(string directoryId) { DARABONBA_PTR_SET_VALUE(directoryId_, directoryId) };


    // directoryName Field Functions 
    bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
    void deleteDirectoryName() { this->directoryName_ = nullptr;};
    inline string directoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
    inline ModifyADConnectorDirectoryRequest& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline ModifyADConnectorDirectoryRequest& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline ModifyADConnectorDirectoryRequest& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyADConnectorDirectoryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string domainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline ModifyADConnectorDirectoryRequest& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string domainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline ModifyADConnectorDirectoryRequest& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool mfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline ModifyADConnectorDirectoryRequest& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // OUName Field Functions 
    bool hasOUName() const { return this->OUName_ != nullptr;};
    void deleteOUName() { this->OUName_ = nullptr;};
    inline string OUName() const { DARABONBA_PTR_GET_DEFAULT(OUName_, "") };
    inline ModifyADConnectorDirectoryRequest& setOUName(string OUName) { DARABONBA_PTR_SET_VALUE(OUName_, OUName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyADConnectorDirectoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // subDomainDnsAddress Field Functions 
    bool hasSubDomainDnsAddress() const { return this->subDomainDnsAddress_ != nullptr;};
    void deleteSubDomainDnsAddress() { this->subDomainDnsAddress_ = nullptr;};
    inline const vector<string> & subDomainDnsAddress() const { DARABONBA_PTR_GET_CONST(subDomainDnsAddress_, vector<string>) };
    inline vector<string> subDomainDnsAddress() { DARABONBA_PTR_GET(subDomainDnsAddress_, vector<string>) };
    inline ModifyADConnectorDirectoryRequest& setSubDomainDnsAddress(const vector<string> & subDomainDnsAddress) { DARABONBA_PTR_SET_VALUE(subDomainDnsAddress_, subDomainDnsAddress) };
    inline ModifyADConnectorDirectoryRequest& setSubDomainDnsAddress(vector<string> && subDomainDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDomainDnsAddress_, subDomainDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string subDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline ModifyADConnectorDirectoryRequest& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


  protected:
    // The hostname of the domain controller. The hostname must comply with the naming conventions for hostnames in Windows.
    std::shared_ptr<string> adHostname_ = nullptr;
    // The ID of the directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> directoryId_ = nullptr;
    // The name of the AD directory.
    std::shared_ptr<string> directoryName_ = nullptr;
    // The IP address of the DNS server corresponding to the enterprise AD. You can specify only one IP address. Make sure that the specified IP address is accessible in the network of the selected vSwitch.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The domain name. The name must be 2 to 255 characters in length and must be in the two-part domain name format, such as `example.com`. You can register each domain name only once.
    std::shared_ptr<string> domainName_ = nullptr;
    // The password of the domain administrator. The username can be up to 64 characters in length.
    std::shared_ptr<string> domainPassword_ = nullptr;
    // The username of the domain administrator. The username can be up to 64 characters in length.
    std::shared_ptr<string> domainUserName_ = nullptr;
    // Specifies whether to enable Multi-Factor Authentication (MFA). After you enable MFA, all AD users in the directory must enter a dynamic verification code generated by the virtual MFA device in addition to a correct password when they log on to a cloud computer.
    // 
    // >  When end users log on to a cloud computer for the first time, they must bind an MFA device.
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
    // *   <!-- -->
    // 
    //     false (default)
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<bool> mfaEnabled_ = nullptr;
    // The name of the organizational unit (OU) in the AD domain. You can call the ListUserAdOrganizationUnits operation to obtain the name of the OU.
    std::shared_ptr<string> OUName_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The DNS address of the existing AD subdomain.\\
    // If you specify the `SubDomainName` parameter but you do not specify this parameter, the DNS address of the subdomain is the same as the DNS address of the parent domain.
    std::shared_ptr<vector<string>> subDomainDnsAddress_ = nullptr;
    // The domain name of the existing AD subdomain.
    std::shared_ptr<string> subDomainName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
