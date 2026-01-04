// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteEntryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopList, nextHopList_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DestinationCidrBlock, destinationCidrBlock_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopList, nextHopList_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteEntryName, routeEntryName_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    CreateRouteEntryRequest() = default ;
    CreateRouteEntryRequest(const CreateRouteEntryRequest &) = default ;
    CreateRouteEntryRequest(CreateRouteEntryRequest &&) = default ;
    CreateRouteEntryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntryRequest() = default ;
    CreateRouteEntryRequest& operator=(const CreateRouteEntryRequest &) = default ;
    CreateRouteEntryRequest& operator=(CreateRouteEntryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NextHopList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NextHopList& obj) { 
        DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(Weight, weight_);
      };
      friend void from_json(const Darabonba::Json& j, NextHopList& obj) { 
        DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(Weight, weight_);
      };
      NextHopList() = default ;
      NextHopList(const NextHopList &) = default ;
      NextHopList(NextHopList &&) = default ;
      NextHopList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NextHopList() = default ;
      NextHopList& operator=(const NextHopList &) = default ;
      NextHopList& operator=(NextHopList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nextHopId_ == nullptr
        && this->nextHopType_ == nullptr && this->weight_ == nullptr; };
      // nextHopId Field Functions 
      bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
      void deleteNextHopId() { this->nextHopId_ = nullptr;};
      inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
      inline NextHopList& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline NextHopList& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // weight Field Functions 
      bool hasWeight() const { return this->weight_ != nullptr;};
      void deleteWeight() { this->weight_ = nullptr;};
      inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
      inline NextHopList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    protected:
      // The ID of the next hop of the ECMP route.
      shared_ptr<string> nextHopId_ {};
      // The type of next hop of the ECMP route entry. Set the value to **RouterInterface**.
      shared_ptr<string> nextHopType_ {};
      // The weight of the next hop of the ECMP route entry.
      shared_ptr<int32_t> weight_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->description_ == nullptr && this->destinationCidrBlock_ == nullptr && this->dryRun_ == nullptr && this->nextHopId_ == nullptr && this->nextHopList_ == nullptr
        && this->nextHopType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->routeEntryName_ == nullptr && this->routeTableId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateRouteEntryRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouteEntryRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // destinationCidrBlock Field Functions 
    bool hasDestinationCidrBlock() const { return this->destinationCidrBlock_ != nullptr;};
    void deleteDestinationCidrBlock() { this->destinationCidrBlock_ = nullptr;};
    inline string getDestinationCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(destinationCidrBlock_, "") };
    inline CreateRouteEntryRequest& setDestinationCidrBlock(string destinationCidrBlock) { DARABONBA_PTR_SET_VALUE(destinationCidrBlock_, destinationCidrBlock) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRouteEntryRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string getNextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline CreateRouteEntryRequest& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopList Field Functions 
    bool hasNextHopList() const { return this->nextHopList_ != nullptr;};
    void deleteNextHopList() { this->nextHopList_ = nullptr;};
    inline const vector<CreateRouteEntryRequest::NextHopList> & getNextHopList() const { DARABONBA_PTR_GET_CONST(nextHopList_, vector<CreateRouteEntryRequest::NextHopList>) };
    inline vector<CreateRouteEntryRequest::NextHopList> getNextHopList() { DARABONBA_PTR_GET(nextHopList_, vector<CreateRouteEntryRequest::NextHopList>) };
    inline CreateRouteEntryRequest& setNextHopList(const vector<CreateRouteEntryRequest::NextHopList> & nextHopList) { DARABONBA_PTR_SET_VALUE(nextHopList_, nextHopList) };
    inline CreateRouteEntryRequest& setNextHopList(vector<CreateRouteEntryRequest::NextHopList> && nextHopList) { DARABONBA_PTR_SET_RVALUE(nextHopList_, nextHopList) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline CreateRouteEntryRequest& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateRouteEntryRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRouteEntryRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRouteEntryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRouteEntryRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRouteEntryRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeEntryName Field Functions 
    bool hasRouteEntryName() const { return this->routeEntryName_ != nullptr;};
    void deleteRouteEntryName() { this->routeEntryName_ = nullptr;};
    inline string getRouteEntryName() const { DARABONBA_PTR_GET_DEFAULT(routeEntryName_, "") };
    inline CreateRouteEntryRequest& setRouteEntryName(string routeEntryName) { DARABONBA_PTR_SET_VALUE(routeEntryName_, routeEntryName) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline CreateRouteEntryRequest& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The ClientToken value can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, **ClientToken** is set to the value of **RequestId**. The value of **RequestId** for each API request may be different.
    shared_ptr<string> clientToken_ {};
    // The description of the custom route entry.
    // 
    // The description must be 1 to 256 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> description_ {};
    // The destination CIDR block of the custom route entry. Both IPv4 and IPv6 CIDR blocks are supported. Make sure that the destination CIDR block meets the following requirements:
    // 
    // *   The destination CIDR block is not 100.64.0.0/10 or a subset of 100.64.0.0/10.
    // *   The destination CIDR block of the custom route entry is different from the destination CIDR blocks of other route entries in the same route table.
    // 
    // This parameter is required.
    shared_ptr<string> destinationCidrBlock_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the required parameters, request syntax, and limits. If the request fails, an error message is returned. If the request passes the validation, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. If the request passes the check, an HTTP 2xx status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The ID of the next hop for the custom route.
    // 
    // >  [](#-nexthoptype--ecr-describeexpressconnectrouterassociation--associationid--id)If you set the NextHopType parameter to ECR, call the [DescribeExpressConnectRouterAssociation](https://help.aliyun.com/document_detail/2712069.html) operation to access the AssociationId and use it as the next hop ID.
    shared_ptr<string> nextHopId_ {};
    // The next hop list.
    shared_ptr<vector<CreateRouteEntryRequest::NextHopList>> nextHopList_ {};
    // The type of next hop of the custom route entry. Valid values:
    // 
    // *   **Instance**: an Elastic Compute Service (ECS) instance. This is the default value.
    // *   **HaVip**: a high-availability virtual IP address (HaVip).
    // *   **RouterInterface**: a router interface.
    // *   **NetworkInterface**: an elastic network interface (ENI).
    // *   **VpnGateway**: a VPN gateway.
    // *   **IPv6Gateway**: an IPv6 gateway.
    // *   **NatGateway**: a NAT gateway.
    // *   **Attachment**: a transit router.
    // *   **VpcPeer**: a VPC peering connection.
    // *   **Ipv4Gateway**: an IPv4 gateway.
    // *   **GatewayEndpoint**: a gateway endpoint.
    // *   **Ecr**: an Express Connect Router (ECR).
    shared_ptr<string> nextHopType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the route table.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The name of the custom route entry that you want to add.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> routeEntryName_ {};
    // The ID of the route table to which you want to add a custom route entry.
    // 
    // This parameter is required.
    shared_ptr<string> routeTableId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
