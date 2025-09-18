// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OAUTH2REVOCATIONENDPOINTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OAUTH2REVOCATIONENDPOINTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieoauth2_1_0
{
namespace Models
{
  class OAuth2RevocationEndpointRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OAuth2RevocationEndpointRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TokenTypeHint, tokenTypeHint_);
    };
    friend void from_json(const Darabonba::Json& j, OAuth2RevocationEndpointRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TokenTypeHint, tokenTypeHint_);
    };
    OAuth2RevocationEndpointRequest() = default ;
    OAuth2RevocationEndpointRequest(const OAuth2RevocationEndpointRequest &) = default ;
    OAuth2RevocationEndpointRequest(OAuth2RevocationEndpointRequest &&) = default ;
    OAuth2RevocationEndpointRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OAuth2RevocationEndpointRequest() = default ;
    OAuth2RevocationEndpointRequest& operator=(const OAuth2RevocationEndpointRequest &) = default ;
    OAuth2RevocationEndpointRequest& operator=(OAuth2RevocationEndpointRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->token_ != nullptr
        && this->tokenTypeHint_ != nullptr; };
    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline OAuth2RevocationEndpointRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenTypeHint Field Functions 
    bool hasTokenTypeHint() const { return this->tokenTypeHint_ != nullptr;};
    void deleteTokenTypeHint() { this->tokenTypeHint_ = nullptr;};
    inline string tokenTypeHint() const { DARABONBA_PTR_GET_DEFAULT(tokenTypeHint_, "") };
    inline OAuth2RevocationEndpointRequest& setTokenTypeHint(string tokenTypeHint) { DARABONBA_PTR_SET_VALUE(tokenTypeHint_, tokenTypeHint) };


  protected:
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<string> tokenTypeHint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieoauth2_1_0
#endif
