// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICECONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICECONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class DeviceControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Payload, payloadShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    DeviceControlShrinkRequest() = default ;
    DeviceControlShrinkRequest(const DeviceControlShrinkRequest &) = default ;
    DeviceControlShrinkRequest(DeviceControlShrinkRequest &&) = default ;
    DeviceControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceControlShrinkRequest() = default ;
    DeviceControlShrinkRequest& operator=(const DeviceControlShrinkRequest &) = default ;
    DeviceControlShrinkRequest& operator=(DeviceControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->payloadShrink_ == nullptr
        && this->userInfoShrink_ == nullptr; };
    // payloadShrink Field Functions 
    bool hasPayloadShrink() const { return this->payloadShrink_ != nullptr;};
    void deletePayloadShrink() { this->payloadShrink_ = nullptr;};
    inline string getPayloadShrink() const { DARABONBA_PTR_GET_DEFAULT(payloadShrink_, "") };
    inline DeviceControlShrinkRequest& setPayloadShrink(string payloadShrink) { DARABONBA_PTR_SET_VALUE(payloadShrink_, payloadShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string getUserInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline DeviceControlShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    shared_ptr<string> payloadShrink_ {};
    shared_ptr<string> userInfoShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
