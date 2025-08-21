// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYMODECONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYMODECONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayModeControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayModeControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenPlayModeControlRequest, openPlayModeControlRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PlayModeControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenPlayModeControlRequest, openPlayModeControlRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    PlayModeControlShrinkRequest() = default ;
    PlayModeControlShrinkRequest(const PlayModeControlShrinkRequest &) = default ;
    PlayModeControlShrinkRequest(PlayModeControlShrinkRequest &&) = default ;
    PlayModeControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayModeControlShrinkRequest() = default ;
    PlayModeControlShrinkRequest& operator=(const PlayModeControlShrinkRequest &) = default ;
    PlayModeControlShrinkRequest& operator=(PlayModeControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openPlayModeControlRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline PlayModeControlShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openPlayModeControlRequestShrink Field Functions 
    bool hasOpenPlayModeControlRequestShrink() const { return this->openPlayModeControlRequestShrink_ != nullptr;};
    void deleteOpenPlayModeControlRequestShrink() { this->openPlayModeControlRequestShrink_ = nullptr;};
    inline string openPlayModeControlRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openPlayModeControlRequestShrink_, "") };
    inline PlayModeControlShrinkRequest& setOpenPlayModeControlRequestShrink(string openPlayModeControlRequestShrink) { DARABONBA_PTR_SET_VALUE(openPlayModeControlRequestShrink_, openPlayModeControlRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline PlayModeControlShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openPlayModeControlRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
