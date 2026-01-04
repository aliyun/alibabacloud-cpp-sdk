// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRIESREQUEST_HPP_
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
  class CreateRouteEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RouteEntries, routeEntries_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RouteEntries, routeEntries_);
    };
    CreateRouteEntriesRequest() = default ;
    CreateRouteEntriesRequest(const CreateRouteEntriesRequest &) = default ;
    CreateRouteEntriesRequest(CreateRouteEntriesRequest &&) = default ;
    CreateRouteEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntriesRequest() = default ;
    CreateRouteEntriesRequest& operator=(const CreateRouteEntriesRequest &) = default ;
    CreateRouteEntriesRequest& operator=(CreateRouteEntriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RouteEntries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RouteEntries& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
        DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
        DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
      };
      friend void from_json(const Darabonba::Json& j, RouteEntries& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
        DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
        DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
        DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
      };
      RouteEntries() = default ;
      RouteEntries(const RouteEntries &) = default ;
      RouteEntries(RouteEntries &&) = default ;
      RouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RouteEntries() = default ;
      RouteEntries& operator=(const RouteEntries &) = default ;
      RouteEntries& operator=(RouteEntries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->dstCidrBlock_ == nullptr && this->ipVersion_ == nullptr && this->name_ == nullptr && this->nextHop_ == nullptr && this->nextHopType_ == nullptr
        && this->routeTableId_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RouteEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dstCidrBlock Field Functions 
      bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
      void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
      inline string getDstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
      inline RouteEntries& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


      // ipVersion Field Functions 
      bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
      void deleteIpVersion() { this->ipVersion_ = nullptr;};
      inline int32_t getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
      inline RouteEntries& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RouteEntries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nextHop Field Functions 
      bool hasNextHop() const { return this->nextHop_ != nullptr;};
      void deleteNextHop() { this->nextHop_ = nullptr;};
      inline string getNextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
      inline RouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


      // nextHopType Field Functions 
      bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
      void deleteNextHopType() { this->nextHopType_ = nullptr;};
      inline string getNextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
      inline RouteEntries& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


      // routeTableId Field Functions 
      bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
      void deleteRouteTableId() { this->routeTableId_ = nullptr;};
      inline string getRouteTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
      inline RouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


    protected:
      // The description of the custom route. You can specify at most 50 descriptions.
      // 
      // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> description_ {};
      // The destination CIDR block of the custom route. IPv4 CIDR blocks, IPv6 CIDR blocks, and prefix lists are supported. You can enter up to 50 destination CIDR blocks. Make sure that the following requirements are met:
      // 
      // *   The destination CIDR block cannot point to 100.64.0.0/10 or belong to 100.64.0.0/10.
      // *   The destination CIDR block of each route in the route table is unique.
      // 
      // This parameter is required.
      shared_ptr<string> dstCidrBlock_ {};
      // The IP version. Valid values: You can specify at most 50 IP versions. Valid values:
      // 
      // *   **4**: IPv4
      // *   **6**: IPv6
      shared_ptr<int32_t> ipVersion_ {};
      // The name of the custom route that you want to add. You can specify at most 50 names.
      // 
      // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
      shared_ptr<string> name_ {};
      // The ID of the next hop for the custom route. You can specify at most 50 instance IDs.
      // 
      // This parameter is required.
      shared_ptr<string> nextHop_ {};
      // The type of next hop. You can specify at most 50 next hop types. Valid values:
      // 
      // *   **Instance**: Elastic Compute Service (ECS) instance. This is the default value.
      // *   **HaVip**: high-availability virtual IP address (HaVip).
      // *   **RouterInterface**: router interface.
      // *   **NetworkInterface**: elastic network interface (ENI).
      // *   **VpnGateway**: VPN gateway.
      // *   **IPv6Gateway**: IPv6 gateway.
      // *   **NatGateway**: NAT gateway.
      // *   **Attachment**: transit router.
      // *   **VpcPeer**: VPC peering connection.
      // *   **Ipv4Gateway**: IPv4 gateway.
      // *   **GatewayEndpoint**: gateway endpoint.
      // *   **CenBasic**: CEN does not support transfer routers.
      // *   **Ecr**: Express Connect Router (ECR).
      // 
      // This parameter is required.
      shared_ptr<string> nextHopType_ {};
      // The ID of the route table to which you want to add custom route s. You can specify at most 50 route table IDs.
      // 
      // This parameter is required.
      shared_ptr<string> routeTableId_ {};
    };

    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->routeEntries_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateRouteEntriesRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateRouteEntriesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateRouteEntriesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateRouteEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateRouteEntriesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateRouteEntriesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // routeEntries Field Functions 
    bool hasRouteEntries() const { return this->routeEntries_ != nullptr;};
    void deleteRouteEntries() { this->routeEntries_ = nullptr;};
    inline const vector<CreateRouteEntriesRequest::RouteEntries> & getRouteEntries() const { DARABONBA_PTR_GET_CONST(routeEntries_, vector<CreateRouteEntriesRequest::RouteEntries>) };
    inline vector<CreateRouteEntriesRequest::RouteEntries> getRouteEntries() { DARABONBA_PTR_GET(routeEntries_, vector<CreateRouteEntriesRequest::RouteEntries>) };
    inline CreateRouteEntriesRequest& setRouteEntries(const vector<CreateRouteEntriesRequest::RouteEntries> & routeEntries) { DARABONBA_PTR_SET_VALUE(routeEntries_, routeEntries) };
    inline CreateRouteEntriesRequest& setRouteEntries(vector<CreateRouteEntriesRequest::RouteEntries> && routeEntries) { DARABONBA_PTR_SET_RVALUE(routeEntries_, routeEntries) };


  protected:
    // Specifies whether to only precheck the request. Valid values:
    // 
    // *   **true**: prechecks the request without performing the operation. The system prechecks the required parameters, request syntax, and limits. If the request fails to pass the precheck, an error message is returned. If the request passes the precheck, the `DryRunOperation` error code is returned.
    // *   **false** (default): sends the request. After the request passes the precheck, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the route table.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The routes.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateRouteEntriesRequest::RouteEntries>> routeEntries_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
