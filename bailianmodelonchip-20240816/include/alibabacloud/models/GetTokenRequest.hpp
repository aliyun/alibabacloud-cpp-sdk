// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class GetTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(nonce, nonce_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(tokenKey, tokenKey_);
      DARABONBA_PTR_TO_JSON(tokenType, tokenType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(tokenKey, tokenKey_);
      DARABONBA_PTR_FROM_JSON(tokenType, tokenType_);
    };
    GetTokenRequest() = default ;
    GetTokenRequest(const GetTokenRequest &) = default ;
    GetTokenRequest(GetTokenRequest &&) = default ;
    GetTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenRequest() = default ;
    GetTokenRequest& operator=(const GetTokenRequest &) = default ;
    GetTokenRequest& operator=(GetTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->deviceName_ == nullptr && return this->nonce_ == nullptr && return this->requestTime_ == nullptr && return this->signature_ == nullptr && return this->tokenKey_ == nullptr
        && return this->tokenType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetTokenRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetTokenRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline GetTokenRequest& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline GetTokenRequest& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetTokenRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // tokenKey Field Functions 
    bool hasTokenKey() const { return this->tokenKey_ != nullptr;};
    void deleteTokenKey() { this->tokenKey_ = nullptr;};
    inline string tokenKey() const { DARABONBA_PTR_GET_DEFAULT(tokenKey_, "") };
    inline GetTokenRequest& setTokenKey(string tokenKey) { DARABONBA_PTR_SET_VALUE(tokenKey_, tokenKey) };


    // tokenType Field Functions 
    bool hasTokenType() const { return this->tokenType_ != nullptr;};
    void deleteTokenType() { this->tokenType_ = nullptr;};
    inline string tokenType() const { DARABONBA_PTR_GET_DEFAULT(tokenType_, "") };
    inline GetTokenRequest& setTokenType(string tokenType) { DARABONBA_PTR_SET_VALUE(tokenType_, tokenType) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> deviceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nonce_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> signature_ = nullptr;
    std::shared_ptr<string> tokenKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> tokenType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
