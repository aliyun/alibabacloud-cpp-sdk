// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEROUTEENTRIESREQUESTROUTEENTRIES_HPP_
#define ALIBABACLOUD_MODELS_CREATEROUTEENTRIESREQUESTROUTEENTRIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateRouteEntriesRequestRouteEntries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRouteEntriesRequestRouteEntries& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(RouteTableId, routeTableId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRouteEntriesRequestRouteEntries& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DstCidrBlock, dstCidrBlock_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(RouteTableId, routeTableId_);
    };
    CreateRouteEntriesRequestRouteEntries() = default ;
    CreateRouteEntriesRequestRouteEntries(const CreateRouteEntriesRequestRouteEntries &) = default ;
    CreateRouteEntriesRequestRouteEntries(CreateRouteEntriesRequestRouteEntries &&) = default ;
    CreateRouteEntriesRequestRouteEntries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRouteEntriesRequestRouteEntries() = default ;
    CreateRouteEntriesRequestRouteEntries& operator=(const CreateRouteEntriesRequestRouteEntries &) = default ;
    CreateRouteEntriesRequestRouteEntries& operator=(CreateRouteEntriesRequestRouteEntries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->dstCidrBlock_ == nullptr && return this->ipVersion_ == nullptr && return this->name_ == nullptr && return this->nextHop_ == nullptr && return this->nextHopType_ == nullptr
        && return this->routeTableId_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateRouteEntriesRequestRouteEntries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // dstCidrBlock Field Functions 
    bool hasDstCidrBlock() const { return this->dstCidrBlock_ != nullptr;};
    void deleteDstCidrBlock() { this->dstCidrBlock_ = nullptr;};
    inline string dstCidrBlock() const { DARABONBA_PTR_GET_DEFAULT(dstCidrBlock_, "") };
    inline CreateRouteEntriesRequestRouteEntries& setDstCidrBlock(string dstCidrBlock) { DARABONBA_PTR_SET_VALUE(dstCidrBlock_, dstCidrBlock) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline CreateRouteEntriesRequestRouteEntries& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateRouteEntriesRequestRouteEntries& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline CreateRouteEntriesRequestRouteEntries& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline CreateRouteEntriesRequestRouteEntries& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // routeTableId Field Functions 
    bool hasRouteTableId() const { return this->routeTableId_ != nullptr;};
    void deleteRouteTableId() { this->routeTableId_ = nullptr;};
    inline string routeTableId() const { DARABONBA_PTR_GET_DEFAULT(routeTableId_, "") };
    inline CreateRouteEntriesRequestRouteEntries& setRouteTableId(string routeTableId) { DARABONBA_PTR_SET_VALUE(routeTableId_, routeTableId) };


  protected:
    // The description of the custom route. You can specify at most 50 descriptions.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> description_ = nullptr;
    // The destination CIDR block of the custom route. IPv4 CIDR blocks, IPv6 CIDR blocks, and prefix lists are supported. You can enter up to 50 destination CIDR blocks. Make sure that the following requirements are met:
    // 
    // *   The destination CIDR block cannot point to 100.64.0.0/10 or belong to 100.64.0.0/10.
    // *   The destination CIDR block of each route in the route table is unique.
    // 
    // This parameter is required.
    std::shared_ptr<string> dstCidrBlock_ = nullptr;
    // The IP version. Valid values: You can specify at most 50 IP versions. Valid values:
    // 
    // *   **4**: IPv4
    // *   **6**: IPv6
    std::shared_ptr<int32_t> ipVersion_ = nullptr;
    // The name of the custom route that you want to add. You can specify at most 50 names.
    // 
    // The name must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the next hop for the custom route. You can specify at most 50 instance IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> nextHop_ = nullptr;
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
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The ID of the route table to which you want to add custom route s. You can specify at most 50 route table IDs.
    // 
    // This parameter is required.
    std::shared_ptr<string> routeTableId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
