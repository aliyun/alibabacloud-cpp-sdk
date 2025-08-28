// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYSROUTEENTRYNEXTHOPSNEXTHOP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEROUTEENTRYLISTRESPONSEBODYROUTEENTRYSROUTEENTRYNEXTHOPSNEXTHOP_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_TO_JSON(NextHopRegionId, nextHopRegionId_);
      DARABONBA_PTR_TO_JSON(NextHopRelatedInfo, nextHopRelatedInfo_);
      DARABONBA_PTR_TO_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(NextHopId, nextHopId_);
      DARABONBA_PTR_FROM_JSON(NextHopRegionId, nextHopRegionId_);
      DARABONBA_PTR_FROM_JSON(NextHopRelatedInfo, nextHopRelatedInfo_);
      DARABONBA_PTR_FROM_JSON(NextHopType, nextHopType_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop(const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop(DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop &&) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop() = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& operator=(const DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop &) = default ;
    DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& operator=(DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enabled_ != nullptr
        && this->nextHopId_ != nullptr && this->nextHopRegionId_ != nullptr && this->nextHopRelatedInfo_ != nullptr && this->nextHopType_ != nullptr && this->weight_ != nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline int32_t enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, 0) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setEnabled(int32_t enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // nextHopId Field Functions 
    bool hasNextHopId() const { return this->nextHopId_ != nullptr;};
    void deleteNextHopId() { this->nextHopId_ = nullptr;};
    inline string nextHopId() const { DARABONBA_PTR_GET_DEFAULT(nextHopId_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setNextHopId(string nextHopId) { DARABONBA_PTR_SET_VALUE(nextHopId_, nextHopId) };


    // nextHopRegionId Field Functions 
    bool hasNextHopRegionId() const { return this->nextHopRegionId_ != nullptr;};
    void deleteNextHopRegionId() { this->nextHopRegionId_ = nullptr;};
    inline string nextHopRegionId() const { DARABONBA_PTR_GET_DEFAULT(nextHopRegionId_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setNextHopRegionId(string nextHopRegionId) { DARABONBA_PTR_SET_VALUE(nextHopRegionId_, nextHopRegionId) };


    // nextHopRelatedInfo Field Functions 
    bool hasNextHopRelatedInfo() const { return this->nextHopRelatedInfo_ != nullptr;};
    void deleteNextHopRelatedInfo() { this->nextHopRelatedInfo_ = nullptr;};
    inline const Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo & nextHopRelatedInfo() const { DARABONBA_PTR_GET_CONST(nextHopRelatedInfo_, Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo) };
    inline Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo nextHopRelatedInfo() { DARABONBA_PTR_GET(nextHopRelatedInfo_, Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setNextHopRelatedInfo(const Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo & nextHopRelatedInfo) { DARABONBA_PTR_SET_VALUE(nextHopRelatedInfo_, nextHopRelatedInfo) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setNextHopRelatedInfo(Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo && nextHopRelatedInfo) { DARABONBA_PTR_SET_RVALUE(nextHopRelatedInfo_, nextHopRelatedInfo) };


    // nextHopType Field Functions 
    bool hasNextHopType() const { return this->nextHopType_ != nullptr;};
    void deleteNextHopType() { this->nextHopType_ = nullptr;};
    inline string nextHopType() const { DARABONBA_PTR_GET_DEFAULT(nextHopType_, "") };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setNextHopType(string nextHopType) { DARABONBA_PTR_SET_VALUE(nextHopType_, nextHopType) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHop& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // Indicates whether the route is available. Valid values:
    // 
    // *   **0**: unavailable
    // *   **1**: available
    // 
    // >  This parameter is returned when the next hop type is set to **RouterInterface**.
    std::shared_ptr<int32_t> enabled_ = nullptr;
    // The ID of the next hop.
    std::shared_ptr<string> nextHopId_ = nullptr;
    // The ID of the region where the next hop is deployed.
    // 
    // >  This parameter is returned when the next hop type is set to **RouterInterface**.
    std::shared_ptr<string> nextHopRegionId_ = nullptr;
    // The information about the next hop.
    std::shared_ptr<Models::DescribeRouteEntryListResponseBodyRouteEntrysRouteEntryNextHopsNextHopNextHopRelatedInfo> nextHopRelatedInfo_ = nullptr;
    // The next hop type. Valid values:
    // 
    // *   **Instance**: an ECS instance.
    // *   **HaVip**: an HaVip.
    // *   **VpnGateway**: a VPN gateway.
    // *   **NatGateway**: a NAT gateway.
    // *   **NetworkInterface**: a secondary ENI.
    // *   **RouterInterface**: a router interface.
    // *   **IPv6Gateway**: an IPv6 gateway.
    // *   **Attachment**: a transit router.
    // *   **Ipv4Gateway**: an IPv4 gateway.
    // *   **GatewayEndpoint**: a gateway endpoint.
    // *   **CenBasic**: CEN does not support transit routers.
    // *   **Ecr**: ECR.
    std::shared_ptr<string> nextHopType_ = nullptr;
    // The weight of the route.
    // 
    // >  This parameter is returned when the next hop type is set to **RouterInterface**.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
