// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETTOKENRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class GetTokenResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTokenResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(deviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(nonce, nonce_);
      DARABONBA_PTR_TO_JSON(requestIp, requestIp_);
      DARABONBA_PTR_TO_JSON(responseTime, responseTime_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetTokenResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(deviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(requestIp, requestIp_);
      DARABONBA_PTR_FROM_JSON(responseTime, responseTime_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
    };
    GetTokenResponseBodyData() = default ;
    GetTokenResponseBodyData(const GetTokenResponseBodyData &) = default ;
    GetTokenResponseBodyData(GetTokenResponseBodyData &&) = default ;
    GetTokenResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTokenResponseBodyData() = default ;
    GetTokenResponseBodyData& operator=(const GetTokenResponseBodyData &) = default ;
    GetTokenResponseBodyData& operator=(GetTokenResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->deviceName_ == nullptr && return this->nonce_ == nullptr && return this->requestIp_ == nullptr && return this->responseTime_ == nullptr && return this->signature_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetTokenResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string deviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline GetTokenResponseBodyData& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline GetTokenResponseBodyData& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // requestIp Field Functions 
    bool hasRequestIp() const { return this->requestIp_ != nullptr;};
    void deleteRequestIp() { this->requestIp_ = nullptr;};
    inline string requestIp() const { DARABONBA_PTR_GET_DEFAULT(requestIp_, "") };
    inline GetTokenResponseBodyData& setRequestIp(string requestIp) { DARABONBA_PTR_SET_VALUE(requestIp_, requestIp) };


    // responseTime Field Functions 
    bool hasResponseTime() const { return this->responseTime_ != nullptr;};
    void deleteResponseTime() { this->responseTime_ = nullptr;};
    inline string responseTime() const { DARABONBA_PTR_GET_DEFAULT(responseTime_, "") };
    inline GetTokenResponseBodyData& setResponseTime(string responseTime) { DARABONBA_PTR_SET_VALUE(responseTime_, responseTime) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetTokenResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> deviceName_ = nullptr;
    std::shared_ptr<string> nonce_ = nullptr;
    std::shared_ptr<string> requestIp_ = nullptr;
    std::shared_ptr<string> responseTime_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
