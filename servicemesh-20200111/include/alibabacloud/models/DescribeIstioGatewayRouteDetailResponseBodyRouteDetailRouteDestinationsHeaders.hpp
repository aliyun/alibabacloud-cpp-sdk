// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSHEADERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILROUTEDESTINATIONSHEADERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& obj) { 
      DARABONBA_PTR_TO_JSON(Request, request_);
      DARABONBA_PTR_TO_JSON(Response, response_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& obj) { 
      DARABONBA_PTR_FROM_JSON(Request, request_);
      DARABONBA_PTR_FROM_JSON(Response, response_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->request_ == nullptr
        && return this->response_ == nullptr; };
    // request Field Functions 
    bool hasRequest() const { return this->request_ != nullptr;};
    void deleteRequest() { this->request_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest & request() const { DARABONBA_PTR_GET_CONST(request_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest request() { DARABONBA_PTR_GET(request_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& setRequest(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest & request) { DARABONBA_PTR_SET_VALUE(request_, request) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& setRequest(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest && request) { DARABONBA_PTR_SET_RVALUE(request_, request) };


    // response Field Functions 
    bool hasResponse() const { return this->response_ != nullptr;};
    void deleteResponse() { this->response_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse & response() const { DARABONBA_PTR_GET_CONST(response_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse response() { DARABONBA_PTR_GET(response_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& setResponse(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse & response) { DARABONBA_PTR_SET_VALUE(response_, response) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeaders& setResponse(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse && response) { DARABONBA_PTR_SET_RVALUE(response_, response) };


  protected:
    // The request header to be matched.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersRequest> request_ = nullptr;
    // The processing of the headers of the response that is to be returned.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailRouteDestinationsHeadersResponse> response_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
