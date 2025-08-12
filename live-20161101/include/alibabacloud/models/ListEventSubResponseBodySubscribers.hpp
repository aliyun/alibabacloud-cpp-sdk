// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSUBRESPONSEBODYSUBSCRIBERS_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSUBRESPONSEBODYSUBSCRIBERS_HPP_
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
  class ListEventSubResponseBodySubscribers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventSubResponseBodySubscribers& obj) { 
      DARABONBA_PTR_TO_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Events, events_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Roles, roles_);
      DARABONBA_PTR_TO_JSON(SubId, subId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventSubResponseBodySubscribers& obj) { 
      DARABONBA_PTR_FROM_JSON(CallbackUrl, callbackUrl_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Events, events_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Roles, roles_);
      DARABONBA_PTR_FROM_JSON(SubId, subId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListEventSubResponseBodySubscribers() = default ;
    ListEventSubResponseBodySubscribers(const ListEventSubResponseBodySubscribers &) = default ;
    ListEventSubResponseBodySubscribers(ListEventSubResponseBodySubscribers &&) = default ;
    ListEventSubResponseBodySubscribers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventSubResponseBodySubscribers() = default ;
    ListEventSubResponseBodySubscribers& operator=(const ListEventSubResponseBodySubscribers &) = default ;
    ListEventSubResponseBodySubscribers& operator=(ListEventSubResponseBodySubscribers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->callbackUrl_ != nullptr
        && this->channelId_ != nullptr && this->createTime_ != nullptr && this->events_ != nullptr && this->modifyTime_ != nullptr && this->roles_ != nullptr
        && this->subId_ != nullptr && this->users_ != nullptr; };
    // callbackUrl Field Functions 
    bool hasCallbackUrl() const { return this->callbackUrl_ != nullptr;};
    void deleteCallbackUrl() { this->callbackUrl_ = nullptr;};
    inline string callbackUrl() const { DARABONBA_PTR_GET_DEFAULT(callbackUrl_, "") };
    inline ListEventSubResponseBodySubscribers& setCallbackUrl(string callbackUrl) { DARABONBA_PTR_SET_VALUE(callbackUrl_, callbackUrl) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline ListEventSubResponseBodySubscribers& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListEventSubResponseBodySubscribers& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<string> & events() const { DARABONBA_PTR_GET_CONST(events_, vector<string>) };
    inline vector<string> events() { DARABONBA_PTR_GET(events_, vector<string>) };
    inline ListEventSubResponseBodySubscribers& setEvents(const vector<string> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListEventSubResponseBodySubscribers& setEvents(vector<string> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListEventSubResponseBodySubscribers& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // roles Field Functions 
    bool hasRoles() const { return this->roles_ != nullptr;};
    void deleteRoles() { this->roles_ = nullptr;};
    inline int32_t roles() const { DARABONBA_PTR_GET_DEFAULT(roles_, 0) };
    inline ListEventSubResponseBodySubscribers& setRoles(int32_t roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };


    // subId Field Functions 
    bool hasSubId() const { return this->subId_ != nullptr;};
    void deleteSubId() { this->subId_ = nullptr;};
    inline string subId() const { DARABONBA_PTR_GET_DEFAULT(subId_, "") };
    inline ListEventSubResponseBodySubscribers& setSubId(string subId) { DARABONBA_PTR_SET_VALUE(subId_, subId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<string> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<string>) };
    inline vector<string> users() { DARABONBA_PTR_GET(users_, vector<string>) };
    inline ListEventSubResponseBodySubscribers& setUsers(const vector<string> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListEventSubResponseBodySubscribers& setUsers(vector<string> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The callback URL.
    std::shared_ptr<string> callbackUrl_ = nullptr;
    // The ID of the channel to which you subscribe.
    std::shared_ptr<string> channelId_ = nullptr;
    // The time when the subscription was created. The time is displayed in UTC+8. Format: yyyy-MM-dd hh:mm:ss.
    std::shared_ptr<string> createTime_ = nullptr;
    // The type of the event. Valid values:
    // 
    // *   ChannelEvent: channel event. For example, the channel is opened or closed.
    // *   UserEvent: user event. For example, a user joins or leaves the channel.
    std::shared_ptr<vector<string>> events_ = nullptr;
    // The time when the subscription was modified. The time is displayed in UTC+8. Format: yyyy-MM-dd hh:mm:ss.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The role of the user whose events are returned. Valid values:
    // 
    // *   1: streamer
    // *   2: viewer
    // 
    // An empty value or a value other than 1 and 2 indicates that events of all users in the channel are returned.
    // 
    // >  This parameter is deprecated. When you create a subscription, this parameter is no longer supported.
    std::shared_ptr<int32_t> roles_ = nullptr;
    // The ID of the event.
    std::shared_ptr<string> subId_ = nullptr;
    // The user whose events are returned. We recommend that you use either this parameter or Roles.
    std::shared_ptr<vector<string>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
