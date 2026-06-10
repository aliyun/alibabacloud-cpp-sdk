// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateIntentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinitionShrink_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinitionShrink_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
    };
    UpdateIntentShrinkRequest() = default ;
    UpdateIntentShrinkRequest(const UpdateIntentShrinkRequest &) = default ;
    UpdateIntentShrinkRequest(UpdateIntentShrinkRequest &&) = default ;
    UpdateIntentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntentShrinkRequest() = default ;
    UpdateIntentShrinkRequest& operator=(const UpdateIntentShrinkRequest &) = default ;
    UpdateIntentShrinkRequest& operator=(UpdateIntentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->intentDefinitionShrink_ == nullptr && this->intentId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateIntentShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateIntentShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinitionShrink Field Functions 
    bool hasIntentDefinitionShrink() const { return this->intentDefinitionShrink_ != nullptr;};
    void deleteIntentDefinitionShrink() { this->intentDefinitionShrink_ = nullptr;};
    inline string getIntentDefinitionShrink() const { DARABONBA_PTR_GET_DEFAULT(intentDefinitionShrink_, "") };
    inline UpdateIntentShrinkRequest& setIntentDefinitionShrink(string intentDefinitionShrink) { DARABONBA_PTR_SET_VALUE(intentDefinitionShrink_, intentDefinitionShrink) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t getIntentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline UpdateIntentShrinkRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


  protected:
    // The key for the business space. If you omit this parameter, the system uses the default business space. You can find this key on the Business Management page of your primary account.
    shared_ptr<string> agentKey_ {};
    // The ID of the chatbot instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The intent definition object.
    shared_ptr<string> intentDefinitionShrink_ {};
    // The ID of the intent.
    // 
    // This parameter is required.
    shared_ptr<int64_t> intentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
