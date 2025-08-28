// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYROUTETABLEENTRIESRESPONSEBODYGATEWAYROUTEENTRYMODELSNEXTHOPS_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYROUTETABLEENTRIESRESPONSEBODYGATEWAYROUTEENTRYMODELSNEXTHOPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops() = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops(const ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops &) = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops(ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops &&) = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops() = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& operator=(const ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops &) = default ;
    ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& operator=(ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->nextHopId_ != nullptr && this->nextHopType_ != nullptr && this->weight_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline ListGatewayRouteTableEntriesResponseBodyGatewayRouteEntryModelsNextHops& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // Indicates whether the route is available. Valid values:
    // 
    // *   **0**: unavailable
    // *   **1**: available
    std::shared_ptr<string> enabled_ = nullptr;
    // The ID of the next hop.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The type of the next hop. Valid values:
    // 
    // *   **Instance** (default): an ECS instance
    // *   **HaVip**: a high-availability virtual IP address (HaVip).
    // *   **VpnGateway**: a VPN gateway
    // *   **NatGateway**: a NAT gateway
    // *   **NetworkInterface**: a secondary ENI
    // *   **RouterInterface**: a router interface
    // *   **IPv6Gateway**: an IPv6 gateway
    // *   **Attachment**: a transit router
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The weight of the route.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
