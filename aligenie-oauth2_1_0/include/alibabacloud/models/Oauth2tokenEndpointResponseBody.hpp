// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OAUTH2TOKENENDPOINTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_OAUTH2TOKENENDPOINTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class OAuth2TokenEndpointResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OAuth2TokenEndpointResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(ExpiresIn, expiresIn_);
      DARABONBA_PTR_TO_JSON(RefreshToken, refreshToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(TokenType, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, OAuth2TokenEndpointResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(ExpiresIn, expiresIn_);
      DARABONBA_PTR_FROM_JSON(RefreshToken, refreshToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(TokenType, tokenType_);
    };
    OAuth2TokenEndpointResponseBody() = default ;
    OAuth2TokenEndpointResponseBody(const OAuth2TokenEndpointResponseBody &) = default ;
    OAuth2TokenEndpointResponseBody(OAuth2TokenEndpointResponseBody &&) = default ;
    OAuth2TokenEndpointResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OAuth2TokenEndpointResponseBody() = default ;
    OAuth2TokenEndpointResponseBody& operator=(const OAuth2TokenEndpointResponseBody &) = default ;
    OAuth2TokenEndpointResponseBody& operator=(OAuth2TokenEndpointResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessToken_ != nullptr
        && this->expiresIn_ != nullptr && this->refreshToken_ != nullptr && this->requestId_ != nullptr && this->scope_ != nullptr && this->tokenType_ != nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline OAuth2TokenEndpointResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // expiresIn Field Functions 
    bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
    void deleteExpiresIn() { this->expiresIn_ = nullptr;};
    inline int64_t expiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
    inline OAuth2TokenEndpointResponseBody& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline OAuth2TokenEndpointResponseBody& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline OAuth2TokenEndpointResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline OAuth2TokenEndpointResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string tokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline OAuth2TokenEndpointResponseBody& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<int64_t> expiresIn_ = nullptr;
    std::shared_ptr<string> refreshToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> scope_ = nullptr;
    std::shared_ptr<string> tokenType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
