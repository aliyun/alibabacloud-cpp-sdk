// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDeviceByUserIdAndChanelRequestChannelInfo.hpp>
#include <alibabacloud/models/ListDeviceByUserIdAndChanelRequestUserInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdAndChanelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdAndChanelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelInfo, channelInfo_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdAndChanelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelInfo, channelInfo_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    ListDeviceByUserIdAndChanelRequest() = default ;
    ListDeviceByUserIdAndChanelRequest(const ListDeviceByUserIdAndChanelRequest &) = default ;
    ListDeviceByUserIdAndChanelRequest(ListDeviceByUserIdAndChanelRequest &&) = default ;
    ListDeviceByUserIdAndChanelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdAndChanelRequest() = default ;
    ListDeviceByUserIdAndChanelRequest& operator=(const ListDeviceByUserIdAndChanelRequest &) = default ;
    ListDeviceByUserIdAndChanelRequest& operator=(ListDeviceByUserIdAndChanelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->channelInfo_ != nullptr
        && this->userInfo_ != nullptr; };
    // channelInfo Field Functions 
    bool hasChannelInfo() const { return this->channelInfo_ != nullptr;};
    void deleteChannelInfo() { this->channelInfo_ = nullptr;};
    inline const ListDeviceByUserIdAndChanelRequestChannelInfo & channelInfo() const { DARABONBA_PTR_GET_CONST(channelInfo_, ListDeviceByUserIdAndChanelRequestChannelInfo) };
    inline ListDeviceByUserIdAndChanelRequestChannelInfo channelInfo() { DARABONBA_PTR_GET(channelInfo_, ListDeviceByUserIdAndChanelRequestChannelInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setChannelInfo(const ListDeviceByUserIdAndChanelRequestChannelInfo & channelInfo) { DARABONBA_PTR_SET_VALUE(channelInfo_, channelInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setChannelInfo(ListDeviceByUserIdAndChanelRequestChannelInfo && channelInfo) { DARABONBA_PTR_SET_RVALUE(channelInfo_, channelInfo) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const ListDeviceByUserIdAndChanelRequestUserInfo & userInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, ListDeviceByUserIdAndChanelRequestUserInfo) };
    inline ListDeviceByUserIdAndChanelRequestUserInfo userInfo() { DARABONBA_PTR_GET(userInfo_, ListDeviceByUserIdAndChanelRequestUserInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setUserInfo(const ListDeviceByUserIdAndChanelRequestUserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline ListDeviceByUserIdAndChanelRequest& setUserInfo(ListDeviceByUserIdAndChanelRequestUserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    std::shared_ptr<ListDeviceByUserIdAndChanelRequestChannelInfo> channelInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ListDeviceByUserIdAndChanelRequestUserInfo> userInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
