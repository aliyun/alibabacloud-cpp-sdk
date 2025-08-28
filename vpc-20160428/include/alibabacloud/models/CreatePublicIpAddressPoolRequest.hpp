// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUBLICIPADDRESSPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUBLICIPADDRESSPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreatePublicIpAddressPoolRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreatePublicIpAddressPoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePublicIpAddressPoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePublicIpAddressPoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SecurityProtectionTypes, securityProtectionTypes_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    CreatePublicIpAddressPoolRequest() = default ;
    CreatePublicIpAddressPoolRequest(const CreatePublicIpAddressPoolRequest &) = default ;
    CreatePublicIpAddressPoolRequest(CreatePublicIpAddressPoolRequest &&) = default ;
    CreatePublicIpAddressPoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePublicIpAddressPoolRequest() = default ;
    CreatePublicIpAddressPoolRequest& operator=(const CreatePublicIpAddressPoolRequest &) = default ;
    CreatePublicIpAddressPoolRequest& operator=(CreatePublicIpAddressPoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizType_ != nullptr
        && this->clientToken_ != nullptr && this->description_ != nullptr && this->dryRun_ != nullptr && this->isp_ != nullptr && this->name_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->securityProtectionTypes_ != nullptr && this->tag_ != nullptr && this->zones_ != nullptr; };
    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline CreatePublicIpAddressPoolRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreatePublicIpAddressPoolRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreatePublicIpAddressPoolRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreatePublicIpAddressPoolRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline CreatePublicIpAddressPoolRequest& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreatePublicIpAddressPoolRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreatePublicIpAddressPoolRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreatePublicIpAddressPoolRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreatePublicIpAddressPoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreatePublicIpAddressPoolRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreatePublicIpAddressPoolRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreatePublicIpAddressPoolRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // securityProtectionTypes Field Functions 
    bool hasSecurityProtectionTypes() const { return this->securityProtectionTypes_ != nullptr;};
    void deleteSecurityProtectionTypes() { this->securityProtectionTypes_ = nullptr;};
    inline const vector<string> & securityProtectionTypes() const { DARABONBA_PTR_GET_CONST(securityProtectionTypes_, vector<string>) };
    inline vector<string> securityProtectionTypes() { DARABONBA_PTR_GET(securityProtectionTypes_, vector<string>) };
    inline CreatePublicIpAddressPoolRequest& setSecurityProtectionTypes(const vector<string> & securityProtectionTypes) { DARABONBA_PTR_SET_VALUE(securityProtectionTypes_, securityProtectionTypes) };
    inline CreatePublicIpAddressPoolRequest& setSecurityProtectionTypes(vector<string> && securityProtectionTypes) { DARABONBA_PTR_SET_RVALUE(securityProtectionTypes_, securityProtectionTypes) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreatePublicIpAddressPoolRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreatePublicIpAddressPoolRequestTag>) };
    inline vector<CreatePublicIpAddressPoolRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreatePublicIpAddressPoolRequestTag>) };
    inline CreatePublicIpAddressPoolRequest& setTag(const vector<CreatePublicIpAddressPoolRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreatePublicIpAddressPoolRequest& setTag(vector<CreatePublicIpAddressPoolRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<string> & zones() const { DARABONBA_PTR_GET_CONST(zones_, vector<string>) };
    inline vector<string> zones() { DARABONBA_PTR_GET(zones_, vector<string>) };
    inline CreatePublicIpAddressPoolRequest& setZones(const vector<string> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline CreatePublicIpAddressPoolRequest& setZones(vector<string> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The service type of the IP address pool. Valid values:
    // 
    // *   **CloudBox** Only cloud box users can select this type.
    // *   **Default**: This is the default value.
    std::shared_ptr<string> bizType_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate a value, and you must make sure that each request has a unique token value. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the value of **RequestId** as the value of **ClientToken**. The value of **RequestId** for each API request is different.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the IP address pool.
    // 
    // The description must be 0 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to precheck only this request. Valid values:
    // 
    // *   **true**: prechecks the request without creating an IP address pool. The system checks the required parameters, request format, and service limits. If the request fails to pass the precheck, an error code is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false**: sends the request. This is the default value. If the request passes the precheck, a 2xx HTTP status code is returned and the IP address pool is created.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The line type. Valid values:
    // 
    // *   **BGP** (default)
    // *   **BGP_PRO**
    // 
    // For more information about BGP (Multi-ISP) lines and BGP (Multi-ISP) Pro lines, see the "Line types" section in the [What is EIP?](https://help.aliyun.com/document_detail/32321.html) topic.
    // 
    // *   If you are allowed to use single-ISP bandwidth, you can also use one of the following values:
    // 
    //     *   **ChinaTelecom**
    //     *   **ChinaUnicom**
    //     *   **ChinaMobile**
    //     *   **ChinaTelecom_L2**
    //     *   **ChinaUnicom_L2**
    //     *   **ChinaMobile_L2**
    // 
    // *   If your services are deployed in China East 1 Finance, this parameter is required and you must set the value to **BGP_FinanceCloud**.
    std::shared_ptr<string> isp_ = nullptr;
    // The name of the IP address pool.
    // 
    // The name must be 0 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where you want to create the IP address pool.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the IP address pool belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The editions of Anti-DDoS.
    // - If you do not specify this parameter, Anti-DDoS Origin Basic is used.
    // - If you set the parameter to AntiDDoS_Enhanced, Anti-DDoS Pro/Premium is used.
    std::shared_ptr<vector<string>> securityProtectionTypes_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<vector<CreatePublicIpAddressPoolRequestTag>> tag_ = nullptr;
    // The zone of the IP address pool. If you set **BizType** to **CloudBox**, this parameter is required.
    std::shared_ptr<vector<string>> zones_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
