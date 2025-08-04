// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSUBSCRIBEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSUBSCRIBEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateEventSubscribeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventSubscribeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(NeedCallbackAuth, needCallbackAuth_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventSubscribeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(NeedCallbackAuth, needCallbackAuth_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    CreateEventSubscribeRequest() = default ;
    CreateEventSubscribeRequest(const CreateEventSubscribeRequest &) = default ;
    CreateEventSubscribeRequest(CreateEventSubscribeRequest &&) = default ;
    CreateEventSubscribeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventSubscribeRequest() = default ;
    CreateEventSubscribeRequest& operator=(const CreateEventSubscribeRequest &) = default ;
    CreateEventSubscribeRequest& operator=(CreateEventSubscribeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->callbackUrl_ != nullptr && this->channelId_ != nullptr && this->clientToken_ != nullptr && this->events_ != nullptr && this->needCallbackAuth_ != nullptr
        && this->ownerId_ != nullptr && this->role_ != nullptr && this->users_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateEventSubscribeRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline CreateEventSubscribeRequest& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline CreateEventSubscribeRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateEventSubscribeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> events() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline CreateEventSubscribeRequest& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline CreateEventSubscribeRequest& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // needCallbackAuth Field Functions 
    bool hasNeedCallbackAuth() const { return this->needCallbackAuth_ != nullptr;};
    void deleteNeedCallbackAuth() { this->needCallbackAuth_ = nullptr;};
    inline bool needCallbackAuth() const { DARABONBA_PTR_GET_DEFAULT(needCallbackAuth_, false) };
    inline CreateEventSubscribeRequest& setNeedCallbackAuth(bool needCallbackAuth) { DARABONBA_PTR_SET_VALUE(needCallbackAuth_, needCallbackAuth) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateEventSubscribeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline int64_t role() const { DARABONBA_PTR_GET_DEFAULT(role_, 0L) };
    inline CreateEventSubscribeRequest& setRole(int64_t role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline CreateEventSubscribeRequest& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline CreateEventSubscribeRequest& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<string>> events_ = nullptr;
    std::shared_ptr<bool> needCallbackAuth_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<int64_t> role_ = nullptr;
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
