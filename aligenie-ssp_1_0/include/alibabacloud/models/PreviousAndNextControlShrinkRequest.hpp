// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PreviousAndNextControlShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviousAndNextControlShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenControlPlayingListRequest, openControlPlayingListRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PreviousAndNextControlShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenControlPlayingListRequest, openControlPlayingListRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    PreviousAndNextControlShrinkRequest() = default ;
    PreviousAndNextControlShrinkRequest(const PreviousAndNextControlShrinkRequest &) = default ;
    PreviousAndNextControlShrinkRequest(PreviousAndNextControlShrinkRequest &&) = default ;
    PreviousAndNextControlShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviousAndNextControlShrinkRequest() = default ;
    PreviousAndNextControlShrinkRequest& operator=(const PreviousAndNextControlShrinkRequest &) = default ;
    PreviousAndNextControlShrinkRequest& operator=(PreviousAndNextControlShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openControlPlayingListRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline PreviousAndNextControlShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openControlPlayingListRequestShrink Field Functions 
    bool hasOpenControlPlayingListRequestShrink() const { return this->openControlPlayingListRequestShrink_ != nullptr;};
    void deleteOpenControlPlayingListRequestShrink() { this->openControlPlayingListRequestShrink_ = nullptr;};
    inline string openControlPlayingListRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openControlPlayingListRequestShrink_, "") };
    inline PreviousAndNextControlShrinkRequest& setOpenControlPlayingListRequestShrink(string openControlPlayingListRequestShrink) { DARABONBA_PTR_SET_VALUE(openControlPlayingListRequestShrink_, openControlPlayingListRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline PreviousAndNextControlShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openControlPlayingListRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
