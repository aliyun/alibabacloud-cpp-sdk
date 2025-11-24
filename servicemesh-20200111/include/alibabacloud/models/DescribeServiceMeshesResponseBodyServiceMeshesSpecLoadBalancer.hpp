// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECLOADBALANCER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPECLOADBALANCER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& obj) { 
      DARABONBA_PTR_TO_JSON(ApiServerLoadbalancerId, apiServerLoadbalancerId_);
      DARABONBA_PTR_TO_JSON(ApiServerPublicEip, apiServerPublicEip_);
      DARABONBA_PTR_TO_JSON(PilotPublicEip, pilotPublicEip_);
      DARABONBA_PTR_TO_JSON(PilotPublicLoadbalancerId, pilotPublicLoadbalancerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiServerLoadbalancerId, apiServerLoadbalancerId_);
      DARABONBA_PTR_FROM_JSON(ApiServerPublicEip, apiServerPublicEip_);
      DARABONBA_PTR_FROM_JSON(PilotPublicEip, pilotPublicEip_);
      DARABONBA_PTR_FROM_JSON(PilotPublicLoadbalancerId, pilotPublicLoadbalancerId_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer(const DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer(DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiServerLoadbalancerId_ == nullptr
        && return this->apiServerPublicEip_ == nullptr && return this->pilotPublicEip_ == nullptr && return this->pilotPublicLoadbalancerId_ == nullptr; };
    // apiServerLoadbalancerId Field Functions 
    bool hasApiServerLoadbalancerId() const { return this->apiServerLoadbalancerId_ != nullptr;};
    void deleteApiServerLoadbalancerId() { this->apiServerLoadbalancerId_ = nullptr;};
    inline string apiServerLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(apiServerLoadbalancerId_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& setApiServerLoadbalancerId(string apiServerLoadbalancerId) { DARABONBA_PTR_SET_VALUE(apiServerLoadbalancerId_, apiServerLoadbalancerId) };


    // apiServerPublicEip Field Functions 
    bool hasApiServerPublicEip() const { return this->apiServerPublicEip_ != nullptr;};
    void deleteApiServerPublicEip() { this->apiServerPublicEip_ = nullptr;};
    inline bool apiServerPublicEip() const { DARABONBA_PTR_GET_DEFAULT(apiServerPublicEip_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& setApiServerPublicEip(bool apiServerPublicEip) { DARABONBA_PTR_SET_VALUE(apiServerPublicEip_, apiServerPublicEip) };


    // pilotPublicEip Field Functions 
    bool hasPilotPublicEip() const { return this->pilotPublicEip_ != nullptr;};
    void deletePilotPublicEip() { this->pilotPublicEip_ = nullptr;};
    inline bool pilotPublicEip() const { DARABONBA_PTR_GET_DEFAULT(pilotPublicEip_, false) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& setPilotPublicEip(bool pilotPublicEip) { DARABONBA_PTR_SET_VALUE(pilotPublicEip_, pilotPublicEip) };


    // pilotPublicLoadbalancerId Field Functions 
    bool hasPilotPublicLoadbalancerId() const { return this->pilotPublicLoadbalancerId_ != nullptr;};
    void deletePilotPublicLoadbalancerId() { this->pilotPublicLoadbalancerId_ = nullptr;};
    inline string pilotPublicLoadbalancerId() const { DARABONBA_PTR_GET_DEFAULT(pilotPublicLoadbalancerId_, "") };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer& setPilotPublicLoadbalancerId(string pilotPublicLoadbalancerId) { DARABONBA_PTR_SET_VALUE(pilotPublicLoadbalancerId_, pilotPublicLoadbalancerId) };


  protected:
    // The ID of the CLB instance that is used when the API server is exposed to the Internet.
    std::shared_ptr<string> apiServerLoadbalancerId_ = nullptr;
    // Indicates whether the API server is exposed to the Internet. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> apiServerPublicEip_ = nullptr;
    // Indicates whether Istio Pilot is exposed to the Internet. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> pilotPublicEip_ = nullptr;
    // The ID of the Classic Load Balancer (CLB) instance that is used when Istio Pilot is exposed to the Internet.
    std::shared_ptr<string> pilotPublicLoadbalancerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
