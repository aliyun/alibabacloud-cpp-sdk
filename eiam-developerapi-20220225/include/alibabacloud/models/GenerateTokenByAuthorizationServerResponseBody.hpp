// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETOKENBYAUTHORIZATIONSERVERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETOKENBYAUTHORIZATIONSERVERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateTokenByAuthorizationServerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTokenByAuthorizationServerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(access_token, accessToken_);
      DARABONBA_PTR_TO_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_TO_JSON(expires_in, expiresIn_);
      DARABONBA_PTR_TO_JSON(id_token, idToken_);
      DARABONBA_PTR_TO_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_TO_JSON(scope, scope_);
      DARABONBA_PTR_TO_JSON(token_type, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTokenByAuthorizationServerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(access_token, accessToken_);
      DARABONBA_PTR_FROM_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_FROM_JSON(expires_in, expiresIn_);
      DARABONBA_PTR_FROM_JSON(id_token, idToken_);
      DARABONBA_PTR_FROM_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_FROM_JSON(scope, scope_);
      DARABONBA_PTR_FROM_JSON(token_type, tokenType_);
    };
    GenerateTokenByAuthorizationServerResponseBody() = default ;
    GenerateTokenByAuthorizationServerResponseBody(const GenerateTokenByAuthorizationServerResponseBody &) = default ;
    GenerateTokenByAuthorizationServerResponseBody(GenerateTokenByAuthorizationServerResponseBody &&) = default ;
    GenerateTokenByAuthorizationServerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTokenByAuthorizationServerResponseBody() = default ;
    GenerateTokenByAuthorizationServerResponseBody& operator=(const GenerateTokenByAuthorizationServerResponseBody &) = default ;
    GenerateTokenByAuthorizationServerResponseBody& operator=(GenerateTokenByAuthorizationServerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->expiresAt_ == nullptr && this->expiresIn_ == nullptr && this->idToken_ == nullptr && this->refreshToken_ == nullptr && this->scope_ == nullptr
        && this->tokenType_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GenerateTokenByAuthorizationServerResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
    inline GenerateTokenByAuthorizationServerResponseBody& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // expiresIn Field Functions 
    bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
    void deleteExpiresIn() { this->expiresIn_ = nullptr;};
    inline int64_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
    inline GenerateTokenByAuthorizationServerResponseBody& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


    // idToken Field Functions 
    bool hasIdToken() const { return this->idToken_ != nullptr;};
    void deleteIdToken() { this->idToken_ = nullptr;};
    inline string getIdToken() const { DARABONBA_PTR_GET_DEFAULT(idToken_, "") };
    inline GenerateTokenByAuthorizationServerResponseBody& setIdToken(string idToken) { DARABONBA_PTR_SET_VALUE(idToken_, idToken) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string getRefreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GenerateTokenByAuthorizationServerResponseBody& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline GenerateTokenByAuthorizationServerResponseBody& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline GenerateTokenByAuthorizationServerResponseBody& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    shared_ptr<string> accessToken_ {};
    shared_ptr<int64_t> expiresAt_ {};
    shared_ptr<int64_t> expiresIn_ {};
    shared_ptr<string> idToken_ {};
    shared_ptr<string> refreshToken_ {};
    shared_ptr<string> scope_ {};
    shared_ptr<string> tokenType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
