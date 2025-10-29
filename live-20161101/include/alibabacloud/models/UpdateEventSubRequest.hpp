// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSUBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateEventSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(SubscribeId, subscribeId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(SubscribeId, subscribeId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    UpdateEventSubRequest() = default ;
    UpdateEventSubRequest(const UpdateEventSubRequest &) = default ;
    UpdateEventSubRequest(UpdateEventSubRequest &&) = default ;
    UpdateEventSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventSubRequest() = default ;
    UpdateEventSubRequest& operator=(const UpdateEventSubRequest &) = default ;
    UpdateEventSubRequest& operator=(UpdateEventSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->callbackUrl_ == nullptr && return this->channelId_ == nullptr && return this->events_ == nullptr && return this->subscribeId_ == nullptr && return this->users_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline UpdateEventSubRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateEventSubRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> events() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline UpdateEventSubRequest& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline UpdateEventSubRequest& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // subscribeId Field Functions 
    bool hasSubscribeId() const { return this->subscribeId_ != nullptr;};
    void deleteSubscribeId() { this->subscribeId_ = nullptr;};
    inline string subscribeId() const { DARABONBA_PTR_GET_DEFAULT(subscribeId_, "") };
    inline UpdateEventSubRequest& setSubscribeId(string subscribeId) { DARABONBA_PTR_SET_VALUE(subscribeId_, subscribeId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline UpdateEventSubRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline UpdateEventSubRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The callback URL. For more information about the callback content, see CreateEventSub.
    // 
    // This parameter is required.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The channel ID. You can call the [ListEventSub](https://help.aliyun.com/document_detail/2848210.html) operation to query the channel ID.
    // 
    // > 
    // 
    // *   This parameter is required if you specify the Users.N parameter.
    // 
    // *   If you set this parameter to \\* or do not specify this parameter, all channels are subscribed to.
    // 
    // *   You can create up to 20 subscriptions for each application ID.
    std::shared_ptr<string> channelId_ = nullptr;
    // The type of the events to which you want to subscribe.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> events_ = nullptr;
    // The subscription ID. You can obtain the ID from the response to the [CreateEventSub](https://help.aliyun.com/document_detail/2848209.html) operation.
    // 
    // This parameter is required.
    std::shared_ptr<string> subscribeId_ = nullptr;
    // The user whose events you want to subscribe to.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
