// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFIREWALLV2ROUTEPOLICIESRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEFIREWALLV2ROUTEPOLICIESRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteFirewallV2RoutePoliciesResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteFirewallV2RoutePoliciesResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFirewallV2RoutePoliciesResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFirewallV2RoutePoliciesResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteFirewallV2RoutePoliciesResponse() = default ;
    DeleteFirewallV2RoutePoliciesResponse(const DeleteFirewallV2RoutePoliciesResponse &) = default ;
    DeleteFirewallV2RoutePoliciesResponse(DeleteFirewallV2RoutePoliciesResponse &&) = default ;
    DeleteFirewallV2RoutePoliciesResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFirewallV2RoutePoliciesResponse() = default ;
    DeleteFirewallV2RoutePoliciesResponse& operator=(const DeleteFirewallV2RoutePoliciesResponse &) = default ;
    DeleteFirewallV2RoutePoliciesResponse& operator=(DeleteFirewallV2RoutePoliciesResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DeleteFirewallV2RoutePoliciesResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteFirewallV2RoutePoliciesResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteFirewallV2RoutePoliciesResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteFirewallV2RoutePoliciesResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteFirewallV2RoutePoliciesResponseBody) };
    inline DeleteFirewallV2RoutePoliciesResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteFirewallV2RoutePoliciesResponseBody) };
    inline DeleteFirewallV2RoutePoliciesResponse& setBody(const DeleteFirewallV2RoutePoliciesResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteFirewallV2RoutePoliciesResponse& setBody(DeleteFirewallV2RoutePoliciesResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteFirewallV2RoutePoliciesResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
