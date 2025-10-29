// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERTCMPUEVENTSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERTCMPUEVENTSUBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateRtcMPUEventSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRtcMPUEventSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChannelIds, channelIds_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRtcMPUEventSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChannelIds, channelIds_);
    };
    CreateRtcMPUEventSubRequest() = default ;
    CreateRtcMPUEventSubRequest(const CreateRtcMPUEventSubRequest &) = default ;
    CreateRtcMPUEventSubRequest(CreateRtcMPUEventSubRequest &&) = default ;
    CreateRtcMPUEventSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRtcMPUEventSubRequest() = default ;
    CreateRtcMPUEventSubRequest& operator=(const CreateRtcMPUEventSubRequest &) = default ;
    CreateRtcMPUEventSubRequest& operator=(CreateRtcMPUEventSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callbackUrl_ == nullptr && return this->channelIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateRtcMPUEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateRtcMPUEventSubRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelIds Field Functions 
    bool hasChannelIds() const { return this->channelIds_ != nullptr;};
    void deleteChannelIds() { this->channelIds_ = nullptr;};
    inline string channelIds() const { DARABONBA_PTR_GET_DEFAULT(channelIds_, "") };
    inline CreateRtcMPUEventSubRequest& setChannelIds(string channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };


  protected:
    // The ID of the application.
    // 
    // > The ID can be up to 64 characters in length and can contain letters, digits, underscores, and hyphens (-).
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The callback URL.
    // 
    // > The callback URL can be up to 2,083 characters in length. You can use headers such as HTTP and HTTPS in callback URLs. The URL can contain letters, digits, and the following special characters: - _ ? % = # . / +
    // 
    // This parameter is required.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The ID of the channel to which you want to send mixed-stream relay event callbacks. Separate multiple channel IDs with commas (,).
    // 
    // > 
    // 
    // *   If you leave this parameter empty, you are subscribed to mixed-stream relay events of all channels in the application.
    // 
    // *   You cannot specify duplicate channel IDs. You can specify up to 20 channel IDs in each call.
    // 
    // *   The ID can be up to 64 characters in length and contain letters, digits, underscores (_), and hyphens (-).
    std::shared_ptr<string> channelIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
