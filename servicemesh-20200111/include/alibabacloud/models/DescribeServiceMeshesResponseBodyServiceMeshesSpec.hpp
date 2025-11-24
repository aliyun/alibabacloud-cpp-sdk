// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPEC_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHESRESPONSEBODYSERVICEMESHESSPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig.hpp>
#include <alibabacloud/models/DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshesResponseBodyServiceMeshesSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshesResponseBodyServiceMeshesSpec& obj) { 
      DARABONBA_PTR_TO_JSON(LoadBalancer, loadBalancer_);
      DARABONBA_PTR_TO_JSON(MeshConfig, meshConfig_);
      DARABONBA_PTR_TO_JSON(Network, network_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshesResponseBodyServiceMeshesSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(LoadBalancer, loadBalancer_);
      DARABONBA_PTR_FROM_JSON(MeshConfig, meshConfig_);
      DARABONBA_PTR_FROM_JSON(Network, network_);
    };
    DescribeServiceMeshesResponseBodyServiceMeshesSpec() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpec(const DescribeServiceMeshesResponseBodyServiceMeshesSpec &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpec(DescribeServiceMeshesResponseBodyServiceMeshesSpec &&) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshesResponseBodyServiceMeshesSpec() = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpec& operator=(const DescribeServiceMeshesResponseBodyServiceMeshesSpec &) = default ;
    DescribeServiceMeshesResponseBodyServiceMeshesSpec& operator=(DescribeServiceMeshesResponseBodyServiceMeshesSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->loadBalancer_ == nullptr
        && return this->meshConfig_ == nullptr && return this->network_ == nullptr; };
    // loadBalancer Field Functions 
    bool hasLoadBalancer() const { return this->loadBalancer_ != nullptr;};
    void deleteLoadBalancer() { this->loadBalancer_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer & loadBalancer() const { DARABONBA_PTR_GET_CONST(loadBalancer_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer loadBalancer() { DARABONBA_PTR_GET(loadBalancer_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpec& setLoadBalancer(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer & loadBalancer) { DARABONBA_PTR_SET_VALUE(loadBalancer_, loadBalancer) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpec& setLoadBalancer(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer && loadBalancer) { DARABONBA_PTR_SET_RVALUE(loadBalancer_, loadBalancer) };


    // meshConfig Field Functions 
    bool hasMeshConfig() const { return this->meshConfig_ != nullptr;};
    void deleteMeshConfig() { this->meshConfig_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig & meshConfig() const { DARABONBA_PTR_GET_CONST(meshConfig_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig meshConfig() { DARABONBA_PTR_GET(meshConfig_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpec& setMeshConfig(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig & meshConfig) { DARABONBA_PTR_SET_VALUE(meshConfig_, meshConfig) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpec& setMeshConfig(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig && meshConfig) { DARABONBA_PTR_SET_RVALUE(meshConfig_, meshConfig) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork) };
    inline Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork network() { DARABONBA_PTR_GET(network_, Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpec& setNetwork(const Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline DescribeServiceMeshesResponseBodyServiceMeshesSpec& setNetwork(Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


  protected:
    // The information about load balancing.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecLoadBalancer> loadBalancer_ = nullptr;
    // The configurations of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecMeshConfig> meshConfig_ = nullptr;
    // The network configurations of the ASM instance.
    std::shared_ptr<Models::DescribeServiceMeshesResponseBodyServiceMeshesSpecNetwork> network_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
