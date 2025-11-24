// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONSDESTINATION_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEROUTEDESTINATIONSDESTINATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Subset, subset_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Subset, subset_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination(const UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination(UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination &&) = default ;
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
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort & port() const { DARABONBA_PTR_GET_CONST(port_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort port() { DARABONBA_PTR_GET(port_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setPort(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort & port) { DARABONBA_PTR_SET_VALUE(port_, port) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setPort(Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort && port) { DARABONBA_PTR_SET_RVALUE(port_, port) };


    // subset Field Functions 
    bool hasSubset() const { return this->subset_ != nullptr;};
    void deleteSubset() { this->subset_ = nullptr;};
    inline string subset() const { DARABONBA_PTR_GET_DEFAULT(subset_, "") };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestination& setSubset(string subset) { DARABONBA_PTR_SET_VALUE(subset_, subset) };


  protected:
    // The name of the service defined in the service registry.
    std::shared_ptr<string> host_ = nullptr;
    // The port of the destination service.
    // 
    // >  If the destination service of the route has only one port, this field can be left empty. If the destination service has multiple ports, you must specify the port number.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteRouteDestinationsDestinationPort> port_ = nullptr;
    // The name of the service subset.
    std::shared_ptr<string> subset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
