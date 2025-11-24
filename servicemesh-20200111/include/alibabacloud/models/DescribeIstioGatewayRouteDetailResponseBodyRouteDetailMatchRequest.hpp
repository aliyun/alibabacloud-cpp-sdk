// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILMATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEISTIOGATEWAYROUTEDETAILRESPONSEBODYROUTEDETAILMATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes.hpp>
#include <alibabacloud/models/DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(TLSMatchAttributes, TLSMatchAttributes_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(TLSMatchAttributes, TLSMatchAttributes_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest &&) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest() = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& operator=(const DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest &) = default ;
    DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& operator=(DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->ports_ == nullptr && return this->TLSMatchAttributes_ == nullptr && return this->URI_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders>) };
    inline vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setHeaders(const vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setHeaders(vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<int32_t> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
    inline vector<int32_t> ports() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // TLSMatchAttributes Field Functions 
    bool hasTLSMatchAttributes() const { return this->TLSMatchAttributes_ != nullptr;};
    void deleteTLSMatchAttributes() { this->TLSMatchAttributes_ = nullptr;};
    inline const vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes> & TLSMatchAttributes() const { DARABONBA_PTR_GET_CONST(TLSMatchAttributes_, vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes>) };
    inline vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes> TLSMatchAttributes() { DARABONBA_PTR_GET(TLSMatchAttributes_, vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes>) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setTLSMatchAttributes(const vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes> & TLSMatchAttributes) { DARABONBA_PTR_SET_VALUE(TLSMatchAttributes_, TLSMatchAttributes) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setTLSMatchAttributes(vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes> && TLSMatchAttributes) { DARABONBA_PTR_SET_RVALUE(TLSMatchAttributes_, TLSMatchAttributes) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI & URI() const { DARABONBA_PTR_GET_CONST(URI_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI) };
    inline Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI URI() { DARABONBA_PTR_GET(URI_, Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setURI(const Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI & URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };
    inline DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequest& setURI(Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI && URI) { DARABONBA_PTR_SET_RVALUE(URI_, URI) };


  protected:
    // The request headers to be matched.
    std::shared_ptr<vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestHeaders>> headers_ = nullptr;
    // The ports.
    std::shared_ptr<vector<int32_t>> ports_ = nullptr;
    // The matching rules for Transport Layer Security (TLS) traffic.
    std::shared_ptr<vector<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestTLSMatchAttributes>> TLSMatchAttributes_ = nullptr;
    // The matching rule for URIs.
    std::shared_ptr<Models::DescribeIstioGatewayRouteDetailResponseBodyRouteDetailMatchRequestURI> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
