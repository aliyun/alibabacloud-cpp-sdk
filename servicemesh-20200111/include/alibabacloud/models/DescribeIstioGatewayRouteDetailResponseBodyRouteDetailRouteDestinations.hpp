// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& obj) { 
      DARABONBA_PTR_TO_JSON(Destination, destination_);
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& obj) { 
      DARABONBA_PTR_FROM_JSON(Destination, destination_);
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->destination_ == nullptr
        && return this->headers_ == nullptr && return this->weight_ == nullptr; };
    // destination Field Functions 
    bool hasDestination() const { return this->destination_ != nullptr;};
    void deleteDestination() { this->destination_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination & destination() const { DARABONBA_PTR_GET_CONST(destination_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination destination() { DARABONBA_PTR_GET(destination_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& setDestination(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination & destination) { DARABONBA_PTR_SET_VALUE(destination_, destination) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& setDestination(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination && destination) { DARABONBA_PTR_SET_RVALUE(destination_, destination) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders & headers() const { DARABONBA_PTR_GET_CONST(headers_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders headers() { DARABONBA_PTR_GET(headers_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& setHeaders(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& setHeaders(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinations& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The unique endpoint of the destination service to which the specified requests are sent.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsDestination> destination_ = nullptr;
    // The list of the request headers to be matched.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders> headers_ = nullptr;
    // The traffic weight. Valid values: 1 to 100.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
