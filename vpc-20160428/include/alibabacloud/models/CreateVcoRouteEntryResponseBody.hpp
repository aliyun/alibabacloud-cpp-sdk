// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVCOROUTEENTRYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVCOROUTEENTRYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVcoRouteEntryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVcoRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NextHop, nextHop_);
      DARABONBA_PTR_TO_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVcoRouteEntryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NextHop, nextHop_);
      DARABONBA_PTR_FROM_JSON(OverlayMode, overlayMode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RouteDest, routeDest_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(VpnConnectionId, vpnConnectionId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateVcoRouteEntryResponseBody() = default ;
    CreateVcoRouteEntryResponseBody(const CreateVcoRouteEntryResponseBody &) = default ;
    CreateVcoRouteEntryResponseBody(CreateVcoRouteEntryResponseBody &&) = default ;
    CreateVcoRouteEntryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVcoRouteEntryResponseBody() = default ;
    CreateVcoRouteEntryResponseBody& operator=(const CreateVcoRouteEntryResponseBody &) = default ;
    CreateVcoRouteEntryResponseBody& operator=(CreateVcoRouteEntryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->nextHop_ != nullptr && this->overlayMode_ != nullptr && this->requestId_ != nullptr && this->routeDest_ != nullptr
        && this->state_ != nullptr && this->vpnConnectionId_ != nullptr && this->weight_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline CreateVcoRouteEntryResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateVcoRouteEntryResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // nextHop Field Functions 
    bool hasNextHop() const { return this->nextHop_ != nullptr;};
    void deleteNextHop() { this->nextHop_ = nullptr;};
    inline string nextHop() const { DARABONBA_PTR_GET_DEFAULT(nextHop_, "") };
    inline CreateVcoRouteEntryResponseBody& setNextHop(string nextHop) { DARABONBA_PTR_SET_VALUE(nextHop_, nextHop) };


    // overlayMode Field Functions 
    bool hasOverlayMode() const { return this->overlayMode_ != nullptr;};
    void deleteOverlayMode() { this->overlayMode_ = nullptr;};
    inline string overlayMode() const { DARABONBA_PTR_GET_DEFAULT(overlayMode_, "") };
    inline CreateVcoRouteEntryResponseBody& setOverlayMode(string overlayMode) { DARABONBA_PTR_SET_VALUE(overlayMode_, overlayMode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVcoRouteEntryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // routeDest Field Functions 
    bool hasRouteDest() const { return this->routeDest_ != nullptr;};
    void deleteRouteDest() { this->routeDest_ = nullptr;};
    inline string routeDest() const { DARABONBA_PTR_GET_DEFAULT(routeDest_, "") };
    inline CreateVcoRouteEntryResponseBody& setRouteDest(string routeDest) { DARABONBA_PTR_SET_VALUE(routeDest_, routeDest) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateVcoRouteEntryResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // vpnConnectionId Field Functions 
    bool hasVpnConnectionId() const { return this->vpnConnectionId_ != nullptr;};
    void deleteVpnConnectionId() { this->vpnConnectionId_ = nullptr;};
    inline string vpnConnectionId() const { DARABONBA_PTR_GET_DEFAULT(vpnConnectionId_, "") };
    inline CreateVcoRouteEntryResponseBody& setVpnConnectionId(string vpnConnectionId) { DARABONBA_PTR_SET_VALUE(vpnConnectionId_, vpnConnectionId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline CreateVcoRouteEntryResponseBody& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The timestamp when the destination-based route was created. Unit: milliseconds.
    // 
    // This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The description of the destination-based route.
    std::shared_ptr<string> description_ = nullptr;
    // The next hop of the destination-based route.
    std::shared_ptr<string> nextHop_ = nullptr;
    // The tunneling protocol.
    // 
    // The value is set to **Ipsec**, which indicates the IPsec tunneling protocol.
    std::shared_ptr<string> overlayMode_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The destination CIDR block of the destination-based route.
    std::shared_ptr<string> routeDest_ = nullptr;
    // The status of the destination-based route.
    // 
    // Only **published** is returned, which indicates that the current route is published to the transit router.
    std::shared_ptr<string> state_ = nullptr;
    // The ID of the IPsec-VPN connection.
    std::shared_ptr<string> vpnConnectionId_ = nullptr;
    // The weight of the destination-based route. Valid values:
    // 
    // *   **0**: a low priority.
    // *   **100**: a high priority.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
