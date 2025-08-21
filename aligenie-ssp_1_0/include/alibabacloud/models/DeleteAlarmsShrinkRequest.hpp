// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALARMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALARMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeleteAlarmsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlarmsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlarmsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    DeleteAlarmsShrinkRequest() = default ;
    DeleteAlarmsShrinkRequest(const DeleteAlarmsShrinkRequest &) = default ;
    DeleteAlarmsShrinkRequest(DeleteAlarmsShrinkRequest &&) = default ;
    DeleteAlarmsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlarmsShrinkRequest() = default ;
    DeleteAlarmsShrinkRequest& operator=(const DeleteAlarmsShrinkRequest &) = default ;
    DeleteAlarmsShrinkRequest& operator=(DeleteAlarmsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->payloadShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline DeleteAlarmsShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // payloadShrink Field Functions 
    bool hasPayloadShrink() const { return this->payloadShrink_ != nullptr;};
    void deletePayloadShrink() { this->payloadShrink_ = nullptr;};
    inline string payloadShrink() const { DARABONBA_PTR_GET_DEFAULT(payloadShrink_, "") };
    inline DeleteAlarmsShrinkRequest& setPayloadShrink(string payloadShrink) { DARABONBA_PTR_SET_VALUE(payloadShrink_, payloadShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline DeleteAlarmsShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> payloadShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
