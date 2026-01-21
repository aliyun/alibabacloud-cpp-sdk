// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GenerateAssetOperationTokenResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAssetOperationTokenResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetOperationToken, assetOperationToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAssetOperationTokenResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetOperationToken, assetOperationToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateAssetOperationTokenResponseBody() = default ;
    GenerateAssetOperationTokenResponseBody(const GenerateAssetOperationTokenResponseBody &) = default ;
    GenerateAssetOperationTokenResponseBody(GenerateAssetOperationTokenResponseBody &&) = default ;
    GenerateAssetOperationTokenResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAssetOperationTokenResponseBody() = default ;
    GenerateAssetOperationTokenResponseBody& operator=(const GenerateAssetOperationTokenResponseBody &) = default ;
    GenerateAssetOperationTokenResponseBody& operator=(GenerateAssetOperationTokenResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetOperationToken : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetOperationToken& obj) { 
        DARABONBA_PTR_TO_JSON(CountLeft, countLeft_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(HasCountLimit, hasCountLimit_);
        DARABONBA_PTR_TO_JSON(MaxRenewCount, maxRenewCount_);
        DARABONBA_PTR_TO_JSON(RenewCount, renewCount_);
        DARABONBA_PTR_TO_JSON(SsoUrl, ssoUrl_);
        DARABONBA_PTR_TO_JSON(Token, token_);
        DARABONBA_PTR_TO_JSON(TokenId, tokenId_);
      };
      friend void from_json(const Darabonba::Json& j, AssetOperationToken& obj) { 
        DARABONBA_PTR_FROM_JSON(CountLeft, countLeft_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(HasCountLimit, hasCountLimit_);
        DARABONBA_PTR_FROM_JSON(MaxRenewCount, maxRenewCount_);
        DARABONBA_PTR_FROM_JSON(RenewCount, renewCount_);
        DARABONBA_PTR_FROM_JSON(SsoUrl, ssoUrl_);
        DARABONBA_PTR_FROM_JSON(Token, token_);
        DARABONBA_PTR_FROM_JSON(TokenId, tokenId_);
      };
      AssetOperationToken() = default ;
      AssetOperationToken(const AssetOperationToken &) = default ;
      AssetOperationToken(AssetOperationToken &&) = default ;
      AssetOperationToken(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetOperationToken() = default ;
      AssetOperationToken& operator=(const AssetOperationToken &) = default ;
      AssetOperationToken& operator=(AssetOperationToken &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->countLeft_ == nullptr
        && this->expireTime_ == nullptr && this->hasCountLimit_ == nullptr && this->maxRenewCount_ == nullptr && this->renewCount_ == nullptr && this->ssoUrl_ == nullptr
        && this->token_ == nullptr && this->tokenId_ == nullptr; };
      // countLeft Field Functions 
      bool hasCountLeft() const { return this->countLeft_ != nullptr;};
      void deleteCountLeft() { this->countLeft_ = nullptr;};
      inline int64_t getCountLeft() const { DARABONBA_PTR_GET_DEFAULT(countLeft_, 0L) };
      inline AssetOperationToken& setCountLeft(int64_t countLeft) { DARABONBA_PTR_SET_VALUE(countLeft_, countLeft) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline AssetOperationToken& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // hasCountLimit Field Functions 
      bool hasHasCountLimit() const { return this->hasCountLimit_ != nullptr;};
      void deleteHasCountLimit() { this->hasCountLimit_ = nullptr;};
      inline bool getHasCountLimit() const { DARABONBA_PTR_GET_DEFAULT(hasCountLimit_, false) };
      inline AssetOperationToken& setHasCountLimit(bool hasCountLimit) { DARABONBA_PTR_SET_VALUE(hasCountLimit_, hasCountLimit) };


      // maxRenewCount Field Functions 
      bool hasMaxRenewCount() const { return this->maxRenewCount_ != nullptr;};
      void deleteMaxRenewCount() { this->maxRenewCount_ = nullptr;};
      inline int64_t getMaxRenewCount() const { DARABONBA_PTR_GET_DEFAULT(maxRenewCount_, 0L) };
      inline AssetOperationToken& setMaxRenewCount(int64_t maxRenewCount) { DARABONBA_PTR_SET_VALUE(maxRenewCount_, maxRenewCount) };


      // renewCount Field Functions 
      bool hasRenewCount() const { return this->renewCount_ != nullptr;};
      void deleteRenewCount() { this->renewCount_ = nullptr;};
      inline int64_t getRenewCount() const { DARABONBA_PTR_GET_DEFAULT(renewCount_, 0L) };
      inline AssetOperationToken& setRenewCount(int64_t renewCount) { DARABONBA_PTR_SET_VALUE(renewCount_, renewCount) };


      // ssoUrl Field Functions 
      bool hasSsoUrl() const { return this->ssoUrl_ != nullptr;};
      void deleteSsoUrl() { this->ssoUrl_ = nullptr;};
      inline string getSsoUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoUrl_, "") };
      inline AssetOperationToken& setSsoUrl(string ssoUrl) { DARABONBA_PTR_SET_VALUE(ssoUrl_, ssoUrl) };


      // token Field Functions 
      bool hasToken() const { return this->token_ != nullptr;};
      void deleteToken() { this->token_ = nullptr;};
      inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
      inline AssetOperationToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


      // tokenId Field Functions 
      bool hasTokenId() const { return this->tokenId_ != nullptr;};
      void deleteTokenId() { this->tokenId_ = nullptr;};
      inline string getTokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
      inline AssetOperationToken& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


    protected:
      // The remaining number of times that you can use the O\\&M token.
      shared_ptr<int64_t> countLeft_ {};
      // The time when the O\\&M token expires. The value is a UNIX timestamp.
      shared_ptr<int64_t> expireTime_ {};
      // Indicates whether the number of times that you can use the O\\&M token is limited.
      shared_ptr<bool> hasCountLimit_ {};
      // The maximum number of renewals. A value of 0 indicates that renewal is not supported.
      shared_ptr<int64_t> maxRenewCount_ {};
      // The number of times the O\\&M token is renewed.
      shared_ptr<int64_t> renewCount_ {};
      // The single sign-on (SSO) URL.
      shared_ptr<string> ssoUrl_ {};
      // The O\\&M token that you apply for.
      shared_ptr<string> token_ {};
      // The ID of the O\\&M token.
      shared_ptr<string> tokenId_ {};
    };

    virtual bool empty() const override { return this->assetOperationToken_ == nullptr
        && this->requestId_ == nullptr; };
    // assetOperationToken Field Functions 
    bool hasAssetOperationToken() const { return this->assetOperationToken_ != nullptr;};
    void deleteAssetOperationToken() { this->assetOperationToken_ = nullptr;};
    inline const GenerateAssetOperationTokenResponseBody::AssetOperationToken & getAssetOperationToken() const { DARABONBA_PTR_GET_CONST(assetOperationToken_, GenerateAssetOperationTokenResponseBody::AssetOperationToken) };
    inline GenerateAssetOperationTokenResponseBody::AssetOperationToken getAssetOperationToken() { DARABONBA_PTR_GET(assetOperationToken_, GenerateAssetOperationTokenResponseBody::AssetOperationToken) };
    inline GenerateAssetOperationTokenResponseBody& setAssetOperationToken(const GenerateAssetOperationTokenResponseBody::AssetOperationToken & assetOperationToken) { DARABONBA_PTR_SET_VALUE(assetOperationToken_, assetOperationToken) };
    inline GenerateAssetOperationTokenResponseBody& setAssetOperationToken(GenerateAssetOperationTokenResponseBody::AssetOperationToken && assetOperationToken) { DARABONBA_PTR_SET_RVALUE(assetOperationToken_, assetOperationToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateAssetOperationTokenResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GenerateAssetOperationTokenResponseBody::AssetOperationToken> assetOperationToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
