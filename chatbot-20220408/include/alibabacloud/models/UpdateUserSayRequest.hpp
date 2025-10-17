// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERSAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERSAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateUserSayRequestUserSayDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateUserSayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserSayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(UserSayDefinition, userSayDefinition_);
      DARABONBA_PTR_TO_JSON(UserSayId, userSayId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserSayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(UserSayDefinition, userSayDefinition_);
      DARABONBA_PTR_FROM_JSON(UserSayId, userSayId_);
    };
    UpdateUserSayRequest() = default ;
    UpdateUserSayRequest(const UpdateUserSayRequest &) = default ;
    UpdateUserSayRequest(UpdateUserSayRequest &&) = default ;
    UpdateUserSayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserSayRequest() = default ;
    UpdateUserSayRequest& operator=(const UpdateUserSayRequest &) = default ;
    UpdateUserSayRequest& operator=(UpdateUserSayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->userSayDefinition_ == nullptr && return this->userSayId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateUserSayRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateUserSayRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // userSayDefinition Field Functions 
    bool hasUserSayDefinition() const { return this->userSayDefinition_ != nullptr;};
    void deleteUserSayDefinition() { this->userSayDefinition_ = nullptr;};
    inline const UpdateUserSayRequestUserSayDefinition & userSayDefinition() const { DARABONBA_PTR_GET_CONST(userSayDefinition_, UpdateUserSayRequestUserSayDefinition) };
    inline UpdateUserSayRequestUserSayDefinition userSayDefinition() { DARABONBA_PTR_GET(userSayDefinition_, UpdateUserSayRequestUserSayDefinition) };
    inline UpdateUserSayRequest& setUserSayDefinition(const UpdateUserSayRequestUserSayDefinition & userSayDefinition) { DARABONBA_PTR_SET_VALUE(userSayDefinition_, userSayDefinition) };
    inline UpdateUserSayRequest& setUserSayDefinition(UpdateUserSayRequestUserSayDefinition && userSayDefinition) { DARABONBA_PTR_SET_RVALUE(userSayDefinition_, userSayDefinition) };


    // userSayId Field Functions 
    bool hasUserSayId() const { return this->userSayId_ != nullptr;};
    void deleteUserSayId() { this->userSayId_ = nullptr;};
    inline int64_t userSayId() const { DARABONBA_PTR_GET_DEFAULT(userSayId_, 0L) };
    inline UpdateUserSayRequest& setUserSayId(int64_t userSayId) { DARABONBA_PTR_SET_VALUE(userSayId_, userSayId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<UpdateUserSayRequestUserSayDefinition> userSayDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> userSayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
