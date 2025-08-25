// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartChatRequestUserList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserList, userList_);
    };
    friend void from_json(const Darabonba::Json& j, StartChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserList, userList_);
    };
    StartChatRequest() = default ;
    StartChatRequest(const StartChatRequest &) = default ;
    StartChatRequest(StartChatRequest &&) = default ;
    StartChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartChatRequest() = default ;
    StartChatRequest& operator=(const StartChatRequest &) = default ;
    StartChatRequest& operator=(StartChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessChannelId_ != nullptr
        && this->instanceId_ != nullptr && this->token_ != nullptr && this->userList_ != nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string accessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline StartChatRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartChatRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline StartChatRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userList Field Functions 
    bool hasUserList() const { return this->userList_ != nullptr;};
    void deleteUserList() { this->userList_ = nullptr;};
    inline const vector<StartChatRequestUserList> & userList() const { DARABONBA_PTR_GET_CONST(userList_, vector<StartChatRequestUserList>) };
    inline vector<StartChatRequestUserList> userList() { DARABONBA_PTR_GET(userList_, vector<StartChatRequestUserList>) };
    inline StartChatRequest& setUserList(const vector<StartChatRequestUserList> & userList) { DARABONBA_PTR_SET_VALUE(userList_, userList) };
    inline StartChatRequest& setUserList(vector<StartChatRequestUserList> && userList) { DARABONBA_PTR_SET_RVALUE(userList_, userList) };


  protected:
    std::shared_ptr<string> accessChannelId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<StartChatRequestUserList>> userList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
