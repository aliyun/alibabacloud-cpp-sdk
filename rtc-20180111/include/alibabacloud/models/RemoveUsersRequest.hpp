// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/RemoveUsersRequestUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class RemoveUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    RemoveUsersRequest() = default ;
    RemoveUsersRequest(const RemoveUsersRequest &) = default ;
    RemoveUsersRequest(RemoveUsersRequest &&) = default ;
    RemoveUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUsersRequest() = default ;
    RemoveUsersRequest& operator=(const RemoveUsersRequest &) = default ;
    RemoveUsersRequest& operator=(RemoveUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->channelId_ == nullptr && return this->users_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline RemoveUsersRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline RemoveUsersRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<RemoveUsersRequestUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<RemoveUsersRequestUsers>) };
    inline vector<RemoveUsersRequestUsers> users() { DARABONBA_PTR_GET(users_, vector<RemoveUsersRequestUsers>) };
    inline RemoveUsersRequest& setUsers(const vector<RemoveUsersRequestUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline RemoveUsersRequest& setUsers(vector<RemoveUsersRequestUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> channelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<RemoveUsersRequestUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
