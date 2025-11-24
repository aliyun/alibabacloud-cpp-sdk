// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESWIMLANEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATESWIMLANEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateSwimLaneGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateSwimLaneGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FallbackTarget, fallbackTarget_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(IngressRoutingStrategy, ingressRoutingStrategy_);
      DARABONBA_PTR_TO_JSON(ServiceLevelFallbackTarget, serviceLevelFallbackTarget_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_TO_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_TO_JSON(WeightedIngressRule, weightedIngressRule_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateSwimLaneGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FallbackTarget, fallbackTarget_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(IngressRoutingStrategy, ingressRoutingStrategy_);
      DARABONBA_PTR_FROM_JSON(ServiceLevelFallbackTarget, serviceLevelFallbackTarget_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
      DARABONBA_PTR_FROM_JSON(ServicesList, servicesList_);
      DARABONBA_PTR_FROM_JSON(WeightedIngressRule, weightedIngressRule_);
    };
    UpdateSwimLaneGroupRequest() = default ;
    UpdateSwimLaneGroupRequest(const UpdateSwimLaneGroupRequest &) = default ;
    UpdateSwimLaneGroupRequest(UpdateSwimLaneGroupRequest &&) = default ;
    UpdateSwimLaneGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateSwimLaneGroupRequest() = default ;
    UpdateSwimLaneGroupRequest& operator=(const UpdateSwimLaneGroupRequest &) = default ;
    UpdateSwimLaneGroupRequest& operator=(UpdateSwimLaneGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fallbackTarget_ == nullptr
        && return this->groupName_ == nullptr && return this->ingressRoutingStrategy_ == nullptr && return this->serviceLevelFallbackTarget_ == nullptr && return this->serviceMeshId_ == nullptr && return this->servicesList_ == nullptr
        && return this->weightedIngressRule_ == nullptr; };
    // fallbackTarget Field Functions 
    bool hasFallbackTarget() const { return this->fallbackTarget_ != nullptr;};
    void deleteFallbackTarget() { this->fallbackTarget_ = nullptr;};
    inline string fallbackTarget() const { DARABONBA_PTR_GET_DEFAULT(fallbackTarget_, "") };
    inline UpdateSwimLaneGroupRequest& setFallbackTarget(string fallbackTarget) { DARABONBA_PTR_SET_VALUE(fallbackTarget_, fallbackTarget) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateSwimLaneGroupRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // ingressRoutingStrategy Field Functions 
    bool hasIngressRoutingStrategy() const { return this->ingressRoutingStrategy_ != nullptr;};
    void deleteIngressRoutingStrategy() { this->ingressRoutingStrategy_ = nullptr;};
    inline string ingressRoutingStrategy() const { DARABONBA_PTR_GET_DEFAULT(ingressRoutingStrategy_, "") };
    inline UpdateSwimLaneGroupRequest& setIngressRoutingStrategy(string ingressRoutingStrategy) { DARABONBA_PTR_SET_VALUE(ingressRoutingStrategy_, ingressRoutingStrategy) };


    // serviceLevelFallbackTarget Field Functions 
    bool hasServiceLevelFallbackTarget() const { return this->serviceLevelFallbackTarget_ != nullptr;};
    void deleteServiceLevelFallbackTarget() { this->serviceLevelFallbackTarget_ = nullptr;};
    inline string serviceLevelFallbackTarget() const { DARABONBA_PTR_GET_DEFAULT(serviceLevelFallbackTarget_, "") };
    inline UpdateSwimLaneGroupRequest& setServiceLevelFallbackTarget(string serviceLevelFallbackTarget) { DARABONBA_PTR_SET_VALUE(serviceLevelFallbackTarget_, serviceLevelFallbackTarget) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateSwimLaneGroupRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


    // servicesList Field Functions 
    bool hasServicesList() const { return this->servicesList_ != nullptr;};
    void deleteServicesList() { this->servicesList_ = nullptr;};
    inline string servicesList() const { DARABONBA_PTR_GET_DEFAULT(servicesList_, "") };
    inline UpdateSwimLaneGroupRequest& setServicesList(string servicesList) { DARABONBA_PTR_SET_VALUE(servicesList_, servicesList) };


    // weightedIngressRule Field Functions 
    bool hasWeightedIngressRule() const { return this->weightedIngressRule_ != nullptr;};
    void deleteWeightedIngressRule() { this->weightedIngressRule_ = nullptr;};
    inline string weightedIngressRule() const { DARABONBA_PTR_GET_DEFAULT(weightedIngressRule_, "") };
    inline UpdateSwimLaneGroupRequest& setWeightedIngressRule(string weightedIngressRule) { DARABONBA_PTR_SET_VALUE(weightedIngressRule_, weightedIngressRule) };


  protected:
    // The name of the baseline lane in the lane group if the lane group is in permissive mode. This parameter is valid only for a lane group in permissive mode.
    std::shared_ptr<string> fallbackTarget_ = nullptr;
    // The name of the lane group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The policy used to route requests among multiple lanes in a lane group. Valid values:
    // 
    // *   weighted: a weight-based request routing policy. Requests are matched based on uniform rules and then routed to different lanes in a lane group at a specified ratio.
    // *   rule-based: a rule-based request routing policy. Each lane is configured with request routing rules. Only requests that match the request routing rules of a specific lane are routed to the lane.
    std::shared_ptr<string> ingressRoutingStrategy_ = nullptr;
    std::shared_ptr<string> serviceLevelFallbackTarget_ = nullptr;
    // The Service Mesh (ASM) instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
    // A list of services associated with the lane group.
    std::shared_ptr<string> servicesList_ = nullptr;
    // The weight-based request routing rules for a lane group. You can specify this parameter only when the IngressRoutingStrategy parameter is set to weighted.
    std::shared_ptr<string> weightedIngressRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
