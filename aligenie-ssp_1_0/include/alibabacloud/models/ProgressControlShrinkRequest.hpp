// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PROGRESSCONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PROGRESSCONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ProgressControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProgressControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenProgressControlRequest, openProgressControlRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ProgressControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenProgressControlRequest, openProgressControlRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ProgressControlShrinkRequest() = default ;
    ProgressControlShrinkRequest(const ProgressControlShrinkRequest &) = default ;
    ProgressControlShrinkRequest(ProgressControlShrinkRequest &&) = default ;
    ProgressControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProgressControlShrinkRequest() = default ;
    ProgressControlShrinkRequest& operator=(const ProgressControlShrinkRequest &) = default ;
    ProgressControlShrinkRequest& operator=(ProgressControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openProgressControlRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline ProgressControlShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openProgressControlRequestShrink Field Functions 
    bool hasOpenProgressControlRequestShrink() const { return this->openProgressControlRequestShrink_ != nullptr;};
    void deleteOpenProgressControlRequestShrink() { this->openProgressControlRequestShrink_ = nullptr;};
    inline string openProgressControlRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openProgressControlRequestShrink_, "") };
    inline ProgressControlShrinkRequest& setOpenProgressControlRequestShrink(string openProgressControlRequestShrink) { DARABONBA_PTR_SET_VALUE(openProgressControlRequestShrink_, openProgressControlRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ProgressControlShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openProgressControlRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
