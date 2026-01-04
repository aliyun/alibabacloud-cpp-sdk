// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECUSTOMPRIVACYPOLICYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DISABLECUSTOMPRIVACYPOLICYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/DisableCustomPrivacyPolicyResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableCustomPrivacyPolicyResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableCustomPrivacyPolicyResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DisableCustomPrivacyPolicyResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DisableCustomPrivacyPolicyResponse() = default ;
    DisableCustomPrivacyPolicyResponse(const DisableCustomPrivacyPolicyResponse &) = default ;
    DisableCustomPrivacyPolicyResponse(DisableCustomPrivacyPolicyResponse &&) = default ;
    DisableCustomPrivacyPolicyResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableCustomPrivacyPolicyResponse() = default ;
    DisableCustomPrivacyPolicyResponse& operator=(const DisableCustomPrivacyPolicyResponse &) = default ;
    DisableCustomPrivacyPolicyResponse& operator=(DisableCustomPrivacyPolicyResponse &&) = default ;
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
    inline DisableCustomPrivacyPolicyResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DisableCustomPrivacyPolicyResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DisableCustomPrivacyPolicyResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const DisableCustomPrivacyPolicyResponseBody & getBody() const { DARABONBA_PTR_GET_CONST(body_, DisableCustomPrivacyPolicyResponseBody) };
    inline DisableCustomPrivacyPolicyResponseBody getBody() { DARABONBA_PTR_GET(body_, DisableCustomPrivacyPolicyResponseBody) };
    inline DisableCustomPrivacyPolicyResponse& setBody(const DisableCustomPrivacyPolicyResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DisableCustomPrivacyPolicyResponse& setBody(DisableCustomPrivacyPolicyResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<DisableCustomPrivacyPolicyResponseBody> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
