// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeleteUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    DeleteUserSayRequest() = default ;
    DeleteUserSayRequest(const DeleteUserSayRequest &) = default ;
    DeleteUserSayRequest(DeleteUserSayRequest &&) = default ;
    DeleteUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserSayRequest() = default ;
    DeleteUserSayRequest& operator=(const DeleteUserSayRequest &) = default ;
    DeleteUserSayRequest& operator=(DeleteUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->intentId_ == nullptr && this->userSayId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteUserSayRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline DeleteUserSayRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t getUserSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline DeleteUserSayRequest& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    // The key of the business space. If omitted, the default business space is used. You can obtain the key from the Business Management page of your primary account.
    shared_ptr<string> agentKey_ {};
    // The instance ID of the bot.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the intent.
    // 
    // This parameter is required.
    shared_ptr<int64_t> intentId_ {};
    // The ID of the user say.
    // 
    // This parameter is required.
    shared_ptr<int64_t> userSayId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
