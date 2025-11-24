// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECLOADBALANCER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECLOADBALANCER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& obj) { 
      DARABONBA_PTR_TO_JSON(ApiServerLoadbalancerId, apiServerLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(ApiServerPublicEip, apiServerPublicEip_);
      DARABONBA_PTR_TO_JSON(ApiServerPublicEipId, apiServerPublicEipId_);
      DARABONBA_PTR_TO_JSON(CanaryPilotLoadBalancerId, canaryPilotLoadBalancerId_);
      DARABONBA_PTR_TO_JSON(CanaryPilotPublicEipId, canaryPilotPublicEipId_);
      DARABONBA_PTR_TO_JSON(PilotPublicEip, pilotPublicEip_);
      DARABONBA_PTR_TO_JSON(PilotPublicEipId, pilotPublicEipId_);
      DARABONBA_PTR_TO_JSON(PilotPublicLoadbalancerId, pilotPublicLoadbalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiServerLoadbalancerId, apiServerLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(ApiServerPublicEip, apiServerPublicEip_);
      DARABONBA_PTR_FROM_JSON(ApiServerPublicEipId, apiServerPublicEipId_);
      DARABONBA_PTR_FROM_JSON(CanaryPilotLoadBalancerId, canaryPilotLoadBalancerId_);
      DARABONBA_PTR_FROM_JSON(CanaryPilotPublicEipId, canaryPilotPublicEipId_);
      DARABONBA_PTR_FROM_JSON(PilotPublicEip, pilotPublicEip_);
      DARABONBA_PTR_FROM_JSON(PilotPublicEipId, pilotPublicEipId_);
      DARABONBA_PTR_FROM_JSON(PilotPublicLoadbalancerId, pilotPublicLoadbalancerId_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer(DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiServerLoadbalancerId_ == nullptr
        && return this->apiServerPublicEip_ == nullptr && return this->apiServerPublicEipId_ == nullptr && return this->canaryPilotLoadBalancerId_ == nullptr && return this->canaryPilotPublicEipId_ == nullptr && return this->pilotPublicEip_ == nullptr
        && return this->pilotPublicEipId_ == nullptr && return this->pilotPublicLoadbalancerId_ == nullptr; };
    // apiServerLoadbalancerId Field Functions 
    bool hasApiServerLoadbalancerId() const { return this->apiServerLoadbalancerId_ != nullptr;};
    void deleteApiServerLoadbalancerId() { this->apiServerLoadbalancerId_ = nullptr;};
    inline string apiServerLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(apiServerLoadbalancerId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setApiServerLoadbalancerId(string apiServerLoadbalancerId) { DARABONBA_PTR_SET_VALUE(apiServerLoadbalancerId_, apiServerLoadbalancerId) };


    // apiServerPublicEip Field Functions 
    bool hasApiServerPublicEip() const { return this->apiServerPublicEip_ != nullptr;};
    void deleteApiServerPublicEip() { this->apiServerPublicEip_ = nullptr;};
    inline bool apiServerPublicEip() const { DARABONBA_PTR_GET_DEFAULT(apiServerPublicEip_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setApiServerPublicEip(bool apiServerPublicEip) { DARABONBA_PTR_SET_VALUE(apiServerPublicEip_, apiServerPublicEip) };


    // apiServerPublicEipId Field Functions 
    bool hasApiServerPublicEipId() const { return this->apiServerPublicEipId_ != nullptr;};
    void deleteApiServerPublicEipId() { this->apiServerPublicEipId_ = nullptr;};
    inline string apiServerPublicEipId() const { DARABONBA_PTR_GET_DEFAULT(apiServerPublicEipId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setApiServerPublicEipId(string apiServerPublicEipId) { DARABONBA_PTR_SET_VALUE(apiServerPublicEipId_, apiServerPublicEipId) };


    // canaryPilotLoadBalancerId Field Functions 
    bool hasCanaryPilotLoadBalancerId() const { return this->canaryPilotLoadBalancerId_ != nullptr;};
    void deleteCanaryPilotLoadBalancerId() { this->canaryPilotLoadBalancerId_ = nullptr;};
    inline string canaryPilotLoadBalancerId() const { DARABONBA_PTR_GET_DEFAULT(canaryPilotLoadBalancerId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setCanaryPilotLoadBalancerId(string canaryPilotLoadBalancerId) { DARABONBA_PTR_SET_VALUE(canaryPilotLoadBalancerId_, canaryPilotLoadBalancerId) };


    // canaryPilotPublicEipId Field Functions 
    bool hasCanaryPilotPublicEipId() const { return this->canaryPilotPublicEipId_ != nullptr;};
    void deleteCanaryPilotPublicEipId() { this->canaryPilotPublicEipId_ = nullptr;};
    inline string canaryPilotPublicEipId() const { DARABONBA_PTR_GET_DEFAULT(canaryPilotPublicEipId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setCanaryPilotPublicEipId(string canaryPilotPublicEipId) { DARABONBA_PTR_SET_VALUE(canaryPilotPublicEipId_, canaryPilotPublicEipId) };


    // pilotPublicEip Field Functions 
    bool hasPilotPublicEip() const { return this->pilotPublicEip_ != nullptr;};
    void deletePilotPublicEip() { this->pilotPublicEip_ = nullptr;};
    inline bool pilotPublicEip() const { DARABONBA_PTR_GET_DEFAULT(pilotPublicEip_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setPilotPublicEip(bool pilotPublicEip) { DARABONBA_PTR_SET_VALUE(pilotPublicEip_, pilotPublicEip) };


    // pilotPublicEipId Field Functions 
    bool hasPilotPublicEipId() const { return this->pilotPublicEipId_ != nullptr;};
    void deletePilotPublicEipId() { this->pilotPublicEipId_ = nullptr;};
    inline string pilotPublicEipId() const { DARABONBA_PTR_GET_DEFAULT(pilotPublicEipId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setPilotPublicEipId(string pilotPublicEipId) { DARABONBA_PTR_SET_VALUE(pilotPublicEipId_, pilotPublicEipId) };


    // pilotPublicLoadbalancerId Field Functions 
    bool hasPilotPublicLoadbalancerId() const { return this->pilotPublicLoadbalancerId_ != nullptr;};
    void deletePilotPublicLoadbalancerId() { this->pilotPublicLoadbalancerId_ = nullptr;};
    inline string pilotPublicLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(pilotPublicLoadbalancerId_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer& setPilotPublicLoadbalancerId(string pilotPublicLoadbalancerId) { DARABONBA_PTR_SET_VALUE(pilotPublicLoadbalancerId_, pilotPublicLoadbalancerId) };


  protected:
    // The ID of the CLB instance that is used when the API server is exposed to the Internet.
    std::shared_ptr<string> apiServerLoadbalancerId_ = nullptr;
    // Indicates whether the API server is exposed to the Internet. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> apiServerPublicEip_ = nullptr;
    // The ID of the endpoint that is used to expose API server to the Internet.
    std::shared_ptr<string> apiServerPublicEipId_ = nullptr;
    // The ID of the Classic Load Balancer (CLB) instance that is used during the canary release of Istio Pilot.
    std::shared_ptr<string> canaryPilotLoadBalancerId_ = nullptr;
    // The ID of the endpoint that is used to expose Istio Pilot to the Internet during canary release.
    std::shared_ptr<string> canaryPilotPublicEipId_ = nullptr;
    // Indicates whether Istio Pilot is exposed to the Internet. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> pilotPublicEip_ = nullptr;
    // The ID of the endpoint that is used to expose Istio Pilot to the Internet.
    std::shared_ptr<string> pilotPublicEipId_ = nullptr;
    // The ID of the Classic Load Balancer (CLB) instance that is used when Istio Pilot is exposed to the Internet.
    std::shared_ptr<string> pilotPublicLoadbalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
