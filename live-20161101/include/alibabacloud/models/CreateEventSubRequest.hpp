// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSUBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSUBREQUEST_HPP_
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
  class CreateEventSubRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSubRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSubRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateEventSubRequest() = default ;
    CreateEventSubRequest(const CreateEventSubRequest &) = default ;
    CreateEventSubRequest(CreateEventSubRequest &&) = default ;
    CreateEventSubRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSubRequest() = default ;
    CreateEventSubRequest& operator=(const CreateEventSubRequest &) = default ;
    CreateEventSubRequest& operator=(CreateEventSubRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->callbackUrl_ != nullptr && this->channelId_ != nullptr && this->events_ != nullptr && this->users_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateEventSubRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateEventSubRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> events() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline CreateEventSubRequest& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline CreateEventSubRequest& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline CreateEventSubRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateEventSubRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The application ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The callback URL. For more information about the content of the messages that are sent to the callback URL, see the Callback section in this topic.
    // 
    // This parameter is required.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The channel ID. You can call the [ListEventSub](https://help.aliyun.com/document_detail/2628135.html) operation to query the channel ID.
    // 
    // > 
    // 
    // *   This parameter is required if you specify the Users.N parameter.
    // 
    // *   If you set this parameter to \\* or do not specify this parameter, all channels are subscribed to.
    // 
    // *   Each application ID allows only one all-channel subscription.
    std::shared_ptr<string> channelId_ = nullptr;
    // Subscribe to events.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> events_ = nullptr;
    // The user whose events you want to subscribe to. If you leave this parameter empty, the events of all users in the channel are subscribed to, including the events of the streamer and viewers. Specify this parameter in the following format:
    // 
    //     Users.1=****
    //     Users.2=****
    //     ......
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
