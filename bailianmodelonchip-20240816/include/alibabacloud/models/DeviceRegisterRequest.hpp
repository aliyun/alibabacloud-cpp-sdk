// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICEREGISTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICEREGISTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianModelOnChip20240816
{
namespace Models
{
  class DeviceRegisterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceRegisterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appId, appId_);
      DARABONBA_PTR_TO_JSON(nonce, nonce_);
      DARABONBA_PTR_TO_JSON(requestTime, requestTime_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceRegisterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appId, appId_);
      DARABONBA_PTR_FROM_JSON(nonce, nonce_);
      DARABONBA_PTR_FROM_JSON(requestTime, requestTime_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
    };
    DeviceRegisterRequest() = default ;
    DeviceRegisterRequest(const DeviceRegisterRequest &) = default ;
    DeviceRegisterRequest(DeviceRegisterRequest &&) = default ;
    DeviceRegisterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceRegisterRequest() = default ;
    DeviceRegisterRequest& operator=(const DeviceRegisterRequest &) = default ;
    DeviceRegisterRequest& operator=(DeviceRegisterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->nonce_ == nullptr && return this->requestTime_ == nullptr && return this->signature_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeviceRegisterRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // nonce Field Functions 
    bool hasNonce() const { return this->nonce_ != nullptr;};
    void deleteNonce() { this->nonce_ = nullptr;};
    inline string nonce() const { DARABONBA_PTR_GET_DEFAULT(nonce_, "") };
    inline DeviceRegisterRequest& setNonce(string nonce) { DARABONBA_PTR_SET_VALUE(nonce_, nonce) };


    // requestTime Field Functions 
    bool hasRequestTime() const { return this->requestTime_ != nullptr;};
    void deleteRequestTime() { this->requestTime_ = nullptr;};
    inline string requestTime() const { DARABONBA_PTR_GET_DEFAULT(requestTime_, "") };
    inline DeviceRegisterRequest& setRequestTime(string requestTime) { DARABONBA_PTR_SET_VALUE(requestTime_, requestTime) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline DeviceRegisterRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> nonce_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> requestTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianModelOnChip20240816
#endif
