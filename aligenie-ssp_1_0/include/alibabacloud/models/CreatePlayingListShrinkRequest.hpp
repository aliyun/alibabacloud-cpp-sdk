// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_TO_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequestShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfoShrink_);
      DARABONBA_PTR_FROM_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequestShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    CreatePlayingListShrinkRequest() = default ;
    CreatePlayingListShrinkRequest(const CreatePlayingListShrinkRequest &) = default ;
    CreatePlayingListShrinkRequest(CreatePlayingListShrinkRequest &&) = default ;
    CreatePlayingListShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListShrinkRequest() = default ;
    CreatePlayingListShrinkRequest& operator=(const CreatePlayingListShrinkRequest &) = default ;
    CreatePlayingListShrinkRequest& operator=(CreatePlayingListShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceInfoShrink_ != nullptr
        && this->openCreatePlayingListRequestShrink_ != nullptr && this->userInfoShrink_ != nullptr; };
    // deviceInfoShrink Field Functions 
    bool hasDeviceInfoShrink() const { return this->deviceInfoShrink_ != nullptr;};
    void deleteDeviceInfoShrink() { this->deviceInfoShrink_ = nullptr;};
    inline string deviceInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(deviceInfoShrink_, "") };
    inline CreatePlayingListShrinkRequest& setDeviceInfoShrink(string deviceInfoShrink) { DARABONBA_PTR_SET_VALUE(deviceInfoShrink_, deviceInfoShrink) };


    // openCreatePlayingListRequestShrink Field Functions 
    bool hasOpenCreatePlayingListRequestShrink() const { return this->openCreatePlayingListRequestShrink_ != nullptr;};
    void deleteOpenCreatePlayingListRequestShrink() { this->openCreatePlayingListRequestShrink_ = nullptr;};
    inline string openCreatePlayingListRequestShrink() const { DARABONBA_PTR_GET_DEFAULT(openCreatePlayingListRequestShrink_, "") };
    inline CreatePlayingListShrinkRequest& setOpenCreatePlayingListRequestShrink(string openCreatePlayingListRequestShrink) { DARABONBA_PTR_SET_VALUE(openCreatePlayingListRequestShrink_, openCreatePlayingListRequestShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline CreatePlayingListShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> deviceInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> openCreatePlayingListRequestShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
