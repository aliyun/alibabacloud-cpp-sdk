// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEMATCHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOGATEWAYROUTESREQUESTGATEWAYROUTEMATCHREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes.hpp>
#include <alibabacloud/models/UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(TLSMatchAttributes, TLSMatchAttributes_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(TLSMatchAttributes, TLSMatchAttributes_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
    };
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest(const UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest(UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest &&) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest() = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& operator=(const UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest &) = default ;
    UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& operator=(UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->ports_ == nullptr && return this->TLSMatchAttributes_ == nullptr && return this->URI_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders> & headers() const { DARABONBA_PTR_GET_CONST(headers_, vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders>) };
    inline vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders> headers() { DARABONBA_PTR_GET(headers_, vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders>) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setHeaders(const vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setHeaders(vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline const vector<int32_t> & ports() const { DARABONBA_PTR_GET_CONST(ports_, vector<int32_t>) };
    inline vector<int32_t> ports() { DARABONBA_PTR_GET(ports_, vector<int32_t>) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setPorts(const vector<int32_t> & ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setPorts(vector<int32_t> && ports) { DARABONBA_PTR_SET_RVALUE(ports_, ports) };


    // TLSMatchAttributes Field Functions 
    bool hasTLSMatchAttributes() const { return this->TLSMatchAttributes_ != nullptr;};
    void deleteTLSMatchAttributes() { this->TLSMatchAttributes_ = nullptr;};
    inline const vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes> & TLSMatchAttributes() const { DARABONBA_PTR_GET_CONST(TLSMatchAttributes_, vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes>) };
    inline vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes> TLSMatchAttributes() { DARABONBA_PTR_GET(TLSMatchAttributes_, vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes>) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setTLSMatchAttributes(const vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes> & TLSMatchAttributes) { DARABONBA_PTR_SET_VALUE(TLSMatchAttributes_, TLSMatchAttributes) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setTLSMatchAttributes(vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes> && TLSMatchAttributes) { DARABONBA_PTR_SET_RVALUE(TLSMatchAttributes_, TLSMatchAttributes) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline const Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI & URI() const { DARABONBA_PTR_GET_CONST(URI_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI) };
    inline Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI URI() { DARABONBA_PTR_GET(URI_, Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setURI(const Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI & URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };
    inline UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequest& setURI(Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI && URI) { DARABONBA_PTR_SET_RVALUE(URI_, URI) };


  protected:
    // The request headers to be matched.
    std::shared_ptr<vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestHeaders>> headers_ = nullptr;
    // The ports.
    std::shared_ptr<vector<int32_t>> ports_ = nullptr;
    // The matching rule for Transport Layer Security (TLS) traffic.
    std::shared_ptr<vector<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestTLSMatchAttributes>> TLSMatchAttributes_ = nullptr;
    // The matching rule for URIs.
    std::shared_ptr<Models::UpdateIstioGatewayRoutesRequestGatewayRouteMatchRequestURI> URI_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
