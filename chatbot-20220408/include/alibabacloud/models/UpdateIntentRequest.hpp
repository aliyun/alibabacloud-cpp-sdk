// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEINTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEINTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateIntentRequestIntentDefinition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdateIntentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIntentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_TO_JSON(IntentId, intentId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIntentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentDefinition, intentDefinition_);
      DARABONBA_PTR_FROM_JSON(IntentId, intentId_);
    };
    UpdateIntentRequest() = default ;
    UpdateIntentRequest(const UpdateIntentRequest &) = default ;
    UpdateIntentRequest(UpdateIntentRequest &&) = default ;
    UpdateIntentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIntentRequest() = default ;
    UpdateIntentRequest& operator=(const UpdateIntentRequest &) = default ;
    UpdateIntentRequest& operator=(UpdateIntentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->intentDefinition_ != nullptr && this->intentId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateIntentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateIntentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentDefinition Field Functions 
    bool hasIntentDefinition() const { return this->intentDefinition_ != nullptr;};
    void deleteIntentDefinition() { this->intentDefinition_ = nullptr;};
    inline const UpdateIntentRequestIntentDefinition & intentDefinition() const { DARABONBA_PTR_GET_CONST(intentDefinition_, UpdateIntentRequestIntentDefinition) };
    inline UpdateIntentRequestIntentDefinition intentDefinition() { DARABONBA_PTR_GET(intentDefinition_, UpdateIntentRequestIntentDefinition) };
    inline UpdateIntentRequest& setIntentDefinition(const UpdateIntentRequestIntentDefinition & intentDefinition) { DARABONBA_PTR_SET_VALUE(intentDefinition_, intentDefinition) };
    inline UpdateIntentRequest& setIntentDefinition(UpdateIntentRequestIntentDefinition && intentDefinition) { DARABONBA_PTR_SET_RVALUE(intentDefinition_, intentDefinition) };


    // intentId Field Functions 
    bool hasIntentId() const { return this->intentId_ != nullptr;};
    void deleteIntentId() { this->intentId_ = nullptr;};
    inline int64_t intentId() const { DARABONBA_PTR_GET_DEFAULT(intentId_, 0L) };
    inline UpdateIntentRequest& setIntentId(int64_t intentId) { DARABONBA_PTR_SET_VALUE(intentId_, intentId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<UpdateIntentRequestIntentDefinition> intentDefinition_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> intentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
