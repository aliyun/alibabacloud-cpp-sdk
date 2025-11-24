// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSDESTINATION_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSDESTINATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& obj) { 
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(Subset, subset_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& obj) { 
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(Subset, subset_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination &&) = default ;
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
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort & port() const { DARABONBA_PTR_GET_CONST(port_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort port() { DARABONBA_PTR_GET(port_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& setPort(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort & port) { DARABONBA_PTR_SET_VALUE(port_, port) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& setPort(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort && port) { DARABONBA_PTR_SET_RVALUE(port_, port) };


    // subset Field Functions 
    bool hasSubset() const { return this->subset_ != nullptr;};
    void deleteSubset() { this->subset_ = nullptr;};
    inline string subset() const { DARABONBA_PTR_GET_DEFAULT(subset_, "") };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination& setSubset(string subset) { DARABONBA_PTR_SET_VALUE(subset_, subset) };


  protected:
    // The name of the service defined in the service registry.
    std::shared_ptr<string> host_ = nullptr;
    // The ports of the specified hosts from which the traffic is routed.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestinationPort> port_ = nullptr;
    // The name of the service subset.
    std::shared_ptr<string> subset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
