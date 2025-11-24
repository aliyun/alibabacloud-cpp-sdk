// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPEC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig.hpp>
#include <alibabacloud/models/DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpec& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancer, loadBalancer_);
      DARABONBA_PTR_TO_JSON(MeshConfig, meshConfig_);
      DARABONBA_PTR_TO_JSON(Network, network_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancer, loadBalancer_);
      DARABONBA_PTR_FROM_JSON(MeshConfig, meshConfig_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpec() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpec(const DescribeServiceMeshDetailResponseBodyServiceMeshSpec &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpec(DescribeServiceMeshDetailResponseBodyServiceMeshSpec &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpec() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpec& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpec &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpec& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancer_ == nullptr
        && return this->meshConfig_ == nullptr && return this->network_ == nullptr; };
    // loadBalancer Field Functions 
    bool hasLoadBalancer() const { return this->loadBalancer_ != nullptr;};
    void deleteLoadBalancer() { this->loadBalancer_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer & loadBalancer() const { DARABONBA_PTR_GET_CONST(loadBalancer_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer loadBalancer() { DARABONBA_PTR_GET(loadBalancer_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpec& setLoadBalancer(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer & loadBalancer) { DARABONBA_PTR_SET_VALUE(loadBalancer_, loadBalancer) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpec& setLoadBalancer(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer && loadBalancer) { DARABONBA_PTR_SET_RVALUE(loadBalancer_, loadBalancer) };


    // meshConfig Field Functions 
    bool hasMeshConfig() const { return this->meshConfig_ != nullptr;};
    void deleteMeshConfig() { this->meshConfig_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig & meshConfig() const { DARABONBA_PTR_GET_CONST(meshConfig_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig meshConfig() { DARABONBA_PTR_GET(meshConfig_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpec& setMeshConfig(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig & meshConfig) { DARABONBA_PTR_SET_VALUE(meshConfig_, meshConfig) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpec& setMeshConfig(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig && meshConfig) { DARABONBA_PTR_SET_RVALUE(meshConfig_, meshConfig) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork) };
    inline Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork network() { DARABONBA_PTR_GET(network_, Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpec& setNetwork(const Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpec& setNetwork(Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


  protected:
    // The information about the load balancer.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecLoadBalancer> loadBalancer_ = nullptr;
    // The configurations of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfig> meshConfig_ = nullptr;
    // The network configurations of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshDetailResponseBodyServiceMeshSpecNetwork> network_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
