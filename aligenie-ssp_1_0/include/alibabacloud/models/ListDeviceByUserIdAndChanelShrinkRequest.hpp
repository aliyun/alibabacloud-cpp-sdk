// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdAndChanelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdAndChanelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelInfo, channelInfoShrink_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfoShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdAndChanelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelInfo, channelInfoShrink_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfoShrink_);
    };
    ListDeviceByUserIdAndChanelShrinkRequest() = default ;
    ListDeviceByUserIdAndChanelShrinkRequest(const ListDeviceByUserIdAndChanelShrinkRequest &) = default ;
    ListDeviceByUserIdAndChanelShrinkRequest(ListDeviceByUserIdAndChanelShrinkRequest &&) = default ;
    ListDeviceByUserIdAndChanelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdAndChanelShrinkRequest() = default ;
    ListDeviceByUserIdAndChanelShrinkRequest& operator=(const ListDeviceByUserIdAndChanelShrinkRequest &) = default ;
    ListDeviceByUserIdAndChanelShrinkRequest& operator=(ListDeviceByUserIdAndChanelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelInfoShrink_ != nullptr
        && this->userInfoShrink_ != nullptr; };
    // channelInfoShrink Field Functions 
    bool hasChannelInfoShrink() const { return this->channelInfoShrink_ != nullptr;};
    void deleteChannelInfoShrink() { this->channelInfoShrink_ = nullptr;};
    inline string channelInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(channelInfoShrink_, "") };
    inline ListDeviceByUserIdAndChanelShrinkRequest& setChannelInfoShrink(string channelInfoShrink) { DARABONBA_PTR_SET_VALUE(channelInfoShrink_, channelInfoShrink) };


    // userInfoShrink Field Functions 
    bool hasUserInfoShrink() const { return this->userInfoShrink_ != nullptr;};
    void deleteUserInfoShrink() { this->userInfoShrink_ = nullptr;};
    inline string userInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(userInfoShrink_, "") };
    inline ListDeviceByUserIdAndChanelShrinkRequest& setUserInfoShrink(string userInfoShrink) { DARABONBA_PTR_SET_VALUE(userInfoShrink_, userInfoShrink) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> channelInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userInfoShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
