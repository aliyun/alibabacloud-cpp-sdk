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
    virtual bool empty() const override { return this->appId_ == nullptr
        && this->callbackUrl_ == nullptr && this->channelId_ == nullptr && this->events_ == nullptr && this->users_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateEventSubRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateEventSubRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateEventSubRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> getEvents() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline CreateEventSubRequest& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline CreateEventSubRequest& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline CreateEventSubRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateEventSubRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The ID of the application to subscribe to. You can view your application IDs by navigating to **ApsaraVideo Live > Live+ > ApsaraVideo Real-time Communication > Application Management**. If no application exists, create one by clicking [Create Application].
    // 
    // This parameter is required.
    shared_ptr<string> appId_ {};
    // The callback URL. For the callback content, see the callback content examples below.
    // 
    // This parameter is required.
    shared_ptr<string> callbackUrl_ {};
    // The ID of the channel to subscribe to. You can call the [ListEventSub](https://help.aliyun.com/document_detail/2848210.html) operation to query the subscribed channel IDs.
    // 
    // >- If the Users.N parameter is not empty, this parameter is required.
    // >- If ChannelId is set to \\* or left empty, all channels are subscribed. Each AppId allows only one all-channel subscription.
    // >- Each AppId allows a maximum of 20 subscriptions at the same time.
    shared_ptr<string> channelId_ {};
    // The subscription events.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> events_ {};
    // The users whose messages you want to subscribe to. If this parameter is empty, all users in the channel (including streamers and viewers) are subscribed. Format:
    // 
    // ```
    // Users.1=****
    // Users.2=****
    // ......
    // ```
    shared_ptr<vector<string>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
