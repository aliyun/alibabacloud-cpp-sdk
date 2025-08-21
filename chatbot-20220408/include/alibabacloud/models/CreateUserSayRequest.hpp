// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateUserSayRequestUserSayDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinition_);
    };
    CreateUserSayRequest() = default ;
    CreateUserSayRequest(const CreateUserSayRequest &) = default ;
    CreateUserSayRequest(CreateUserSayRequest &&) = default ;
    CreateUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserSayRequest() = default ;
    CreateUserSayRequest& operator=(const CreateUserSayRequest &) = default ;
    CreateUserSayRequest& operator=(CreateUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->userSayDefinition_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateUserSayRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userSayDefinition Field Functions 
    bool hasUserSayDefinition() const { return this->userSayDefinition_ != nullptr;};
    void deleteUserSayDefinition() { this->userSayDefinition_ = nullptr;};
    inline const CreateUserSayRequestUserSayDefinition & userSayDefinition() const { DARABONBA_PTR_GET_CONST(userSayDefinition_, CreateUserSayRequestUserSayDefinition) };
    inline CreateUserSayRequestUserSayDefinition userSayDefinition() { DARABONBA_PTR_GET(userSayDefinition_, CreateUserSayRequestUserSayDefinition) };
    inline CreateUserSayRequest& setUserSayDefinition(const CreateUserSayRequestUserSayDefinition & userSayDefinition) { DARABONBA_PTR_SET_VALUE(userSayDefinition_, userSayDefinition) };
    inline CreateUserSayRequest& setUserSayDefinition(CreateUserSayRequestUserSayDefinition && userSayDefinition) { DARABONBA_PTR_SET_RVALUE(userSayDefinition_, userSayDefinition) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<CreateUserSayRequestUserSayDefinition> userSayDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
