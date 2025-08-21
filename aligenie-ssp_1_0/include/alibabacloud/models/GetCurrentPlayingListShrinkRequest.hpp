// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCURRENTPLAYINGLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCURRENTPLAYINGLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetCurrentPlayingListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCurrentPlayingListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenQueryPlayListRequest, openQueryPlayListRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, GetCurrentPlayingListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenQueryPlayListRequest, openQueryPlayListRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    GetCurrentPlayingListShrinkRequest() = default ;
    GetCurrentPlayingListShrinkRequest(const GetCurrentPlayingListShrinkRequest &) = default ;
    GetCurrentPlayingListShrinkRequest(GetCurrentPlayingListShrinkRequest &&) = default ;
    GetCurrentPlayingListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCurrentPlayingListShrinkRequest() = default ;
    GetCurrentPlayingListShrinkRequest& operator=(const GetCurrentPlayingListShrinkRequest &) = default ;
    GetCurrentPlayingListShrinkRequest& operator=(GetCurrentPlayingListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openQueryPlayListRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline GetCurrentPlayingListShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openQueryPlayListRequestShrink Field Functions 
    bool hasOpenQueryPlayListRequestShrink() const { return this->openQueryPlayListRequestShrink_ != nullptr;};
    void deleteOpenQueryPlayListRequestShrink() { this->openQueryPlayListRequestShrink_ = nullptr;};
    inline string openQueryPlayListRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openQueryPlayListRequestShrink_, "") };
    inline GetCurrentPlayingListShrinkRequest& setOpenQueryPlayListRequestShrink(string openQueryPlayListRequestShrink) { DARABONBA_PTR_SET_VALUE(openQueryPlayListRequestShrink_, openQueryPlayListRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline GetCurrentPlayingListShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openQueryPlayListRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
