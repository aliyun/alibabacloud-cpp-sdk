// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REINSTATEAUTHENTICATIONTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REINSTATEAUTHENTICATIONTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class ReinstateAuthenticationTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReinstateAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(token_type_hint, tokenTypeHint_);
    };
    friend void from_json(const Darabonba::Json& j, ReinstateAuthenticationTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(token_type_hint, tokenTypeHint_);
    };
    ReinstateAuthenticationTokenRequest() = default ;
    ReinstateAuthenticationTokenRequest(const ReinstateAuthenticationTokenRequest &) = default ;
    ReinstateAuthenticationTokenRequest(ReinstateAuthenticationTokenRequest &&) = default ;
    ReinstateAuthenticationTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReinstateAuthenticationTokenRequest() = default ;
    ReinstateAuthenticationTokenRequest& operator=(const ReinstateAuthenticationTokenRequest &) = default ;
    ReinstateAuthenticationTokenRequest& operator=(ReinstateAuthenticationTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->token_ == nullptr
        && this->tokenTypeHint_ == nullptr; };
    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline ReinstateAuthenticationTokenRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenTypeHint Field Functions 
    bool hasTokenTypeHint() const { return this->tokenTypeHint_ != nullptr;};
    void deleteTokenTypeHint() { this->tokenTypeHint_ = nullptr;};
    inline string getTokenTypeHint() const { DARABONBA_PTR_GET_DEFAULT(tokenTypeHint_, "") };
    inline ReinstateAuthenticationTokenRequest& setTokenTypeHint(string tokenTypeHint) { DARABONBA_PTR_SET_VALUE(tokenTypeHint_, tokenTypeHint) };


  protected:
    // This parameter is required.
    shared_ptr<string> token_ {};
    shared_ptr<string> tokenTypeHint_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
