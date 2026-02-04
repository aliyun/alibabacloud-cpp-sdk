// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEOAUTHTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEOAUTHTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateOauthTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateOauthTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TokenResponse, tokenResponse_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateOauthTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TokenResponse, tokenResponse_);
    };
    GenerateOauthTokenResponseBody() = default ;
    GenerateOauthTokenResponseBody(const GenerateOauthTokenResponseBody &) = default ;
    GenerateOauthTokenResponseBody(GenerateOauthTokenResponseBody &&) = default ;
    GenerateOauthTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateOauthTokenResponseBody() = default ;
    GenerateOauthTokenResponseBody& operator=(const GenerateOauthTokenResponseBody &) = default ;
    GenerateOauthTokenResponseBody& operator=(GenerateOauthTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TokenResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TokenResponse& obj) { 
        DARABONBA_PTR_TO_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_TO_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_TO_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_TO_JSON(TokenType, tokenType_);
      };
      friend void from_json(const Darabonba::Json& j, TokenResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessToken, accessToken_);
        DARABONBA_PTR_FROM_JSON(ExpiresAt, expiresAt_);
        DARABONBA_PTR_FROM_JSON(ExpiresIn, expiresIn_);
        DARABONBA_PTR_FROM_JSON(TokenType, tokenType_);
      };
      TokenResponse() = default ;
      TokenResponse(const TokenResponse &) = default ;
      TokenResponse(TokenResponse &&) = default ;
      TokenResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TokenResponse() = default ;
      TokenResponse& operator=(const TokenResponse &) = default ;
      TokenResponse& operator=(TokenResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accessToken_ == nullptr
        && this->expiresAt_ == nullptr && this->expiresIn_ == nullptr && this->tokenType_ == nullptr; };
      // accessToken Field Functions 
      bool hasAccessToken() const { return this->accessToken_ != nullptr;};
      void deleteAccessToken() { this->accessToken_ = nullptr;};
      inline string getAccessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
      inline TokenResponse& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


      // expiresAt Field Functions 
      bool hasExpiresAt() const { return this->expiresAt_ != nullptr;};
      void deleteExpiresAt() { this->expiresAt_ = nullptr;};
      inline int64_t getExpiresAt() const { DARABONBA_PTR_GET_DEFAULT(expiresAt_, 0L) };
      inline TokenResponse& setExpiresAt(int64_t expiresAt) { DARABONBA_PTR_SET_VALUE(expiresAt_, expiresAt) };


      // expiresIn Field Functions 
      bool hasExpiresIn() const { return this->expiresIn_ != nullptr;};
      void deleteExpiresIn() { this->expiresIn_ = nullptr;};
      inline int64_t getExpiresIn() const { DARABONBA_PTR_GET_DEFAULT(expiresIn_, 0L) };
      inline TokenResponse& setExpiresIn(int64_t expiresIn) { DARABONBA_PTR_SET_VALUE(expiresIn_, expiresIn) };


      // tokenType Field Functions 
      bool hasTokenType() const { return this->tokenType_ != nullptr;};
      void deleteTokenType() { this->tokenType_ = nullptr;};
      inline string getTokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
      inline TokenResponse& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


    protected:
      // Access Token。
      shared_ptr<string> accessToken_ {};
      shared_ptr<int64_t> expiresAt_ {};
      shared_ptr<int64_t> expiresIn_ {};
      shared_ptr<string> tokenType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->tokenResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateOauthTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tokenResponse Field Functions 
    bool hasTokenResponse() const { return this->tokenResponse_ != nullptr;};
    void deleteTokenResponse() { this->tokenResponse_ = nullptr;};
    inline const GenerateOauthTokenResponseBody::TokenResponse & getTokenResponse() const { DARABONBA_PTR_GET_CONST(tokenResponse_, GenerateOauthTokenResponseBody::TokenResponse) };
    inline GenerateOauthTokenResponseBody::TokenResponse getTokenResponse() { DARABONBA_PTR_GET(tokenResponse_, GenerateOauthTokenResponseBody::TokenResponse) };
    inline GenerateOauthTokenResponseBody& setTokenResponse(const GenerateOauthTokenResponseBody::TokenResponse & tokenResponse) { DARABONBA_PTR_SET_VALUE(tokenResponse_, tokenResponse) };
    inline GenerateOauthTokenResponseBody& setTokenResponse(GenerateOauthTokenResponseBody::TokenResponse && tokenResponse) { DARABONBA_PTR_SET_RVALUE(tokenResponse_, tokenResponse) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GenerateOauthTokenResponseBody::TokenResponse> tokenResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
