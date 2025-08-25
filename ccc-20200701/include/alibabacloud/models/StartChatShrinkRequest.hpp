// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCHATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTCHATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class StartChatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartChatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(UserList, userListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, StartChatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(UserList, userListShrink_);
    };
    StartChatShrinkRequest() = default ;
    StartChatShrinkRequest(const StartChatShrinkRequest &) = default ;
    StartChatShrinkRequest(StartChatShrinkRequest &&) = default ;
    StartChatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartChatShrinkRequest() = default ;
    StartChatShrinkRequest& operator=(const StartChatShrinkRequest &) = default ;
    StartChatShrinkRequest& operator=(StartChatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessChannelId_ != nullptr
        && this->instanceId_ != nullptr && this->token_ != nullptr && this->userListShrink_ != nullptr; };
    // accessChannelId Field Functions 
    bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
    void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
    inline string accessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
    inline StartChatShrinkRequest& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartChatShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline StartChatShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // userListShrink Field Functions 
    bool hasUserListShrink() const { return this->userListShrink_ != nullptr;};
    void deleteUserListShrink() { this->userListShrink_ = nullptr;};
    inline string userListShrink() const { DARABONBA_PTR_GET_DEFAULT(userListShrink_, "") };
    inline StartChatShrinkRequest& setUserListShrink(string userListShrink) { DARABONBA_PTR_SET_VALUE(userListShrink_, userListShrink) };


  protected:
    std::shared_ptr<string> accessChannelId_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userListShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
