// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETABLEENTRYATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGATEWAYROUTETABLEENTRYATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateGatewayRouteTableEntryAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGatewayRouteTableEntryAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(IPv4GatewayRouteTableId, IPv4GatewayRouteTableId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGatewayRouteTableEntryAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(GatewayRouteTableId, gatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(IPv4GatewayRouteTableId, IPv4GatewayRouteTableId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    UpdateGatewayRouteTableEntryAttributeRequest() = default ;
    UpdateGatewayRouteTableEntryAttributeRequest(const UpdateGatewayRouteTableEntryAttributeRequest &) = default ;
    UpdateGatewayRouteTableEntryAttributeRequest(UpdateGatewayRouteTableEntryAttributeRequest &&) = default ;
    UpdateGatewayRouteTableEntryAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGatewayRouteTableEntryAttributeRequest() = default ;
    UpdateGatewayRouteTableEntryAttributeRequest& operator=(const UpdateGatewayRouteTableEntryAttributeRequest &) = default ;
    UpdateGatewayRouteTableEntryAttributeRequest& operator=(UpdateGatewayRouteTableEntryAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->dryRun_ == nullptr && this->gatewayRouteTableId_ == nullptr && this->IPv4GatewayRouteTableId_ == nullptr
        && this->name_ == nullptr && this->nextHopId_ == nullptr && this->nextHopType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // gatewayRouteTableId Field Functions 
    bool hasGatewayRouteTableId() const { return this->gatewayRouteTableId_ != nullptr;};
    void deleteGatewayRouteTableId() { this->gatewayRouteTableId_ = nullptr;};
    inline string getGatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(gatewayRouteTableId_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setGatewayRouteTableId(string gatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(gatewayRouteTableId_, gatewayRouteTableId) };


    // IPv4GatewayRouteTableId Field Functions 
    bool hasIPv4GatewayRouteTableId() const { return this->IPv4GatewayRouteTableId_ != nullptr;};
    void deleteIPv4GatewayRouteTableId() { this->IPv4GatewayRouteTableId_ = nullptr;};
    inline string getIPv4GatewayRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(IPv4GatewayRouteTableId_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setIPv4GatewayRouteTableId(string IPv4GatewayRouteTableId) { DARABONBA_PTR_SET_VALUE(IPv4GatewayRouteTableId_, IPv4GatewayRouteTableId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateGatewayRouteTableEntryAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The description of the gateway route table.
    // 
    // The description must be 2 to 256 characters in length. The description must start with a letter but cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The destination CIDR block of the route entry in the gateway route table.
    // 
    // This parameter is required.
    shared_ptr<string> destinationCidrBlock_ {};
    // Specifies whether to precheck only this request. Valid values:
    // 
    // *   **true**: prechecks the request without modifying the gateway route table. The system checks the required parameters, request format, and service limits. If the request fails to pass the precheck, an error code is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false**: sends the request. This is the default value. If the request passes the precheck, a 2xx HTTP status code is returned and the gateway route table is modified.
    shared_ptr<bool> dryRun_ {};
    // The ID of the gateway route table that you want to modify.
    shared_ptr<string> gatewayRouteTableId_ {};
    // The ID of the gateway route table that you want to modify.
    shared_ptr<string> IPv4GatewayRouteTableId_ {};
    // The name of the gateway route table.
    // 
    // The name must be 2 to 128 characters in length and can contain letter, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
    shared_ptr<string> name_ {};
    // The new next hop ID of the route entry.
    // 
    // *   If you set **NextHopType** to **Instance**, specify an ECS instance ID for **NextHopId**.
    // *   If you set **NextHopType** to **NetworkInterface**, specify an ENI ID for **NextHopId**.
    // *   If you set **NextHopType** to **Local**, leave **NextHopId** empty. This indicates a local next hop.
    // 
    // >  If the value of NextHopType is **Instance** or **NetworkInterface**, and you want to modify the next hop, you must set **NextHopType** to **Local** first. Then, set **NextHopType** to **Instance** or **NetworkInterface** and specify **NextHopId** based on your requirements. If the next hop type of a route entry is Instance or NetworkInterface, you cannot directly specify a different ENI ID or ECS instance ID for the NextHopId parameter.
    shared_ptr<string> nextHopId_ {};
    // The new next hop type of the route. Valid values:
    // 
    // *   **Instance**: Elastic Compute Service (ECS) instance
    // *   **NetworkInterface**: elastic network interface (ENI)
    // *   **Local**: local next hop
    // 
    // This parameter is required.
    shared_ptr<string> nextHopType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region to which the gateway route table that you want to modify belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
