// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateUserSayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserSayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    UpdateUserSayShrinkRequest() = default ;
    UpdateUserSayShrinkRequest(const UpdateUserSayShrinkRequest &) = default ;
    UpdateUserSayShrinkRequest(UpdateUserSayShrinkRequest &&) = default ;
    UpdateUserSayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserSayShrinkRequest() = default ;
    UpdateUserSayShrinkRequest& operator=(const UpdateUserSayShrinkRequest &) = default ;
    UpdateUserSayShrinkRequest& operator=(UpdateUserSayShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->userSayDefinitionShrink_ == nullptr && return this->userSayId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateUserSayShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateUserSayShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userSayDefinitionShrink Field Functions 
    bool hasUserSayDefinitionShrink() const { return this->userSayDefinitionShrink_ != nullptr;};
    void deleteUserSayDefinitionShrink() { this->userSayDefinitionShrink_ = nullptr;};
    inline string userSayDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(userSayDefinitionShrink_, "") };
    inline UpdateUserSayShrinkRequest& setUserSayDefinitionShrink(string userSayDefinitionShrink) { DARABONBA_PTR_SET_VALUE(userSayDefinitionShrink_, userSayDefinitionShrink) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline UpdateUserSayShrinkRequest& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> userSayDefinitionShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
