// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERCIDRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTRANSITROUTERCIDRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ModifyTransitRouterCidrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTransitRouterCidrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PublishCidrRoute, publishCidrRoute_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrId, transitRouterCidrId_);
      DARABONBA_PTR_TO_JSON(TransitRouterId, transitRouterId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTransitRouterCidrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PublishCidrRoute, publishCidrRoute_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrId, transitRouterCidrId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterId, transitRouterId_);
    };
    ModifyTransitRouterCidrRequest() = default ;
    ModifyTransitRouterCidrRequest(const ModifyTransitRouterCidrRequest &) = default ;
    ModifyTransitRouterCidrRequest(ModifyTransitRouterCidrRequest &&) = default ;
    ModifyTransitRouterCidrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTransitRouterCidrRequest() = default ;
    ModifyTransitRouterCidrRequest& operator=(const ModifyTransitRouterCidrRequest &) = default ;
    ModifyTransitRouterCidrRequest& operator=(ModifyTransitRouterCidrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->clientToken_ != nullptr && this->description_ != nullptr && this->dryRun_ != nullptr && this->name_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->publishCidrRoute_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr
        && this->transitRouterCidrId_ != nullptr && this->transitRouterId_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline ModifyTransitRouterCidrRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyTransitRouterCidrRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyTransitRouterCidrRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyTransitRouterCidrRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyTransitRouterCidrRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyTransitRouterCidrRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyTransitRouterCidrRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // publishCidrRoute Field Functions 
    bool hasPublishCidrRoute() const { return this->publishCidrRoute_ != nullptr;};
    void deletePublishCidrRoute() { this->publishCidrRoute_ = nullptr;};
    inline bool publishCidrRoute() const { DARABONBA_PTR_GET_DEFAULT(publishCidrRoute_, false) };
    inline ModifyTransitRouterCidrRequest& setPublishCidrRoute(bool publishCidrRoute) { DARABONBA_PTR_SET_VALUE(publishCidrRoute_, publishCidrRoute) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyTransitRouterCidrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyTransitRouterCidrRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyTransitRouterCidrRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // transitRouterCidrId Field Functions 
    bool hasTransitRouterCidrId() const { return this->transitRouterCidrId_ != nullptr;};
    void deleteTransitRouterCidrId() { this->transitRouterCidrId_ = nullptr;};
    inline string transitRouterCidrId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterCidrId_, "") };
    inline ModifyTransitRouterCidrRequest& setTransitRouterCidrId(string transitRouterCidrId) { DARABONBA_PTR_SET_VALUE(transitRouterCidrId_, transitRouterCidrId) };


    // transitRouterId Field Functions 
    bool hasTransitRouterId() const { return this->transitRouterId_ != nullptr;};
    void deleteTransitRouterId() { this->transitRouterId_ = nullptr;};
    inline string transitRouterId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterId_, "") };
    inline ModifyTransitRouterCidrRequest& setTransitRouterId(string transitRouterId) { DARABONBA_PTR_SET_VALUE(transitRouterId_, transitRouterId) };


  protected:
    // The new CIDR block of the transit router.
    std::shared_ptr<string> cidr_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the request ID as the client token. The request ID may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The new description of the transit router CIDR block.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request syntax, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: performs a dry run and sends the request.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The new name of the transit router CIDR block.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with http:// or https://. You can also leave this parameter empty.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // Specifies whether to allow the system to automatically add a route that points to the CIDR block to the route table of the transit router. Valid values:
    // 
    // *   **true**
    // 
    //     If you specify true, create a private VPN connection, and enable route learning for the VPN connection, the system automatically adds the following route to the transit router route table that is in route learning relationship with the VPN connection: a blackhole route whose destination CIDR block is the CIDR block of the transit router. The CIDR block of the transit router refers to the CIDR block from which IP addresses of IPsec-VPN connections are allocated. The blackhole route is advertised only to the route tables of virtual border routers (VBRs) connected to the transit router.
    // 
    // *   **false**
    std::shared_ptr<bool> publishCidrRoute_ = nullptr;
    // The ID of the region where the transit router is deployed.
    // 
    // You can call the [DescribeChildInstanceRegions](https://help.aliyun.com/document_detail/132080.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the CIDR block.
    // 
    // You can call the [ListTransitRouterCidr](https://help.aliyun.com/document_detail/462772.html) operation to query the ID of a CIDR block.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterCidrId_ = nullptr;
    // The ID of the transit router.
    // 
    // This parameter is required.
    std::shared_ptr<string> transitRouterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
