// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTELCONTACTBYGENIEDEVICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETHOTELCONTACTBYGENIEDEVICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class GetHotelContactByGenieDeviceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotelContactByGenieDeviceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotelContactByGenieDeviceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    GetHotelContactByGenieDeviceShrinkRequest() = default ;
    GetHotelContactByGenieDeviceShrinkRequest(const GetHotelContactByGenieDeviceShrinkRequest &) = default ;
    GetHotelContactByGenieDeviceShrinkRequest(GetHotelContactByGenieDeviceShrinkRequest &&) = default ;
    GetHotelContactByGenieDeviceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotelContactByGenieDeviceShrinkRequest() = default ;
    GetHotelContactByGenieDeviceShrinkRequest& operator=(const GetHotelContactByGenieDeviceShrinkRequest &) = default ;
    GetHotelContactByGenieDeviceShrinkRequest& operator=(GetHotelContactByGenieDeviceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceInfoShrink_ == nullptr
        && this->userInfoShrink_ == nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string getDeviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline GetHotelContactByGenieDeviceShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline GetHotelContactByGenieDeviceShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    shared_ptr<string> deviceInfoShrink_ {};
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
