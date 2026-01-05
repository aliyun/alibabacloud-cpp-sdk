// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBRESPONSEBODY_HPP_
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
  class ListEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Subscribers, subscribers_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Subscribers, subscribers_);
    };
    ListEventSubResponseBody() = default ;
    ListEventSubResponseBody(const ListEventSubResponseBody &) = default ;
    ListEventSubResponseBody(ListEventSubResponseBody &&) = default ;
    ListEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventSubResponseBody() = default ;
    ListEventSubResponseBody& operator=(const ListEventSubResponseBody &) = default ;
    ListEventSubResponseBody& operator=(ListEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Subscribers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Subscribers& obj) { 
        DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Events, events_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(SubId, subId_);
        DARABONBA_PTR_TO_JSON(Users, users_);
      };
      friend void from_json(const Darabonba::Json& j, Subscribers& obj) { 
        DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
        DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Events, events_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(SubId, subId_);
        DARABONBA_PTR_FROM_JSON(Users, users_);
      };
      Subscribers() = default ;
      Subscribers(const Subscribers &) = default ;
      Subscribers(Subscribers &&) = default ;
      Subscribers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Subscribers() = default ;
      Subscribers& operator=(const Subscribers &) = default ;
      Subscribers& operator=(Subscribers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->callbackUrl_ == nullptr
        && this->channelId_ == nullptr && this->createTime_ == nullptr && this->events_ == nullptr && this->modifyTime_ == nullptr && this->roles_ == nullptr
        && this->subId_ == nullptr && this->users_ == nullptr; };
      // callbackUrl Field Functions 
      bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
      void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
      inline string getCallbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
      inline Subscribers& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


      // channelId Field Functions 
      bool hasChannelId() const { return this->channelId_ != nullptr;};
      void deleteChannelId() { this->channelId_ = nullptr;};
      inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
      inline Subscribers& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Subscribers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // events Field Functions 
      bool hasEvents() const { return this->events_ != nullptr;};
      void deleteEvents() { this->events_ = nullptr;};
      inline const vector<string> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
      inline vector<string> getEvents() { DARABONBA_PTR_GET(events_, vector<string>) };
      inline Subscribers& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
      inline Subscribers& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Subscribers& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline int32_t getRoles() const { DARABONBA_PTR_GET_DEFAULT(roles_, 0) };
      inline Subscribers& setRoles(int32_t roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };


      // subId Field Functions 
      bool hasSubId() const { return this->subId_ != nullptr;};
      void deleteSubId() { this->subId_ = nullptr;};
      inline string getSubId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
      inline Subscribers& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


      // users Field Functions 
      bool hasUsers() const { return this->users_ != nullptr;};
      void deleteUsers() { this->users_ = nullptr;};
      inline const vector<string> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
      inline vector<string> getUsers() { DARABONBA_PTR_GET(users_, vector<string>) };
      inline Subscribers& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
      inline Subscribers& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


    protected:
      // The callback URL.
      shared_ptr<string> callbackUrl_ {};
      // The ID of the channel to which you subscribe.
      shared_ptr<string> channelId_ {};
      // The time when the subscription was created. The time is displayed in UTC+8. Format: yyyy-MM-dd hh:mm:ss.
      shared_ptr<string> createTime_ {};
      // The type of the event. Valid values:
      // 
      // *   ChannelEvent: channel event. For example, the channel is opened or closed.
      // *   UserEvent: user event. For example, a user joins or leaves the channel.
      shared_ptr<vector<string>> events_ {};
      // The time when the subscription was modified. The time is displayed in UTC+8. Format: yyyy-MM-dd hh:mm:ss.
      shared_ptr<string> modifyTime_ {};
      // The role of the user whose events are returned. Valid values:
      // 
      // *   1: streamer
      // *   2: viewer
      // 
      // An empty value or a value other than 1 and 2 indicates that events of all users in the channel are returned.
      // 
      // >  This parameter is deprecated. When you create a subscription, this parameter is no longer supported.
      shared_ptr<int32_t> roles_ {};
      // The ID of the event.
      shared_ptr<string> subId_ {};
      // The user whose events are returned. We recommend that you use either this parameter or Roles.
      shared_ptr<vector<string>> users_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->subscribers_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subscribers Field Functions 
    bool hasSubscribers() const { return this->subscribers_ != nullptr;};
    void deleteSubscribers() { this->subscribers_ = nullptr;};
    inline const vector<ListEventSubResponseBody::Subscribers> & getSubscribers() const { DARABONBA_PTR_GET_CONST(subscribers_, vector<ListEventSubResponseBody::Subscribers>) };
    inline vector<ListEventSubResponseBody::Subscribers> getSubscribers() { DARABONBA_PTR_GET(subscribers_, vector<ListEventSubResponseBody::Subscribers>) };
    inline ListEventSubResponseBody& setSubscribers(const vector<ListEventSubResponseBody::Subscribers> & subscribers) { DARABONBA_PTR_SET_VALUE(subscribers_, subscribers) };
    inline ListEventSubResponseBody& setSubscribers(vector<ListEventSubResponseBody::Subscribers> && subscribers) { DARABONBA_PTR_SET_RVALUE(subscribers_, subscribers) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The events.
    shared_ptr<vector<ListEventSubResponseBody::Subscribers>> subscribers_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
