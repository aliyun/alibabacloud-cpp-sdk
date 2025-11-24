// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSWIMLANEGROUPLISTRESPONSEBODYSWIMLANEGROUPLIST_HPP_
#define ALIBABACLOUD_MODELS_GETSWIMLANEGROUPLISTRESPONSEBODYSWIMLANEGROUPLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class GetSwimLaneGroupListResponseBodySwimLaneGroupList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSwimLaneGroupListResponseBodySwimLaneGroupList& obj) { 
      DARABONBA_PTR_TO_JSON(FallbackTarget, fallbackTarget_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IngressGatewayName, ingressGatewayName_);
      DARABONBA_PTR_TO_JSON(IngressRoutingStrategy, ingressRoutingStrategy_);
      DARABONBA_PTR_TO_JSON(IngressType, ingressType_);
      DARABONBA_PTR_TO_JSON(IsPermissive, isPermissive_);
      DARABONBA_PTR_TO_JSON(RouteHeader, routeHeader_);
      DARABONBA_PTR_TO_JSON(ServiceLevelFallbackTarget, serviceLevelFallbackTarget_);
      DARABONBA_PTR_TO_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_TO_JSON(SwimLaneLabels, swimLaneLabels_);
      DARABONBA_PTR_TO_JSON(TraceHeader, traceHeader_);
      DARABONBA_PTR_TO_JSON(WeightedIngressRule, weightedIngressRule_);
    };
    friend void from_json(const Darabonba::Json& j, GetSwimLaneGroupListResponseBodySwimLaneGroupList& obj) { 
      DARABONBA_PTR_FROM_JSON(FallbackTarget, fallbackTarget_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IngressGatewayName, ingressGatewayName_);
      DARABONBA_PTR_FROM_JSON(IngressRoutingStrategy, ingressRoutingStrategy_);
      DARABONBA_PTR_FROM_JSON(IngressType, ingressType_);
      DARABONBA_PTR_FROM_JSON(IsPermissive, isPermissive_);
      DARABONBA_PTR_FROM_JSON(RouteHeader, routeHeader_);
      DARABONBA_PTR_FROM_JSON(ServiceLevelFallbackTarget, serviceLevelFallbackTarget_);
      DARABONBA_PTR_FROM_JSON(ServiceList, serviceList_);
      DARABONBA_PTR_FROM_JSON(SwimLaneLabels, swimLaneLabels_);
      DARABONBA_PTR_FROM_JSON(TraceHeader, traceHeader_);
      DARABONBA_PTR_FROM_JSON(WeightedIngressRule, weightedIngressRule_);
    };
    GetSwimLaneGroupListResponseBodySwimLaneGroupList() = default ;
    GetSwimLaneGroupListResponseBodySwimLaneGroupList(const GetSwimLaneGroupListResponseBodySwimLaneGroupList &) = default ;
    GetSwimLaneGroupListResponseBodySwimLaneGroupList(GetSwimLaneGroupListResponseBodySwimLaneGroupList &&) = default ;
    GetSwimLaneGroupListResponseBodySwimLaneGroupList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSwimLaneGroupListResponseBodySwimLaneGroupList() = default ;
    GetSwimLaneGroupListResponseBodySwimLaneGroupList& operator=(const GetSwimLaneGroupListResponseBodySwimLaneGroupList &) = default ;
    GetSwimLaneGroupListResponseBodySwimLaneGroupList& operator=(GetSwimLaneGroupListResponseBodySwimLaneGroupList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fallbackTarget_ == nullptr
        && return this->groupName_ == nullptr && return this->ingressGatewayName_ == nullptr && return this->ingressRoutingStrategy_ == nullptr && return this->ingressType_ == nullptr && return this->isPermissive_ == nullptr
        && return this->routeHeader_ == nullptr && return this->serviceLevelFallbackTarget_ == nullptr && return this->serviceList_ == nullptr && return this->swimLaneLabels_ == nullptr && return this->traceHeader_ == nullptr
        && return this->weightedIngressRule_ == nullptr; };
    // fallbackTarget Field Functions 
    bool hasFallbackTarget() const { return this->fallbackTarget_ != nullptr;};
    void deleteFallbackTarget() { this->fallbackTarget_ = nullptr;};
    inline string fallbackTarget() const { DARABONBA_PTR_GET_DEFAULT(fallbackTarget_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setFallbackTarget(string fallbackTarget) { DARABONBA_PTR_SET_VALUE(fallbackTarget_, fallbackTarget) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ingressGatewayName Field Functions 
    bool hasIngressGatewayName() const { return this->ingressGatewayName_ != nullptr;};
    void deleteIngressGatewayName() { this->ingressGatewayName_ = nullptr;};
    inline string ingressGatewayName() const { DARABONBA_PTR_GET_DEFAULT(ingressGatewayName_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setIngressGatewayName(string ingressGatewayName) { DARABONBA_PTR_SET_VALUE(ingressGatewayName_, ingressGatewayName) };


    // ingressRoutingStrategy Field Functions 
    bool hasIngressRoutingStrategy() const { return this->ingressRoutingStrategy_ != nullptr;};
    void deleteIngressRoutingStrategy() { this->ingressRoutingStrategy_ = nullptr;};
    inline string ingressRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(ingressRoutingStrategy_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setIngressRoutingStrategy(string ingressRoutingStrategy) { DARABONBA_PTR_SET_VALUE(ingressRoutingStrategy_, ingressRoutingStrategy) };


    // ingressType Field Functions 
    bool hasIngressType() const { return this->ingressType_ != nullptr;};
    void deleteIngressType() { this->ingressType_ = nullptr;};
    inline string ingressType() const { DARABONBA_PTR_GET_DEFAULT(ingressType_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setIngressType(string ingressType) { DARABONBA_PTR_SET_VALUE(ingressType_, ingressType) };


    // isPermissive Field Functions 
    bool hasIsPermissive() const { return this->isPermissive_ != nullptr;};
    void deleteIsPermissive() { this->isPermissive_ = nullptr;};
    inline bool isPermissive() const { DARABONBA_PTR_GET_DEFAULT(isPermissive_, false) };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setIsPermissive(bool isPermissive) { DARABONBA_PTR_SET_VALUE(isPermissive_, isPermissive) };


    // routeHeader Field Functions 
    bool hasRouteHeader() const { return this->routeHeader_ != nullptr;};
    void deleteRouteHeader() { this->routeHeader_ = nullptr;};
    inline string routeHeader() const { DARABONBA_PTR_GET_DEFAULT(routeHeader_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setRouteHeader(string routeHeader) { DARABONBA_PTR_SET_VALUE(routeHeader_, routeHeader) };


    // serviceLevelFallbackTarget Field Functions 
    bool hasServiceLevelFallbackTarget() const { return this->serviceLevelFallbackTarget_ != nullptr;};
    void deleteServiceLevelFallbackTarget() { this->serviceLevelFallbackTarget_ = nullptr;};
    inline string serviceLevelFallbackTarget() const { DARABONBA_PTR_GET_DEFAULT(serviceLevelFallbackTarget_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setServiceLevelFallbackTarget(string serviceLevelFallbackTarget) { DARABONBA_PTR_SET_VALUE(serviceLevelFallbackTarget_, serviceLevelFallbackTarget) };


    // serviceList Field Functions 
    bool hasServiceList() const { return this->serviceList_ != nullptr;};
    void deleteServiceList() { this->serviceList_ = nullptr;};
    inline string serviceList() const { DARABONBA_PTR_GET_DEFAULT(serviceList_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setServiceList(string serviceList) { DARABONBA_PTR_SET_VALUE(serviceList_, serviceList) };


    // swimLaneLabels Field Functions 
    bool hasSwimLaneLabels() const { return this->swimLaneLabels_ != nullptr;};
    void deleteSwimLaneLabels() { this->swimLaneLabels_ = nullptr;};
    inline string swimLaneLabels() const { DARABONBA_PTR_GET_DEFAULT(swimLaneLabels_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setSwimLaneLabels(string swimLaneLabels) { DARABONBA_PTR_SET_VALUE(swimLaneLabels_, swimLaneLabels) };


    // traceHeader Field Functions 
    bool hasTraceHeader() const { return this->traceHeader_ != nullptr;};
    void deleteTraceHeader() { this->traceHeader_ = nullptr;};
    inline string traceHeader() const { DARABONBA_PTR_GET_DEFAULT(traceHeader_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setTraceHeader(string traceHeader) { DARABONBA_PTR_SET_VALUE(traceHeader_, traceHeader) };


    // weightedIngressRule Field Functions 
    bool hasWeightedIngressRule() const { return this->weightedIngressRule_ != nullptr;};
    void deleteWeightedIngressRule() { this->weightedIngressRule_ = nullptr;};
    inline string weightedIngressRule() const { DARABONBA_PTR_GET_DEFAULT(weightedIngressRule_, "") };
    inline GetSwimLaneGroupListResponseBodySwimLaneGroupList& setWeightedIngressRule(string weightedIngressRule) { DARABONBA_PTR_SET_VALUE(weightedIngressRule_, weightedIngressRule) };


  protected:
    // The name of the baseline lane of the lane group in permissive mode. This parameter is valid only for a lane group in permissive mode.
    std::shared_ptr<string> fallbackTarget_ = nullptr;
    // The name of a lane group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The name of the ASM ingress gateway.
    std::shared_ptr<string> ingressGatewayName_ = nullptr;
    // The policy used to route requests among multiple lanes in a lane group. Valid values:
    // 
    // *   weighted: a weight-based request routing policy. Requests are matched based on uniform rules and then routed to different lanes in a lane group at a specified ratio.
    // *   rule-based: a rule-based request routing policy. Each lane is configured with request routing rules. Only requests that match the request routing rules of a specific lane are routed to the lane.
    std::shared_ptr<string> ingressRoutingStrategy_ = nullptr;
    // The type of gateways in which you can configure request routing rules. You can configure request routing rules only in ASM gateways.
    std::shared_ptr<string> ingressType_ = nullptr;
    // Indicates whether the lane group is in permissive mode.
    std::shared_ptr<bool> isPermissive_ = nullptr;
    // The request routing header of the lane group. It is valid only for a lane group in permissive mode.
    std::shared_ptr<string> routeHeader_ = nullptr;
    std::shared_ptr<string> serviceLevelFallbackTarget_ = nullptr;
    // The Services associated with the lane group.
    std::shared_ptr<string> serviceList_ = nullptr;
    // A serialized JSON string. The keys of the JSON object are the keys of the labels owned by all services in the lane group, and the values of the JSON object are arrays of all possible label values of the services in the lane group.
    std::shared_ptr<string> swimLaneLabels_ = nullptr;
    // The end-to-end (E2E) pass-through request header of the lane group. It is valid only for a lane group in permissive mode.
    std::shared_ptr<string> traceHeader_ = nullptr;
    // The weight-based request routing rules for a lane group. This parameter is returned only when the IngressRoutingStrategy parameter is set to weighted.
    std::shared_ptr<string> weightedIngressRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
