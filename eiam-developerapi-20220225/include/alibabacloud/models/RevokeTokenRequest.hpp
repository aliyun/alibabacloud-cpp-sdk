// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class RevokeTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(client_id, clientId_);
      DARABONBA_PTR_TO_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(token_type_hint, tokenTypeHint_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(client_id, clientId_);
      DARABONBA_PTR_FROM_JSON(client_secret, clientSecret_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(token_type_hint, tokenTypeHint_);
    };
    RevokeTokenRequest() = default ;
    RevokeTokenRequest(const RevokeTokenRequest &) = default ;
    RevokeTokenRequest(RevokeTokenRequest &&) = default ;
    RevokeTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeTokenRequest() = default ;
    RevokeTokenRequest& operator=(const RevokeTokenRequest &) = default ;
    RevokeTokenRequest& operator=(RevokeTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientId_ == nullptr
        && this->clientSecret_ == nullptr && this->token_ == nullptr && this->tokenTypeHint_ == nullptr; };
    // clientId Field Functions 
    bool hasClientId() const { return this->clientId_ != nullptr;};
    void deleteClientId() { this->clientId_ = nullptr;};
    inline string getClientId() const { DARABONBA_PTR_GET_DEFAULT(clientId_, "") };
    inline RevokeTokenRequest& setClientId(string clientId) { DARABONBA_PTR_SET_VALUE(clientId_, clientId) };


    // clientSecret Field Functions 
    bool hasClientSecret() const { return this->clientSecret_ != nullptr;};
    void deleteClientSecret() { this->clientSecret_ = nullptr;};
    inline string getClientSecret() const { DARABONBA_PTR_GET_DEFAULT(clientSecret_, "") };
    inline RevokeTokenRequest& setClientSecret(string clientSecret) { DARABONBA_PTR_SET_VALUE(clientSecret_, clientSecret) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline RevokeTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenTypeHint Field Functions 
    bool hasTokenTypeHint() const { return this->tokenTypeHint_ != nullptr;};
    void deleteTokenTypeHint() { this->tokenTypeHint_ = nullptr;};
    inline string getTokenTypeHint() const { DARABONBA_PTR_GET_DEFAULT(tokenTypeHint_, "") };
    inline RevokeTokenRequest& setTokenTypeHint(string tokenTypeHint) { DARABONBA_PTR_SET_VALUE(tokenTypeHint_, tokenTypeHint) };


  protected:
    // The client ID.
    shared_ptr<string> clientId_ {};
    // The client secret.
    shared_ptr<string> clientSecret_ {};
    // The token to be revoked.
    // 
    // This parameter is required.
    shared_ptr<string> token_ {};
    // The type of the token. Valid values: access_token refresh_token
    shared_ptr<string> tokenTypeHint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
