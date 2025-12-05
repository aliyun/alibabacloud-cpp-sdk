// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENRESPONSEBODYASSETOPERATIONTOKEN_HPP_
#define ALIBABACLOUD_MODELS_GENERATEASSETOPERATIONTOKENRESPONSEBODYASSETOPERATIONTOKEN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GenerateAssetOperationTokenResponseBodyAssetOperationToken : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateAssetOperationTokenResponseBodyAssetOperationToken& obj) { 
      DARABONBA_PTR_TO_JSON(CountLeft, countLeft_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(HasCountLimit, hasCountLimit_);
      DARABONBA_PTR_TO_JSON(MaxRenewCount, maxRenewCount_);
      DARABONBA_PTR_TO_JSON(RenewCount, renewCount_);
      DARABONBA_PTR_TO_JSON(SsoUrl, ssoUrl_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(TokenId, tokenId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateAssetOperationTokenResponseBodyAssetOperationToken& obj) { 
      DARABONBA_PTR_FROM_JSON(CountLeft, countLeft_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(HasCountLimit, hasCountLimit_);
      DARABONBA_PTR_FROM_JSON(MaxRenewCount, maxRenewCount_);
      DARABONBA_PTR_FROM_JSON(RenewCount, renewCount_);
      DARABONBA_PTR_FROM_JSON(SsoUrl, ssoUrl_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(TokenId, tokenId_);
    };
    GenerateAssetOperationTokenResponseBodyAssetOperationToken() = default ;
    GenerateAssetOperationTokenResponseBodyAssetOperationToken(const GenerateAssetOperationTokenResponseBodyAssetOperationToken &) = default ;
    GenerateAssetOperationTokenResponseBodyAssetOperationToken(GenerateAssetOperationTokenResponseBodyAssetOperationToken &&) = default ;
    GenerateAssetOperationTokenResponseBodyAssetOperationToken(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateAssetOperationTokenResponseBodyAssetOperationToken() = default ;
    GenerateAssetOperationTokenResponseBodyAssetOperationToken& operator=(const GenerateAssetOperationTokenResponseBodyAssetOperationToken &) = default ;
    GenerateAssetOperationTokenResponseBodyAssetOperationToken& operator=(GenerateAssetOperationTokenResponseBodyAssetOperationToken &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->countLeft_ == nullptr
        && return this->expireTime_ == nullptr && return this->hasCountLimit_ == nullptr && return this->maxRenewCount_ == nullptr && return this->renewCount_ == nullptr && return this->ssoUrl_ == nullptr
        && return this->token_ == nullptr && return this->tokenId_ == nullptr; };
    // countLeft Field Functions 
    bool hasCountLeft() const { return this->countLeft_ != nullptr;};
    void deleteCountLeft() { this->countLeft_ = nullptr;};
    inline int64_t countLeft() const { DARABONBA_PTR_GET_DEFAULT(countLeft_, 0L) };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setCountLeft(int64_t countLeft) { DARABONBA_PTR_SET_VALUE(countLeft_, countLeft) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // hasCountLimit Field Functions 
    bool hasHasCountLimit() const { return this->hasCountLimit_ != nullptr;};
    void deleteHasCountLimit() { this->hasCountLimit_ = nullptr;};
    inline bool hasCountLimit() const { DARABONBA_PTR_GET_DEFAULT(hasCountLimit_, false) };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setHasCountLimit(bool hasCountLimit) { DARABONBA_PTR_SET_VALUE(hasCountLimit_, hasCountLimit) };


    // maxRenewCount Field Functions 
    bool hasMaxRenewCount() const { return this->maxRenewCount_ != nullptr;};
    void deleteMaxRenewCount() { this->maxRenewCount_ = nullptr;};
    inline int64_t maxRenewCount() const { DARABONBA_PTR_GET_DEFAULT(maxRenewCount_, 0L) };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setMaxRenewCount(int64_t maxRenewCount) { DARABONBA_PTR_SET_VALUE(maxRenewCount_, maxRenewCount) };


    // renewCount Field Functions 
    bool hasRenewCount() const { return this->renewCount_ != nullptr;};
    void deleteRenewCount() { this->renewCount_ = nullptr;};
    inline int64_t renewCount() const { DARABONBA_PTR_GET_DEFAULT(renewCount_, 0L) };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setRenewCount(int64_t renewCount) { DARABONBA_PTR_SET_VALUE(renewCount_, renewCount) };


    // ssoUrl Field Functions 
    bool hasSsoUrl() const { return this->ssoUrl_ != nullptr;};
    void deleteSsoUrl() { this->ssoUrl_ = nullptr;};
    inline string ssoUrl() const { DARABONBA_PTR_GET_DEFAULT(ssoUrl_, "") };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setSsoUrl(string ssoUrl) { DARABONBA_PTR_SET_VALUE(ssoUrl_, ssoUrl) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // tokenId Field Functions 
    bool hasTokenId() const { return this->tokenId_ != nullptr;};
    void deleteTokenId() { this->tokenId_ = nullptr;};
    inline string tokenId() const { DARABONBA_PTR_GET_DEFAULT(tokenId_, "") };
    inline GenerateAssetOperationTokenResponseBodyAssetOperationToken& setTokenId(string tokenId) { DARABONBA_PTR_SET_VALUE(tokenId_, tokenId) };


  protected:
    // The remaining number of times that you can use the O\\&M token.
    std::shared_ptr<int64_t> countLeft_ = nullptr;
    // The time when the O\\&M token expires. The value is a UNIX timestamp.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // Indicates whether the number of times that you can use the O\\&M token is limited.
    std::shared_ptr<bool> hasCountLimit_ = nullptr;
    // The maximum number of renewals. A value of 0 indicates that renewal is not supported.
    std::shared_ptr<int64_t> maxRenewCount_ = nullptr;
    // The number of times the O\\&M token is renewed.
    std::shared_ptr<int64_t> renewCount_ = nullptr;
    // The single sign-on (SSO) URL.
    std::shared_ptr<string> ssoUrl_ = nullptr;
    // The O\\&M token that you apply for.
    std::shared_ptr<string> token_ = nullptr;
    // The ID of the O\\&M token.
    std::shared_ptr<string> tokenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
