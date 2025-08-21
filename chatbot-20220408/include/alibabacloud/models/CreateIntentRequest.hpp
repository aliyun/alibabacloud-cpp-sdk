// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateIntentRequestIntentDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class CreateIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
    };
    CreateIntentRequest() = default ;
    CreateIntentRequest(const CreateIntentRequest &) = default ;
    CreateIntentRequest(CreateIntentRequest &&) = default ;
    CreateIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntentRequest() = default ;
    CreateIntentRequest& operator=(const CreateIntentRequest &) = default ;
    CreateIntentRequest& operator=(CreateIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->intentDefinition_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateIntentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const CreateIntentRequestIntentDefinition & intentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, CreateIntentRequestIntentDefinition) };
    inline CreateIntentRequestIntentDefinition intentDefinition() { DARABONBA_PTR_GET(intentDefinition_, CreateIntentRequestIntentDefinition) };
    inline CreateIntentRequest& setIntentDefinition(const CreateIntentRequestIntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline CreateIntentRequest& setIntentDefinition(CreateIntentRequestIntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<CreateIntentRequestIntentDefinition> intentDefinition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
