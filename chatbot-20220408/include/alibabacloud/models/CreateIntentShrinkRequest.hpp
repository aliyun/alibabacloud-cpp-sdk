// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateIntentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinitionShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinitionShrink_);
    };
    CreateIntentShrinkRequest() = default ;
    CreateIntentShrinkRequest(const CreateIntentShrinkRequest &) = default ;
    CreateIntentShrinkRequest(CreateIntentShrinkRequest &&) = default ;
    CreateIntentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntentShrinkRequest() = default ;
    CreateIntentShrinkRequest& operator=(const CreateIntentShrinkRequest &) = default ;
    CreateIntentShrinkRequest& operator=(CreateIntentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->intentDefinitionShrink_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateIntentShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIntentShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinitionShrink Field Functions 
    bool hasIntentDefinitionShrink() const { return this->intentDefinitionShrink_ != nullptr;};
    void deleteIntentDefinitionShrink() { this->intentDefinitionShrink_ = nullptr;};
    inline string intentDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(intentDefinitionShrink_, "") };
    inline CreateIntentShrinkRequest& setIntentDefinitionShrink(string intentDefinitionShrink) { DARABONBA_PTR_SET_VALUE(intentDefinitionShrink_, intentDefinitionShrink) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> intentDefinitionShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
