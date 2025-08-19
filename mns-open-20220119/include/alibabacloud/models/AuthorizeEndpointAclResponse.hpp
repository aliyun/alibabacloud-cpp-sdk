// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTHORIZEENDPOINTACLRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_AUTHORIZEENDPOINTACLRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <alibabacloud/models/AuthorizeEndpointAclResponseBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MnsOpen20220119
{
namespace Models
{
  class AuthorizeEndpointAclResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AuthorizeEndpointAclResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, AuthorizeEndpointAclResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    AuthorizeEndpointAclResponse() = default ;
    AuthorizeEndpointAclResponse(const AuthorizeEndpointAclResponse &) = default ;
    AuthorizeEndpointAclResponse(AuthorizeEndpointAclResponse &&) = default ;
    AuthorizeEndpointAclResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AuthorizeEndpointAclResponse() = default ;
    AuthorizeEndpointAclResponse& operator=(const AuthorizeEndpointAclResponse &) = default ;
    AuthorizeEndpointAclResponse& operator=(AuthorizeEndpointAclResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->headers_ != nullptr
        && this->statusCode_ != nullptr && this->body_ != nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & headers() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> headers() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline AuthorizeEndpointAclResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline AuthorizeEndpointAclResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline AuthorizeEndpointAclResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const AuthorizeEndpointAclResponseBody & body() const { DARABONBA_PTR_GET_CONST(body_, AuthorizeEndpointAclResponseBody) };
    inline AuthorizeEndpointAclResponseBody body() { DARABONBA_PTR_GET(body_, AuthorizeEndpointAclResponseBody) };
    inline AuthorizeEndpointAclResponse& setBody(const AuthorizeEndpointAclResponseBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline AuthorizeEndpointAclResponse& setBody(AuthorizeEndpointAclResponseBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<map<string, string>> headers_ = nullptr;
    std::shared_ptr<int32_t> statusCode_ = nullptr;
    std::shared_ptr<AuthorizeEndpointAclResponseBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MnsOpen20220119
#endif
