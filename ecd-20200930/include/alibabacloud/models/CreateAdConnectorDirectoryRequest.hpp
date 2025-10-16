// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEADCONNECTORDIRECTORYREQUEST_HPP_
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
  class CreateADConnectorDirectoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateADConnectorDirectoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_TO_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_TO_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Specification, specification_);
      DARABONBA_PTR_TO_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_TO_JSON(SubDomainName, subDomainName_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateADConnectorDirectoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DirectoryName, directoryName_);
      DARABONBA_PTR_FROM_JSON(DnsAddress, dnsAddress_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainPassword, domainPassword_);
      DARABONBA_PTR_FROM_JSON(DomainUserName, domainUserName_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(MfaEnabled, mfaEnabled_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Specification, specification_);
      DARABONBA_PTR_FROM_JSON(SubDomainDnsAddress, subDomainDnsAddress_);
      DARABONBA_PTR_FROM_JSON(SubDomainName, subDomainName_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    CreateADConnectorDirectoryRequest() = default ;
    CreateADConnectorDirectoryRequest(const CreateADConnectorDirectoryRequest &) = default ;
    CreateADConnectorDirectoryRequest(CreateADConnectorDirectoryRequest &&) = default ;
    CreateADConnectorDirectoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateADConnectorDirectoryRequest() = default ;
    CreateADConnectorDirectoryRequest& operator=(const CreateADConnectorDirectoryRequest &) = default ;
    CreateADConnectorDirectoryRequest& operator=(CreateADConnectorDirectoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desktopAccessType_ == nullptr
        && return this->directoryName_ == nullptr && return this->dnsAddress_ == nullptr && return this->domainName_ == nullptr && return this->domainPassword_ == nullptr && return this->domainUserName_ == nullptr
        && return this->enableAdminAccess_ == nullptr && return this->mfaEnabled_ == nullptr && return this->regionId_ == nullptr && return this->specification_ == nullptr && return this->subDomainDnsAddress_ == nullptr
        && return this->subDomainName_ == nullptr && return this->vSwitchId_ == nullptr; };
    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string desktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline CreateADConnectorDirectoryRequest& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // directoryName Field Functions 
    bool hasDirectoryName() const { return this->directoryName_ != nullptr;};
    void deleteDirectoryName() { this->directoryName_ = nullptr;};
    inline string directoryName() const { DARABONBA_PTR_GET_DEFAULT(directoryName_, "") };
    inline CreateADConnectorDirectoryRequest& setDirectoryName(string directoryName) { DARABONBA_PTR_SET_VALUE(directoryName_, directoryName) };


    // dnsAddress Field Functions 
    bool hasDnsAddress() const { return this->dnsAddress_ != nullptr;};
    void deleteDnsAddress() { this->dnsAddress_ = nullptr;};
    inline const vector<string> & dnsAddress() const { DARABONBA_PTR_GET_CONST(dnsAddress_, vector<string>) };
    inline vector<string> dnsAddress() { DARABONBA_PTR_GET(dnsAddress_, vector<string>) };
    inline CreateADConnectorDirectoryRequest& setDnsAddress(const vector<string> & dnsAddress) { DARABONBA_PTR_SET_VALUE(dnsAddress_, dnsAddress) };
    inline CreateADConnectorDirectoryRequest& setDnsAddress(vector<string> && dnsAddress) { DARABONBA_PTR_SET_RVALUE(dnsAddress_, dnsAddress) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateADConnectorDirectoryRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainPassword Field Functions 
    bool hasDomainPassword() const { return this->domainPassword_ != nullptr;};
    void deleteDomainPassword() { this->domainPassword_ = nullptr;};
    inline string domainPassword() const { DARABONBA_PTR_GET_DEFAULT(domainPassword_, "") };
    inline CreateADConnectorDirectoryRequest& setDomainPassword(string domainPassword) { DARABONBA_PTR_SET_VALUE(domainPassword_, domainPassword) };


    // domainUserName Field Functions 
    bool hasDomainUserName() const { return this->domainUserName_ != nullptr;};
    void deleteDomainUserName() { this->domainUserName_ = nullptr;};
    inline string domainUserName() const { DARABONBA_PTR_GET_DEFAULT(domainUserName_, "") };
    inline CreateADConnectorDirectoryRequest& setDomainUserName(string domainUserName) { DARABONBA_PTR_SET_VALUE(domainUserName_, domainUserName) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool enableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline CreateADConnectorDirectoryRequest& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // mfaEnabled Field Functions 
    bool hasMfaEnabled() const { return this->mfaEnabled_ != nullptr;};
    void deleteMfaEnabled() { this->mfaEnabled_ = nullptr;};
    inline bool mfaEnabled() const { DARABONBA_PTR_GET_DEFAULT(mfaEnabled_, false) };
    inline CreateADConnectorDirectoryRequest& setMfaEnabled(bool mfaEnabled) { DARABONBA_PTR_SET_VALUE(mfaEnabled_, mfaEnabled) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateADConnectorDirectoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // specification Field Functions 
    bool hasSpecification() const { return this->specification_ != nullptr;};
    void deleteSpecification() { this->specification_ = nullptr;};
    inline int64_t specification() const { DARABONBA_PTR_GET_DEFAULT(specification_, 0L) };
    inline CreateADConnectorDirectoryRequest& setSpecification(int64_t specification) { DARABONBA_PTR_SET_VALUE(specification_, specification) };


    // subDomainDnsAddress Field Functions 
    bool hasSubDomainDnsAddress() const { return this->subDomainDnsAddress_ != nullptr;};
    void deleteSubDomainDnsAddress() { this->subDomainDnsAddress_ = nullptr;};
    inline const vector<string> & subDomainDnsAddress() const { DARABONBA_PTR_GET_CONST(subDomainDnsAddress_, vector<string>) };
    inline vector<string> subDomainDnsAddress() { DARABONBA_PTR_GET(subDomainDnsAddress_, vector<string>) };
    inline CreateADConnectorDirectoryRequest& setSubDomainDnsAddress(const vector<string> & subDomainDnsAddress) { DARABONBA_PTR_SET_VALUE(subDomainDnsAddress_, subDomainDnsAddress) };
    inline CreateADConnectorDirectoryRequest& setSubDomainDnsAddress(vector<string> && subDomainDnsAddress) { DARABONBA_PTR_SET_RVALUE(subDomainDnsAddress_, subDomainDnsAddress) };


    // subDomainName Field Functions 
    bool hasSubDomainName() const { return this->subDomainName_ != nullptr;};
    void deleteSubDomainName() { this->subDomainName_ = nullptr;};
    inline string subDomainName() const { DARABONBA_PTR_GET_DEFAULT(subDomainName_, "") };
    inline CreateADConnectorDirectoryRequest& setSubDomainName(string subDomainName) { DARABONBA_PTR_SET_VALUE(subDomainName_, subDomainName) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline CreateADConnectorDirectoryRequest& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline CreateADConnectorDirectoryRequest& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


  protected:
    // The method in which the cloud computer is connected.
    // 
    // Valid values:
    // 
    // *   VPC
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Internet (default)
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   Any
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> desktopAccessType_ = nullptr;
    // The directory name. The name must be 2 to 255 characters in length. The name must start with a letter but cannot start with `http://` or `https://`. The name can contain letters, digits, colons (:), underscores (_), and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> directoryName_ = nullptr;
    // The IP address of the DNS server corresponding to the enterprise AD. You can specify only one IP address. Make sure that the specified IP address is accessible in the network of the selected vSwitch.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> dnsAddress_ = nullptr;
    // The fully qualified domain name (FQDN) of the enterprise AD system. The value must contain the hostname and the domain name. You can register each FQDN only once.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The password of the domain administrator. The password can be up to 64 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainPassword_ = nullptr;
    // The username of the domain administrator. The username can be up to 64 characters in length.
    // 
    // This parameter is required.
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
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The type of the AD connector.
    // 
    // Valid values:
    // - 1 (General)
    // - 2 (Advanced)
    std::shared_ptr<int64_t> specification_ = nullptr;
    // The DNS address of the existing AD subdomain.\\
    // If you specify the `SubDomainName` parameter but you do not specify this parameter, the DNS address of the subdomain is the same as the DNS address of the parent domain.
    std::shared_ptr<vector<string>> subDomainDnsAddress_ = nullptr;
    // The FQDN of the enterprise AD subdomain. The value must contain the hostname and the subdomain name.
    std::shared_ptr<string> subDomainName_ = nullptr;
    // Details of the vSwitch IDs. You can specify only one vSwitch ID.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
