// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELGFSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATELGFSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateLgfShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLgfShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LgfDefinition, lgfDefinitionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLgfShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LgfDefinition, lgfDefinitionShrink_);
    };
    CreateLgfShrinkRequest() = default ;
    CreateLgfShrinkRequest(const CreateLgfShrinkRequest &) = default ;
    CreateLgfShrinkRequest(CreateLgfShrinkRequest &&) = default ;
    CreateLgfShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLgfShrinkRequest() = default ;
    CreateLgfShrinkRequest& operator=(const CreateLgfShrinkRequest &) = default ;
    CreateLgfShrinkRequest& operator=(CreateLgfShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->instanceId_ == nullptr && return this->lgfDefinitionShrink_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateLgfShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateLgfShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lgfDefinitionShrink Field Functions 
    bool hasLgfDefinitionShrink() const { return this->lgfDefinitionShrink_ != nullptr;};
    void deleteLgfDefinitionShrink() { this->lgfDefinitionShrink_ = nullptr;};
    inline string lgfDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(lgfDefinitionShrink_, "") };
    inline CreateLgfShrinkRequest& setLgfDefinitionShrink(string lgfDefinitionShrink) { DARABONBA_PTR_SET_VALUE(lgfDefinitionShrink_, lgfDefinitionShrink) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> lgfDefinitionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
