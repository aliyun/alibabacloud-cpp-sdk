// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
namespace Models
{
  class GenerateTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(access_token, accessToken_);
      DARABONBA_PTR_TO_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_TO_JSON(expires_in, expiresIn_);
      DARABONBA_PTR_TO_JSON(id_token, idToken_);
      DARABONBA_PTR_TO_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_TO_JSON(token_type, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(access_token, accessToken_);
      DARABONBA_PTR_FROM_JSON(expires_at, expiresAt_);
      DARABONBA_PTR_FROM_JSON(expires_in, expiresIn_);
      DARABONBA_PTR_FROM_JSON(id_token, idToken_);
      DARABONBA_PTR_FROM_JSON(refresh_token, refreshToken_);
      DARABONBA_PTR_FROM_JSON(token_type, tokenType_);
    };
    GenerateTokenResponseBody() = default ;
    GenerateTokenResponseBody(const GenerateTokenResponseBody &) = default ;
    GenerateTokenResponseBody(GenerateTokenResponseBody &&) = default ;
    GenerateTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTokenResponseBody() = default ;
    GenerateTokenResponseBody& operator=(const GenerateTokenResponseBody &) = default ;
    GenerateTokenResponseBody& operator=(GenerateTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->expiresAt_ == nullptr && return this->expiresIn_ == nullptr && return this->idToken_ == nullptr && return this->refreshToken_ == nullptr && return this->tokenType_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline GenerateTokenResponseBody& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // expiresAt Field Functions 
    bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
    void deleteExpiresAt() { this->expiresAt_ = nullptr;};
    inline int64_t expiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
    inline GenerateTokenResponseBody& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


    // expiresIn Field Functions 
    bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
    void deleteExpiresIn() { this->expiresIn_ = nullptr;};
    inline int64_t expiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
    inline GenerateTokenResponseBody& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


    // idToken Field Functions 
    bool hasIdToken() const { return this->idToken_ != nullptr;};
    void deleteIdToken() { this->idToken_ = nullptr;};
    inline string idToken() const { DARABONBA_PTR_GET_DEFAULT(idToken_, "") };
    inline GenerateTokenResponseBody& setIdToken(string idToken) { DARABONBA_PTR_SET_VALUE(idToken_, idToken) };


    // refreshToken Field Functions 
    bool hasRefreshToken() const { return this->refreshToken_ != nullptr;};
    void deleteRefreshToken() { this->refreshToken_ = nullptr;};
    inline string refreshToken() const { DARABONBA_PTR_GET_DEFAULT(refreshToken_, "") };
    inline GenerateTokenResponseBody& setRefreshToken(string refreshToken) { DARABONBA_PTR_SET_VALUE(refreshToken_, refreshToken) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string tokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline GenerateTokenResponseBody& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    // The access token.
    std::shared_ptr<string> accessToken_ = nullptr;
    // The time when the token expires. This value is a UNIX timestamp representing the number of seconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> expiresAt_ = nullptr;
    // The remaining validity period of the token. Unit: seconds.
    std::shared_ptr<int64_t> expiresIn_ = nullptr;
    // The ID token.
    std::shared_ptr<string> idToken_ = nullptr;
    // The refresh token.
    std::shared_ptr<string> refreshToken_ = nullptr;
    // The type of the token. Valid values: Basic Bearer
    std::shared_ptr<string> tokenType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
