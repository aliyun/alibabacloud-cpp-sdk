// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class ModifyDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BeginDay, beginDay_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(ExpiredDay, expiredDay_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDeviceId, userDeviceId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginDay, beginDay_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(ExpiredDay, expiredDay_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDeviceId, userDeviceId_);
    };
    ModifyDeviceInfoResponseBody() = default ;
    ModifyDeviceInfoResponseBody(const ModifyDeviceInfoResponseBody &) = default ;
    ModifyDeviceInfoResponseBody(ModifyDeviceInfoResponseBody &&) = default ;
    ModifyDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDeviceInfoResponseBody() = default ;
    ModifyDeviceInfoResponseBody& operator=(const ModifyDeviceInfoResponseBody &) = default ;
    ModifyDeviceInfoResponseBody& operator=(ModifyDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginDay_ == nullptr
        && return this->bizType_ == nullptr && return this->deviceId_ == nullptr && return this->expiredDay_ == nullptr && return this->requestId_ == nullptr && return this->userDeviceId_ == nullptr; };
    // beginDay Field Functions 
    bool hasBeginDay() const { return this->beginDay_ != nullptr;};
    void deleteBeginDay() { this->beginDay_ = nullptr;};
    inline string beginDay() const { DARABONBA_PTR_GET_DEFAULT(beginDay_, "") };
    inline ModifyDeviceInfoResponseBody& setBeginDay(string beginDay) { DARABONBA_PTR_SET_VALUE(beginDay_, beginDay) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ModifyDeviceInfoResponseBody& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ModifyDeviceInfoResponseBody& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // expiredDay Field Functions 
    bool hasExpiredDay() const { return this->expiredDay_ != nullptr;};
    void deleteExpiredDay() { this->expiredDay_ = nullptr;};
    inline string expiredDay() const { DARABONBA_PTR_GET_DEFAULT(expiredDay_, "") };
    inline ModifyDeviceInfoResponseBody& setExpiredDay(string expiredDay) { DARABONBA_PTR_SET_VALUE(expiredDay_, expiredDay) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDeviceId Field Functions 
    bool hasUserDeviceId() const { return this->userDeviceId_ != nullptr;};
    void deleteUserDeviceId() { this->userDeviceId_ = nullptr;};
    inline string userDeviceId() const { DARABONBA_PTR_GET_DEFAULT(userDeviceId_, "") };
    inline ModifyDeviceInfoResponseBody& setUserDeviceId(string userDeviceId) { DARABONBA_PTR_SET_VALUE(userDeviceId_, userDeviceId) };


  protected:
    // If the Duration in the request parameters is not empty, this field represents the start time of the authorization after the device validity period has been extended. One year of Duration is calculated as 365 days. Example: 20180101.
    std::shared_ptr<string> beginDay_ = nullptr;
    // Corresponds to the BizType in the request parameters.
    std::shared_ptr<string> bizType_ = nullptr;
    // Corresponds to the DeviceId in the request parameters.
    std::shared_ptr<string> deviceId_ = nullptr;
    // If the Duration in the request parameters is not empty, this field represents the expiration time of the authorization after the device validity period has been extended. One year of Duration is calculated as 365 days. Example: 20180101.
    std::shared_ptr<string> expiredDay_ = nullptr;
    // The ID of this request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Corresponds to the UserDeviceId in the request parameters.
    std::shared_ptr<string> userDeviceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
