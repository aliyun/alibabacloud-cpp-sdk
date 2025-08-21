// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateUserSayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinitionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinitionShrink_);
    };
    CreateUserSayShrinkRequest() = default ;
    CreateUserSayShrinkRequest(const CreateUserSayShrinkRequest &) = default ;
    CreateUserSayShrinkRequest(CreateUserSayShrinkRequest &&) = default ;
    CreateUserSayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserSayShrinkRequest() = default ;
    CreateUserSayShrinkRequest& operator=(const CreateUserSayShrinkRequest &) = default ;
    CreateUserSayShrinkRequest& operator=(CreateUserSayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->userSayDefinitionShrink_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateUserSayShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserSayShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userSayDefinitionShrink Field Functions 
    bool hasUserSayDefinitionShrink() const { return this->userSayDefinitionShrink_ != nullptr;};
    void deleteUserSayDefinitionShrink() { this->userSayDefinitionShrink_ = nullptr;};
    inline string userSayDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(userSayDefinitionShrink_, "") };
    inline CreateUserSayShrinkRequest& setUserSayDefinitionShrink(string userSayDefinitionShrink) { DARABONBA_PTR_SET_VALUE(userSayDefinitionShrink_, userSayDefinitionShrink) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> userSayDefinitionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
