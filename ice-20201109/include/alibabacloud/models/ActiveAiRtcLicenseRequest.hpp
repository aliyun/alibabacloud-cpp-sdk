// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVEAIRTCLICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVEAIRTCLICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ActiveAiRtcLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActiveAiRtcLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthCode, authCode_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(LicenseItemId, licenseItemId_);
    };
    friend void from_json(const Darabonba::Json& j, ActiveAiRtcLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthCode, authCode_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(LicenseItemId, licenseItemId_);
    };
    ActiveAiRtcLicenseRequest() = default ;
    ActiveAiRtcLicenseRequest(const ActiveAiRtcLicenseRequest &) = default ;
    ActiveAiRtcLicenseRequest(ActiveAiRtcLicenseRequest &&) = default ;
    ActiveAiRtcLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActiveAiRtcLicenseRequest() = default ;
    ActiveAiRtcLicenseRequest& operator=(const ActiveAiRtcLicenseRequest &) = default ;
    ActiveAiRtcLicenseRequest& operator=(ActiveAiRtcLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authCode_ == nullptr
        && return this->deviceId_ == nullptr && return this->licenseItemId_ == nullptr; };
    // authCode Field Functions 
    bool hasAuthCode() const { return this->authCode_ != nullptr;};
    void deleteAuthCode() { this->authCode_ = nullptr;};
    inline string authCode() const { DARABONBA_PTR_GET_DEFAULT(authCode_, "") };
    inline ActiveAiRtcLicenseRequest& setAuthCode(string authCode) { DARABONBA_PTR_SET_VALUE(authCode_, authCode) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline ActiveAiRtcLicenseRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // licenseItemId Field Functions 
    bool hasLicenseItemId() const { return this->licenseItemId_ != nullptr;};
    void deleteLicenseItemId() { this->licenseItemId_ = nullptr;};
    inline string licenseItemId() const { DARABONBA_PTR_GET_DEFAULT(licenseItemId_, "") };
    inline ActiveAiRtcLicenseRequest& setLicenseItemId(string licenseItemId) { DARABONBA_PTR_SET_VALUE(licenseItemId_, licenseItemId) };


  protected:
    // The authorization code.
    std::shared_ptr<string> authCode_ = nullptr;
    // The device ID.
    std::shared_ptr<string> deviceId_ = nullptr;
    // The batch ID.
    std::shared_ptr<string> licenseItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
