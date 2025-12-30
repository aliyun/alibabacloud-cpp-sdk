// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYOFFICESITEATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYOFFICESITEATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyOfficeSiteAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyOfficeSiteAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorityHost, authorityHost_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(NeedVerifyLoginRisk, needVerifyLoginRisk_);
      DARABONBA_PTR_TO_JSON(NeedVerifyZeroDevice, needVerifyZeroDevice_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyOfficeSiteAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorityHost, authorityHost_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(NeedVerifyLoginRisk, needVerifyLoginRisk_);
      DARABONBA_PTR_FROM_JSON(NeedVerifyZeroDevice, needVerifyZeroDevice_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    ModifyOfficeSiteAttributeRequest() = default ;
    ModifyOfficeSiteAttributeRequest(const ModifyOfficeSiteAttributeRequest &) = default ;
    ModifyOfficeSiteAttributeRequest(ModifyOfficeSiteAttributeRequest &&) = default ;
    ModifyOfficeSiteAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyOfficeSiteAttributeRequest() = default ;
    ModifyOfficeSiteAttributeRequest& operator=(const ModifyOfficeSiteAttributeRequest &) = default ;
    ModifyOfficeSiteAttributeRequest& operator=(ModifyOfficeSiteAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorityHost_ == nullptr
        && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->desktopAccessType_ == nullptr && this->domainName_ == nullptr && this->enableAdminAccess_ == nullptr
        && this->needVerifyLoginRisk_ == nullptr && this->needVerifyZeroDevice_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteName_ == nullptr && this->regionId_ == nullptr
        && this->tenantId_ == nullptr; };
    // authorityHost Field Functions 
    bool hasAuthorityHost() const { return this->authorityHost_ != nullptr;};
    void deleteAuthorityHost() { this->authorityHost_ = nullptr;};
    inline string getAuthorityHost() const { DARABONBA_PTR_GET_DEFAULT(authorityHost_, "") };
    inline ModifyOfficeSiteAttributeRequest& setAuthorityHost(string authorityHost) { DARABONBA_PTR_SET_VALUE(authorityHost_, authorityHost) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline ModifyOfficeSiteAttributeRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline ModifyOfficeSiteAttributeRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline ModifyOfficeSiteAttributeRequest& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ModifyOfficeSiteAttributeRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool getEnableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline ModifyOfficeSiteAttributeRequest& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // needVerifyLoginRisk Field Functions 
    bool hasNeedVerifyLoginRisk() const { return this->needVerifyLoginRisk_ != nullptr;};
    void deleteNeedVerifyLoginRisk() { this->needVerifyLoginRisk_ = nullptr;};
    inline bool getNeedVerifyLoginRisk() const { DARABONBA_PTR_GET_DEFAULT(needVerifyLoginRisk_, false) };
    inline ModifyOfficeSiteAttributeRequest& setNeedVerifyLoginRisk(bool needVerifyLoginRisk) { DARABONBA_PTR_SET_VALUE(needVerifyLoginRisk_, needVerifyLoginRisk) };


    // needVerifyZeroDevice Field Functions 
    bool hasNeedVerifyZeroDevice() const { return this->needVerifyZeroDevice_ != nullptr;};
    void deleteNeedVerifyZeroDevice() { this->needVerifyZeroDevice_ = nullptr;};
    inline bool getNeedVerifyZeroDevice() const { DARABONBA_PTR_GET_DEFAULT(needVerifyZeroDevice_, false) };
    inline ModifyOfficeSiteAttributeRequest& setNeedVerifyZeroDevice(bool needVerifyZeroDevice) { DARABONBA_PTR_SET_VALUE(needVerifyZeroDevice_, needVerifyZeroDevice) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ModifyOfficeSiteAttributeRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline ModifyOfficeSiteAttributeRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyOfficeSiteAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ModifyOfficeSiteAttributeRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    shared_ptr<string> authorityHost_ {};
    shared_ptr<string> clientId_ {};
    shared_ptr<string> clientSecret_ {};
    // The method to connect to cloud computers from Alibaba Cloud Workspace clients.
    // 
    // >  VPC connection relies on the Alibaba Cloud PrivateLink service. You can use PrivateLink for free. When you set this parameter to `VPC` or `Any`, the system automatically activates PrivateLink.
    // 
    // Valid values:
    // 
    // *   INTERNET (default): allows end users to connect to cloud computers over the Internet.
    // *   VPC: allows end users to connect to cloud computers over VPCs.
    // *   ANY: allows end users to connect to cloud computers over the Internet and VPCs. When end users connect to cloud computers from Elastic Desktop Service, you can choose a connection method based on your business requirements.
    shared_ptr<string> desktopAccessType_ {};
    shared_ptr<string> domainName_ {};
    // Specifies whether to grant the local administrator permissions to users that are authorized to use cloud computers in the office network.
    // 
    // Valid values:
    // 
    // * true (default)
    // * false
    shared_ptr<bool> enableAdminAccess_ {};
    // Specifies whether to enable two-factor verification when an end user logs on to an Alibaba Cloud Workspace client. This parameter is required only for convenience office networks. If two-factor verification is enabled, the system checks whether security risks exist within the logon account when the end user uses a convenience user to log on to the client. If risks are detected, the system sends a verification code to the email address that is associated with the account of the convenience user. Then, the end user can log on to the client only when the verification code is correct.
    shared_ptr<bool> needVerifyLoginRisk_ {};
    // Specifies whether to enable device verification. This parameter is required only for convenience office networks. This parameter is left empty for enterprise Active Directory (AD) office networks.
    shared_ptr<bool> needVerifyZeroDevice_ {};
    // The office network ID.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The office network name. The name must be 2 to 255 characters in length. It can contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-). It must start with a letter and cannot start with `http://` or `https://`.\\
    // This parameter is empty by default.
    shared_ptr<string> officeSiteName_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
