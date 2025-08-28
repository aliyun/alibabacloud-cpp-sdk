// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPNPBRROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPNPBRROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpnPbrRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpnPbrRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_TO_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VpnInstanceId, vpnInstanceId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpnPbrRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_FROM_JSON(RouteSource, routeSource_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VpnInstanceId, vpnInstanceId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateVpnPbrRouteEntryResponseBody() = default ;
    CreateVpnPbrRouteEntryResponseBody(const CreateVpnPbrRouteEntryResponseBody &) = default ;
    CreateVpnPbrRouteEntryResponseBody(CreateVpnPbrRouteEntryResponseBody &&) = default ;
    CreateVpnPbrRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpnPbrRouteEntryResponseBody() = default ;
    CreateVpnPbrRouteEntryResponseBody& operator=(const CreateVpnPbrRouteEntryResponseBody &) = default ;
    CreateVpnPbrRouteEntryResponseBody& operator=(CreateVpnPbrRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->nextHop_ != nullptr && this->overlayMode_ != nullptr && this->priority_ != nullptr && this->requestId_ != nullptr
        && this->routeDest_ != nullptr && this->routeSource_ != nullptr && this->state_ != nullptr && this->vpnInstanceId_ != nullptr && this->weight_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateVpnPbrRouteEntryResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // overlayMode Field Functions 
    bool hasOverlayMode() const { return this->overlayMode_ != nullptr;};
    void deleteOverlayMode() { this->overlayMode_ = nullptr;};
    inline string overlayMode() const { DARABONBA_PTR_GET_DEFAULT(overlayMode_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setOverlayMode(string overlayMode) { DARABONBA_PTR_SET_VALUE(overlayMode_, overlayMode) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateVpnPbrRouteEntryResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string routeDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // routeSource Field Functions 
    bool hasRouteSource() const { return this->routeSource_ != nullptr;};
    void deleteRouteSource() { this->routeSource_ = nullptr;};
    inline string routeSource() const { DARABONBA_PTR_GET_DEFAULT(routeSource_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setRouteSource(string routeSource) { DARABONBA_PTR_SET_VALUE(routeSource_, routeSource) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // vpnInstanceId Field Functions 
    bool hasVpnInstanceId() const { return this->vpnInstanceId_ != nullptr;};
    void deleteVpnInstanceId() { this->vpnInstanceId_ = nullptr;};
    inline string vpnInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpnInstanceId_, "") };
    inline CreateVpnPbrRouteEntryResponseBody& setVpnInstanceId(string vpnInstanceId) { DARABONBA_PTR_SET_VALUE(vpnInstanceId_, vpnInstanceId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateVpnPbrRouteEntryResponseBody& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The time when the policy-based route was created.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the policy-based route.
    std::shared_ptr<string> description_ = nullptr;
    // The next hop of the policy-based route.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The tunneling protocol. The value is **Ipsec**.
    std::shared_ptr<string> overlayMode_ = nullptr;
    // The priority of the policy-based route.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The destination CIDR block of the policy-based route.
    std::shared_ptr<string> routeDest_ = nullptr;
    // The source CIDR block of the policy-based route.
    std::shared_ptr<string> routeSource_ = nullptr;
    // The status of the policy-based route. Valid values:
    // 
    // *   **published**: advertised to the VPC route table.
    // *   **normal**: not advertised to the VPC route table.
    std::shared_ptr<string> state_ = nullptr;
    // The VPN gateway ID.
    std::shared_ptr<string> vpnInstanceId_ = nullptr;
    // The weight of the policy-based route. Valid values:
    // 
    // *   **100**: The IPsec-VPN connection associated with the policy-based route serves as an active connection.
    // *   **0**: The IPsec-VPN connection associated with the policy-based route serves as a standby connection.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
