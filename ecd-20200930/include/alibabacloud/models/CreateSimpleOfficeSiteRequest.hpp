// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESIMPLEOFFICESITEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESIMPLEOFFICESITEREQUEST_HPP_
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
  class CreateSimpleOfficeSiteRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSimpleOfficeSiteRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessAttribute, accessAttribute_);
      DARABONBA_PTR_TO_JSON(AccountType, accountType_);
      DARABONBA_PTR_TO_JSON(AuthorityHost, authorityHost_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(ClientId, clientId_);
      DARABONBA_PTR_TO_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_TO_JSON(CloudBoxOfficeSite, cloudBoxOfficeSite_);
      DARABONBA_PTR_TO_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Eid, eid_);
      DARABONBA_PTR_TO_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_TO_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_TO_JSON(NeedVerifyZeroDevice, needVerifyZeroDevice_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
      DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSimpleOfficeSiteRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessAttribute, accessAttribute_);
      DARABONBA_PTR_FROM_JSON(AccountType, accountType_);
      DARABONBA_PTR_FROM_JSON(AuthorityHost, authorityHost_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(ClientId, clientId_);
      DARABONBA_PTR_FROM_JSON(ClientSecret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(CloudBoxOfficeSite, cloudBoxOfficeSite_);
      DARABONBA_PTR_FROM_JSON(DesktopAccessType, desktopAccessType_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Eid, eid_);
      DARABONBA_PTR_FROM_JSON(EnableAdminAccess, enableAdminAccess_);
      DARABONBA_PTR_FROM_JSON(EnableInternetAccess, enableInternetAccess_);
      DARABONBA_PTR_FROM_JSON(NeedVerifyZeroDevice, needVerifyZeroDevice_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
      DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
    };
    CreateSimpleOfficeSiteRequest() = default ;
    CreateSimpleOfficeSiteRequest(const CreateSimpleOfficeSiteRequest &) = default ;
    CreateSimpleOfficeSiteRequest(CreateSimpleOfficeSiteRequest &&) = default ;
    CreateSimpleOfficeSiteRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSimpleOfficeSiteRequest() = default ;
    CreateSimpleOfficeSiteRequest& operator=(const CreateSimpleOfficeSiteRequest &) = default ;
    CreateSimpleOfficeSiteRequest& operator=(CreateSimpleOfficeSiteRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessAttribute_ == nullptr
        && this->accountType_ == nullptr && this->authorityHost_ == nullptr && this->bandwidth_ == nullptr && this->cenId_ == nullptr && this->cenOwnerId_ == nullptr
        && this->cidrBlock_ == nullptr && this->clientId_ == nullptr && this->clientSecret_ == nullptr && this->cloudBoxOfficeSite_ == nullptr && this->desktopAccessType_ == nullptr
        && this->domainName_ == nullptr && this->eid_ == nullptr && this->enableAdminAccess_ == nullptr && this->enableInternetAccess_ == nullptr && this->needVerifyZeroDevice_ == nullptr
        && this->officeSiteName_ == nullptr && this->regionId_ == nullptr && this->tenantId_ == nullptr && this->vSwitchId_ == nullptr && this->verifyCode_ == nullptr
        && this->vpcType_ == nullptr; };
    // accessAttribute Field Functions 
    bool hasAccessAttribute() const { return this->accessAttribute_ != nullptr;};
    void deleteAccessAttribute() { this->accessAttribute_ = nullptr;};
    inline string getAccessAttribute() const { DARABONBA_PTR_GET_DEFAULT(accessAttribute_, "") };
    inline CreateSimpleOfficeSiteRequest& setAccessAttribute(string accessAttribute) { DARABONBA_PTR_SET_VALUE(accessAttribute_, accessAttribute) };


    // accountType Field Functions 
    bool hasAccountType() const { return this->accountType_ != nullptr;};
    void deleteAccountType() { this->accountType_ = nullptr;};
    inline string getAccountType() const { DARABONBA_PTR_GET_DEFAULT(accountType_, "") };
    inline CreateSimpleOfficeSiteRequest& setAccountType(string accountType) { DARABONBA_PTR_SET_VALUE(accountType_, accountType) };


    // authorityHost Field Functions 
    bool hasAuthorityHost() const { return this->authorityHost_ != nullptr;};
    void deleteAuthorityHost() { this->authorityHost_ = nullptr;};
    inline string getAuthorityHost() const { DARABONBA_PTR_GET_DEFAULT(authorityHost_, "") };
    inline CreateSimpleOfficeSiteRequest& setAuthorityHost(string authorityHost) { DARABONBA_PTR_SET_VALUE(authorityHost_, authorityHost) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t getBandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline CreateSimpleOfficeSiteRequest& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateSimpleOfficeSiteRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline CreateSimpleOfficeSiteRequest& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string getCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline CreateSimpleOfficeSiteRequest& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline CreateSimpleOfficeSiteRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline CreateSimpleOfficeSiteRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // cloudBoxOfficeSite Field Functions 
    bool hasCloudBoxOfficeSite() const { return this->cloudBoxOfficeSite_ != nullptr;};
    void deleteCloudBoxOfficeSite() { this->cloudBoxOfficeSite_ = nullptr;};
    inline bool getCloudBoxOfficeSite() const { DARABONBA_PTR_GET_DEFAULT(cloudBoxOfficeSite_, false) };
    inline CreateSimpleOfficeSiteRequest& setCloudBoxOfficeSite(bool cloudBoxOfficeSite) { DARABONBA_PTR_SET_VALUE(cloudBoxOfficeSite_, cloudBoxOfficeSite) };


    // desktopAccessType Field Functions 
    bool hasDesktopAccessType() const { return this->desktopAccessType_ != nullptr;};
    void deleteDesktopAccessType() { this->desktopAccessType_ = nullptr;};
    inline string getDesktopAccessType() const { DARABONBA_PTR_GET_DEFAULT(desktopAccessType_, "") };
    inline CreateSimpleOfficeSiteRequest& setDesktopAccessType(string desktopAccessType) { DARABONBA_PTR_SET_VALUE(desktopAccessType_, desktopAccessType) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateSimpleOfficeSiteRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // eid Field Functions 
    bool hasEid() const { return this->eid_ != nullptr;};
    void deleteEid() { this->eid_ = nullptr;};
    inline string getEid() const { DARABONBA_PTR_GET_DEFAULT(eid_, "") };
    inline CreateSimpleOfficeSiteRequest& setEid(string eid) { DARABONBA_PTR_SET_VALUE(eid_, eid) };


    // enableAdminAccess Field Functions 
    bool hasEnableAdminAccess() const { return this->enableAdminAccess_ != nullptr;};
    void deleteEnableAdminAccess() { this->enableAdminAccess_ = nullptr;};
    inline bool getEnableAdminAccess() const { DARABONBA_PTR_GET_DEFAULT(enableAdminAccess_, false) };
    inline CreateSimpleOfficeSiteRequest& setEnableAdminAccess(bool enableAdminAccess) { DARABONBA_PTR_SET_VALUE(enableAdminAccess_, enableAdminAccess) };


    // enableInternetAccess Field Functions 
    bool hasEnableInternetAccess() const { return this->enableInternetAccess_ != nullptr;};
    void deleteEnableInternetAccess() { this->enableInternetAccess_ = nullptr;};
    inline bool getEnableInternetAccess() const { DARABONBA_PTR_GET_DEFAULT(enableInternetAccess_, false) };
    inline CreateSimpleOfficeSiteRequest& setEnableInternetAccess(bool enableInternetAccess) { DARABONBA_PTR_SET_VALUE(enableInternetAccess_, enableInternetAccess) };


    // needVerifyZeroDevice Field Functions 
    bool hasNeedVerifyZeroDevice() const { return this->needVerifyZeroDevice_ != nullptr;};
    void deleteNeedVerifyZeroDevice() { this->needVerifyZeroDevice_ = nullptr;};
    inline bool getNeedVerifyZeroDevice() const { DARABONBA_PTR_GET_DEFAULT(needVerifyZeroDevice_, false) };
    inline CreateSimpleOfficeSiteRequest& setNeedVerifyZeroDevice(bool needVerifyZeroDevice) { DARABONBA_PTR_SET_VALUE(needVerifyZeroDevice_, needVerifyZeroDevice) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string getOfficeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline CreateSimpleOfficeSiteRequest& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSimpleOfficeSiteRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateSimpleOfficeSiteRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & getVSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> getVSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline CreateSimpleOfficeSiteRequest& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline CreateSimpleOfficeSiteRequest& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline CreateSimpleOfficeSiteRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


    // vpcType Field Functions 
    bool hasVpcType() const { return this->vpcType_ != nullptr;};
    void deleteVpcType() { this->vpcType_ = nullptr;};
    inline string getVpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
    inline CreateSimpleOfficeSiteRequest& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


  protected:
    // The access attribute of the office network (workspace).
    shared_ptr<string> accessAttribute_ {};
    // The account type.
    shared_ptr<string> accountType_ {};
    // The authority URL of the identity authentication service.
    shared_ptr<string> authorityHost_ {};
    // The peak Internet bandwidth. Valid values: 10 to 200. Unit: Mbit/s.
    // You can specify this parameter when `EnableInternetAccess` is set to `true`.
    shared_ptr<int32_t> bandwidth_ {};
    // The instance ID of the Cloud Enterprise Network (CEN) instance.
    // 
    // > To connect to cloud desktops over a VPC connection, add the office network to a CEN instance. The CEN instance is the one that the on-premises network connects to by using a VPN or Express Connect circuit.
    shared_ptr<string> cenId_ {};
    // The Alibaba Cloud account ID to which the CEN instance belongs.
    // 
    // - If CenId is not specified or the specified CEN instance belongs to the current Alibaba Cloud account, you do not need to specify this parameter.
    // - If the specified CEN instance belongs to another Alibaba Cloud account, specify the Alibaba Cloud account ID of that account.
    shared_ptr<int64_t> cenOwnerId_ {};
    // The IPv4 CIDR block of the VPC for the office network. This parameter is required for advanced office networks. The system uses automatic creation of a VPC based on the specified IPv4 CIDR block. Use one of the following CIDR blocks or their subnets:
    // 
    // - `10.0.0.0/12` (valid mask range: 12 to 24 bits)
    // - `172.16.0.0/12` (valid mask range: 12 to 24 bits)
    // - `192.168.0.0/16` (valid mask range: 16 to 24 bits)
    shared_ptr<string> cidrBlock_ {};
    // The client ID registered with the identity provider application.
    shared_ptr<string> clientId_ {};
    // The client secret registered with the identity provider application.
    shared_ptr<string> clientSecret_ {};
    // Specifies whether the office network is a CloudBox office network.
    shared_ptr<bool> cloudBoxOfficeSite_ {};
    // The access method allowed when connecting to cloud desktops.
    // 
    // > The VPC connection method depends on the Alibaba Cloud PrivateLink service, which is free of charge. If this parameter is set to `VPC` or `Any`, the system automatically activates the PrivateLink service.
    shared_ptr<string> desktopAccessType_ {};
    // The domain name of the enterprise AD.
    shared_ptr<string> domainName_ {};
    // The enterprise ID (EID).
    shared_ptr<string> eid_ {};
    // Specifies whether to grant local administrator permissions to users who use cloud desktops.
    shared_ptr<bool> enableAdminAccess_ {};
    // Specifies whether to enable public network access.
    shared_ptr<bool> enableInternetAccess_ {};
    // Specifies whether to enable trusted device verification.
    shared_ptr<bool> needVerifyZeroDevice_ {};
    // The name of the office network. The name must be 2 to 255 characters in length and can contain letters, digits, colons (:), underscores (_), and hyphens (-). The name must start with a letter or Chinese character and cannot start with `http://` or `https://`.
    shared_ptr<string> officeSiteName_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The tenant ID of the identity provider.
    shared_ptr<string> tenantId_ {};
    // The ID of the vSwitch in the VPC. This parameter is required when you create a CloudBox office network.
    shared_ptr<vector<string>> vSwitchId_ {};
    // The verification code. If the specified CEN instance belongs to another Alibaba Cloud account, call [SendVerifyCode](https://help.aliyun.com/document_detail/335132.html) to obtain the verification code first.
    shared_ptr<string> verifyCode_ {};
    // The type of the office network.
    shared_ptr<string> vpcType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
