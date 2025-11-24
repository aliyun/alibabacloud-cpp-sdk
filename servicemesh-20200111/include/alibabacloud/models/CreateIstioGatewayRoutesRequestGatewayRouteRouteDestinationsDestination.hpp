// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONSDESTINATION_HPP_
#define ALIBABACLOUD_MODELS_CREATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONSDESTINATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Subset, subset_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Subset, subset_);
    };
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination(const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination(CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &&) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination() = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& operator=(const CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &) = default ;
    CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& operator=(CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->host_ == nullptr
        && return this->port_ == nullptr && return this->subset_ == nullptr; };
    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline const Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort & port() const { DARABONBA_PTR_GET_CONST(port_, Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort) };
    inline Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort port() { DARABONBA_PTR_GET(port_, Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setPort(const Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort & port) { DARABONBA_PTR_SET_VALUE(port_, port) };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setPort(Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort && port) { DARABONBA_PTR_SET_RVALUE(port_, port) };


    // subset Field Functions 
    bool hasSubset() const { return this->subset_ != nullptr;};
    void deleteSubset() { this->subset_ = nullptr;};
    inline string subset() const { DARABONBA_PTR_GET_DEFAULT(subset_, "") };
    inline CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setSubset(string subset) { DARABONBA_PTR_SET_VALUE(subset_, subset) };


  protected:
    // The name of the service defined in the service registry.
    std::shared_ptr<string> host_ = nullptr;
    // The port.
    std::shared_ptr<Models::CreateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort> port_ = nullptr;
    // The name of the service subset.
    std::shared_ptr<string> subset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
