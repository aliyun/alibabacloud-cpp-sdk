// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class IndexControlPlayingListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexControlPlayingListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenIndexControlRequest, openIndexControlRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, IndexControlPlayingListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenIndexControlRequest, openIndexControlRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    IndexControlPlayingListShrinkRequest() = default ;
    IndexControlPlayingListShrinkRequest(const IndexControlPlayingListShrinkRequest &) = default ;
    IndexControlPlayingListShrinkRequest(IndexControlPlayingListShrinkRequest &&) = default ;
    IndexControlPlayingListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexControlPlayingListShrinkRequest() = default ;
    IndexControlPlayingListShrinkRequest& operator=(const IndexControlPlayingListShrinkRequest &) = default ;
    IndexControlPlayingListShrinkRequest& operator=(IndexControlPlayingListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openIndexControlRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline IndexControlPlayingListShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openIndexControlRequestShrink Field Functions 
    bool hasOpenIndexControlRequestShrink() const { return this->openIndexControlRequestShrink_ != nullptr;};
    void deleteOpenIndexControlRequestShrink() { this->openIndexControlRequestShrink_ = nullptr;};
    inline string openIndexControlRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openIndexControlRequestShrink_, "") };
    inline IndexControlPlayingListShrinkRequest& setOpenIndexControlRequestShrink(string openIndexControlRequestShrink) { DARABONBA_PTR_SET_VALUE(openIndexControlRequestShrink_, openIndexControlRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline IndexControlPlayingListShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openIndexControlRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
