// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayAndPauseControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayAndPauseControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenPlayAndPauseControlParam, openPlayAndPauseControlParamShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PlayAndPauseControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenPlayAndPauseControlParam, openPlayAndPauseControlParamShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    PlayAndPauseControlShrinkRequest() = default ;
    PlayAndPauseControlShrinkRequest(const PlayAndPauseControlShrinkRequest &) = default ;
    PlayAndPauseControlShrinkRequest(PlayAndPauseControlShrinkRequest &&) = default ;
    PlayAndPauseControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayAndPauseControlShrinkRequest() = default ;
    PlayAndPauseControlShrinkRequest& operator=(const PlayAndPauseControlShrinkRequest &) = default ;
    PlayAndPauseControlShrinkRequest& operator=(PlayAndPauseControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openPlayAndPauseControlParamShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline PlayAndPauseControlShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openPlayAndPauseControlParamShrink Field Functions 
    bool hasOpenPlayAndPauseControlParamShrink() const { return this->openPlayAndPauseControlParamShrink_ != nullptr;};
    void deleteOpenPlayAndPauseControlParamShrink() { this->openPlayAndPauseControlParamShrink_ = nullptr;};
    inline string openPlayAndPauseControlParamShrink() const { DARABONBA_PTR_GET_DEFAULT(openPlayAndPauseControlParamShrink_, "") };
    inline PlayAndPauseControlShrinkRequest& setOpenPlayAndPauseControlParamShrink(string openPlayAndPauseControlParamShrink) { DARABONBA_PTR_SET_VALUE(openPlayAndPauseControlParamShrink_, openPlayAndPauseControlParamShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline PlayAndPauseControlShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openPlayAndPauseControlParamShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
