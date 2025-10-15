// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEIDENTITYPROVIDERAUTHNRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_ENABLEIDENTITYPROVIDERAUTHNRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/EnableIdentityProviderAuthnResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableIdentityProviderAuthnResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableIdentityProviderAuthnResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, EnableIdentityProviderAuthnResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    EnableIdentityProviderAuthnResponse() = default ;
    EnableIdentityProviderAuthnResponse(const EnableIdentityProviderAuthnResponse &) = default ;
    EnableIdentityProviderAuthnResponse(EnableIdentityProviderAuthnResponse &&) = default ;
    EnableIdentityProviderAuthnResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableIdentityProviderAuthnResponse() = default ;
    EnableIdentityProviderAuthnResponse& operator=(const EnableIdentityProviderAuthnResponse &) = default ;
    EnableIdentityProviderAuthnResponse& operator=(EnableIdentityProviderAuthnResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->headers_ == nullptr
        && return this->statusCode_ == nullptr && return this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline EnableIdentityProviderAuthnResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline EnableIdentityProviderAuthnResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline EnableIdentityProviderAuthnResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const EnableIdentityProviderAuthnResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, EnableIdentityProviderAuthnResponseBody) };
    inline EnableIdentityProviderAuthnResponseBody body() { DARABONBA_PTR_GET(body_, EnableIdentityProviderAuthnResponseBody) };
    inline EnableIdentityProviderAuthnResponse& setBody(const EnableIdentityProviderAuthnResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline EnableIdentityProviderAuthnResponse& setBody(EnableIdentityProviderAuthnResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<EnableIdentityProviderAuthnResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
