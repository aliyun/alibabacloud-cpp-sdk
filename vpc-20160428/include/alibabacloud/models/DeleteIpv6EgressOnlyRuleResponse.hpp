// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIPV6EGRESSONLYRULERESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DELETEIPV6EGRESSONLYRULERESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DeleteIpv6EgressOnlyRuleResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DeleteIpv6EgressOnlyRuleResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteIpv6EgressOnlyRuleResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteIpv6EgressOnlyRuleResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DeleteIpv6EgressOnlyRuleResponse() = default ;
    DeleteIpv6EgressOnlyRuleResponse(const DeleteIpv6EgressOnlyRuleResponse &) = default ;
    DeleteIpv6EgressOnlyRuleResponse(DeleteIpv6EgressOnlyRuleResponse &&) = default ;
    DeleteIpv6EgressOnlyRuleResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteIpv6EgressOnlyRuleResponse() = default ;
    DeleteIpv6EgressOnlyRuleResponse& operator=(const DeleteIpv6EgressOnlyRuleResponse &) = default ;
    DeleteIpv6EgressOnlyRuleResponse& operator=(DeleteIpv6EgressOnlyRuleResponse &&) = default ;
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
    inline DeleteIpv6EgressOnlyRuleResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DeleteIpv6EgressOnlyRuleResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DeleteIpv6EgressOnlyRuleResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DeleteIpv6EgressOnlyRuleResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DeleteIpv6EgressOnlyRuleResponseBody) };
    inline DeleteIpv6EgressOnlyRuleResponseBody getBody() { DARABONBA_PTR_GET(body_, DeleteIpv6EgressOnlyRuleResponseBody) };
    inline DeleteIpv6EgressOnlyRuleResponse& setBody(const DeleteIpv6EgressOnlyRuleResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DeleteIpv6EgressOnlyRuleResponse& setBody(DeleteIpv6EgressOnlyRuleResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DeleteIpv6EgressOnlyRuleResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
