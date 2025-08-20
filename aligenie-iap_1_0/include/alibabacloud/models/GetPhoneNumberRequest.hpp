// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPHONENUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPHONENUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPhoneNumberRequestDeviceInfo.hpp>
#include <alibabacloud/models/GetPhoneNumberRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetPhoneNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPhoneNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetPhoneNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    GetPhoneNumberRequest() = default ;
    GetPhoneNumberRequest(const GetPhoneNumberRequest &) = default ;
    GetPhoneNumberRequest(GetPhoneNumberRequest &&) = default ;
    GetPhoneNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPhoneNumberRequest() = default ;
    GetPhoneNumberRequest& operator=(const GetPhoneNumberRequest &) = default ;
    GetPhoneNumberRequest& operator=(GetPhoneNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfo_ != nullptr
        && this->userInfo_ != nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const GetPhoneNumberRequestDeviceInfo & deviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, GetPhoneNumberRequestDeviceInfo) };
    inline GetPhoneNumberRequestDeviceInfo deviceInfo() { DARABONBA_PTR_GET(deviceInfo_, GetPhoneNumberRequestDeviceInfo) };
    inline GetPhoneNumberRequest& setDeviceInfo(const GetPhoneNumberRequestDeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline GetPhoneNumberRequest& setDeviceInfo(GetPhoneNumberRequestDeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const GetPhoneNumberRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, GetPhoneNumberRequestUserInfo) };
    inline GetPhoneNumberRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, GetPhoneNumberRequestUserInfo) };
    inline GetPhoneNumberRequest& setUserInfo(const GetPhoneNumberRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline GetPhoneNumberRequest& setUserInfo(GetPhoneNumberRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<GetPhoneNumberRequestDeviceInfo> deviceInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<GetPhoneNumberRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
