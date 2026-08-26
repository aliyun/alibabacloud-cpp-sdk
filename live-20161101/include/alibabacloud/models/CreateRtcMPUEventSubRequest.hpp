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
        && this->callbackUrl_ == nullptr && this->channelIds_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateRtcMPUEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateRtcMPUEventSubRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelIds Field Functions 
    bool hasChannelIds() const { return this->channelIds_ != nullptr;};
    void deleteChannelIds() { this->channelIds_ = nullptr;};
    inline string getChannelIds() const { DARABONBA_PTR_GET_DEFAULT(channelIds_, "") };
    inline CreateRtcMPUEventSubRequest& setChannelIds(string channelIds) { DARABONBA_PTR_SET_VALUE(channelIds_, channelIds) };


  protected:
    // The ID of the application to subscribe to. You can view your application IDs by navigating to **ApsaraVideo Live > Live+ > ApsaraVideo Real-time Communication > Application Management**. If no application exists, create one by clicking **Create Application**.
    // > The application ID consists of uppercase and lowercase letters, digits, underscores, and hyphens (-), with a maximum of 64 characters.
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The callback URL. For the URL format, refer to the callback content specifications below.
    // > The callback URL protocol must be HTTP or HTTPS. The URL can contain only the following characters: a-z, A-Z, 0-9, -, _, ?, %, =, #, ., /, and +. The URL cannot exceed 2083 characters.
    // 
    // This parameter is required.
    shared_ptr<string> callbackUrl_ {};
    // The channel IDs of the stream mixing tasks for which you want to receive callbacks. You can specify multiple channel IDs separated by commas (,).
    // >- If you leave this parameter empty, callbacks for all stream mixing and relaying tasks under the specified AppId are received by default.
    // - When specifying multiple channel IDs, do not include duplicates. You can specify up to 20 channel IDs at a time.
    // - Each channel ID consists of uppercase and lowercase letters, digits, underscores, and hyphens (-), with a maximum of 64 characters.
    shared_ptr<string> channelIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
